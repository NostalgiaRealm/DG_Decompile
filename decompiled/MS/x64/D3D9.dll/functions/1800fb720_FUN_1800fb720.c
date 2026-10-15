/*
 * FUN_1800fb720 at 1800fb720
 * undefined __fastcall FUN_1800fb720(undefined8 * param_1)
 * Address ranges: 1800fb720-1800fb743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fb720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1800fd628;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001800fb73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle((HANDLE)param_1[1]);
    return;
  }
  return;
}

