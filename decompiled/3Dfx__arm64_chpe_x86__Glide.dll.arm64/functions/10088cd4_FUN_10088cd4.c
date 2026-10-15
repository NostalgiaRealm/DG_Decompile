/*
 * FUN_10088cd4 at 10088cd4
 * undefined FUN_10088cd4(void)
 * Address ranges: 10088cd4-10088d17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10088cd4(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10093020)();
  }
  FUN_100629e0(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x10088d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

