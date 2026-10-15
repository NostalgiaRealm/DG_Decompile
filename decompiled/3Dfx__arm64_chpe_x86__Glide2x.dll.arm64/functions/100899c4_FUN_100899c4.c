/*
 * FUN_100899c4 at 100899c4
 * undefined FUN_100899c4(void)
 * Address ranges: 100899c4-10089a07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100899c4(void)

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
  FUN_1006e870(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x100899f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

