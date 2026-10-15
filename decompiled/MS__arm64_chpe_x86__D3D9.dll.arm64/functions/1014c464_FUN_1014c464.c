/*
 * FUN_1014c464 at 1014c464
 * undefined FUN_1014c464(void)
 * Address ranges: 1014c464-1014c4ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014c464(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1015c028)();
  }
  FUN_100e73c0(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x1014c498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

