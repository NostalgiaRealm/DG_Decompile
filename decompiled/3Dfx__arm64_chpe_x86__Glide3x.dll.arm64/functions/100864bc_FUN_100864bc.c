/*
 * FUN_100864bc at 100864bc
 * undefined FUN_100864bc(void)
 * Address ranges: 100864bc-100864ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100864bc(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10097020)();
  }
  FUN_10027060(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x100864ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

