/*
 * FUN_10131200 at 10131200
 * undefined FUN_10131200(void)
 * Address ranges: 10131200-1013123b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10131200(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10160450;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x10131234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_1016c048)(param_1[1]);
    return;
  }
  return;
}

