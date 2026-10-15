/*
 * FUN_1002ec40 at 1002ec40
 * undefined FUN_1002ec40(void)
 * Address ranges: 1002ec40-1002ec8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002ec40(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((*(uint *)(param_1 + 0x2b2c) >> 1 & 1) != 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  return;
}

