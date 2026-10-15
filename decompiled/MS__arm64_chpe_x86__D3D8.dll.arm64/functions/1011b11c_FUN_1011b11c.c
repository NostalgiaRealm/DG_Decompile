/*
 * FUN_1011b11c at 1011b11c
 * undefined FUN_1011b11c(void)
 * Address ranges: 1011b11c-1011b15f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011b11c(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10127028)();
  }
  FUN_100e4e60(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x1011b14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

