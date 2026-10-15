/*
 * FUN_1013b53c at 1013b53c
 * undefined FUN_1013b53c(void)
 * Address ranges: 1013b53c-1013b583
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1013b53c(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1015c028)();
  }
  FUN_1003b3e0(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1013b570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

