/*
 * FUN_100a33c8 at 100a33c8
 * undefined FUN_100a33c8(void)
 * Address ranges: 100a33c8-100a3497
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_100a33c8(byte param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  switch(param_1 >> 4) {
  case 0:
    pcVar1 = s_POSITION_10161430;
    break;
  case 1:
    pcVar1 = s_BLENDWEIGHT_101624c0;
    break;
  case 2:
    pcVar1 = s_BLENDINDICES_101624d0;
    break;
  case 3:
    pcVar1 = s_NORMAL_101624e0;
    break;
  case 4:
    pcVar1 = s_PSIZE_101624e8;
    break;
  case 5:
    pcVar1 = s_TEXCOORD_10161440;
    break;
  case 6:
    pcVar1 = s_TANGENT_101624f0;
    break;
  case 7:
    pcVar1 = s_BINORMAL_101624f8;
    break;
  case 8:
    pcVar1 = s_TESSFACTOR_10162508;
    break;
  case 9:
    pcVar1 = s_POSITIONT_10162518;
    break;
  case 10:
    pcVar1 = s_COLOR_10162104;
    break;
  case 0xb:
    pcVar1 = &DAT_10162524;
    break;
  case 0xc:
    pcVar1 = s_DEPTH_10162528;
    break;
  case 0xd:
    pcVar1 = s_SAMPLE_10162530;
  }
  return pcVar1;
}

