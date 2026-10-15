/*
 * FUN_1011591c at 1011591c
 * undefined FUN_1011591c(void)
 * Address ranges: 1011591c-10115963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011591c(void)

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
  FUN_100bc550(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x10115950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

