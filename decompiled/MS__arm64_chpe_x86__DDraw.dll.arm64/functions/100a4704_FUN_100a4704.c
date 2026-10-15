/*
 * FUN_100a4704 at 100a4704
 * undefined FUN_100a4704(void)
 * Address ranges: 100a4704-100a4757
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a4704(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_100b0028)();
  }
  FUN_100800a0(unaff_w28[1],unaff_w28[2],unaff_w28[3],unaff_w28[4],unaff_w28[5],
               *(undefined8 *)(unaff_w28 + 6),unaff_w28[8]);
                    /* WARNING: Could not recover jumptable at 0x100a4744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x24);
  return;
}

