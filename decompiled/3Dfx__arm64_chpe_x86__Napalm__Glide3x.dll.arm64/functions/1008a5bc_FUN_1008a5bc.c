/*
 * FUN_1008a5bc at 1008a5bc
 * undefined FUN_1008a5bc(void)
 * Address ranges: 1008a5bc-1008a603
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008a5bc(void)

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
  FUN_1001ac20(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1008a5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

