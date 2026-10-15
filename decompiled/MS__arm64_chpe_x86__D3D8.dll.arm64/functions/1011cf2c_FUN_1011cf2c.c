/*
 * FUN_1011cf2c at 1011cf2c
 * undefined FUN_1011cf2c(void)
 * Address ranges: 1011cf2c-1011cf77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011cf2c(void)

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
  FUN_100fb990(unaff_w28[1],unaff_w28[2],unaff_w28[3],unaff_w28[4]);
                    /* WARNING: Could not recover jumptable at 0x1011cf64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x14);
  return;
}

