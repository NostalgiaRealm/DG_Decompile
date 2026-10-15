/*
 * FUN_10036f20 at 10036f20
 * undefined FUN_10036f20(void)
 * Address ranges: 10036f20-10036f93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036f20(undefined4 param_1,int param_2,int param_3)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2);
  *(undefined4 *)(param_2 + param_3 * 0x250 + 0x2f50) = param_1;
  *(undefined1 *)(param_2 + 0x3650) = 1;
  return;
}

