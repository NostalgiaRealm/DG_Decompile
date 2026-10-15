/*
 * FUN_180079d90 at 180079d90
 * undefined FUN_180079d90(void)
 * Address ranges: 180079d90-180079e5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_180079d90(uint param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  switch(param_1 >> 4 & 0xf) {
  case 0:
    pcVar1 = s_POSITION_180233a80;
    break;
  case 1:
    pcVar1 = s_BLENDWEIGHT_180234a78;
    break;
  case 2:
    pcVar1 = s_BLENDINDICES_180234a90;
    break;
  case 3:
    pcVar1 = s_NORMAL_180234a84;
    break;
  case 4:
    pcVar1 = s_PSIZE_180234aa8;
    break;
  case 5:
    pcVar1 = s_TEXCOORD_180233a70;
    break;
  case 6:
    pcVar1 = s_TANGENT_180234aa0;
    break;
  case 7:
    pcVar1 = s_BINORMAL_180234ac0;
    break;
  case 8:
    pcVar1 = s_TESSFACTOR_180234ab0;
    break;
  case 9:
    pcVar1 = s_POSITIONT_180234ad0;
    break;
  case 10:
    pcVar1 = s_COLOR_180234878;
    break;
  case 0xb:
    pcVar1 = &DAT_180234acc;
    break;
  case 0xc:
    pcVar1 = s_DEPTH_180234ae4;
    break;
  case 0xd:
    pcVar1 = s_SAMPLE_180234adc;
  }
  return pcVar1;
}

