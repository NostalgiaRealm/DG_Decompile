/*
 * FUN_1010688c at 1010688c
 * undefined FUN_1010688c(void)
 * Address ranges: 1010688c-101068d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010688c(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_10127028)();
  }
  FUN_10019b30(param_1,unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x101068c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

