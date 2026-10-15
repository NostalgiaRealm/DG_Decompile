/*
 * FUN_100a6c8c at 100a6c8c
 * undefined FUN_100a6c8c(void)
 * Address ranges: 100a6c8c-100a6ccf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a6c8c(void)

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
  FUN_10091410(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x100a6cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

