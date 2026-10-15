/*
 * FUN_1011381c at 1011381c
 * undefined FUN_1011381c(void)
 * Address ranges: 1011381c-101138a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011381c(void)

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
  if ((DAT_1013d2ac & 1) == 0) {
    DAT_1013d2ac = DAT_1013d2ac | 1;
    uRam1013d068 = uRam10129288;
    _DAT_1013d060 = _DAT_10129280;
    uRam1013d078 = uRam101290c8;
    _DAT_1013d070 = _DAT_101290c0;
  }
                    /* WARNING: Could not recover jumptable at 0x10113890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

