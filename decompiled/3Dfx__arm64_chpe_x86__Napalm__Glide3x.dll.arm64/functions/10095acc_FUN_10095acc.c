/*
 * FUN_10095acc at 10095acc
 * undefined FUN_10095acc(void)
 * Address ranges: 10095acc-10095b0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10095acc(void)

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
  FUN_10083420(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x10095afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

