/*
 * FUN_180008750 at 180008750
 * undefined __cdecl FUN_180008750(undefined8 * param_1)
 * Address ranges: 180008750-180008783
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180008750(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_180061a40;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00018000877c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle((HANDLE)param_1[1]);
    return;
  }
  return;
}

