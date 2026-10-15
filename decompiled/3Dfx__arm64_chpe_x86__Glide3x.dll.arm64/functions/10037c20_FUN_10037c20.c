/*
 * FUN_10037c20 at 10037c20
 * undefined FUN_10037c20(void)
 * Address ranges: 10037c20-10037c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037c20(undefined4 param_1,int param_2,int param_3)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2);
  *(undefined4 *)(param_2 + param_3 * 0x1a0 + 0x2d8c) = param_1;
  *(undefined1 *)(param_2 + 0x32d0) = 1;
  return;
}

