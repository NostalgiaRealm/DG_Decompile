/*
 * FUN_1009de64 at 1009de64
 * undefined FUN_1009de64(void)
 * Address ranges: 1009de64-1009deab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009de64(void)

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
  FUN_1004d630(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x1009de98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

