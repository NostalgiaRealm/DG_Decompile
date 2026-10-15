/*
 * FUN_100875fc at 100875fc
 * undefined FUN_100875fc(void)
 * Address ranges: 100875fc-1008763f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100875fc(void)

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
  _grDepthMask_4_native(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1008762c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

