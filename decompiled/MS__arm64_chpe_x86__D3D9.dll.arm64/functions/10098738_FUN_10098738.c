/*
 * FUN_10098738 at 10098738
 * undefined FUN_10098738(void)
 * Address ranges: 10098738-10098913
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10098738(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined1 *param_7,uint param_8)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_w11;
  undefined4 uVar5;
  undefined4 extraout_w12;
  uint extraout_w13;
  
  uVar5 = 3;
  uVar3 = 1;
  uVar4 = 3;
  if (param_3 == 2) {
    uVar4 = 1;
  }
  *param_6 = uVar4;
  *param_4 = 0;
  *param_5 = 0;
  *param_7 = 0xf;
  if ((param_8 & 1) == 0) {
    if (param_3 == 0x10) {
      param_3 = 1;
    }
    uVar1 = FUN_10094bf0(param_1,(uint)(*(ulonglong *)(*(int *)(param_2 + 0x1a0) + 0x48) >>
                                       (((ulonglong)param_3 & 0xf) << 2)) & 0xf,param_6);
    *param_7 = uVar1;
    param_3 = extraout_w13;
    uVar5 = extraout_w12;
    uVar3 = extraout_w11;
  }
  switch(param_3) {
  case 0:
    pcVar2 = s_POSITION_10161430;
    goto LAB_100987cc;
  case 1:
    *param_4 = s_TEXCOORD_10161440;
    uVar4 = 9;
    break;
  case 2:
    *param_4 = s_TEXCOORD_10161440;
    uVar4 = 10;
    break;
  case 3:
    *param_4 = s_TEXCOORD_10161440;
    uVar4 = 8;
    break;
  case 4:
    *param_7 = (char)uVar3;
    *param_4 = s_TEXCOORD_10161440;
    *param_5 = 0xd;
    return;
  case 5:
    pcVar2 = s_COLOR_10162104;
    goto LAB_100987cc;
  case 6:
    pcVar2 = s_COLOR_10162104;
    goto LAB_10098814;
  case 7:
    pcVar2 = s_TEXCOORD_10161440;
LAB_100987cc:
    *param_4 = pcVar2;
LAB_10098908:
    *param_5 = 0;
    return;
  case 8:
    pcVar2 = s_TEXCOORD_10161440;
LAB_10098814:
    *param_4 = pcVar2;
    *param_5 = uVar3;
    return;
  case 9:
    *param_4 = s_TEXCOORD_10161440;
    uVar4 = 2;
    break;
  case 10:
    *param_5 = uVar5;
    *param_4 = s_TEXCOORD_10161440;
    return;
  case 0xb:
    *param_4 = s_TEXCOORD_10161440;
    uVar4 = 4;
    break;
  case 0xc:
    *param_4 = s_TEXCOORD_10161440;
    uVar4 = 5;
    break;
  case 0xd:
    *param_4 = s_TEXCOORD_10161440;
    uVar4 = 6;
    break;
  case 0xe:
    *param_4 = s_TEXCOORD_10161440;
    uVar4 = 7;
    break;
  case 0xf:
    *param_4 = s_TEXCOORD_10161440;
    uVar4 = 0xb;
    break;
  default:
    goto switchD_100987c0_caseD_10;
  case 0x11:
    *param_4 = &DAT_101623b0;
    *param_7 = 7;
    goto LAB_10098908;
  }
  *param_5 = uVar4;
switchD_100987c0_caseD_10:
  return;
}

