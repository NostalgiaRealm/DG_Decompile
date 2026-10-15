/*
 * FUN_10083ecc at 10083ecc
 * undefined FUN_10083ecc(void)
 * Address ranges: 10083ecc-10083f0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10083ecc(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_10097020)();
  }
  FUN_10014ab0(param_1);
                    /* WARNING: Could not recover jumptable at 0x10083efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

