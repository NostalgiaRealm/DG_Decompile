/*
 * FUN_180071528 at 180071528
 * undefined FUN_180071528(void)
 * Address ranges: 180071528-18007171f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180071528(undefined8 param_1,longlong param_2,uint param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined1 *param_7,uint param_8)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 uVar5;
  
  *param_4 = 0;
  uVar3 = 1;
  *param_5 = 0;
  uVar1 = 3;
  if (param_3 == 2) {
    uVar1 = 1;
  }
  *param_6 = uVar1;
  *param_7 = 0xf;
  if ((param_8 & 1) == 0) {
    uVar2 = param_3;
    if (param_3 == 0x10) {
      uVar2 = 1;
    }
    uVar2 = (uint)(*(ulonglong *)(*(longlong *)(param_2 + 0x1b0) + 0x48) >>
                  (((ulonglong)uVar2 & 0xf) << 2)) & 0xf;
    if (uVar2 < 2) {
LAB_1800715b4:
      *param_6 = 3;
LAB_1800715b8:
      uVar5 = 0xf;
    }
    else {
      if (uVar2 - 3 < 2) {
        *param_6 = 2;
        goto LAB_1800715b8;
      }
      if (1 < uVar2 - 5) {
        if (uVar2 != 2) goto LAB_1800715b4;
        *param_6 = 1;
        goto LAB_1800715b8;
      }
      *param_6 = 1;
      uVar5 = 1;
    }
    *param_7 = uVar5;
  }
  switch(param_3) {
  case 0:
    pcVar4 = s_POSITION_180233a80;
    goto LAB_1800715e0;
  case 1:
    *param_4 = s_TEXCOORD_180233a70;
    uVar3 = 9;
    break;
  case 2:
    *param_4 = s_TEXCOORD_180233a70;
    uVar3 = 10;
    break;
  case 3:
    *param_4 = s_TEXCOORD_180233a70;
    uVar3 = 8;
    break;
  case 4:
    *param_7 = 1;
    *param_4 = s_TEXCOORD_180233a70;
    *param_5 = 0xd;
    return;
  case 5:
    pcVar4 = s_COLOR_180234878;
    goto LAB_1800715e0;
  case 6:
    pcVar4 = s_COLOR_180234878;
    goto LAB_180071628;
  case 7:
    pcVar4 = s_TEXCOORD_180233a70;
LAB_1800715e0:
    *param_4 = pcVar4;
LAB_180071718:
    *param_5 = 0;
    return;
  case 8:
    pcVar4 = s_TEXCOORD_180233a70;
LAB_180071628:
    *param_4 = pcVar4;
    break;
  case 9:
    *param_5 = 2;
    *param_4 = s_TEXCOORD_180233a70;
    return;
  case 10:
    *param_5 = 3;
    *param_4 = s_TEXCOORD_180233a70;
    return;
  case 0xb:
    *param_4 = s_TEXCOORD_180233a70;
    uVar3 = 4;
    break;
  case 0xc:
    *param_4 = s_TEXCOORD_180233a70;
    uVar3 = 5;
    break;
  case 0xd:
    *param_4 = s_TEXCOORD_180233a70;
    uVar3 = 6;
    break;
  case 0xe:
    *param_4 = s_TEXCOORD_180233a70;
    uVar3 = 7;
    break;
  case 0xf:
    *param_4 = s_TEXCOORD_180233a70;
    uVar3 = 0xb;
    break;
  default:
    goto switchD_1800715d4_caseD_10;
  case 0x11:
    *param_4 = s_NFACT_1802349f8;
    *param_7 = 7;
    goto LAB_180071718;
  }
  *param_5 = uVar3;
switchD_1800715d4_caseD_10:
  return;
}

