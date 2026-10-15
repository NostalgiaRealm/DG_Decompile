/*
 * FUN_10037ee0 at 10037ee0
 * undefined FUN_10037ee0(void)
 * Address ranges: 10037ee0-10037f53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037ee0(int param_1,undefined1 param_2)

{
  code *extraout_w11;
  
  FUN_1001c570(*(undefined4 *)(param_1 + 0x365c));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(undefined1 *)(param_1 + 0x2d25) = param_2;
  *(undefined1 *)(param_1 + 0x2da8) = 1;
  *(undefined1 *)(param_1 + 0x2c31) = param_2;
  return;
}

