/*
 * FUN_10011200 at 10011200
 * undefined FUN_10011200(void)
 * Address ranges: 10011200-1001123b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10011200(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_100b1cc8;
  if ((param_2 & 1) != 0) {
    FUN_10091460(param_1,4);
  }
  return param_1;
}

