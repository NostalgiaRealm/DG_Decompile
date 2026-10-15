/*
 * FUN_10145804 at 10145804
 * undefined FUN_10145804(void)
 * Address ranges: 10145804-1014585f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10145804(void)

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
                    /* WARNING: Could not recover jumptable at 0x1014584c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(5);
  return;
}

