/*
 * FUN_180038c84 at 180038c84
 * undefined8 * __cdecl FUN_180038c84(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180038c84-180038cdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180038c84(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180067d78;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
    CloseHandle((HANDLE)param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_180063700(param_1);
  }
  return param_1;
}

