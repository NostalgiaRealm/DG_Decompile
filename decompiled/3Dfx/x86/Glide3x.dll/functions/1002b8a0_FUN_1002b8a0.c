/*
 * FUN_1002b8a0 at 1002b8a0
 * DWORD __fastcall FUN_1002b8a0(int param_1)
 * Address ranges: 1002b8a0-1002b8c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD __fastcall FUN_1002b8a0(int param_1)

{
  BOOL BVar1;
  LARGE_INTEGER local_c;
  
  BVar1 = GetFileSizeEx(*(HANDLE *)(param_1 + 4),&local_c);
  if ((BVar1 != 0) && (local_c.s.HighPart == 0)) {
    return local_c.s.LowPart;
  }
  return 0;
}

