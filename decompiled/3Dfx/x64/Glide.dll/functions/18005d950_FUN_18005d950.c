/*
 * FUN_18005d950 at 18005d950
 * undefined8 * __fastcall FUN_18005d950(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 18005d950-18005d99e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18005d950(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180060440;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
    CloseHandle((HANDLE)param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_18005dbc0(param_1);
  }
  return param_1;
}

