/*
 * FUN_1008f20c at 1008f20c
 * undefined FUN_1008f20c(void)
 * Address ranges: 1008f20c-1008f253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008f20c(void)

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
  FUN_1007c0f0(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1008f240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

