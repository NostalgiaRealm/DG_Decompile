/*
 * FUN_10085ffc at 10085ffc
 * undefined FUN_10085ffc(void)
 * Address ranges: 10085ffc-1008603f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10085ffc(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1009b028)();
  }
  FUN_1002a480(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1008602c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

