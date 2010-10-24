/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

#ifndef GDCMPRESENTATIONDATAVALUE_H
#define GDCMPRESENTATIONDATAVALUE_H

#include "gdcmTypes.h"

namespace gdcm
{
class DataSet;
namespace network
{

/**
 Table 9-23
PRESENTATION-DATA-VALUE ITEM FIELDS
 */
class GDCM_EXPORT PresentationDataValue
{
public:
  PresentationDataValue();
  std::istream &Read(std::istream &is);
  std::istream &ReadInto(std::istream &is, std::ostream &os);

  const std::ostream &Write(std::ostream &os) const;

  /// \internal Compute Size
  size_t Size() const;

  /// Set DataSet. Write DataSet in implicit. 
  /// \warning size of dataset should be below maxpdusize
  void SetDataSet(const DataSet & ds);
  void SetBlob(const std::string & partialblob);
  const std::string &GetBlob() const;

  uint8_t GetPresentationContextID() const { return PresentationContextID; }
  void SetPresentationContextID(uint8_t id) {
    PresentationContextID = id;
  }
  uint8_t GetMessageHeader() const {
    assert( MessageHeader <= 0x3 );
    return MessageHeader;
  }
  // E.2 MESSAGE CONTROL HEADER ENCODING
  // Only the first two bits are considered
  void SetMessageHeader(uint8_t messageheader) {
    MessageHeader = messageheader;
  }
  //flip the least significant bit of the message header to 1 
  //if this is a command, else set it to 0.
  void SetCommand(const bool& inCommand);
  void SetLastFragment(const bool& inLast);//set to true if this is the last PDV of a set

  bool GetIsCommand() const;
  bool GetIsLastFragment() const;

  void Print(std::ostream &os) const;

  //NOTE that the PDVs have to be given in the order in which they were received!
  //also note that a dataset may be across multiple PDVs, or that a single PDV could have
  //many datasets.
  static DataSet ConcatenatePDVBlobs(const std::vector<PresentationDataValue>& inPDVs);

void MyInit2(const char *uid1, const char *uid2); // FIXME

private:
  uint32_t ItemLength;
  uint8_t PresentationContextID;

  // FIXME this should change if the DataSet cannot fit in memory.
  //DataSet DS;
  std::string Blob; // std::vector<char> ??

  uint8_t MessageHeader;
};
} // end namespace network

} // end namespace gdcm

#endif //GDCMPRESENTATIONDATAVALUE_H