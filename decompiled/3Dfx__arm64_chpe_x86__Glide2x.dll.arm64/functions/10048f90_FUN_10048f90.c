/*
 * FUN_10048f90 at 10048f90
 * undefined FUN_10048f90(void)
 * Address ranges: 10048f90-10049043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048f90(int param_1,uint param_2)

{
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x296c) != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    *(undefined1 *)(param_1 + 0x3150) = 1;
  }
  *(float *)(param_1 + 0x2c50) = (float)(param_2 >> 0x18) / 255.0;
  *(float *)(param_1 + 0x2c54) = (float)(param_2 >> 0x10 & 0xff) / 255.0;
  *(float *)(param_1 + 0x2c58) = (float)(param_2 >> 8 & 0xff) / 255.0;
  return;
}

