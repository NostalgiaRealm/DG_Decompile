/*
 * FUN_1802224d0 at 1802224d0
 * undefined FUN_1802224d0(void)
 * Address ranges: 1802224d0-1802224fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802224d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_180229168;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
    thunk_FUN_180223824(param_1[1]);
    return;
  }
  return;
}

