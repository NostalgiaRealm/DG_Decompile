/*
 * FUN_100cfe44 at 100cfe44
 * LPCSTR __cdecl FUN_100cfe44(LPCSTR param_1)
 * Address ranges: 100cfe44-100cfe5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPCSTR __cdecl FUN_100cfe44(LPCSTR param_1)

{
  DWORD cchLength;
  
  cchLength = lstrlenA(param_1);
  CharLowerBuffA(param_1,cchLength);
  return param_1;
}

