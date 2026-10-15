/*
 * FUN_100ad564 at 100ad564
 * LPCSTR __cdecl FUN_100ad564(LPCSTR param_1)
 * Address ranges: 100ad564-100ad57e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPCSTR __cdecl FUN_100ad564(LPCSTR param_1)

{
  DWORD cchLength;
  
  cchLength = lstrlenA(param_1);
  CharLowerBuffA(param_1,cchLength);
  return param_1;
}

