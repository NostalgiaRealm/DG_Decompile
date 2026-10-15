/*
 * FUN_101080c4 at 101080c4
 * undefined FUN_101080c4(void)
 * Address ranges: 101080c4-10108107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101080c4(undefined4 param_1)

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
  thunk_FUN_100fffb0(param_1);
                    /* WARNING: Could not recover jumptable at 0x101080f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

