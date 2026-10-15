/*
 * FUN_10091a8c at 10091a8c
 * undefined FUN_10091a8c(void)
 * Address ranges: 10091a8c-10091ad7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10091a8c(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1009d020)();
  }
  FUN_10069be0(unaff_w28[1],unaff_w28[2],unaff_w28[3]);
                    /* WARNING: Could not recover jumptable at 0x10091ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x10);
  return;
}

