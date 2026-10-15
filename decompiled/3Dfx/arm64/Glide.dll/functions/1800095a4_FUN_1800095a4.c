/*
 * FUN_1800095a4 at 1800095a4
 * undefined8 * __cdecl FUN_1800095a4(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 1800095a4-1800095fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800095a4(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180062a40;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
    CloseHandle((HANDLE)param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_180060a18(param_1);
  }
  return param_1;
}

