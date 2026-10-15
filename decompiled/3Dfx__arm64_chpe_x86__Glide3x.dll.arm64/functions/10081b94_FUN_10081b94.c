/*
 * FUN_10081b94 at 10081b94
 * undefined FUN_10081b94(void)
 * Address ranges: 10081b94-10081bd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10081b94(void)

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
  _grChromakeyValue_4_native(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x10081bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

