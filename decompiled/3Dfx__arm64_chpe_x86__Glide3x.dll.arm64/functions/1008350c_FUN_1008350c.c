/*
 * FUN_1008350c at 1008350c
 * undefined FUN_1008350c(void)
 * Address ranges: 1008350c-10083573
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008350c(int param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  uint uVar1;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_10097020)();
  }
  uVar1 = unaff_w28[2];
  *(uint *)(param_1 + 0x2bb0) = unaff_w28[1];
  *(uint *)(param_1 + 0x2bb4) = uVar1;
  *(undefined1 *)(param_1 + 0x2c64) = 1;
                    /* WARNING: Could not recover jumptable at 0x10083560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

