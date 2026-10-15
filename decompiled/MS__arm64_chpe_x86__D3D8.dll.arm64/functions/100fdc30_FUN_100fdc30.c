/*
 * FUN_100fdc30 at 100fdc30
 * undefined FUN_100fdc30(void)
 * Address ranges: 100fdc30-100fdc6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100fdc30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1012ad50;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x100fdc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_10134044)(param_1[1]);
    return;
  }
  return;
}

