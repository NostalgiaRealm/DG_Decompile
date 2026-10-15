/*
 * FUN_1008c7dc at 1008c7dc
 * undefined FUN_1008c7dc(void)
 * Address ranges: 1008c7dc-1008c81f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008c7dc(undefined4 param_1)

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
  FUN_10062890(param_1);
                    /* WARNING: Could not recover jumptable at 0x1008c80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

