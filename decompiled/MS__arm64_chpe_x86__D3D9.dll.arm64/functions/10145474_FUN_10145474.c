/*
 * FUN_10145474 at 10145474
 * undefined FUN_10145474(void)
 * Address ranges: 10145474-101454b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10145474(void)

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
  FUN_100c0150(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x101454a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

