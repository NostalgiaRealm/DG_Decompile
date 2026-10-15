/*
 * FUN_10110cb4 at 10110cb4
 * undefined FUN_10110cb4(void)
 * Address ranges: 10110cb4-10110cfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10110cb4(undefined4 param_1)

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
  FUN_100a02c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x10110ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

