/*
 * FUN_18001d700 at 18001d700
 * undefined __cdecl FUN_18001d700(longlong param_1, LPCVOID param_2)
 * Address ranges: 18001d700-18001d757
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d700(longlong param_1,LPCVOID param_2)

{
  CloseHandle(*(HANDLE *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  UnmapViewOfFile(param_2);
  UnmapViewOfFile(*(LPCVOID *)(param_1 + 0x58));
  return;
}

