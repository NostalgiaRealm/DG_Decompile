/*
 * FUN_100e77a0 at 100e77a0
 * undefined FUN_100e77a0(void)
 * Address ranges: 100e77a0-100e77eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100e77a0(int param_1)

{
  if ((DAT_10175c74 & 1) == 0) {
    DAT_10175c74 = DAT_10175c74 | 1;
    uRam10175b60 = uRam10163250;
    _DAT_10175b58 = _DAT_10163248;
    uRam10175b70 = uRam10163240;
    _DAT_10175b68 = _DAT_10163238;
  }
  return &DAT_10175b58 + param_1 * 0x10;
}

