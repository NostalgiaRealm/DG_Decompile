/*
 * FUN_10110fd4 at 10110fd4
 * undefined FUN_10110fd4(void)
 * Address ranges: 10110fd4-1011101f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10110fd4(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_10127028)();
  }
  FUN_100a2ff0(param_1,unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x1011100c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

