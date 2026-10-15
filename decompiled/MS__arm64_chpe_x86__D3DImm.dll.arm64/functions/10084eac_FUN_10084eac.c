/*
 * FUN_10084eac at 10084eac
 * undefined FUN_10084eac(void)
 * Address ranges: 10084eac-10084eef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10084eac(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_1009b028)();
  }
  FUN_10013e30(param_1);
                    /* WARNING: Could not recover jumptable at 0x10084edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

