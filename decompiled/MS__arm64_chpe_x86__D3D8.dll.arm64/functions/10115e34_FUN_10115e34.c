/*
 * FUN_10115e34 at 10115e34
 * undefined FUN_10115e34(void)
 * Address ranges: 10115e34-10115ebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10115e34(void)

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
  if ((DAT_1013d2b0 & 1) == 0) {
    DAT_1013d2b0 = DAT_1013d2b0 | 1;
    uRam1013d088 = uRam10129288;
    _DAT_1013d080 = _DAT_10129280;
    uRam1013d098 = uRam10129138;
    _DAT_1013d090 = _DAT_10129130;
  }
                    /* WARNING: Could not recover jumptable at 0x10115ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

