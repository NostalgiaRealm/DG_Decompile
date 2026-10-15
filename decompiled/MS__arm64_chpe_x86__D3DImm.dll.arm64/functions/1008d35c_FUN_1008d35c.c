/*
 * FUN_1008d35c at 1008d35c
 * undefined FUN_1008d35c(void)
 * Address ranges: 1008d35c-1008d3a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008d35c(void)

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
  FUN_100654f0(unaff_w28[1],unaff_w28[2],unaff_w28[3]);
                    /* WARNING: Could not recover jumptable at 0x1008d394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x10);
  return;
}

