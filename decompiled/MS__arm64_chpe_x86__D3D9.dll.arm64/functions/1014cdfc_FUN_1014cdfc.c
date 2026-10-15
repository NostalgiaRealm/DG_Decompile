/*
 * FUN_1014cdfc at 1014cdfc
 * undefined FUN_1014cdfc(void)
 * Address ranges: 1014cdfc-1014ce3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014cdfc(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_1015c028)();
  }
  FUN_100e92c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x1014ce2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

