/*
 * FUN_10098ebc at 10098ebc
 * undefined FUN_10098ebc(void)
 * Address ranges: 10098ebc-10098f03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10098ebc(undefined4 param_1)

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
  FUN_1001f4f0(param_1,unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x10098ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

