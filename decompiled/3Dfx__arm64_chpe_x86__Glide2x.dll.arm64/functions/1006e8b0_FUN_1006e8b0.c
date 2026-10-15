/*
 * FUN_1006e8b0 at 1006e8b0
 * undefined FUN_1006e8b0(void)
 * Address ranges: 1006e8b0-1006e8df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1006e8b0(byte param_1,byte param_2)

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

