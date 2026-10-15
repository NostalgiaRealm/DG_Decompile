/*
 * FUN_10085724 at 10085724
 * undefined FUN_10085724(void)
 * Address ranges: 10085724-1008577b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10085724(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_1009b028)();
  }
  FUN_1001ba40(param_1,unaff_w28[1],unaff_w28[2],*(undefined8 *)(unaff_w28 + 3),
               *(undefined8 *)(unaff_w28 + 5),unaff_w28[7]);
                    /* WARNING: Could not recover jumptable at 0x10085768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x20);
  return;
}

