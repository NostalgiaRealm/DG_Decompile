/*
 * FUN_10047940 at 10047940
 * undefined FUN_10047940(void)
 * Address ranges: 10047940-100479b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047940(undefined4 param_1,int param_2,int param_3)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2);
  *(undefined4 *)(param_2 + param_3 * 0x180 + 0x2cec) = param_1;
  *(undefined1 *)(param_2 + 0x3150) = 1;
  return;
}

