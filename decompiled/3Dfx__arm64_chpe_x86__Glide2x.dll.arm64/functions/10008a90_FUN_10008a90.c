/*
 * FUN_10008a90 at 10008a90
 * undefined FUN_10008a90(void)
 * Address ranges: 10008a90-10008af7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10008a90(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1009478c;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
    (*(code *)PTR_FUN_1009d00c)(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_10079ff0(param_1,0xc);
  }
  return param_1;
}

