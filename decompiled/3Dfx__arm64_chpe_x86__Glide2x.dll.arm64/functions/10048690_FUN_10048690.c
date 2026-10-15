/*
 * FUN_10048690 at 10048690
 * undefined FUN_10048690(void)
 * Address ranges: 10048690-1004870b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048690(int param_1,byte param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(float *)(param_1 + 0x2c84) = (float)param_2;
  *(float *)(param_1 + 0x2c4c) = (float)param_2 / 255.0;
  *(undefined1 *)(param_1 + 0x3150) = 1;
  return;
}

