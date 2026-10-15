/*
 * FUN_10019b40 at 10019b40
 * undefined FUN_10019b40(void)
 * Address ranges: 10019b40-10019be7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019b40(int param_1,uint param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(float *)(param_1 + 0x2e10) = (float)(param_2 >> 0x18);
  *(float *)(param_1 + 0x2e14) = (float)(param_2 >> 0x10 & 0xff);
  *(float *)(param_1 + 0x2e18) = (float)(param_2 >> 8 & 0xff);
  *(float *)(param_1 + 0x2e1c) = (float)(param_2 & 0xff);
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return;
}

