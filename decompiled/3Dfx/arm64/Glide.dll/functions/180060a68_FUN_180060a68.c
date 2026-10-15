/*
 * FUN_180060a68 at 180060a68
 * LPCSTR __cdecl FUN_180060a68(LPCSTR param_1)
 * Address ranges: 180060a68-180060aa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPCSTR FUN_180060a68(LPCSTR param_1)

{
  DWORD cchLength;
  
  cchLength = lstrlenA(param_1);
  CharLowerBuffA(param_1,cchLength);
  return param_1;
}

