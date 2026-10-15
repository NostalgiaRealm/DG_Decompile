/*
 * FUN_101386c4 at 101386c4
 * undefined FUN_101386c4(void)
 * Address ranges: 101386c4-1013870b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101386c4(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_1015c028)();
  }
  FUN_1000bc00(param_1,unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x101386f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

