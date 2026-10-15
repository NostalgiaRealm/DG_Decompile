/*
 * FUN_10080064 at 10080064
 * undefined FUN_10080064(void)
 * Address ranges: 10080064-100800af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10080064(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_10093020)();
  }
  FUN_1000a300(param_1,unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1008009c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

