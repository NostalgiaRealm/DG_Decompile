/*
 * FUN_18005d480 at 18005d480
 * undefined __fastcall FUN_18005d480(undefined8 * param_1)
 * Address ranges: 18005d480-18005d4a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005d480(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_180060440;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00018005d49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle((HANDLE)param_1[1]);
    return;
  }
  return;
}

