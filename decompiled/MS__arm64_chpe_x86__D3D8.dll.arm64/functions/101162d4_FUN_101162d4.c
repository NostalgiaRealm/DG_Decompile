/*
 * FUN_101162d4 at 101162d4
 * undefined FUN_101162d4(void)
 * Address ranges: 101162d4-1011635b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101162d4(void)

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
  if ((DAT_1013d2b4 & 1) == 0) {
    DAT_1013d2b4 = DAT_1013d2b4 | 1;
    uRam1013d0a8 = uRam10129288;
    _DAT_1013d0a0 = _DAT_10129280;
    uRam1013d0b8 = uRam10129148;
    _DAT_1013d0b0 = _DAT_10129140;
  }
                    /* WARNING: Could not recover jumptable at 0x10116348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

