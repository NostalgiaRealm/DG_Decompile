/*
 * FUN_100947ac at 100947ac
 * undefined FUN_100947ac(void)
 * Address ranges: 100947ac-100947f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100947ac(void)

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
  FUN_100819b0(*(undefined8 *)(unaff_w28 + 1),*(undefined8 *)(unaff_w28 + 3));
                    /* WARNING: Could not recover jumptable at 0x100947e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(5);
  return;
}

