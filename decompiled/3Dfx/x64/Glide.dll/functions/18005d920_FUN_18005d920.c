/*
 * FUN_18005d920 at 18005d920
 * undefined __fastcall FUN_18005d920(undefined8 * param_1)
 * Address ranges: 18005d920-18005d943
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005d920(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_180060440;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00018005d93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle((HANDLE)param_1[1]);
    return;
  }
  return;
}

