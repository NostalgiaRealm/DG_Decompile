/*
 * FUN_1001bb30 at 1001bb30
 * undefined FUN_1001bb30(void)
 * Address ranges: 1001bb30-1001bb7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1001bb30(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1009c778;
  param_1[4] = &PTR_FUN_1009c934;
  if ((param_2 & 1) != 0) {
    FUN_10081d50(param_1,0x18);
  }
  return param_1;
}

