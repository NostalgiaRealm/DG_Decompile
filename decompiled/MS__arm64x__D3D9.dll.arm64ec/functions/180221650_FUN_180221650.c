/*
 * FUN_180221650 at 180221650
 * undefined FUN_180221650(void)
 * Address ranges: 180221650-1802216bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_180221650(void)

{
  ushort local_20 [8];
  
  if (DAT_18024d8c0 == '\0') {
    thunk_FUN_18022375c(local_20);
    DAT_18024d8c4 = (uint)local_20[0];
    DAT_18024d8c0 = '\x01';
  }
  DAT_18024d8c4 = DAT_180246050 + DAT_18024d8c4 * DAT_18024d8c4 & 0xffff;
  DAT_180246050 = DAT_180246050 + (DAT_18024d8c4 >> 2) & 0xffff;
  return (float)DAT_18024d8c4 / 65535.0;
}

