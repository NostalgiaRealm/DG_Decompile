/*
 * FUN_180029c08 at 180029c08
 * undefined __cdecl FUN_180029c08(longlong param_1, LPCVOID param_2)
 * Address ranges: 180029c08-180029c5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180029c08(longlong param_1,LPCVOID param_2)

{
  CloseHandle(*(HANDLE *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  UnmapViewOfFile(param_2);
  UnmapViewOfFile(*(LPCVOID *)(param_1 + 0x58));
  return;
}

