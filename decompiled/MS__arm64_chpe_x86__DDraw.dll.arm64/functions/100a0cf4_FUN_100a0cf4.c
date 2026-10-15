/*
 * FUN_100a0cf4 at 100a0cf4
 * undefined FUN_100a0cf4(void)
 * Address ranges: 100a0cf4-100a0d3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a0cf4(void)

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
  FUN_10054440(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x100a0d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

