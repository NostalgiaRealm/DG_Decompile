/*
 * FUN_100d3aa0 at 100d3aa0
 * undefined FUN_100d3aa0(void)
 * Address ranges: 100d3aa0-100d3bbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d3aa0(int param_1,ulonglong param_2,int param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *pcVar6;
  undefined1 auVar7 [16];
  
  uVar5 = param_2 & 0xffffffff;
  uVar1 = *(uint *)(&DAT_10162e70 + param_3 * 4);
  uVar4 = (ulonglong)uVar1;
  if (uVar1 == 0xffffffff) {
    return;
  }
  if (0xff < (uint)param_2) {
    auVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                       (*(undefined4 *)(param_1 + 0x14),(uint)param_2 - 0x100);
    pcVar6 = extraout_w11_00;
    goto LAB_100d3ba8;
  }
  switch(uVar1) {
  case 5:
    param_4 = FUN_100255f8(param_1,param_4 & 0xffffffff);
    break;
  case 6:
    param_4 = FUN_100255f8(param_1,param_4 & 0xffffffff);
    break;
  case 7:
    param_4 = FUN_10025670(param_1,param_4 & 0xffffffff);
    break;
  default:
    param_4 = param_4 & 0xffffffff;
    goto LAB_100d3b4c;
  case 10:
    uVar2 = *(uint *)(*(int *)(param_1 + 0xc) + 0x7dc);
    uVar1 = uVar2 & 0xff;
    if (0x10 < uVar1 || uVar2 == 0) {
      uVar1 = (uint)param_4;
    }
    param_4 = (ulonglong)uVar1;
    goto LAB_100d3b4c;
  }
  param_4 = param_4 & 0xffffffff;
LAB_100d3b4c:
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  auVar7._8_8_ = uVar5 & 0xffffffff;
  auVar7._0_8_ = uVar3;
  pcVar6 = extraout_w11;
LAB_100d3ba8:
  (*pcVar6)(auVar7._0_8_ & 0xffffffff,auVar7._8_8_,uVar4 & 0xffffffff,param_4 & 0xffffffff);
  return;
}

