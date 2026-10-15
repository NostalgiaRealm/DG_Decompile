/*
 * FUN_1014bbcc at 1014bbcc
 * undefined FUN_1014bbcc(void)
 * Address ranges: 1014bbcc-1014bc1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014bbcc(void)

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
                    /* WARNING: Could not recover jumptable at 0x1014bc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(9);
  return;
}

