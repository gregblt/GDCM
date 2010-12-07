/*=========================================================================

  Program: GDCM (Grassroots DICOM). A DICOM library
  Module:  $URL$

  Copyright (c) 2006-2010 Mathieu Malaterre
  All rights reserved.
  See Copyright.txt or http://gdcm.sourceforge.net/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#include "gdcmSplitMosaicFilter.h"
#include "gdcmTesting.h"
#include "gdcmSystem.h"
#include "gdcmImageReader.h"

static bool reorganize_mosaic_invert(unsigned short *input, const unsigned int *inputdims, unsigned int square,
  const unsigned int *outputdims, const unsigned short *output )
{
  for(unsigned x = 0; x < outputdims[0]; ++x)
    {
    for(unsigned y = 0; y < outputdims[1]; ++y)
      {
      for(unsigned z = 0; z < outputdims[2]; ++z)
        {
        size_t outputidx = x + y*outputdims[0] + z*outputdims[0]*outputdims[1];
        size_t inputidx = (x + (z%square)*outputdims[0]) +
          (y + (z/square)*outputdims[0])*inputdims[0];
        input[ inputidx ] = output[ outputidx ];
        }
      }
    }
  return true;
}

int TestSplitMosaicFilter(int, char *[])
{
  gdcm::SplitMosaicFilter s;

  const char *extradataroot = gdcm::Testing::GetDataExtraRoot();
  if( !extradataroot )
    {
    return 1;
    }
  if( !gdcm::System::FileIsDirectory(extradataroot) )
    {
    std::cerr << "No such directory: " << extradataroot <<  std::endl;
    return 1;
    }

  std::string filename = extradataroot;
  filename += "/gdcmSampleData/images_of_interest/MR-sonata-3D-as-Tile.dcm";

  // std::cout << filename << std::endl;
  if( !gdcm::System::FileExists(filename.c_str()) )
    {
    return 1;
    }

  gdcm::ImageReader reader;
  reader.SetFileName( filename.c_str() );
  if( !reader.Read() )
    {
    std::cerr << "could not read: " << filename << std::endl;
    return 1;
    }

  gdcm::SplitMosaicFilter filter;
  filter.SetImage( reader.GetImage() );
  filter.SetFile( reader.GetFile() );
  bool b = filter.Split();
  if( !b )
    {
    std::cerr << "Could not split << " << filename << std::endl;
    return 1;
    }

  const gdcm::Image &image = filter.GetImage();

  unsigned long l = image.GetBufferLength();
  std::vector<char> buf;
  buf.resize(l);
  image.GetBuffer( &buf[0] );

  std::vector<char> outbuf;
  outbuf.resize(l);

  unsigned int inputdims[3] = { 384, 384, 1 };
  reorganize_mosaic_invert((unsigned short *)&outbuf[0],  inputdims,
    6, image.GetDimensions(), (const unsigned short*)&buf[0] );

  std::ofstream o( "/tmp/debug" );
  o.write( &outbuf[0], l );
  o.close();

  char digest[33];
  gdcm::Testing::ComputeMD5(&outbuf[0], l, digest);

  // be96c01db8a0ec0753bd43f6a985345c
  std::cout << digest << std::endl;

  return 0;
}