/*
 * FUN_10113114 at 10113114
 * undefined FUN_10113114(void)
 * Address ranges: 10113114-101131c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10113114(void)

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
  if ((DAT_1013d2a8 & 1) == 0) {
    DAT_1013d2a8 = DAT_1013d2a8 | 1;
    uRam1013d028 = uRam10129288;
    _DAT_1013d020 = _DAT_10129280;
    uRam1013d038 = uRam101290d8;
    _DAT_1013d030 = _DAT_101290d0;
    uRam1013d048 = uRam101290e8;
    _DAT_1013d040 = _DAT_101290e0;
    uRam1013d058 = uRam10129108;
    _DAT_1013d050 = _DAT_10129100;
  }
                    /* WARNING: Could not recover jumptable at 0x101131b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

