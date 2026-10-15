/*
 * FUN_10044f98 at 10044f98
 * undefined FUN_10044f98(void)
 * Address ranges: 10044f98-100450c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10044f98(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined1 *param_7)

{
  char *pcVar1;
  undefined4 uVar2;
  
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 3;
  *param_7 = 0xf;
  switch(param_3) {
  case 0:
    pcVar1 = s_POSITION_1009d4e0;
    goto LAB_10044fe4;
  case 1:
    *param_4 = s_TEXCOORD_1009d4f0;
    uVar2 = 9;
    break;
  default:
    goto switchD_10044fd8_caseD_2;
  case 3:
    *param_4 = s_TEXCOORD_1009d4f0;
    uVar2 = 8;
    break;
  case 5:
    pcVar1 = s_COLOR_1009e134;
    goto LAB_10044fe4;
  case 6:
    pcVar1 = s_COLOR_1009e134;
    goto LAB_10045028;
  case 7:
    pcVar1 = s_TEXCOORD_1009d4f0;
LAB_10044fe4:
    *param_4 = pcVar1;
    return;
  case 8:
    pcVar1 = s_TEXCOORD_1009d4f0;
LAB_10045028:
    *param_4 = pcVar1;
    uVar2 = 1;
    break;
  case 9:
    *param_4 = s_TEXCOORD_1009d4f0;
    uVar2 = 2;
    break;
  case 10:
    *param_5 = 3;
    *param_4 = s_TEXCOORD_1009d4f0;
    return;
  case 0xb:
    *param_4 = s_TEXCOORD_1009d4f0;
    uVar2 = 4;
    break;
  case 0xc:
    *param_4 = s_TEXCOORD_1009d4f0;
    uVar2 = 5;
    break;
  case 0xd:
    *param_4 = s_TEXCOORD_1009d4f0;
    uVar2 = 6;
    break;
  case 0xe:
    *param_4 = s_TEXCOORD_1009d4f0;
    uVar2 = 7;
  }
  *param_5 = uVar2;
switchD_10044fd8_caseD_2:
  return;
}

