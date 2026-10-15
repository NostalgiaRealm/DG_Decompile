/*
 * FUN_10017ce8 at 10017ce8
 * undefined FUN_10017ce8(void)
 * Address ranges: 10017ce8-10017d33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10017ce8(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((*(uint *)(param_1 + 0x2d0c) >> 1 & 1) != 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  return;
}

