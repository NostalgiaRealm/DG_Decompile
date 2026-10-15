/*
 * FUN_1007f774 at 1007f774
 * undefined FUN_1007f774(void)
 * Address ranges: 1007f774-1007f7b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f774(undefined4 param_1)

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
  FUN_10005e30(param_1);
                    /* WARNING: Could not recover jumptable at 0x1007f7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

