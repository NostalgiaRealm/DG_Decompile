/*
 * FUN_1009307c at 1009307c
 * undefined FUN_1009307c(void)
 * Address ranges: 1009307c-100930cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009307c(undefined4 param_1)

{
  longlong lVar1;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_1009b028)();
  }
  lVar1 = FUN_100764c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x100930b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4,lVar1 >> 0x20 & 0xffffffff);
  return;
}

