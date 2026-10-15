/*
 * FUN_10087e1c at 10087e1c
 * undefined FUN_10087e1c(void)
 * Address ranges: 10087e1c-10087e63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10087e1c(void)

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
  _grTexLodBiasValue_8_native(unaff_w28[2],unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x10087e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

