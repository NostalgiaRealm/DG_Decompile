/*
 * FUN_10047d40 at 10047d40
 * undefined FUN_10047d40(void)
 * Address ranges: 10047d40-10047dc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047d40(int param_1,int param_2,int param_3)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(uint *)(*(int *)(param_1 + param_2 * 4 + 0x3164) + 0x10) = (uint)(param_3 == 1);
  *(undefined1 *)(param_2 + param_1 + 0x3153) = 1;
  return;
}

