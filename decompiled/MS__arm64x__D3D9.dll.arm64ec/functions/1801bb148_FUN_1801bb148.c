/*
 * FUN_1801bb148 at 1801bb148
 * undefined FUN_1801bb148(void)
 * Address ranges: 1801bb148-1801bb18f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801bb148(longlong param_1,uint param_2,uint param_3)

{
  param_2 = param_2 >> (ulonglong)(param_3 & 0x1f);
  if (param_2 == 0) {
    param_2 = 1;
  }
  if ((&DAT_18022db28)[*(uint *)(param_1 + 0x2c)] != '\0') {
    param_2 = ((byte)(&DAT_18022dc08)[*(uint *)(param_1 + 0x2c)] + param_2) - 1 &
              -(uint)(byte)(&DAT_18022dc08)[*(uint *)(param_1 + 0x2c)];
  }
  return param_2;
}

