/*
 * FUN_1007f6ec at 1007f6ec
 * undefined FUN_1007f6ec(void)
 * Address ranges: 1007f6ec-1007f733
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f6ec(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10093020)();
  }
  _guFogGenerateLinear_12_native(unaff_w28[2],unaff_w28[3],unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1007f720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x10);
  return;
}

