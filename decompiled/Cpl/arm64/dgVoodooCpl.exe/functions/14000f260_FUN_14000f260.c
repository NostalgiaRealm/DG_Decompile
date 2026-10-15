/*
 * FUN_14000f260 at 14000f260
 * undefined8 * __cdecl FUN_14000f260(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 14000f260-14000f263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_14000f260(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140028808;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
    CloseHandle((HANDLE)param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_140024830(param_1);
  }
  return param_1;
}

