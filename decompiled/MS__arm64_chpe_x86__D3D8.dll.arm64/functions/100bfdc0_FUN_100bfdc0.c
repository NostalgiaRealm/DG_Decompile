/*
 * FUN_100bfdc0 at 100bfdc0
 * undefined FUN_100bfdc0(void)
 * Address ranges: 100bfdc0-100bfe33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100bfdc0(int param_1)

{
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
  return &DAT_1013d0e0 + param_1 * 0x10;
}

