/*
 * FUN_10088eac at 10088eac
 * undefined FUN_10088eac(void)
 * Address ranges: 10088eac-10088ef7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10088eac(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10093020)();
  }
  FUN_10063340(unaff_w28[1],*(undefined8 *)(unaff_w28 + 2),*(undefined8 *)(unaff_w28 + 4),
               unaff_w28[6]);
                    /* WARNING: Could not recover jumptable at 0x10088ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x1c);
  return;
}

