/*
 * FUN_1010ec94 at 1010ec94
 * undefined FUN_1010ec94(void)
 * Address ranges: 1010ec94-1010ecd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010ec94(undefined4 param_1)

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
  FUN_10091cd0(param_1);
                    /* WARNING: Could not recover jumptable at 0x1010ecc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

