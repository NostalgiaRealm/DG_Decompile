/*
 * FUN_10085a94 at 10085a94
 * undefined FUN_10085a94(void)
 * Address ranges: 10085a94-10085adb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10085a94(void)

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
  FUN_1001ce80(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x10085ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

