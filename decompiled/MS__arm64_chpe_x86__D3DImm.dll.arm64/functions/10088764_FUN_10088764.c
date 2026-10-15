/*
 * FUN_10088764 at 10088764
 * undefined FUN_10088764(void)
 * Address ranges: 10088764-100887ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10088764(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1009b028)();
  }
  FUN_1004f120(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x10088798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

