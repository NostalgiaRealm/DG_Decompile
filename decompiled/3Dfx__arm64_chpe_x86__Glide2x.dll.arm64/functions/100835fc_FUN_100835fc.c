/*
 * FUN_100835fc at 100835fc
 * undefined FUN_100835fc(void)
 * Address ranges: 100835fc-1008363f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100835fc(void)

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
  FUN_10038a00(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1008362c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

