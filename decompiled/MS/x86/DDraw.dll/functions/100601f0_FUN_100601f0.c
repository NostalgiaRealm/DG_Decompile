/*
 * FUN_100601f0 at 100601f0
 * undefined __fastcall FUN_100601f0(undefined4 * param_1)
 * Address ranges: 100601f0-1006020a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100601f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10066eac;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
    CloseHandle((HANDLE)param_1[1]);
  }
  return;
}

