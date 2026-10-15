/*
 * FUN_1009f7dc at 1009f7dc
 * undefined FUN_1009f7dc(void)
 * Address ranges: 1009f7dc-1009f827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009f7dc(void)

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
  FUN_10052c70(unaff_w28[1],unaff_w28[2],unaff_w28[3]);
                    /* WARNING: Could not recover jumptable at 0x1009f814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x10);
  return;
}

