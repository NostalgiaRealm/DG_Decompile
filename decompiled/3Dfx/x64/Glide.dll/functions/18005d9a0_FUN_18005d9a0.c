/*
 * FUN_18005d9a0 at 18005d9a0
 * DWORD __fastcall FUN_18005d9a0(longlong param_1)
 * Address ranges: 18005d9a0-18005d9cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD FUN_18005d9a0(longlong param_1)

{
  BOOL BVar1;
  LARGE_INTEGER local_res8 [4];
  
  BVar1 = GetFileSizeEx(*(HANDLE *)(param_1 + 8),local_res8);
  if ((BVar1 != 0) && (local_res8[0].s.HighPart == 0)) {
    return local_res8[0].s.LowPart;
  }
  return 0;
}

