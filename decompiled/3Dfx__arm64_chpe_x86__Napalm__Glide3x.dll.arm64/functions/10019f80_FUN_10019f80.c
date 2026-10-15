/*
 * FUN_10019f80 at 10019f80
 * undefined FUN_10019f80(void)
 * Address ranges: 10019f80-1001a033
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019f80(int param_1,uint param_2)

{
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x2b24) != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    *(undefined1 *)(param_1 + 0x3650) = 1;
  }
  *(float *)(param_1 + 0x2e40) = (float)(param_2 >> 0x18) / 255.0;
  *(float *)(param_1 + 0x2e44) = (float)(param_2 >> 0x10 & 0xff) / 255.0;
  *(float *)(param_1 + 0x2e48) = (float)(param_2 >> 8 & 0xff) / 255.0;
  return;
}

