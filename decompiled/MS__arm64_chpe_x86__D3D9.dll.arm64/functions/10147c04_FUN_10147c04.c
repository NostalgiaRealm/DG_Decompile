/*
 * FUN_10147c04 at 10147c04
 * undefined FUN_10147c04(void)
 * Address ranges: 10147c04-10147c4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10147c04(void)

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
  FUN_100d1110(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x10147c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

