/*
 * FUN_10004cb0 at 10004cb0
 * undefined __fastcall FUN_10004cb0(undefined4 * param_1)
 * Address ranges: 10004cb0-10004cca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10004cb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10051748;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
    CloseHandle((HANDLE)param_1[1]);
  }
  return;
}

