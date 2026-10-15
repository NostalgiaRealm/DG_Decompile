/*
 * FUN_101408dc at 101408dc
 * undefined FUN_101408dc(void)
 * Address ranges: 101408dc-1014091f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101408dc(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1015c028)();
  }
  FUN_1006f0b0(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1014090c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

