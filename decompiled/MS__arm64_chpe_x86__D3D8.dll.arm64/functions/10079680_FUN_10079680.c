/*
 * FUN_10079680 at 10079680
 * undefined FUN_10079680(void)
 * Address ranges: 10079680-10079817
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079680(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined1 *param_7)

{
  char *pcVar1;
  undefined4 uVar2;
  
  uVar2 = 3;
  if (param_3 == 2) {
    uVar2 = 1;
  }
  *param_6 = uVar2;
  *param_4 = 0;
  *param_5 = 0;
  *param_7 = 0xf;
  switch(param_3) {
  case 0:
    pcVar1 = s_POSITION_1012bab0;
    goto LAB_100796d8;
  case 1:
    *param_4 = s_TEXCOORD_1012bac0;
    uVar2 = 9;
    break;
  case 2:
    *param_4 = s_TEXCOORD_1012bac0;
    uVar2 = 10;
    break;
  case 3:
    *param_4 = s_TEXCOORD_1012bac0;
    uVar2 = 8;
    break;
  case 4:
    *param_7 = 1;
    *param_4 = s_TEXCOORD_1012bac0;
    *param_5 = 0xd;
    return;
  case 5:
    pcVar1 = s_COLOR_1012c6e0;
    goto LAB_100796d8;
  case 6:
    pcVar1 = s_COLOR_1012c6e0;
    goto LAB_10079720;
  case 7:
    pcVar1 = s_TEXCOORD_1012bac0;
LAB_100796d8:
    *param_4 = pcVar1;
    return;
  case 8:
    pcVar1 = s_TEXCOORD_1012bac0;
LAB_10079720:
    *param_4 = pcVar1;
    *param_5 = 1;
    return;
  case 9:
    *param_4 = s_TEXCOORD_1012bac0;
    uVar2 = 2;
    break;
  case 10:
    *param_5 = 3;
    *param_4 = s_TEXCOORD_1012bac0;
    return;
  case 0xb:
    *param_4 = s_TEXCOORD_1012bac0;
    uVar2 = 4;
    break;
  case 0xc:
    *param_4 = s_TEXCOORD_1012bac0;
    uVar2 = 5;
    break;
  case 0xd:
    *param_4 = s_TEXCOORD_1012bac0;
    uVar2 = 6;
    break;
  case 0xe:
    *param_4 = s_TEXCOORD_1012bac0;
    uVar2 = 7;
    break;
  case 0xf:
    *param_4 = s_TEXCOORD_1012bac0;
    uVar2 = 0xb;
    break;
  default:
    goto switchD_100796cc_caseD_10;
  case 0x11:
    *param_4 = &DAT_1012c910;
    *param_7 = 7;
    goto switchD_100796cc_caseD_10;
  }
  *param_5 = uVar2;
switchD_100796cc_caseD_10:
  return;
}

