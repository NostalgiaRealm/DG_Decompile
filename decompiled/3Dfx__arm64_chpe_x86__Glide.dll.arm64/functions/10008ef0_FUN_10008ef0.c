/*
 * FUN_10008ef0 at 10008ef0
 * undefined FUN_10008ef0(void)
 * Address ranges: 10008ef0-10008f57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10008ef0(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_100947bc;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
    (*(code *)PTR_FUN_1009d00c)(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_1007a470(param_1,0xc);
  }
  return param_1;
}

