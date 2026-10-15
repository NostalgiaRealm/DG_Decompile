/*
 * FUN_1008cb4c at 1008cb4c
 * undefined FUN_1008cb4c(void)
 * Address ranges: 1008cb4c-1008cb93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008cb4c(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_1009b028)();
  }
  FUN_10063390(param_1,unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1008cb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

