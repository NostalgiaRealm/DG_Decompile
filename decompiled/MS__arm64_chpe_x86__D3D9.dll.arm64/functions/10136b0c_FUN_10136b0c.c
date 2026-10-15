/*
 * FUN_10136b0c at 10136b0c
 * undefined FUN_10136b0c(void)
 * Address ranges: 10136b0c-10136b53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10136b0c(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1015c028)();
  }
  FUN_10002a70(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x10136b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

