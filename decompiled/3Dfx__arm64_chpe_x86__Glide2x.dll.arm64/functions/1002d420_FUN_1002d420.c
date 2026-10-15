/*
 * FUN_1002d420 at 1002d420
 * undefined FUN_1002d420(void)
 * Address ranges: 1002d420-1002d4eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002d420(int param_1,ushort param_2)

{
  code *extraout_w11;
  
  FUN_1002b8d0(*(undefined4 *)(param_1 + 0x315c));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(int *)(param_1 + 0x2c60) = (int)(short)param_2;
  *(float *)(param_1 + 0x2c68) = (float)param_2 / 65535.0;
  *(float *)(param_1 + 0x2c6c) =
       1.0000153 -
       1.0000153 /
       ((float)(1 << (ulonglong)(param_2 >> 0xc)) *
       (float)(param_2 & 0xfff | 0x1000) * 0.00024414062);
  *(undefined1 *)(param_1 + 0x3150) = 1;
  return;
}

