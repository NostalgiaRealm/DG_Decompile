/*
 * FUN_10005000 at 10005000
 * undefined __fastcall FUN_10005000(undefined4 * param_1)
 * Address ranges: 10005000-1000501a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10005000(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10051748;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
    CloseHandle((HANDLE)param_1[1]);
  }
  return;
}

