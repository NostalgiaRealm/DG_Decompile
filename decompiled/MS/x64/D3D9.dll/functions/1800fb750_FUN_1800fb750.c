/*
 * FUN_1800fb750 at 1800fb750
 * undefined8 * __fastcall FUN_1800fb750(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 1800fb750-1800fb79e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800fb750(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1800fd628;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
    CloseHandle((HANDLE)param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

