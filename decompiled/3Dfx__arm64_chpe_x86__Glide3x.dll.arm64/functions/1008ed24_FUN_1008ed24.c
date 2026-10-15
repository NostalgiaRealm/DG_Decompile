/*
 * FUN_1008ed24 at 1008ed24
 * undefined FUN_1008ed24(void)
 * Address ranges: 1008ed24-1008ed67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008ed24(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_10097020)();
  }
  FUN_100788f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x1008ed54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

