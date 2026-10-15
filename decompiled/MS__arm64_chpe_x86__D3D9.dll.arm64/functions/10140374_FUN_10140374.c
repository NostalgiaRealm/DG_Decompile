/*
 * FUN_10140374 at 10140374
 * undefined FUN_10140374(void)
 * Address ranges: 10140374-101403b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10140374(void)

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
  FUN_1006d900(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x101403a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

