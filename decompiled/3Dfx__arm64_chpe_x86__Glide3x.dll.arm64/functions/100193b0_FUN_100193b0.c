/*
 * FUN_100193b0 at 100193b0
 * undefined FUN_100193b0(void)
 * Address ranges: 100193b0-10019457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100193b0(int param_1,uint param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(float *)(param_1 + 0x2cc0) = (float)(param_2 >> 0x18);
  *(float *)(param_1 + 0x2cc4) = (float)(param_2 >> 0x10 & 0xff);
  *(float *)(param_1 + 0x2cc8) = (float)(param_2 >> 8 & 0xff);
  *(float *)(param_1 + 0x2ccc) = (float)(param_2 & 0xff);
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  return;
}

