/*
 * FUN_10002d00 at 10002d00
 * undefined FUN_10002d00(void)
 * Address ranges: 10002d00-10002d4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002d00(void)

{
  if (DAT_100be0c4 == '\0') {
    FUN_100914d0(_DAT_100be138 & 0xffffffff);
    _DAT_100be138 = 0;
    DAT_100be140 = 0;
    FUN_100914d0(0);
    DAT_100be0c4 = '\x01';
  }
  return;
}

