/*
 * FUN_18002aa58 at 18002aa58
 * undefined __cdecl FUN_18002aa58(longlong param_1, LPCVOID param_2)
 * Address ranges: 18002aa58-18002aaaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002aa58(longlong param_1,LPCVOID param_2)

{
  CloseHandle(*(HANDLE *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  UnmapViewOfFile(param_2);
  UnmapViewOfFile(*(LPCVOID *)(param_1 + 0x58));
  return;
}

