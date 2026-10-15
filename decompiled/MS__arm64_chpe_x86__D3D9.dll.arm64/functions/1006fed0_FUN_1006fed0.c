/*
 * FUN_1006fed0 at 1006fed0
 * undefined FUN_1006fed0(void)
 * Address ranges: 1006fed0-1006ff17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1006fed0(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1015ed04;
  FUN_1006f8c0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_10132260(param_1,0x80);
  }
  return param_1;
}

