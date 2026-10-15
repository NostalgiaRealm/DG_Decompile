/*
 * FUN_180063750 at 180063750
 * LPCSTR __cdecl FUN_180063750(LPCSTR param_1)
 * Address ranges: 180063750-18006378f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPCSTR FUN_180063750(LPCSTR param_1)

{
  DWORD cchLength;
  
  cchLength = lstrlenA(param_1);
  CharLowerBuffA(param_1,cchLength);
  return param_1;
}

