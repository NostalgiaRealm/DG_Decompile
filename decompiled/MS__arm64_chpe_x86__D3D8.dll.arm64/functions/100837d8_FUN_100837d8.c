/*
 * FUN_100837d8 at 100837d8
 * undefined FUN_100837d8(void)
 * Address ranges: 100837d8-100838a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_100837d8(byte param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  switch(param_1 >> 4) {
  case 0:
    pcVar1 = s_POSITION_1012bab0;
    break;
  case 1:
    pcVar1 = s_BLENDWEIGHT_1012c9b0;
    break;
  case 2:
    pcVar1 = s_BLENDINDICES_1012c9c0;
    break;
  case 3:
    pcVar1 = s_NORMAL_1012c9d0;
    break;
  case 4:
    pcVar1 = s_PSIZE_1012c9d8;
    break;
  case 5:
    pcVar1 = s_TEXCOORD_1012bac0;
    break;
  case 6:
    pcVar1 = s_TANGENT_1012c9e0;
    break;
  case 7:
    pcVar1 = s_BINORMAL_1012c9e8;
    break;
  case 8:
    pcVar1 = s_TESSFACTOR_1012c9f8;
    break;
  case 9:
    pcVar1 = s_POSITIONT_1012ca08;
    break;
  case 10:
    pcVar1 = s_COLOR_1012c6e0;
    break;
  case 0xb:
    pcVar1 = &DAT_1012ca14;
    break;
  case 0xc:
    pcVar1 = s_DEPTH_1012ca18;
    break;
  case 0xd:
    pcVar1 = s_SAMPLE_1012ca20;
  }
  return pcVar1;
}

