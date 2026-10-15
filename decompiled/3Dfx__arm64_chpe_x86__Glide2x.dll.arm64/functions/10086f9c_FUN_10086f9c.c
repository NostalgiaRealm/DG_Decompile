/*
 * FUN_10086f9c at 10086f9c
 * undefined FUN_10086f9c(void)
 * Address ranges: 10086f9c-10086fdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10086f9c(undefined4 param_1)

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
  FUN_1005a260(param_1);
                    /* WARNING: Could not recover jumptable at 0x10086fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

