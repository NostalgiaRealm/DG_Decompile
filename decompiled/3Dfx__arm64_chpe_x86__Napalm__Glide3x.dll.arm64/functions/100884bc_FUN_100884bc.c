/*
 * FUN_100884bc at 100884bc
 * undefined FUN_100884bc(void)
 * Address ranges: 100884bc-100884ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100884bc(void)

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
  _grGlideSetVertexLayout_4_native(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x100884ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

