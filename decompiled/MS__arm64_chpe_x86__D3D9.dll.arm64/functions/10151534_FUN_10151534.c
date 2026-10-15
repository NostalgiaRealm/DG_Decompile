/*
 * FUN_10151534 at 10151534
 * undefined FUN_10151534(void)
 * Address ranges: 10151534-10151587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10151534(void)

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
  FUN_10116c70(unaff_w28[1],unaff_w28[2],unaff_w28[3],unaff_w28[4],*(undefined8 *)(unaff_w28 + 5),
               unaff_w28[7],*(undefined8 *)(unaff_w28 + 8));
                    /* WARNING: Could not recover jumptable at 0x10151574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x28);
  return;
}

