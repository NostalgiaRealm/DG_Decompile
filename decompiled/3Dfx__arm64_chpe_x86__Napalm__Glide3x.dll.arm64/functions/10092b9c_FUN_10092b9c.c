/*
 * FUN_10092b9c at 10092b9c
 * undefined FUN_10092b9c(void)
 * Address ranges: 10092b9c-10092be3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10092b9c(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1009d020)();
  }
  FUN_1006c060(unaff_w28[2],unaff_w28[3],unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x10092bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x10);
  return;
}

