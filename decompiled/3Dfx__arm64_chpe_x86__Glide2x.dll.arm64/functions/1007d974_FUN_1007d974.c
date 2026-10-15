/*
 * FUN_1007d974 at 1007d974
 * undefined FUN_1007d974(void)
 * Address ranges: 1007d974-1007d9b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007d974(void)

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
  _grSstIdle_0_native();
                    /* WARNING: Could not recover jumptable at 0x1007d9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

