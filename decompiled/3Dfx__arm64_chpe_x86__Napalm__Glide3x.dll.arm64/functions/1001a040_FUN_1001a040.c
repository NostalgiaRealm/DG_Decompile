/*
 * FUN_1001a040 at 1001a040
 * undefined FUN_1001a040(void)
 * Address ranges: 1001a040-1001a0af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001a040(int param_1,undefined4 param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(undefined4 *)(param_1 + 0x2e4c) = param_2;
  *(undefined1 *)(param_1 + 0x3650) = 1;
  *(undefined4 *)(param_1 + 0x2b24) = param_2;
  return;
}

