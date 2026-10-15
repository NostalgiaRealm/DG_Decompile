/*
 * FUN_1009dafc at 1009dafc
 * undefined FUN_1009dafc(void)
 * Address ranges: 1009dafc-1009db47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009dafc(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_100b0028)();
  }
  FUN_1004ad90(param_1,unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1009db34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

