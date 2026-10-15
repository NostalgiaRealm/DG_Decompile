/*
 * FUN_10088ebc at 10088ebc
 * undefined FUN_10088ebc(void)
 * Address ranges: 10088ebc-10088f07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10088ebc(void)

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
  FUN_10062d90(unaff_w28[1],unaff_w28[2],*(undefined8 *)(unaff_w28 + 3),unaff_w28[5]);
                    /* WARNING: Could not recover jumptable at 0x10088ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x18);
  return;
}

