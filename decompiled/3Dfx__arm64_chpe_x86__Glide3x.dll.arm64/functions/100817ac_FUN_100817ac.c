/*
 * FUN_100817ac at 100817ac
 * undefined FUN_100817ac(void)
 * Address ranges: 100817ac-100817fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100817ac(void)

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
  _grTextureAuxBufferExt_28_native
            (unaff_w28[1],unaff_w28[2],unaff_w28[3],unaff_w28[4],unaff_w28[5],unaff_w28[6],
             unaff_w28[7]);
                    /* WARNING: Could not recover jumptable at 0x100817e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x20);
  return;
}

