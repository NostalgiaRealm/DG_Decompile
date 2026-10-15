/*
 * FUN_10020030 at 10020030
 * undefined FUN_10020030(void)
 * Address ranges: 10020030-10020153
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020030(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *pcVar5;
  
  param_2 = param_2 & 0xffffffff;
  switch((uint)param_3) {
  case 0x10:
    param_4 = FUN_1001fbd8(param_1,param_4 & 0xffffffff);
    break;
  case 0x11:
    param_4 = FUN_1001fbd8(param_1,param_4 & 0xffffffff);
    break;
  case 0x12:
    param_4 = FUN_1001fc50(param_1,param_4 & 0xffffffff);
    break;
  default:
    param_4 = param_4 & 0xffffffff;
    if ((uint)param_3 < 0x1a) goto LAB_100200c4;
    goto LAB_10020110;
  case 0x15:
    uVar2 = *(uint *)(*(int *)(param_1 + 0xc) + 0x7dc);
    uVar1 = uVar2 & 0xff;
    if (0x10 < uVar1 || uVar2 == 0) {
      uVar1 = (uint)param_4;
    }
    param_4 = (ulonglong)uVar1;
    goto LAB_100200c4;
  }
  param_4 = param_4 & 0xffffffff;
LAB_100200c4:
  if ((0x23fe000U >> (ulonglong)((uint)param_3 & 0x1f) & 1) == 0) {
LAB_10020110:
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    param_3 = param_3 & 0xffffffff;
    pcVar5 = extraout_w11_00;
  }
  else {
    puVar4 = (uint *)(&DAT_1012b608 + (uint)param_3 * 4);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    param_3 = (ulonglong)*puVar4;
    pcVar5 = extraout_w11;
  }
  (*pcVar5)(uVar3,param_2 & 0xffffffff,param_3,param_4 & 0xffffffff);
  return;
}

