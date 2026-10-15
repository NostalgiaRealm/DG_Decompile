/*
 * FUN_1002e7c0 at 1002e7c0
 * undefined FUN_1002e7c0(void)
 * Address ranges: 1002e7c0-1002e80b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002e7c0(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((*(uint *)(param_1 + 0x2b2c) >> 1 & 1) != 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  return;
}

