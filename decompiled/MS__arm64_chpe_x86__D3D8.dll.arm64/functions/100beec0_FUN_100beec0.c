/*
 * FUN_100beec0 at 100beec0
 * undefined FUN_100beec0(void)
 * Address ranges: 100beec0-100bef0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100beec0(int param_1)

{
  if ((DAT_1013d2b8 & 1) == 0) {
    DAT_1013d2b8 = DAT_1013d2b8 | 1;
    uRam1013d0c8 = uRam10129288;
    _DAT_1013d0c0 = _DAT_10129280;
    uRam1013d0d8 = uRam10129168;
    _DAT_1013d0d0 = _DAT_10129160;
  }
  return &DAT_1013d0c0 + param_1 * 0x10;
}

