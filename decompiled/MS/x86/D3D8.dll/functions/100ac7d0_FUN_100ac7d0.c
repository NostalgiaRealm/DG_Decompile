/*
 * FUN_100ac7d0 at 100ac7d0
 * undefined __fastcall FUN_100ac7d0(undefined4 * param_1)
 * Address ranges: 100ac7d0-100ac7ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100ac7d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_100b5a70;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
    CloseHandle((HANDLE)param_1[1]);
  }
  return;
}

