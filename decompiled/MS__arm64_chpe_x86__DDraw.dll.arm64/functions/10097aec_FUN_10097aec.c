/*
 * FUN_10097aec at 10097aec
 * undefined FUN_10097aec(void)
 * Address ranges: 10097aec-10097b47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10097aec(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_100b0028)();
  }
                    /* WARNING: Could not recover jumptable at 0x10097b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(5);
  return;
}

