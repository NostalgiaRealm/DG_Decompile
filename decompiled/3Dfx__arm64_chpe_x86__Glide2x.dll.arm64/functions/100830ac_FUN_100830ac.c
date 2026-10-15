/*
 * FUN_100830ac at 100830ac
 * undefined FUN_100830ac(void)
 * Address ranges: 100830ac-100830ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100830ac(void)

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
  FUN_100370d0(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x100830dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

