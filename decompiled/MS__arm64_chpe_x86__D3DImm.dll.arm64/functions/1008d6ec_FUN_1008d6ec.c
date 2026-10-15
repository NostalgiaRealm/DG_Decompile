/*
 * FUN_1008d6ec at 1008d6ec
 * undefined FUN_1008d6ec(void)
 * Address ranges: 1008d6ec-1008d72f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008d6ec(undefined4 param_1)

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
  FUN_10066070(param_1);
                    /* WARNING: Could not recover jumptable at 0x1008d71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

