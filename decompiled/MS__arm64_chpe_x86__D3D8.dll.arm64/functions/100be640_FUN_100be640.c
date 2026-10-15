/*
 * FUN_100be640 at 100be640
 * undefined FUN_100be640(void)
 * Address ranges: 100be640-100be68b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100be640(int param_1)

{
  if ((DAT_1013d2b4 & 1) == 0) {
    DAT_1013d2b4 = DAT_1013d2b4 | 1;
    uRam1013d0a8 = uRam10129288;
    _DAT_1013d0a0 = _DAT_10129280;
    uRam1013d0b8 = uRam10129148;
    _DAT_1013d0b0 = _DAT_10129140;
  }
  return &DAT_1013d0a0 + param_1 * 0x10;
}

