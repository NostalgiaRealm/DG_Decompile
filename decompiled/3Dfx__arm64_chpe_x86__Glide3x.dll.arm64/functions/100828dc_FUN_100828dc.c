/*
 * FUN_100828dc at 100828dc
 * undefined FUN_100828dc(void)
 * Address ranges: 100828dc-1008291f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100828dc(void)

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
  _grTexDownloadTable_8_native(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x1008290c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

