/*
 * FUN_10077bf0 at 10077bf0
 * undefined FUN_10077bf0(void)
 * Address ranges: 10077bf0-10077c1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10077bf0(byte param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_2 != 0) {
    do {
      bVar1 = bVar1 + 1;
      param_1 = param_1 & 3 | param_1 << 2;
    } while (bVar1 < param_2);
  }
  return param_1;
}

