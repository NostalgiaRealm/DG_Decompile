/*
 * FUN_100af100 at 100af100
 * undefined FUN_100af100(void)
 * Address ranges: 100af100-100af14b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100af100(int param_1)

{
  if ((DAT_1013d2a4 & 1) == 0) {
    DAT_1013d2a4 = DAT_1013d2a4 | 1;
    uRam1013cff8 = uRam10129288;
    _DAT_1013cff0 = _DAT_10129280;
    uRam1013d008 = uRam101290b8;
    _DAT_1013d000 = _DAT_101290b0;
  }
  return &DAT_1013cff0 + param_1 * 0x10;
}

