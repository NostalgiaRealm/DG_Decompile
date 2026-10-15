/*
 * FUN_1011b4b4 at 1011b4b4
 * undefined FUN_1011b4b4(void)
 * Address ranges: 1011b4b4-1011b4f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011b4b4(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_10127028)();
  }
  FUN_100e8e80(param_1);
                    /* WARNING: Could not recover jumptable at 0x1011b4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

