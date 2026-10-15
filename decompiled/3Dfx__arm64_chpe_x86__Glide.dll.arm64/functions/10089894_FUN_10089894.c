/*
 * FUN_10089894 at 10089894
 * undefined FUN_10089894(void)
 * Address ranges: 10089894-100898df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10089894(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_10093020)();
  }
  FUN_10065e40(param_1,unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x100898cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

