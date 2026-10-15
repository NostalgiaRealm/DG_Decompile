/*
 * FUN_100894ac at 100894ac
 * undefined FUN_100894ac(void)
 * Address ranges: 100894ac-100894ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100894ac(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_10097020)();
  }
  FUN_10038140(param_1,unaff_w28[1],unaff_w28[2],unaff_w28[3],unaff_w28[4],unaff_w28[5],unaff_w28[6]
               ,unaff_w28[7]);
                    /* WARNING: Could not recover jumptable at 0x100894ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x20);
  return;
}

