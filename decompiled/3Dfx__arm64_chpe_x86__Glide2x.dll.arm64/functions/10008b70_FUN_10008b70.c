/*
 * FUN_10008b70 at 10008b70
 * undefined FUN_10008b70(void)
 * Address ranges: 10008b70-10008bab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008b70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1009478c;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x10008ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_1009d00c)(param_1[1]);
    return;
  }
  return;
}

