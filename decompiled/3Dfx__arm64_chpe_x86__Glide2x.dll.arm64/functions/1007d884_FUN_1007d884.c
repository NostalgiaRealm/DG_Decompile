/*
 * FUN_1007d884 at 1007d884
 * undefined FUN_1007d884(void)
 * Address ranges: 1007d884-1007d8c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007d884(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10093020)();
  }
  _grBufferNumPending_0_native();
                    /* WARNING: Could not recover jumptable at 0x1007d8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

