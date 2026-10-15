/*
 * FUN_1006ed30 at 1006ed30
 * undefined FUN_1006ed30(void)
 * Address ranges: 1006ed30-1006ed5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1006ed30(byte param_1,byte param_2)

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

