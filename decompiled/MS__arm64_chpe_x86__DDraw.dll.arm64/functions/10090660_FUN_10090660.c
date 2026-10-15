/*
 * FUN_10090660 at 10090660
 * undefined FUN_10090660(void)
 * Address ranges: 10090660-1009069b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10090660(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_100b3220;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x10090694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_100ba06c)(param_1[1]);
    return;
  }
  return;
}

