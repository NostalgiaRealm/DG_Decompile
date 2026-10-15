/*
 * FUN_10140ebc at 10140ebc
 * undefined FUN_10140ebc(void)
 * Address ranges: 10140ebc-10140f0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10140ebc(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_1015c028)();
  }
  FUN_1006ffd0(param_1,*(undefined8 *)(unaff_w28 + 1),*(undefined8 *)(unaff_w28 + 3),unaff_w28[5]);
                    /* WARNING: Could not recover jumptable at 0x10140efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x18);
  return;
}

