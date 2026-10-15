/*
 * FUN_101197bc at 101197bc
 * undefined FUN_101197bc(void)
 * Address ranges: 101197bc-10119807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101197bc(undefined4 param_1)

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
  FUN_100e14f0(param_1,unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x101197f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

