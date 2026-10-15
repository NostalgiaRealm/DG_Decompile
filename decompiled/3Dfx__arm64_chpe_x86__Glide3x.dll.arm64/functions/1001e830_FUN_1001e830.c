/*
 * FUN_1001e830 at 1001e830
 * undefined FUN_1001e830(void)
 * Address ranges: 1001e830-1001e8fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001e830(int param_1,ushort param_2)

{
  code *extraout_w11;
  
  FUN_1001bfa8(*(undefined4 *)(param_1 + 0x32dc));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(int *)(param_1 + 0x2d00) = (int)(short)param_2;
  *(float *)(param_1 + 0x2d08) = (float)param_2 / 65535.0;
  *(float *)(param_1 + 0x2d0c) =
       1.0000153 -
       1.0000153 /
       ((float)(1 << (ulonglong)(param_2 >> 0xc)) *
       (float)(param_2 & 0xfff | 0x1000) * 0.00024414062);
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  return;
}

