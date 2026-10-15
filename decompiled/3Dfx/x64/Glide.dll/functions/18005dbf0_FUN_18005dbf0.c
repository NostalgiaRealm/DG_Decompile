/*
 * FUN_18005dbf0 at 18005dbf0
 * LPCSTR __fastcall FUN_18005dbf0(LPCSTR param_1)
 * Address ranges: 18005dbf0-18005dc12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPCSTR FUN_18005dbf0(LPCSTR param_1)

{
  DWORD cchLength;
  
  cchLength = lstrlenA(param_1);
  CharLowerBuffA(param_1,cchLength);
  return param_1;
}

