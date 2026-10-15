/*
 * FUN_1010a734 at 1010a734
 * undefined FUN_1010a734(void)
 * Address ranges: 1010a734-1010a777
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010a734(void)

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
  FUN_10046090(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1010a764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

