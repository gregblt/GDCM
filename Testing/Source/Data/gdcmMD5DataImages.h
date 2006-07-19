/*=========================================================================

  Program: GDCM (Grass Root DICOM). A DICOM library
  Module:  $URL$

  Copyright (c) 2006 Mathieu Malaterre
  Copyright (c) 1993-2005 CREATIS
  All rights reserved.
  See Copyright.txt or http://gdcm.sourceforge.net/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

// See tst2md5 in GDCM/Utilities/md5
const char * const gdcmMD5DataImages[][2] = { 
/* gdcm 512 512 4 8 1 */
{ "bfff320d1b058e91b4819aa4560c16f7" , "00191113.dcm" },
/* gdcm 256 256 1 16 1 */
{ "d594a5e2fde12f32b6633ca859b4d4a6" , "012345.002.050.dcm" },
/* gdcm 512 512 1 16 1 */
{ "c68cf1c4ae59903930e334498389ea88" , "05115014-mr-siemens-avanto-syngo-with-palette-icone.dcm" },
/* gdcm 448 336 1 16 1 */
{ "a9d455ca171294fe56d29bf714f4f845" , "05119865-mr-siemens-avanto-syngo.dcm" },
/* gdcm 192 192 1 16 1 */
{ "9acdd9969f5d0584ddd67e994f00b7c7" , "05148044-mr-siemens-avanto-syngo.dcm" },
/* gdcm 512 512 1 16 1 */
{ "c3541091a3794753065022f4defc4343" , "3E768EB7.dcm" },
/* gdcm 768 576 40 8 3 */
{ "6a796be399aefebc1479e924f6051d69" , "ACUSON-24-YBR_FULL_422-Jpeg_Baseline_1.dcm" },
/* gdcm 384 288 1 8 3 */
{ "2a922d5c606354612bfdbece1421d863" , "ACUSON-24-YBR_FULL-RLE-b.dcm" },
/* gdcm 768 576 1 8 3 */
{ "f9bb8a37acabdf8b0cfa4fd1b471e6aa" , "ACUSON-24-YBR_FULL-RLE.dcm" },
/* gdcm 768 576 25 8 3 */
{ "e36350b0711fd34eb86c386164554679" , "ACUSON-8-YBR_FULL-JPEG-TrailingInfo.dcm" },
/* gdcm 608 420 1 8 1 */
{ "b0ec78a7731ef04fbd8c774ed4b5ec40" , "ALOKA_SSD-8-MONO2-RLE-SQ.dcm" },
/* gdcm 440 440 1 16 1 */
{ "8acaa88edcc2c29d3be3ee373fbaed5e" , "CR-MONO1-10-chest.dcm" },
/* gdcm 512 512 1 16 1 */
{ "8c8b9d99ad12fb4d231182d4fc14c042" , "CT_16b_signed-UsedBits13.dcm" },
/* gdcm 512 512 1 16 1 */
{ "160c0b4432cfab8d36531b5a3693ff3e" , "CT-MONO2-12-lomb-an2.acr" },
/* gdcm 512 512 1 16 1 */
{ "90cca03ada67c6a1fcb48cfcc2b52eeb" , "CT-MONO2-16-ankle.dcm" },
/* gdcm 512 512 1 16 1 */
{ "a6cf43e05087b6c31644c1d360701ff2" , "CT-MONO2-16-brain.dcm" },
/* gdcm 512 400 1 16 1 */
{ "78bb9ea4b746ff2aa5559be567f95030" , "CT-MONO2-16-chest.dcm" },
/* gdcm 512 512 1 16 1 */
{ "dcb3aa1defd85d93d69d445e3e9b3074" , "CT-MONO2-16-ort.dcm" },
/* gdcm 512 512 1 8 1 */
{ "86d3e09a5858aa3844cb3be1b822a069" , "CT-MONO2-8-abdo.dcm" },
/* gdcm 512 614 1 16 1 */
{ "a08ad54ba5b3a9174c78f60a130950e4" , "CT_Phillips_JPEG2K_Decompr_Problem.dcm" },
/* gdcm 512 512 1 16 1 */
{ "3372195a35448b76daee682d23502090" , "CT-SIEMENS-Icone-With-PaletteColor.dcm" },
/* gdcm 512 512 1 16 1 */
{ "7f029288f98f4c04e62f1aac0122e429" , "D_CLUNIE_CT1_J2KI.dcm" },
/* gdcm 512 512 1 16 1 */
{ "f3a3d0e739e5f4fbeddd1452b81f4d89" , "D_CLUNIE_CT1_J2KR.dcm" },
/* gdcm 512 512 1 16 1 */
{ "f3a3d0e739e5f4fbeddd1452b81f4d89" , "D_CLUNIE_CT1_JPLL.dcm" },
/* gdcm 512 512 1 16 1 */
{ "f3a3d0e739e5f4fbeddd1452b81f4d89" , "D_CLUNIE_CT1_RLE.dcm" },
/* gdcm 512 512 1 16 1 */
{ "2e389ddbfc1b29d55c52c97e7f2c6f9c" , "D_CLUNIE_CT2_JPLL.dcm" },
/* gdcm 512 512 1 16 1 */
{ "2e389ddbfc1b29d55c52c97e7f2c6f9c" , "D_CLUNIE_CT2_RLE.dcm" },
/* gdcm 3064 4664 1 16 1 */
{ "d9b97ad9199d429960123dcc1e74bdbc" , "D_CLUNIE_MG1_JPLL.dcm" },
/* gdcm 3064 4664 1 16 1 */
{ "02742062fcad004500d73d7c61b9b9e6" , "D_CLUNIE_MG1_JPLY.dcm" },
/* gdcm 3064 4664 1 16 1 */
{ "d9b97ad9199d429960123dcc1e74bdbc" , "D_CLUNIE_MG1_RLE.dcm" },
/* gdcm 512 512 1 16 1 */
{ "7b7424e6115931c371f3c94c2f5d32d9" , "D_CLUNIE_MR1_JPLL.dcm" },
/* gdcm 512 512 1 16 1 */
{ "2824e914ecae250a755a8a0bb1a7d4b1" , "D_CLUNIE_MR1_JPLY.dcm" },
/* gdcm 512 512 1 16 1 */
{ "7b7424e6115931c371f3c94c2f5d32d9" , "D_CLUNIE_MR1_RLE.dcm" },
/* gdcm 1024 1024 1 16 1 */
{ "a70676f0e60a58f55a5ac517ff662e7e" , "D_CLUNIE_MR2_JPLL.dcm" },
/* gdcm 1024 1024 1 16 1 */
{ "981510df3a57e98141c7d192b45bd93f" , "D_CLUNIE_MR2_JPLY.dcm" },
/* gdcm 1024 1024 1 16 1 */
{ "a70676f0e60a58f55a5ac517ff662e7e" , "D_CLUNIE_MR2_RLE.dcm" },
/* gdcm 512 512 1 16 1 */
{ "fb03254fad02d2330d404225c3ea9b4e" , "D_CLUNIE_MR3_JPLL.dcm" },
/* gdcm 512 512 1 16 1 */
{ "d7009808a147f59a9bdf58d5c5924ef2" , "D_CLUNIE_MR3_JPLY.dcm" },
/* gdcm 512 512 1 16 1 */
{ "fb03254fad02d2330d404225c3ea9b4e" , "D_CLUNIE_MR3_RLE.dcm" },
/* gdcm 512 512 1 16 1 */
{ "14fa2ae9f63742af6944edd4a61145e8" , "D_CLUNIE_MR4_JPLL.dcm" },
/* gdcm 512 512 1 16 1 */
{ "a33ad864b49ae7daa59cfaabdf751976" , "D_CLUNIE_MR4_JPLY.dcm" },
/* gdcm 512 512 1 16 1 */
{ "14fa2ae9f63742af6944edd4a61145e8" , "D_CLUNIE_MR4_RLE.dcm" },
/* gdcm 256 1024 1 16 1 */
{ "6b5c1eff0ef65e36b0565f96507e96fd" , "D_CLUNIE_NM1_JPLL.dcm" },
/* gdcm 256 1024 1 16 1 */
{ "812050a7fc53b5735f7740b60969cb6b" , "D_CLUNIE_NM1_JPLY.dcm" },
/* gdcm 256 1024 1 16 1 */
{ "6b5c1eff0ef65e36b0565f96507e96fd" , "D_CLUNIE_NM1_RLE.dcm" },
/* gdcm 1841 1955 1 16 1 */
{ "01518af70491372814fb056d536ffb7e" , "D_CLUNIE_RG1_JPLL.dcm" },
/* gdcm 1841 1955 1 16 1 */
{ "01518af70491372814fb056d536ffb7e" , "D_CLUNIE_RG1_RLE.dcm" },
/* gdcm 1760 2140 1 16 1 */
{ "06900ee4323a91b7f5ffab8655e3c845" , "D_CLUNIE_RG2_JPLL.dcm" },
/* gdcm 1760 2140 1 16 1 */
{ "27fa50d4cf6b31baa669e9746ce10f63" , "D_CLUNIE_RG2_JPLY.dcm" },
/* gdcm 1760 2140 1 16 1 */
{ "06900ee4323a91b7f5ffab8655e3c845" , "D_CLUNIE_RG2_RLE.dcm" },
/* gdcm 1760 1760 1 16 1 */
{ "6588b7b8e6e53b2276d919a053316153" , "D_CLUNIE_RG3_JPLL.dcm" },
/* gdcm 1760 1760 1 16 1 */
{ "c4c35ed0e4b907bb4f42c638401f1459" , "D_CLUNIE_RG3_JPLY.dcm" },
/* gdcm 1760 1760 1 16 1 */
{ "6588b7b8e6e53b2276d919a053316153" , "D_CLUNIE_RG3_RLE.dcm" },
/* gdcm 2048 2487 1 16 1 */
{ "bd0cccbfd8db465c0af306ba0f482d72" , "D_CLUNIE_SC1_JPLL.dcm" },
/* gdcm 2048 2487 1 16 1 */
{ "994a5abb70d3f5968672ce4970a9d4da" , "D_CLUNIE_SC1_JPLY.dcm" },
/* gdcm 2048 2487 1 16 1 */
{ "bd0cccbfd8db465c0af306ba0f482d72" , "D_CLUNIE_SC1_RLE.dcm" },
/* gdcm 640 480 1 8 3 */
{ "eb52dce9eed5ad677364baadf6144ac4" , "D_CLUNIE_US1_RLE.dcm" },
/* gdcm 756 486 1 8 3 */
{ "b07e34ec35ba1be62ee7d4a404cf0b90" , "D_CLUNIE_VL1_RLE.dcm" },
/* gdcm 756 486 1 8 3 */
{ "d215c88125359d34474a741d793c2215" , "D_CLUNIE_VL2_RLE.dcm" },
/* gdcm 756 486 1 8 3 */
{ "65cd359ea4c6c13ca89b906215a4b762" , "D_CLUNIE_VL3_RLE.dcm" },
/* gdcm 2226 1868 1 8 3 */
{ "e2fdf24d2c03dd0991b4f4e9d6e84ed6" , "D_CLUNIE_VL4_RLE.dcm" },
/* gdcm 2670 3340 1 8 3 */
{ "0ed86ef35d1fb443e1b63c28afe84bd0" , "D_CLUNIE_VL5_RLE.dcm" },
/* gdcm 756 486 1 8 3 */
{ "b825c0ed35c7c896fb707c14b534c233" , "D_CLUNIE_VL6_RLE.dcm" },
/* gdcm 1024 1024 1 16 1 */
{ "6111657e6b01ec7b243d63f5dec6ec48" , "D_CLUNIE_XA1_JPLL.dcm" },
/* gdcm 1024 1024 1 16 1 */
{ "51af0d83fe795f9c9544c20d0bbac11c" , "D_CLUNIE_XA1_JPLY.dcm" },
/* gdcm 1024 1024 1 16 1 */
{ "6111657e6b01ec7b243d63f5dec6ec48" , "D_CLUNIE_XA1_RLE.dcm" },
/* gdcm 117 181 1 8 3 */
{ "b4f442047a209a98af015c89b4a3c4ed" , "DermaColorLossLess.dcm" },
/* gdcm 1024 1024 1 16 1 */
{ "0b4dff77726ccf037fa83c42cc186a98" , "ExplicitVRforPublicElementsImplicitVRforShadowElements.dcm" },
/* gdcm 512 512 1 16 1 */
{ "6b92115ec7a394c4aaad74e88d7dbc98" , "FLAIR-wrong-group-length.dcm" },
/* gdcm 1670 2010 1 16 1 */
{ "9ca80d44bfb1af2f96495fac4b57fa29" , "FUJI-10-MONO1-ACR_NEMA_2.dcm" },
/* gdcm 512 301 1 8 1 */
{ "59d9851ca0f214d57fdfd6a8c13bc91c" , "gdcm-ACR-LibIDO.acr" },
/* gdcm 750 750 1 8 1 */
{ "73f20916abaea83abebe9135c365d81a" , "gdcm-CR-DCMTK-16-NonSamplePerPix.dcm" },
/* gdcm 512 512 1 16 1 */
{ "f2c026beea9da0a78404f1299c4628bb" , "gdcm-JPEG-Extended-Allready_present.dcm" },
/* gdcm 512 512 1 16 1 */
{ "f2c026beea9da0a78404f1299c4628bb" , "gdcm-JPEG-Extended.dcm" },
/* gdcm 512 512 1 16 1 */
{ "ad67e448e8923c34f1e019c3395e616c" , "gdcm-JPEG-LossLess3a.dcm" },
/* gdcm 1876 2076 1 16 1 */
{ "c15c1e18a0c41970fbded48b20e834a1" , "gdcm-JPEG-LossLessThoravision.dcm" },
/* gdcm 128 128 1 16 1 */
{ "ad85be428c08ab4166347ef04bda9637" , "gdcm-MR-PHILIPS-16-Multi-Seq.dcm" },
/* gdcm 160 64 1 16 1 */
{ "2f7f9ef80b49111c5a7cfdb60a97f523" , "gdcm-MR-PHILIPS-16-NonSquarePixels.dcm" },
/* gdcm 512 512 1 16 1 */
{ "864e2c5d6acf5a371fe9eaa7ee0dcf5f" , "gdcm-MR-SIEMENS-16-2.acr" },
/* gdcm 640 480 1 16 1 */
{ "f85ff02a143c426edc4b2f6b9a175305" , "gdcm-US-ALOKA-16.dcm" },
/* gdcm 512 512 1 16 1 */
{ "80527e9c17a4a3d12d408e9a354f37f9" , "GE_CT_With_Private_compressed-icon.dcm" },
/* gdcm 512 512 67 8 1 */
{ "b8bcbccd17b76a0f8e3d4c342f855f9f" , "GE_DLX-8-MONO2-Multiframe-Jpeg_Lossless.dcm" },
/* gdcm 512 512 56 8 1 */
{ "71e4ea61df4f7ada2955799c91f93e74" , "GE_DLX-8-MONO2-Multiframe.dcm" },
/* gdcm 512 512 54 8 1 */
{ "51c998d3474c069b5703e98313258a1e" , "GE_DLX-8-MONO2-PrivateSyntax.dcm" },
/* gdcm 256 256 1 16 1 */
{ "8ac7f7891fb4506e2cd3ae2f0f7e9f46" , "GE_GENESIS-16-MONO2-Uncompressed-UnusualVR.dcm" },
/* gdcm 256 256 1 16 1 */
{ "1497fb9d7467b1eb36d5618e254aac76" , "GE_GENESIS-16-MONO2-WrongLengthItem.dcm" },
/* gdcm 640 480 1 8 3 */
{ "13fd8c7e533a3d7199bb78de45710f5c" , "GE_LOGIQBook-8-RGB-HugePreview.dcm" },
/* gdcm 512 512 1 16 1 */
{ "f3a3d0e739e5f4fbeddd1452b81f4d89" , "GE_RHAPSODE-16-MONO2-JPEG-Fragments.dcm" },
/* gdcm 1792 2392 1 16 1 */
{ "821acfdb5d5ad9dc13275d3ad3827d43" , "KODAK-12-MONO1-Odd_Terminated_Sequence.dcm" },
/* gdcm 800 535 1 16 1 */
{ "70166425c4dca767e22d3f25f737922b" , "LEADTOOLS_FLOWERS-16-MONO2-JpegLossless.dcm" },
/* gdcm 800 535 1 16 1 */
{ "70166425c4dca767e22d3f25f737922b" , "LEADTOOLS_FLOWERS-16-MONO2-RLE.dcm" },
/* gdcm 800 535 1 16 1 */
{ "70166425c4dca767e22d3f25f737922b" , "LEADTOOLS_FLOWERS-16-MONO2-Uncompressed.dcm" },
/* gdcm 800 535 1 8 3 */
{ "279e2b0363394a553ff8571cf3540c6c" , "LEADTOOLS_FLOWERS-24-RGB-JpegLossless.dcm" },
/* gdcm 800 535 1 8 3 */
{ "6224dc57584aa545a62303f270be44d2" , "LEADTOOLS_FLOWERS-24-RGB-JpegLossy.dcm" },
/* gdcm 800 535 1 8 3 */
{ "279e2b0363394a553ff8571cf3540c6c" , "LEADTOOLS_FLOWERS-24-RGB-Uncompressed.dcm" },
/* gdcm 800 535 1 8 1 */
{ "fa08fec923f34e009ec89f77232e52ad" , "LEADTOOLS_FLOWERS-8-MONO2-JpegLossy.dcm" },
/* gdcm 800 535 1 8 1 */
{ "3cd8bd92db17bff54e376885dfefdd8d" , "LEADTOOLS_FLOWERS-8-MONO2-RLE.dcm" },
/* gdcm 800 535 1 8 1 */
{ "3cd8bd92db17bff54e376885dfefdd8d" , "LEADTOOLS_FLOWERS-8-MONO2-Uncompressed.dcm" },
/* gdcm 800 535 1 8 3 */
{ "d613050ca0f9c924fb5282d140281fcc" , "LEADTOOLS_FLOWERS-8-PAL-RLE.dcm" },
/* gdcm 800 535 1 8 3 */
{ "d613050ca0f9c924fb5282d140281fcc" , "LEADTOOLS_FLOWERS-8-PAL-Uncompressed.dcm" },
/* gdcm 50 50 262 16 1 */
{ "ce1cc8ebb1efb86213d5912a1cfde843" , "LIBIDO-16-ACR_NEMA-Volume.dcm" },
/* gdcm 400 100 1 8 3 */
{ "81a40454eec2b18f4331cfd1ba4e501e" , "LIBIDO-24-ACR_NEMA-Rectangle.dcm" },
/* gdcm 128 128 1 8 1 */
{ "fc5db4e2e7fca8445342b83799ff16d8" , "LIBIDO-8-ACR_NEMA-Lena_128_128.acr" },
/* gdcm 512 512 1 16 1 */
{ "3d2d94917a52353b996037ccb5288168" , "MARCONI_MxTWin-12-MONO2-JpegLossless-ZeroLengthSQ.dcm" },
/* gdcm 256 192 1 16 1 */
{ "d9f47017de79e8755e4bc5d3c9146ebd" , "MR-Brucker-CineTagging-NonSquarePixels.dcm" },
/* gdcm 512 512 1 16 1 */
{ "8fe67e8e1f849c1b61f59e70d2d53cf7" , "MR_GE_with_Private_Compressed_Icon_0009_1110.dcm" },
/* gdcm 256 256 1 16 1 */
{ "f54c7ea520ab3ec32b6303581ecd262f" , "MR-MONO2-12-an2.acr" },
/* gdcm 256 256 1 16 1 */
{ "48345bccbd67f57b4c13060b6a9a0d35" , "MR-MONO2-12-angio-an1.acr" },
/* gdcm 1024 1024 1 16 1 */
{ "a70676f0e60a58f55a5ac517ff662e7e" , "MR-MONO2-12-shoulder.dcm" },
/* gdcm 256 256 1 16 1 */
{ "83be31fb5e5cee60dedaf485bf592ac3" , "MR-MONO2-16-head.dcm" },
/* gdcm 256 256 16 8 1 */
{ "01db0d71100c47013e588082d5f39bab" , "MR-MONO2-8-16x-heart.dcm" },
/* gdcm 256 256 1 16 1 */
{ "b606add66c681bbe674f972799c6d336" , "MR_Philips-Intera_BreaksNOSHADOW.dcm" },
/* gdcm 1024 1024 1 16 1 */
{ "0b4dff77726ccf037fa83c42cc186a98" , "MR_Philips_Intera_No_PrivateSequenceImplicitVR.dcm" },
/* gdcm 512 512 1 16 1 */
{ "f69bca6228b0ca07d97ee11c0ab3b989" , "MR_Philips_Intera_PrivateSequenceImplicitVR.dcm" },
/* gdcm 1024 1024 1 16 1 */
{ "0b4dff77726ccf037fa83c42cc186a98" , "MR_Philips_Intera_SwitchIndianess_noLgtSQItem_in_trueLgtSeq.dcm" },
/* gdcm 484 484 1 8 1 */
{ "8b636107a6d8e6a6b3d1d7eed966d7a0" , "MR-SIEMENS-DICOM-WithOverlays-extracted-overlays.dcm" },
/* gdcm 484 484 1 16 1 */
{ "3027eda10630e5c845f456264dc65210" , "MR-SIEMENS-DICOM-WithOverlays.dcm" },
/* gdcm 128 128 1 16 1 */
{ "6a925f871c58553f84ad24195e155c52" , "MR_SIEMENS_forceLoad29-1010_29-1020.dcm" },
/* gdcm 64 64 13 16 1 */
{ "c83ef2159abef677229d3afd26f9e6a0" , "NM-MONO2-16-13x-heart.dcm" },
/* gdcm 512 512 1 8 1 */
{ "a155c3004bb902ed3f2d78f482923b32" , "OT-MONO2-8-a7.dcm" },
/* gdcm 640 480 1 8 3 */
{ "47715f0a5d5089268bbef6f83251a8ad" , "OT-PAL-8-face.dcm" },
/* gdcm 512 512 1 16 1 */
{ "4b0021efe5a675f24c82e1ff28a1e2eb" , "PHILIPS_Gyroscan-12-Jpeg_Extended_Process_2_4.dcm" },
/* gdcm 256 256 1 16 1 */
{ "c5b1145071f92752946b9c28593f0a6e" , "PHILIPS_Gyroscan-12-MONO2-Jpeg_Lossless.dcm" },
/* gdcm 256 256 1 16 1 */
{ "4842ccbaac5b563ce915d2e21eb4c06e" , "PHILIPS_Gyroscan-8-MONO2-Odd_Sequence.dcm" },
/* gdcm 512 512 76 8 1 */
{ "1f8951a6f8b599ad4ebc97efd7aab6be" , "PHILIPS_Integris_H-8-MONO2-Multiframe.dcm" },
/* gdcm 1024 1024 31 16 1 */
{ "3d005cd3270c6d2562c2a8d9069c9295" , "PHILIPS_Integris_V-10-MONO2-Multiframe.dcm" },
/* gdcm 1024 1024 1 16 1 */
{ "0b4dff77726ccf037fa83c42cc186a98" , "PHILIPS_Intera-16-MONO2-Uncompress.dcm" },
/* gdcm 512 512 1 16 1 */
{ "6c9e477330d70d4a1360888121c7c3d3" , "PICKER-16-MONO2-Nested_icon.dcm" },
/* gdcm 512 512 1 16 1 */
{ "5ea911b29f472f371d21f2da2fd6b016" , "PICKER-16-MONO2-No_DicomV3_Preamble.dcm" },
/* gdcm 512 512 1 16 1 */
{ "498f80fd27882351b9a09e6ceef470bc" , "PrivateGEImplicitVRBigEndianTransferSyntax16Bits.dcm" },
/* gdcm 136 92 1 16 1 */
{ "dbbf39ac11a39372b1e961f40ac6f62a" , "RadBWLossLess.dcm" },
/* gdcm 600 430 1 16 3 */
{ "964ea27345a7004325896d34b257f289" , "rle16sti.dcm" },
/* gdcm 512 512 1 16 1 */
{ "80527e9c17a4a3d12d408e9a354f37f9" , "ser002img00026.dcm" },
/* gdcm 512 512 1 16 1 */
{ "7b55fd124331adde6276416678543048" , "SIEMENS-12-Jpeg_Process_2_4-Lossy-a.dcm" },
/* gdcm 256 256 1 16 1 */
{ "ea24c09f475a4e9643e27f6d470edc67" , "SIEMENS_GBS_III-16-ACR_NEMA_1.acr" },
/* gdcm 512 512 1 16 1 */
{ "864e2c5d6acf5a371fe9eaa7ee0dcf5f" , "SIEMENS_MAGNETOM-12-ACR_NEMA_2-Modern.dcm" },
/* gdcm 128 128 1 16 1 */
{ "a13466d96b2f068c4844240797069f13" , "SIEMENS_MAGNETOM-12-MONO2-FileSeq0.dcm" },
/* gdcm 128 128 1 16 1 */
{ "73f5986082729c2661cdc8de81fd26d0" , "SIEMENS_MAGNETOM-12-MONO2-FileSeq1.dcm" },
/* gdcm 128 128 1 16 1 */
{ "f932a194df62ec99aef676c563893496" , "SIEMENS_MAGNETOM-12-MONO2-FileSeq2.dcm" },
/* gdcm 128 128 1 16 1 */
{ "b6e4780d8aa8c1d3642377a60a5302dd" , "SIEMENS_MAGNETOM-12-MONO2-FileSeq3.dcm" },
/* gdcm 512 512 1 16 1 */
{ "4b426d4cd570bd4c998f3d19cfddfbb8" , "SIEMENS_MAGNETOM-12-MONO2-Uncompressed.dcm" },
/* gdcm 192 256 1 16 3 */
{ "faff9970b905458c0844400b5b869e25" , "SIEMENS-MR-RGB-16Bits.dcm" },
/* gdcm 512 512 1 16 1 */
{ "7ccf7c7c4b2a5fa9d337ea8b01f75c42" , "SIEMENS_SOMATOM-12-ACR_NEMA-ZeroLengthUs.acr" },
/* gdcm 192 192 1 16 1 */
{ "a3009bc70444148c5ea2441a099f9dc6" , "SIEMENS_Sonata-12-MONO2-SQ.dcm" },
/* gdcm 256 208 1 16 1 */
{ "017237320ccded3a367f07b44851788e" , "SIEMENS_Sonata-16-MONO2-Value_Multiplicity.dcm" },
/* gdcm 512 512 1 8 1 */
{ "f845c8f283d39a0204c325654493ba53" , "test.acr" },
/* gdcm 256 256 1 16 1 */
{ "62c98e89a37c9a527d95d5ac3e2548b0" , "THERALYS-12-MONO2-Uncompressed-E_Film_Template.dcm" },
/* gdcm 256 256 1 16 1 */
{ "0121cd64c3b9957f76dd338d27454bc6" , "THERALYS-12-MONO2-Uncompressed-Even_Length_Tag.dcm" },
/* gdcm 512 512 1 16 1 */
{ "09661bd8516aeb5a6f09239f9ca1b092" , "TOSHIBA_MRT150-16-MONO2-ACR_NEMA_2.dcm" },
/* gdcm 636 434 1 8 3 */
{ "437b3b7516a4c91a29edeb5846ec826b" , "US-GE-4AICL142.dcm" },
/* gdcm 640 480 1 8 1 */
{ "ba092234639594ee9091b46997532cce" , "US-IRAD-NoPreambleStartWith0003.dcm" },
/* gdcm 640 480 1 8 1 */
{ "1bde104ba256fb73528c5d9a02e363d7" , "US-IRAD-NoPreambleStartWith0005.dcm" },
/* gdcm 128 120 8 8 1 */
{ "bf63affde325b3fa81cd5a700f30bd5b" , "US-MONO2-8-8x-execho.dcm" },
/* gdcm 600 430 10 8 3 */
{ "c70309b66045140b8e08c11aa319c0ab" , "US-PAL-8-10x-echo.dcm" },
/* gdcm 640 480 1 8 3 */
{ "fe2d477d699e327be2d3d65eb76203e9" , "US-RGB-8-epicard.dcm" },
/* gdcm 256 120 1 8 3 */
{ "4b350b9353a93c747917c7c3bf9b8f44" , "US-RGB-8-esopecho.dcm" },
/* gdcm 512 512 12 8 1 */
{ "136eaf8f7d654bbb08741c201a945561" , "XA-MONO2-8-12x-catheter.dcm" },


// Those where added manually:
// Image1 & Image2 are crap...
{ "1b0768a3518a6b6ed425c3c1d7a7ea3b" , "Image1.dcm" },
{ "a41c7f4e75cf637ae8912f5c3cd2c69d" , "Image2.dcm" },
{ "22c9be23446a7be61a90d3578f3c9739" , "deflate_image.dcm" },
{ "d5681b156af55899835293286c57d887" , "brain.dcm" }, 
{ "d4d365f0500f2ccff932317833d8804b" , "abdominal.dcm" },
{ "138d9bd642c6f1cdc427ef6f99132677" , "ankle.dcm" },
{ "ff8d450e47e8989478a1b6f19d0988cc" , "spine.dcm" },


/* Stopping condition */
{ 0 ,0 }
};

