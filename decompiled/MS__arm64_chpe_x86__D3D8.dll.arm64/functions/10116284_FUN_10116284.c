/*
 * FUN_10116284 at 10116284
 * undefined FUN_10116284(void)
 * Address ranges: 10116284-101162cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10116284(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10127028)();
  }
  FUN_100be5e0(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x101162b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

