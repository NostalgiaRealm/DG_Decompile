/*
 * FUN_1006b830 at 1006b830
 * undefined FUN_1006b830(void)
 * Address ranges: 1006b830-1006b887
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006b830(int param_1,undefined8 param_2,ulonglong param_3)

{
  code *extraout_w11;
  undefined1 auVar1 [16];
  
  if (*(int *)(param_1 + 0x8e0) == 0) {
    auVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar1._0_8_ & 0xffffffff,auVar1._8_8_ & 0xffffffff,param_3 & 0xffffffff);
  }
  return 0x80004005;
}

