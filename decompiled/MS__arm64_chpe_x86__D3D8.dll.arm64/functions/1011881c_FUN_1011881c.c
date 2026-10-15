/*
 * FUN_1011881c at 1011881c
 * undefined FUN_1011881c(void)
 * Address ranges: 1011881c-1011885f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011881c(undefined4 param_1)

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
  FUN_100d4710(param_1);
                    /* WARNING: Could not recover jumptable at 0x1011884c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

