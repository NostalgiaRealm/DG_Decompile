/*
 * FUN_10085bb4 at 10085bb4
 * undefined FUN_10085bb4(void)
 * Address ranges: 10085bb4-10085bf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10085bb4(void)

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
  FUN_10024950(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x10085be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

