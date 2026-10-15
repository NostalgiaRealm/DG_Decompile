/*
 * FUN_101136d4 at 101136d4
 * undefined FUN_101136d4(void)
 * Address ranges: 101136d4-1011371f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101136d4(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10127028)();
  }
  FUN_100b0fd0(unaff_w28[1],unaff_w28[2],unaff_w28[3],unaff_w28[4]);
                    /* WARNING: Could not recover jumptable at 0x1011370c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x14);
  return;
}

