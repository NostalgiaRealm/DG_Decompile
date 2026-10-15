/*
 * FUN_1801847a8 at 1801847a8
 * undefined FUN_1801847a8(void)
 * Address ranges: 1801847a8-18018499f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801847a8(undefined8 param_1,longlong param_2,uint param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined1 *param_7,uint param_8)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 uVar4;
  
  *param_4 = 0;
  *param_5 = 0;
  uVar2 = 3;
  if (param_3 == 2) {
    uVar2 = 1;
  }
  *param_6 = uVar2;
  *param_7 = 0xf;
  uVar2 = 2;
  if ((param_8 & 1) == 0) {
    uVar1 = param_3;
    if (param_3 == 0x10) {
      uVar1 = 1;
    }
    uVar1 = (uint)(*(ulonglong *)(*(longlong *)(param_2 + 0x1b0) + 0x48) >>
                  (((ulonglong)uVar1 & 0xf) << 2)) & 0xf;
    if (uVar1 < 2) {
LAB_180184834:
      *param_6 = 3;
LAB_180184838:
      uVar4 = 0xf;
    }
    else {
      if (uVar1 - 3 < 2) {
        *param_6 = 2;
        goto LAB_180184838;
      }
      if (1 < uVar1 - 5) {
        if (uVar1 != 2) goto LAB_180184834;
        *param_6 = 1;
        goto LAB_180184838;
      }
      *param_6 = 1;
      uVar4 = 1;
    }
    *param_7 = uVar4;
  }
  switch(param_3) {
  case 0:
    pcVar3 = s_POSITION_18022a9d0;
    goto LAB_180184860;
  case 1:
    *param_4 = s_TEXCOORD_18022a9e0;
    uVar2 = 9;
    break;
  case 2:
    *param_4 = s_TEXCOORD_18022a9e0;
    uVar2 = 10;
    break;
  case 3:
    *param_4 = s_TEXCOORD_18022a9e0;
    uVar2 = 8;
    break;
  case 4:
    *param_7 = 1;
    *param_4 = s_TEXCOORD_18022a9e0;
    *param_5 = 0xd;
    return;
  case 5:
    pcVar3 = s_COLOR_18022c1c4;
    goto LAB_180184860;
  case 6:
    pcVar3 = s_COLOR_18022c1c4;
    goto LAB_1801848a8;
  case 7:
    pcVar3 = s_TEXCOORD_18022a9e0;
LAB_180184860:
    *param_4 = pcVar3;
LAB_180184998:
    *param_5 = 0;
    return;
  case 8:
    pcVar3 = s_TEXCOORD_18022a9e0;
LAB_1801848a8:
    *param_4 = pcVar3;
    *param_5 = 1;
    return;
  case 9:
    *param_4 = s_TEXCOORD_18022a9e0;
    break;
  case 10:
    *param_5 = 3;
    *param_4 = s_TEXCOORD_18022a9e0;
    return;
  case 0xb:
    *param_4 = s_TEXCOORD_18022a9e0;
    uVar2 = 4;
    break;
  case 0xc:
    *param_4 = s_TEXCOORD_18022a9e0;
    uVar2 = 5;
    break;
  case 0xd:
    *param_4 = s_TEXCOORD_18022a9e0;
    uVar2 = 6;
    break;
  case 0xe:
    *param_4 = s_TEXCOORD_18022a9e0;
    uVar2 = 7;
    break;
  case 0xf:
    *param_4 = s_TEXCOORD_18022a9e0;
    uVar2 = 0xb;
    break;
  default:
    goto switchD_180184854_caseD_10;
  case 0x11:
    *param_4 = s_NFACT_18022c490;
    *param_7 = 7;
    goto LAB_180184998;
  }
  *param_5 = uVar2;
switchD_180184854_caseD_10:
  return;
}

