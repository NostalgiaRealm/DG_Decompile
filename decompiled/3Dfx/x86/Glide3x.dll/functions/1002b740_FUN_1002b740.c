/*
 * FUN_1002b740 at 1002b740
 * undefined __fastcall FUN_1002b740(undefined4 * param_1)
 * Address ranges: 1002b740-1002b75a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002b740(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_100562d8;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
    CloseHandle((HANDLE)param_1[1]);
  }
  return;
}

