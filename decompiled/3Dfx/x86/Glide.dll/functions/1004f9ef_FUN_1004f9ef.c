/*
 * FUN_1004f9ef at 1004f9ef
 * LPCSTR __cdecl FUN_1004f9ef(LPCSTR param_1)
 * Address ranges: 1004f9ef-1004fa09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPCSTR __cdecl FUN_1004f9ef(LPCSTR param_1)

{
  DWORD cchLength;
  
  cchLength = lstrlenA(param_1);
  CharLowerBuffA(param_1,cchLength);
  return param_1;
}

