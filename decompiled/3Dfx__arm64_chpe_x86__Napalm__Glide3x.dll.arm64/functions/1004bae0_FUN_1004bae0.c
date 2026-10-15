/*
 * FUN_1004bae0 at 1004bae0
 * undefined FUN_1004bae0(void)
 * Address ranges: 1004bae0-1004bb47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1004bae0(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1009f144;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
    (*(code *)PTR_FUN_100a800c)(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_100833b0(param_1,0xc);
  }
  return param_1;
}

