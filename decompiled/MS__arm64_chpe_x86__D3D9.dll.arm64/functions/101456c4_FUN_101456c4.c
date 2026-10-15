/*
 * FUN_101456c4 at 101456c4
 * undefined FUN_101456c4(void)
 * Address ranges: 101456c4-10145707
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101456c4(void)

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
  FUN_100c07d0(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x101456f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

