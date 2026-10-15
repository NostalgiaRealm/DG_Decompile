/*
 * FUN_10087fcc at 10087fcc
 * undefined FUN_10087fcc(void)
 * Address ranges: 10087fcc-1008800f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10087fcc(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10093020)();
  }
  FUN_10061470(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x10087ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

