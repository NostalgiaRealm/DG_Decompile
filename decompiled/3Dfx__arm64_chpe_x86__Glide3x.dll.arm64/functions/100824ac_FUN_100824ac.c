/*
 * FUN_100824ac at 100824ac
 * undefined FUN_100824ac(void)
 * Address ranges: 100824ac-100824f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100824ac(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10097020)();
  }
  _grTexTextureMemRequired_8_native(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x100824e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

