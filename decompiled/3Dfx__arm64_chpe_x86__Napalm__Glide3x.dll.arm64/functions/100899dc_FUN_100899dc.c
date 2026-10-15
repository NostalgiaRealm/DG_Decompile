/*
 * FUN_100899dc at 100899dc
 * undefined FUN_100899dc(void)
 * Address ranges: 100899dc-10089a1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100899dc(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_1009d020)();
  }
  FUN_10014f30(param_1);
                    /* WARNING: Could not recover jumptable at 0x10089a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

