/*
 * FUN_1009fb0c at 1009fb0c
 * undefined FUN_1009fb0c(void)
 * Address ranges: 1009fb0c-1009fb53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009fb0c(void)

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
  FUN_10053100(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1009fb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

