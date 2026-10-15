/*
 * FUN_1009d504 at 1009d504
 * undefined FUN_1009d504(void)
 * Address ranges: 1009d504-1009d55f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009d504(undefined4 param_1)

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
  FUN_10047810(unaff_w28[3],unaff_w28[4],unaff_w28[5],unaff_w28[6],param_1,unaff_w28[1],unaff_w28[2]
               ,unaff_w28[7],unaff_w28[8],unaff_w28[9]);
                    /* WARNING: Could not recover jumptable at 0x1009d54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x28);
  return;
}

