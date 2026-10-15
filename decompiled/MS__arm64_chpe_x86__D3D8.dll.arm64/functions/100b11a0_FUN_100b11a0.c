/*
 * FUN_100b11a0 at 100b11a0
 * undefined FUN_100b11a0(void)
 * Address ranges: 100b11a0-100b11eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100b11a0(int param_1)

{
  if ((DAT_1013d2ac & 1) == 0) {
    DAT_1013d2ac = DAT_1013d2ac | 1;
    uRam1013d068 = uRam10129288;
    _DAT_1013d060 = _DAT_10129280;
    uRam1013d078 = uRam101290c8;
    _DAT_1013d070 = _DAT_101290c0;
  }
  return &DAT_1013d060 + param_1 * 0x10;
}

