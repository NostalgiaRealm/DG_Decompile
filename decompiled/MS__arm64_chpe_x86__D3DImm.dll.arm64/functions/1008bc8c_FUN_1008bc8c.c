/*
 * FUN_1008bc8c at 1008bc8c
 * undefined FUN_1008bc8c(void)
 * Address ranges: 1008bc8c-1008bcdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008bc8c(undefined4 param_1)

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
  FUN_1005e150(param_1,unaff_w28[1],*(undefined8 *)(unaff_w28 + 2),unaff_w28[4]);
                    /* WARNING: Could not recover jumptable at 0x1008bcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x14);
  return;
}

