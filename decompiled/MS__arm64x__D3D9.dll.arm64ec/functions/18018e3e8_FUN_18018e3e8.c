/*
 * FUN_18018e3e8 at 18018e3e8
 * undefined FUN_18018e3e8(void)
 * Address ranges: 18018e3e8-18018e4b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_18018e3e8(uint param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  switch(param_1 >> 4 & 0xf) {
  case 0:
    pcVar1 = s_POSITION_18022a9d0;
    break;
  case 1:
    pcVar1 = s_BLENDWEIGHT_18022c5b0;
    break;
  case 2:
    pcVar1 = s_BLENDINDICES_18022c5c0;
    break;
  case 3:
    pcVar1 = s_NORMAL_18022c5d0;
    break;
  case 4:
    pcVar1 = s_PSIZE_18022c5d8;
    break;
  case 5:
    pcVar1 = s_TEXCOORD_18022a9e0;
    break;
  case 6:
    pcVar1 = s_TANGENT_18022c5e0;
    break;
  case 7:
    pcVar1 = s_BINORMAL_18022c5e8;
    break;
  case 8:
    pcVar1 = s_TESSFACTOR_18022c5f8;
    break;
  case 9:
    pcVar1 = s_POSITIONT_18022c608;
    break;
  case 10:
    pcVar1 = s_COLOR_18022c1c4;
    break;
  case 0xb:
    pcVar1 = &DAT_18022c614;
    break;
  case 0xc:
    pcVar1 = s_DEPTH_18022c618;
    break;
  case 0xd:
    pcVar1 = s_SAMPLE_18022c620;
  }
  return pcVar1;
}

