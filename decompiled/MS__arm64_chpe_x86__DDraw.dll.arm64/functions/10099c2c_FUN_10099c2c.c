/*
 * FUN_10099c2c at 10099c2c
 * undefined FUN_10099c2c(void)
 * Address ranges: 10099c2c-10099c87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10099c2c(void)

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
                    /* WARNING: Could not recover jumptable at 0x10099c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(5);
  return;
}

