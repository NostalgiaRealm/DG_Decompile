/*
 * FUN_10019a90 at 10019a90
 * undefined FUN_10019a90(void)
 * Address ranges: 10019a90-10019b43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019a90(int param_1,uint param_2)

{
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x29e8) != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    *(undefined1 *)(param_1 + 0x32d0) = 1;
  }
  *(float *)(param_1 + 0x2cf0) = (float)(param_2 >> 0x18) / 255.0;
  *(float *)(param_1 + 0x2cf4) = (float)(param_2 >> 0x10 & 0xff) / 255.0;
  *(float *)(param_1 + 0x2cf8) = (float)(param_2 >> 8 & 0xff) / 255.0;
  return;
}

