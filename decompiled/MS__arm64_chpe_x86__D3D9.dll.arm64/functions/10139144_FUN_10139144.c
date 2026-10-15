/*
 * FUN_10139144 at 10139144
 * undefined FUN_10139144(void)
 * Address ranges: 10139144-1013918f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10139144(undefined4 param_1)

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
  FUN_1000ed20(param_1,unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x1013917c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

