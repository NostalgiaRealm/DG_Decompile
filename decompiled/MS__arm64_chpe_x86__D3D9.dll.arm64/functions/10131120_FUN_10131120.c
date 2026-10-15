/*
 * FUN_10131120 at 10131120
 * undefined FUN_10131120(void)
 * Address ranges: 10131120-10131187
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10131120(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_10160450;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
    (*(code *)PTR_FUN_1016c048)(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_10132260(param_1,0xc);
  }
  return param_1;
}

