/*
 * FUN_10001dc0 at 10001dc0
 * undefined FUN_10001dc0(void)
 * Address ranges: 10001dc0-10001fe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001dc0(int param_1,int param_2,ulonglong param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *pcVar3;
  undefined1 auVar4 [16];
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar2 = (int)param_3;
  if (*(int *)(param_1 + param_2 * 4 + 0x290) == iVar2) {
    return;
  }
  if (param_2 < 0x1a) {
    if (param_2 != 0x13) {
      if (param_2 == 0x14) {
        if (iVar2 - 0xcU < 2) {
          return;
        }
        if (*(int *)(param_1 + 0x2dc) - 0xcU < 2) {
          return;
        }
      }
      goto LAB_10001e68;
    }
    if (iVar2 == 0xc) {
      uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_01)(uVar1,0x13,5);
      uVar1 = (*pcVar3)();
      param_3 = 6;
      pcVar3 = extraout_w11_02;
LAB_10001f20:
      param_2 = 0x14;
      goto LAB_10001fd0;
    }
    if (iVar2 == 0xd) {
      uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_03)(uVar1,0x13,6);
      uVar1 = (*pcVar3)();
      param_3 = 5;
      pcVar3 = extraout_w11_04;
      goto LAB_10001f20;
    }
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_05)(uVar1,0x13,param_3 & 0xffffffff);
    if (1 < *(int *)(param_1 + 0x2dc) - 0xcU) {
      return;
    }
    param_3 = (ulonglong)*(uint *)(param_1 + 0x2e0);
    if (*(uint *)(param_1 + 0x2e0) - 0xc < 2) {
      return;
    }
    uVar1 = (*pcVar3)();
    param_2 = 0x14;
    pcVar3 = extraout_w11_06;
  }
  else {
    if (param_2 < 0x1b) {
      uVar1 = *(undefined4 *)(param_1 + 0x14);
      auVar4 = FUN_10001d70(param_1,param_3 & 0xffffffff);
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                (auVar4._0_8_,auVar4._8_8_,auVar4._0_8_ & 0xffffffff);
      (*extraout_w11)(uVar1,param_2);
      *(undefined1 *)(param_1 + 0xff) = 1;
      return;
    }
    if (param_2 == 0x88) {
      return;
    }
LAB_10001e68:
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    pcVar3 = extraout_w11_00;
  }
  param_3 = param_3 & 0xffffffff;
LAB_10001fd0:
  (*pcVar3)(uVar1,param_2,param_3);
  return;
}

