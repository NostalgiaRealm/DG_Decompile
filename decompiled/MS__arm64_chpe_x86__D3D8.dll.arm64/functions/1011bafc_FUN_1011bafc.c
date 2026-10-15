/*
 * FUN_1011bafc at 1011bafc
 * undefined FUN_1011bafc(void)
 * Address ranges: 1011bafc-1011bb43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011bafc(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10127028)();
  }
  FUN_100f0140(unaff_w28[1],unaff_w28[2]);
                    /* WARNING: Could not recover jumptable at 0x1011bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

