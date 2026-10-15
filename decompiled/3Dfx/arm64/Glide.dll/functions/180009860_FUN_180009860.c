/*
 * FUN_180009860 at 180009860
 * DWORD __cdecl FUN_180009860(longlong param_1)
 * Address ranges: 180009860-18000989f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD FUN_180009860(longlong param_1)

{
  BOOL BVar1;
  LARGE_INTEGER local_10 [2];
  
  BVar1 = GetFileSizeEx(*(HANDLE *)(param_1 + 8),local_10);
  if ((BVar1 != 0) && (local_10[0].s.HighPart == 0)) {
    return local_10[0].s.LowPart;
  }
  return 0;
}

