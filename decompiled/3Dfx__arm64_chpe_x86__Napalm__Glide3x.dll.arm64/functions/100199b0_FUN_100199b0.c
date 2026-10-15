/*
 * FUN_100199b0 at 100199b0
 * undefined FUN_100199b0(void)
 * Address ranges: 100199b0-10019a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100199b0(int param_1,int param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(uint *)(param_1 + 0x2e60) = (uint)(param_2 != 0);
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return;
}

