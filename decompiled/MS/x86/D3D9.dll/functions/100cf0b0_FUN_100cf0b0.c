/*
 * FUN_100cf0b0 at 100cf0b0
 * undefined __fastcall FUN_100cf0b0(undefined4 * param_1)
 * Address ranges: 100cf0b0-100cf0ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100cf0b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_100d94c8;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
    CloseHandle((HANDLE)param_1[1]);
  }
  return;
}

