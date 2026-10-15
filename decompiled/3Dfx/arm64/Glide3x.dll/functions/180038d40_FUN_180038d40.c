/*
 * FUN_180038d40 at 180038d40
 * undefined __cdecl FUN_180038d40(undefined8 * param_1)
 * Address ranges: 180038d40-180038d73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038d40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_180067d78;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000180038d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle((HANDLE)param_1[1]);
    return;
  }
  return;
}

