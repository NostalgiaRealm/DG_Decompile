/*
 * FUN_100944ac at 100944ac
 * undefined FUN_100944ac(void)
 * Address ranges: 100944ac-10094517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100944ac(int param_1)

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
  FUN_10083b40(unaff_w28[1],*(int *)(param_1 + unaff_w28[2] * 0xc + 400) + unaff_w28[3] * 0x14c,
               0x14c);
                    /* WARNING: Could not recover jumptable at 0x10094504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x10);
  return;
}

