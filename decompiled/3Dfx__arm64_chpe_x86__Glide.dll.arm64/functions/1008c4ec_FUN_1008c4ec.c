/*
 * FUN_1008c4ec at 1008c4ec
 * undefined FUN_1008c4ec(void)
 * Address ranges: 1008c4ec-1008c52b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008c4ec(void)

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
  FUN_1007acc0();
                    /* WARNING: Could not recover jumptable at 0x1008c518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

