/*
 * FUN_10081b4c at 10081b4c
 * undefined FUN_10081b4c(void)
 * Address ranges: 10081b4c-10081b93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10081b4c(undefined4 param_1)

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
  FUN_1002cb10(param_1,unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x10081b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

