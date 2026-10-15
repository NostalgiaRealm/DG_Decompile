/*
 * FUN_100907c4 at 100907c4
 * undefined FUN_100907c4(void)
 * Address ranges: 100907c4-10090807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100907c4(undefined4 param_1)

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
  FUN_1004f1a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x100907f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

