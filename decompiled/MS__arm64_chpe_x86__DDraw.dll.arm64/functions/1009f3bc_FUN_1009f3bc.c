/*
 * FUN_1009f3bc at 1009f3bc
 * undefined FUN_1009f3bc(void)
 * Address ranges: 1009f3bc-1009f403
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009f3bc(void)

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
  FUN_10052800(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1009f3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

