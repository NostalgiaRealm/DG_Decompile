/*
 * FUN_100e4c90 at 100e4c90
 * undefined FUN_100e4c90(void)
 * Address ranges: 100e4c90-100e4dcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e4c90(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  undefined1 auVar4 [16];
  
  if (param_2 < *(uint *)(param_1 + -0x591c) && param_3 != 0) {
    if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    }
    else {
      bVar1 = true;
      iVar2 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
      if (iVar2 == 0) {
        FUN_100071d0(0);
      }
    }
    iVar2 = *(int *)(*(int *)(param_1 + -0x5920) + param_2 * 4);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0xa8);
    }
    auVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                       (*(undefined4 *)(param_1 + -0x58cc),uVar3);
    (*extraout_w11)(0x437f0000,auVar4._0_8_ & 0xffffffff,auVar4._8_8_ & 0xffffffff,param_3);
    if (bVar1) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  return;
}

