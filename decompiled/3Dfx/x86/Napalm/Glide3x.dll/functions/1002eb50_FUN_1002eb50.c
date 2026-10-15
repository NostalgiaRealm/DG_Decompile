/*
 * FUN_1002eb50 at 1002eb50
 * undefined __fastcall FUN_1002eb50(undefined4 * param_1)
 * Address ranges: 1002eb50-1002eb6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002eb50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10059784;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
    CloseHandle((HANDLE)param_1[1]);
  }
  return;
}

