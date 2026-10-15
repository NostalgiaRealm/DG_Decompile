/*
 * FUN_10085c9c at 10085c9c
 * undefined FUN_10085c9c(void)
 * Address ranges: 10085c9c-10085cdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10085c9c(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10097020)();
  }
  FUN_10024d70(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x10085ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

