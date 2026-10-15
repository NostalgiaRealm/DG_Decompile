/*
 * FUN_100c0950 at 100c0950
 * undefined FUN_100c0950(void)
 * Address ranges: 100c0950-100c099b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100c0950(int param_1)

{
  if ((DAT_1013d2c4 & 1) == 0) {
    DAT_1013d2c4 = DAT_1013d2c4 | 1;
    uRam1013d148 = uRam10129288;
    _DAT_1013d140 = _DAT_10129280;
    uRam1013d158 = uRam10129158;
    _DAT_1013d150 = _DAT_10129150;
  }
  return &DAT_1013d140 + param_1 * 0x10;
}

