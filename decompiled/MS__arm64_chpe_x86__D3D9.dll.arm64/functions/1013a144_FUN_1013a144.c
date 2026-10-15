/*
 * FUN_1013a144 at 1013a144
 * undefined FUN_1013a144(void)
 * Address ranges: 1013a144-1013a18b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1013a144(undefined4 param_1)

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
  FUN_1001f300(param_1,unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1013a178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

