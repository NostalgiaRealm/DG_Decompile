/*
 * FUN_180060850 at 180060850
 * undefined8 * __fastcall FUN_180060850(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180060850-18006089e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180060850(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1800624b8;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
    CloseHandle((HANDLE)param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_180060ac0(param_1);
  }
  return param_1;
}

