/*
 * FUN_1800a2b98 at 1800a2b98
 * undefined FUN_1800a2b98(void)
 * Address ranges: 1800a2b98-1800a2bdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800a2b98(longlong param_1,uint param_2,uint param_3)

{
  param_2 = param_2 >> (ulonglong)(param_3 & 0x1f);
  if (param_2 == 0) {
    param_2 = 1;
  }
  if ((&DAT_1802315f8)[*(uint *)(param_1 + 0x2c)] != '\0') {
    param_2 = ((byte)(&DAT_180231708)[*(uint *)(param_1 + 0x2c)] + param_2) - 1 &
              -(uint)(byte)(&DAT_180231708)[*(uint *)(param_1 + 0x2c)];
  }
  return param_2;
}

