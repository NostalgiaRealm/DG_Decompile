/*
 * FUN_140024020 at 140024020
 * undefined __fastcall FUN_140024020(undefined8 * param_1)
 * Address ranges: 140024020-140024043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140024020(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_140026360;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014002403c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle((HANDLE)param_1[1]);
    return;
  }
  return;
}

