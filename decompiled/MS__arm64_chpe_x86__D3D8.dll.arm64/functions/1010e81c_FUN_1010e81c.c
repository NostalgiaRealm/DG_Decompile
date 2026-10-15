/*
 * FUN_1010e81c at 1010e81c
 * undefined FUN_1010e81c(void)
 * Address ranges: 1010e81c-1010e877
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010e81c(void)

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
                    /* WARNING: Could not recover jumptable at 0x1010e864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(5);
  return;
}

