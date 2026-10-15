/*
 * FUN_1009cd44 at 1009cd44
 * undefined FUN_1009cd44(void)
 * Address ranges: 1009cd44-1009cd87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009cd44(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_100b0028)();
  }
  FUN_10041b60(param_1);
                    /* WARNING: Could not recover jumptable at 0x1009cd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

