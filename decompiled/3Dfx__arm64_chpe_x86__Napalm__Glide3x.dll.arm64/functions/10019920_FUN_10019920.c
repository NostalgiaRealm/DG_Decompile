/*
 * FUN_10019920 at 10019920
 * undefined FUN_10019920(void)
 * Address ranges: 10019920-1001999b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019920(int param_1,byte param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(float *)(param_1 + 0x2e74) = (float)param_2;
  *(float *)(param_1 + 0x2e3c) = (float)param_2 / 255.0;
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return;
}

