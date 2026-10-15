/*
 * FUN_10008fd0 at 10008fd0
 * undefined FUN_10008fd0(void)
 * Address ranges: 10008fd0-1000900b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008fd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_100947bc;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x10009004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_1009d00c)(param_1[1]);
    return;
  }
  return;
}

