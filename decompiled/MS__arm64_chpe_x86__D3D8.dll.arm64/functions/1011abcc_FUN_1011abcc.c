/*
 * FUN_1011abcc at 1011abcc
 * undefined FUN_1011abcc(void)
 * Address ranges: 1011abcc-1011ac23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011abcc(void)

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
  FUN_100e45a0(unaff_w28[1],unaff_w28[2],*(undefined8 *)(unaff_w28 + 3),unaff_w28[5],
               *(undefined8 *)(unaff_w28 + 6),unaff_w28[8],unaff_w28[9],unaff_w28[10]);
                    /* WARNING: Could not recover jumptable at 0x1011ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x2c);
  return;
}

