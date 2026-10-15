/*
 * FUN_18005fc18 at 18005fc18
 * LPCSTR __cdecl FUN_18005fc18(LPCSTR param_1)
 * Address ranges: 18005fc18-18005fc57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPCSTR FUN_18005fc18(LPCSTR param_1)

{
  DWORD cchLength;
  
  cchLength = lstrlenA(param_1);
  CharLowerBuffA(param_1,cchLength);
  return param_1;
}

