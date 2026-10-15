/*
 * FUN_10105fd4 at 10105fd4
 * undefined FUN_10105fd4(void)
 * Address ranges: 10105fd4-1010602b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10105fd4(undefined4 param_1)

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
  FUN_10010e20(param_1,unaff_w28[1],unaff_w28[2],unaff_w28[3],unaff_w28[4],unaff_w28[5],unaff_w28[6]
               ,unaff_w28[7]);
                    /* WARNING: Could not recover jumptable at 0x10106018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x20);
  return;
}

