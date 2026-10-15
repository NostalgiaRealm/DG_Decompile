/*
 * FUN_1009f78c at 1009f78c
 * undefined FUN_1009f78c(void)
 * Address ranges: 1009f78c-1009f7d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009f78c(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_100b0028)();
  }
  FUN_10052c30(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1009f7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

