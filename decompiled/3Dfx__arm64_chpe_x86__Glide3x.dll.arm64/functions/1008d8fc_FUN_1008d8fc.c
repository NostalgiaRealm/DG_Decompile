/*
 * FUN_1008d8fc at 1008d8fc
 * undefined FUN_1008d8fc(void)
 * Address ranges: 1008d8fc-1008d93f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008d8fc(void)

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
  FUN_100735c0(unaff_w28 + 1);
                    /* WARNING: Could not recover jumptable at 0x1008d92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

