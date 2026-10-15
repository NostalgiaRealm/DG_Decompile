/*
 * FUN_1010e87c at 1010e87c
 * undefined FUN_1010e87c(void)
 * Address ranges: 1010e87c-1010e8c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010e87c(undefined4 param_1)

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
  FUN_1008eff0(param_1);
                    /* WARNING: Could not recover jumptable at 0x1010e8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

