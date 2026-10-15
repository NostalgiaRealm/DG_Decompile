/*
 * FUN_1001fcb0 at 1001fcb0
 * undefined FUN_1001fcb0(void)
 * Address ranges: 1001fcb0-1001ff03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001fcb0(int param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *pcVar6;
  undefined1 auVar7 [16];
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar3 = (int)param_2;
  iVar5 = (int)param_3;
  if (*(int *)(param_1 + iVar3 * 4 + 0x28c) == iVar5) {
    return;
  }
  if (iVar3 < 0x1a) {
    if (iVar3 != 0x13) {
      if (iVar3 == 0x14) {
        if (iVar5 - 0xcU < 2) {
          return;
        }
        if (*(int *)(param_1 + 0x2d8) - 0xcU < 2) {
          return;
        }
      }
      goto LAB_1001fd84;
    }
    if (iVar5 == 0xc) {
      uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_01)(uVar1,0x13,5);
      uVar2 = (*pcVar6)();
      param_3 = 6;
      pcVar6 = extraout_w11_02;
LAB_1001fe3c:
      uVar4 = 0x14;
      goto LAB_1001feec;
    }
    if (iVar5 == 0xd) {
      uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_03)(uVar1,0x13,6);
      uVar2 = (*pcVar6)();
      param_3 = 5;
      pcVar6 = extraout_w11_04;
      goto LAB_1001fe3c;
    }
    auVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_05)(auVar7._0_8_ & 0xffffffff,auVar7._8_8_ & 0xffffffff,param_3 & 0xffffffff);
    if (1 < *(int *)(param_1 + 0x2d8) - 0xcU) {
      return;
    }
    param_3 = (ulonglong)*(uint *)(param_1 + 0x2dc);
    if (*(uint *)(param_1 + 0x2dc) - 0xc < 2) {
      return;
    }
    uVar2 = (*pcVar6)();
    uVar4 = 0x14;
    pcVar6 = extraout_w11_06;
  }
  else {
    if (iVar3 < 0x1b) {
      iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x933);
      if (iVar3 == 0) {
        param_3 = 0;
      }
      else if ((iVar3 == 1) && (*(int *)(*(int *)(param_1 + 0xc) + 0x92f) != 0)) {
        param_3 = param_3 & 0xffffffff;
      }
      else {
        param_3 = 1;
      }
      auVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                         (*(undefined4 *)(param_1 + 0x14),param_2,param_3);
      (*extraout_w11)(auVar7._0_8_ & 0xffffffff,auVar7._8_8_ & 0xffffffff,param_3 & 0xffffffff);
      *(undefined1 *)(param_1 + 0xff) = 1;
      return;
    }
    if (iVar3 == 0x88) {
      return;
    }
LAB_1001fd84:
    auVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar2 = auVar7._0_8_;
    uVar4 = auVar7._8_8_ & 0xffffffff;
    pcVar6 = extraout_w11_00;
  }
  param_3 = param_3 & 0xffffffff;
LAB_1001feec:
  (*pcVar6)(uVar2 & 0xffffffff,uVar4,param_3);
  return;
}

