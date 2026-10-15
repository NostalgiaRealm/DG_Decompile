/*
 * FUN_10048d30 at 10048d30
 * undefined FUN_10048d30(void)
 * Address ranges: 10048d30-10048dd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048d30(int param_1,uint param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(float *)(param_1 + 0x2c20) = (float)(param_2 >> 0x18);
  *(float *)(param_1 + 0x2c24) = (float)(param_2 >> 0x10 & 0xff);
  *(float *)(param_1 + 0x2c28) = (float)(param_2 >> 8 & 0xff);
  *(float *)(param_1 + 0x2c2c) = (float)(param_2 & 0xff);
  *(undefined1 *)(param_1 + 0x3150) = 1;
  return;
}

