/*
 * FUN_10090580 at 10090580
 * undefined FUN_10090580(void)
 * Address ranges: 10090580-100905e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10090580(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_100b3220;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
    (*(code *)PTR_FUN_100ba06c)(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_10091460(param_1,0xc);
  }
  return param_1;
}

