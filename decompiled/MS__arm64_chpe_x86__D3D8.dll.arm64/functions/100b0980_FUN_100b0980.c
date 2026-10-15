/*
 * FUN_100b0980 at 100b0980
 * undefined FUN_100b0980(void)
 * Address ranges: 100b0980-100b09f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100b0980(int param_1)

{
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
  return &DAT_1013d020 + param_1 * 0x10;
}

