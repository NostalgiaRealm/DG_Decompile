/*
 * FUN_10066130 at 10066130
 * undefined FUN_10066130(void)
 * Address ranges: 10066130-1006617f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10066130(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x8e0) == 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  return 0x80004005;
}

