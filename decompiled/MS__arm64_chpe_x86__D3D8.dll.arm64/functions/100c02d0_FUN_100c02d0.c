/*
 * FUN_100c02d0 at 100c02d0
 * undefined FUN_100c02d0(void)
 * Address ranges: 100c02d0-100c031b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100c02d0(int param_1)

{
  if ((DAT_1013d2c0 & 1) == 0) {
    DAT_1013d2c0 = DAT_1013d2c0 | 1;
    uRam1013d128 = uRam10129288;
    _DAT_1013d120 = _DAT_10129280;
    uRam1013d138 = uRam10129128;
    _DAT_1013d130 = _DAT_10129120;
  }
  return &DAT_1013d120 + param_1 * 0x10;
}

