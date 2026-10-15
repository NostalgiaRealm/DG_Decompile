/*
 * FUN_10049050 at 10049050
 * undefined FUN_10049050(void)
 * Address ranges: 10049050-100490bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10049050(int param_1,undefined4 param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(undefined4 *)(param_1 + 0x2c5c) = param_2;
  *(undefined1 *)(param_1 + 0x3150) = 1;
  *(undefined4 *)(param_1 + 0x296c) = param_2;
  return;
}

