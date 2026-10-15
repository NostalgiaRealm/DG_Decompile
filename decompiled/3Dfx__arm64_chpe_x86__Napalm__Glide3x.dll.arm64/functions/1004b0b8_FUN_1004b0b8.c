/*
 * FUN_1004b0b8 at 1004b0b8
 * undefined FUN_1004b0b8(void)
 * Address ranges: 1004b0b8-1004b12f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_1004b0b8(void)

{
  ushort local_20 [8];
  
  if (DAT_100aaaf8 == '\0') {
    (*(code *)PTR_FUN_100a80b0)(local_20);
    DAT_100aaaf4 = (uint)local_20[0];
    DAT_100aaaf8 = '\x01';
  }
  DAT_100aaaf4 = DAT_100aa628 + DAT_100aaaf4 * DAT_100aaaf4 & 0xffff;
  DAT_100aa628 = DAT_100aa628 + (DAT_100aaaf4 >> 2) & 0xffff;
  return (float)DAT_100aaaf4 / 65535.0;
}

