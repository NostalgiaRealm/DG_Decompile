/*
 * FUN_1009ff14 at 1009ff14
 * undefined FUN_1009ff14(void)
 * Address ranges: 1009ff14-1009ff77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009ff14(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_100b0028)();
  }
  if ((undefined4 *)unaff_w28[2] != (undefined4 *)0x0) {
    *(undefined4 *)unaff_w28[2] = (int)*(undefined8 *)(*(int *)(unaff_w28[1] + 4) + 0x1b8);
  }
                    /* WARNING: Could not recover jumptable at 0x1009ff64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

