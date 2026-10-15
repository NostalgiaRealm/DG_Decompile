/*
 * FUN_100373b0 at 100373b0
 * undefined FUN_100373b0(void)
 * Address ranges: 100373b0-10037437
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100373b0(int param_1,int param_2,int param_3)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(uint *)(*(int *)(param_1 + param_2 * 4 + 0x3664) + 0x10) = (uint)(param_3 == 1);
  *(undefined1 *)(param_2 + param_1 + 0x3653) = 1;
  return;
}

