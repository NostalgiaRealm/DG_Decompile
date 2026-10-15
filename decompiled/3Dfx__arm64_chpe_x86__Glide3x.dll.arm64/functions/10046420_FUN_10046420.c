/*
 * FUN_10046420 at 10046420
 * undefined FUN_10046420(void)
 * Address ranges: 10046420-10046487
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10046420(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_10098d64;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
    (*(code *)PTR_FUN_100a000c)(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_1007dd10(param_1,0xc);
  }
  return param_1;
}

