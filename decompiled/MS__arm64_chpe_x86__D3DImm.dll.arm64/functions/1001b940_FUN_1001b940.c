/*
 * FUN_1001b940 at 1001b940
 * undefined FUN_1001b940(void)
 * Address ranges: 1001b940-1001b987
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1001b940(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1009c768;
  FUN_1001b350(param_1 + 4);
  if ((param_2 & 1) != 0) {
    FUN_10081d50(param_1,0x78);
  }
  return param_1;
}

