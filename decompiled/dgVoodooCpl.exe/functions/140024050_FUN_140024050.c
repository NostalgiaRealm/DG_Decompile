/*
 * FUN_140024050 at 140024050
 * undefined8 * __fastcall FUN_140024050(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 140024050-14002409e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140024050(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140026360;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
    CloseHandle((HANDLE)param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_140024260(param_1);
  }
  return param_1;
}

