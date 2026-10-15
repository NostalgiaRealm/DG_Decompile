/*
 * FUN_10098d24 at 10098d24
 * undefined FUN_10098d24(void)
 * Address ranges: 10098d24-10098d7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10098d24(undefined4 param_1)

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
  FUN_1001bae0(unaff_w28[5],unaff_w28[6],unaff_w28[7],unaff_w28[8],param_1,unaff_w28[1],unaff_w28[2]
               ,unaff_w28[3],unaff_w28[4]);
                    /* WARNING: Could not recover jumptable at 0x10098d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x24);
  return;
}

