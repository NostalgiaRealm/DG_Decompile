/*
 * FUN_1009019c at 1009019c
 * undefined FUN_1009019c(void)
 * Address ranges: 1009019c-100901e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009019c(void)

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
  FUN_1006ada0(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x100901d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

