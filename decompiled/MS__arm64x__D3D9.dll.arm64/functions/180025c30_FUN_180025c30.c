/*
 * FUN_180025c30 at 180025c30
 * undefined FUN_180025c30(void)
 * Address ranges: 180025c30-180025ca7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180025c30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180233ac8;
  FUN_1800262f0();
  FUN_180034198(param_1 + 0x1ef0);
  thunk_FUN_180102fc0(param_1[0x1eea]);
  FUN_180032090(param_1 + 0x1ee5);
  *param_1 = &PTR_FUN_180233cb8;
  if ((param_2 & 1) != 0) {
    FUN_180102fc0(param_1,0x10590);
  }
  return param_1;
}

