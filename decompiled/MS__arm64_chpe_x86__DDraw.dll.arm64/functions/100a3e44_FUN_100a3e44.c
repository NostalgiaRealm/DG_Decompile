/*
 * FUN_100a3e44 at 100a3e44
 * undefined FUN_100a3e44(void)
 * Address ranges: 100a3e44-100a3e8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a3e44(void)

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
  FUN_1007eb70(unaff_w28[1],unaff_w28[2],*(undefined8 *)(unaff_w28 + 3));
                    /* WARNING: Could not recover jumptable at 0x100a3e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x14);
  return;
}

