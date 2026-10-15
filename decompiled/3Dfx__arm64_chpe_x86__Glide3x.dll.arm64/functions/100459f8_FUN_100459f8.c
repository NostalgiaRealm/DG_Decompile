/*
 * FUN_100459f8 at 100459f8
 * undefined FUN_100459f8(void)
 * Address ranges: 100459f8-10045a6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_100459f8(void)

{
  ushort local_20 [8];
  
  if (DAT_100a2928 == '\0') {
    (*(code *)PTR_FUN_100a00b0)(local_20);
    DAT_100a2924 = (uint)local_20[0];
    DAT_100a2928 = '\x01';
  }
  DAT_100a2924 = DAT_100a2458 + DAT_100a2924 * DAT_100a2924 & 0xffff;
  DAT_100a2458 = DAT_100a2458 + (DAT_100a2924 >> 2) & 0xffff;
  return (float)DAT_100a2924 / 65535.0;
}

