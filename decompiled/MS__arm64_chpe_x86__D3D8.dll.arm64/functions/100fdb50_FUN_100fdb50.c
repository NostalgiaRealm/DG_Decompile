/*
 * FUN_100fdb50 at 100fdb50
 * undefined FUN_100fdb50(void)
 * Address ranges: 100fdb50-100fdbb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100fdb50(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1012ad50;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
    (*(code *)PTR_FUN_10134044)(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_100fec90(param_1,0xc);
  }
  return param_1;
}

