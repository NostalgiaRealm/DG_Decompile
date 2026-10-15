/*
 * FUN_10117254 at 10117254
 * undefined FUN_10117254(void)
 * Address ranges: 10117254-101172db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117254(void)

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
  if ((DAT_1013d2c4 & 1) == 0) {
    DAT_1013d2c4 = DAT_1013d2c4 | 1;
    uRam1013d148 = uRam10129288;
    _DAT_1013d140 = _DAT_10129280;
    uRam1013d158 = uRam10129158;
    _DAT_1013d150 = _DAT_10129150;
  }
                    /* WARNING: Could not recover jumptable at 0x101172c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

