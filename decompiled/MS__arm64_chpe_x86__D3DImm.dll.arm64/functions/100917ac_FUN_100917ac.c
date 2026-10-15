/*
 * FUN_100917ac at 100917ac
 * undefined FUN_100917ac(void)
 * Address ranges: 100917ac-100917ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100917ac(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1009b028)();
  }
  FUN_1006bec0(unaff_w28[1],unaff_w28[2],unaff_w28[3],unaff_w28[4],unaff_w28[5],unaff_w28[6],
               unaff_w28[7],unaff_w28[8]);
                    /* WARNING: Could not recover jumptable at 0x100917ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x24);
  return;
}

