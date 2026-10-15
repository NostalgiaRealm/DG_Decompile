/*
 * FUN_10087694 at 10087694
 * undefined FUN_10087694(void)
 * Address ranges: 10087694-100876d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10087694(void)

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
  FUN_1002a870(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x100876c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

