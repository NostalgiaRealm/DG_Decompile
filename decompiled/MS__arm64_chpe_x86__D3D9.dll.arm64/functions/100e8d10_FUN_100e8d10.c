/*
 * FUN_100e8d10 at 100e8d10
 * undefined FUN_100e8d10(void)
 * Address ranges: 100e8d10-100e8d8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e8d10(int param_1,undefined4 param_2,ulonglong param_3)

{
  undefined4 uVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  
  uVar1 = 0x8876086c;
  if ((int)param_3 != 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar1 = FUN_100d14a0(*(int *)(param_1 + 0x24) + 0x66b8,param_2,param_3 & 0xffffffff,0);
    }
    else {
      auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar1 = (*extraout_w11)(auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff,
                              param_3 & 0xffffffff);
    }
  }
  return uVar1;
}

