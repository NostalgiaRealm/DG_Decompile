/*
 * FUN_1008dbfc at 1008dbfc
 * undefined FUN_1008dbfc(void)
 * Address ranges: 1008dbfc-1008dc43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008dbfc(void)

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
  FUN_10068fb0(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1008dc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

