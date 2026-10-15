/*
 * FUN_100864ec at 100864ec
 * undefined FUN_100864ec(void)
 * Address ranges: 100864ec-10086533
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100864ec(undefined4 param_1)

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
  FUN_1002d620(param_1,unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x10086520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

