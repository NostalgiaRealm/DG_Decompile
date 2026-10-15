/*
 * FUN_180060af0 at 180060af0
 * LPCSTR __fastcall FUN_180060af0(LPCSTR param_1)
 * Address ranges: 180060af0-180060b12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPCSTR FUN_180060af0(LPCSTR param_1)

{
  DWORD cchLength;
  
  cchLength = lstrlenA(param_1);
  CharLowerBuffA(param_1,cchLength);
  return param_1;
}

