/*
 * FUN_100a29bc at 100a29bc
 * undefined FUN_100a29bc(void)
 * Address ranges: 100a29bc-100a2a03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a29bc(void)

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
  FUN_10071930(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x100a29f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

