/*
 * FUN_10085d34 at 10085d34
 * undefined FUN_10085d34(void)
 * Address ranges: 10085d34-10085d77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10085d34(void)

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
  FUN_10024f20(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x10085d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

