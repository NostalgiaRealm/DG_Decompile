/*
 * FUN_100892ac at 100892ac
 * undefined FUN_100892ac(void)
 * Address ranges: 100892ac-100892ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100892ac(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10093020)();
  }
  FUN_10063470(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x100892dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

