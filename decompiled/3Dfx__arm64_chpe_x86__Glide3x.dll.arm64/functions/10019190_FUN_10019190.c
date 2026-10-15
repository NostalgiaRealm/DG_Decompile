/*
 * FUN_10019190 at 10019190
 * undefined FUN_10019190(void)
 * Address ranges: 10019190-1001920b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019190(int param_1,byte param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(float *)(param_1 + 0x2d24) = (float)param_2;
  *(float *)(param_1 + 0x2cec) = (float)param_2 / 255.0;
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  return;
}

