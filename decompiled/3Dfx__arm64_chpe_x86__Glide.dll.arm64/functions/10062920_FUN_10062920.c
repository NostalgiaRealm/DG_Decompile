/*
 * FUN_10062920 at 10062920
 * undefined FUN_10062920(void)
 * Address ranges: 10062920-1006296f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10062920(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x8e0) == 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  return 0x80004005;
}

