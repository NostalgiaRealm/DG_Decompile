/*
 * FUN_10116a84 at 10116a84
 * undefined FUN_10116a84(void)
 * Address ranges: 10116a84-10116b33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116a84(void)

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
  if ((DAT_1013d2bc & 1) == 0) {
    DAT_1013d2bc = DAT_1013d2bc | 1;
    uRam1013d0e8 = uRam10129288;
    _DAT_1013d0e0 = _DAT_10129280;
    uRam1013d0f8 = uRam101290d8;
    _DAT_1013d0f0 = _DAT_101290d0;
    uRam1013d108 = uRam101290e8;
    _DAT_1013d100 = _DAT_101290e0;
    uRam1013d118 = uRam101290f8;
    _DAT_1013d110 = _DAT_101290f0;
  }
                    /* WARNING: Could not recover jumptable at 0x10116b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

