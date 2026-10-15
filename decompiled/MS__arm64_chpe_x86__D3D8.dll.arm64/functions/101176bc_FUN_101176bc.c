/*
 * FUN_101176bc at 101176bc
 * undefined FUN_101176bc(void)
 * Address ranges: 101176bc-1011776b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101176bc(void)

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
  if ((DAT_1013d2c8 & 1) == 0) {
    DAT_1013d2c8 = DAT_1013d2c8 | 1;
    uRam1013d168 = uRam10129288;
    _DAT_1013d160 = _DAT_10129280;
    uRam1013d178 = uRam101290d8;
    _DAT_1013d170 = _DAT_101290d0;
    uRam1013d188 = uRam101290e8;
    _DAT_1013d180 = _DAT_101290e0;
    uRam1013d198 = uRam10129118;
    _DAT_1013d190 = _DAT_10129110;
  }
                    /* WARNING: Could not recover jumptable at 0x10117758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

