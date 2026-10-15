/*
 * FUN_10048aa0 at 10048aa0
 * undefined FUN_10048aa0(void)
 * Address ranges: 10048aa0-10048b03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048aa0(int param_1,undefined4 param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(undefined4 *)(param_1 + 0x2c48) = param_2;
  *(undefined1 *)(param_1 + 0x3150) = 1;
  return;
}

