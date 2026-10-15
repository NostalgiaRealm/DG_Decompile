/*
 * FUN_1008f33c at 1008f33c
 * undefined FUN_1008f33c(void)
 * Address ranges: 1008f33c-1008f38f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008f33c(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_10097020)();
  }
  FUN_1007ce40(param_1,unaff_w28[1],unaff_w28[2],unaff_w28[3],*(undefined8 *)(unaff_w28 + 4));
                    /* WARNING: Could not recover jumptable at 0x1008f37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x18);
  return;
}

