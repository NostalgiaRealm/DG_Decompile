/*
 * FUN_1014ce44 at 1014ce44
 * undefined FUN_1014ce44(void)
 * Address ranges: 1014ce44-1014ce8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014ce44(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_1015c028)();
  }
  FUN_100e9300(param_1,unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1014ce7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

