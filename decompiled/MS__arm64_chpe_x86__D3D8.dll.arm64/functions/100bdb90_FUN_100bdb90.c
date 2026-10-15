/*
 * FUN_100bdb90 at 100bdb90
 * undefined FUN_100bdb90(void)
 * Address ranges: 100bdb90-100bdbdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100bdb90(int param_1)

{
  if ((DAT_1013d2b0 & 1) == 0) {
    DAT_1013d2b0 = DAT_1013d2b0 | 1;
    uRam1013d088 = uRam10129288;
    _DAT_1013d080 = _DAT_10129280;
    uRam1013d098 = uRam10129138;
    _DAT_1013d090 = _DAT_10129130;
  }
  return &DAT_1013d080 + param_1 * 0x10;
}

