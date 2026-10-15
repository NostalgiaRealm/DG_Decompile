/*
 * FUN_10082f04 at 10082f04
 * undefined FUN_10082f04(void)
 * Address ranges: 10082f04-10082f4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10082f04(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10097020)();
  }
  _guFogGenerateExp2_8_native(unaff_w28[2],unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x10082f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

