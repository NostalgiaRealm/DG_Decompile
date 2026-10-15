/*
 * FUN_100624a0 at 100624a0
 * undefined FUN_100624a0(void)
 * Address ranges: 100624a0-100624ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100624a0(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x8e0) == 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  return 0x80004005;
}

