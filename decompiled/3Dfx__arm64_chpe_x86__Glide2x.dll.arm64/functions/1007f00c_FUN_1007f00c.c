/*
 * FUN_1007f00c at 1007f00c
 * undefined FUN_1007f00c(void)
 * Address ranges: 1007f00c-1007f053
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f00c(void)

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
  _guFogTableIndexToW_4_native(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1007f040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(9);
  return;
}

