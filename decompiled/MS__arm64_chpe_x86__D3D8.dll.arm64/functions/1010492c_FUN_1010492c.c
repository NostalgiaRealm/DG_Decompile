/*
 * FUN_1010492c at 1010492c
 * undefined FUN_1010492c(void)
 * Address ranges: 1010492c-1010497b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010492c(undefined4 param_1)

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
  FUN_10008df0(param_1,unaff_w28[1],unaff_w28[2],unaff_w28[3]);
                    /* WARNING: Could not recover jumptable at 0x10104968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x10);
  return;
}

