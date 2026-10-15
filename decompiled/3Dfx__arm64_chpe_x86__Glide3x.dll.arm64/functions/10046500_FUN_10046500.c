/*
 * FUN_10046500 at 10046500
 * undefined FUN_10046500(void)
 * Address ranges: 10046500-1004653b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10046500(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10098d64;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x10046534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_100a000c)(param_1[1]);
    return;
  }
  return;
}

