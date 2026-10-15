/*
 * FUN_1007f9bc at 1007f9bc
 * undefined FUN_1007f9bc(void)
 * Address ranges: 1007f9bc-1007f9ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f9bc(undefined4 param_1)

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
  FUN_10008b70(param_1);
                    /* WARNING: Could not recover jumptable at 0x1007f9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

