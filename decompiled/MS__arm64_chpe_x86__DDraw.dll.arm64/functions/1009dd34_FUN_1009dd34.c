/*
 * FUN_1009dd34 at 1009dd34
 * undefined FUN_1009dd34(void)
 * Address ranges: 1009dd34-1009dd77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009dd34(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_100b0028)();
  }
  FUN_1004c930(param_1);
                    /* WARNING: Could not recover jumptable at 0x1009dd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

