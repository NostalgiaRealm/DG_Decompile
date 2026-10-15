/*
 * FUN_100c1140 at 100c1140
 * undefined FUN_100c1140(void)
 * Address ranges: 100c1140-100c11b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100c1140(int param_1)

{
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
  return &DAT_1013d160 + param_1 * 0x10;
}

