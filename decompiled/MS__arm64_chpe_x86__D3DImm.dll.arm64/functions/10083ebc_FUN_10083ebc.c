/*
 * FUN_10083ebc at 10083ebc
 * undefined FUN_10083ebc(void)
 * Address ranges: 10083ebc-10083eff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10083ebc(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1009b028)();
  }
  FUN_100059a0();
                    /* WARNING: Could not recover jumptable at 0x10083eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

