/*
 * FUN_10086d1c at 10086d1c
 * undefined FUN_10086d1c(void)
 * Address ranges: 10086d1c-10086d5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10086d1c(void)

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
  FUN_100288d0(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x10086d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

