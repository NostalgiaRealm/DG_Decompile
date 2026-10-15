/*
 * FUN_100522af at 100522af
 * LPCSTR __cdecl FUN_100522af(LPCSTR param_1)
 * Address ranges: 100522af-100522c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPCSTR __cdecl FUN_100522af(LPCSTR param_1)

{
  DWORD cchLength;
  
  cchLength = lstrlenA(param_1);
  CharLowerBuffA(param_1,cchLength);
  return param_1;
}

