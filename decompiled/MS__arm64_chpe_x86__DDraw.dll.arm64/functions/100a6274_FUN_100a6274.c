/*
 * FUN_100a6274 at 100a6274
 * undefined FUN_100a6274(void)
 * Address ranges: 100a6274-100a62c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a6274(undefined4 param_1)

{
  longlong lVar1;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_100b0028)();
  }
  lVar1 = FUN_1008cba0(param_1);
                    /* WARNING: Could not recover jumptable at 0x100a62b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4,lVar1 >> 0x20 & 0xffffffff);
  return;
}

