/*
 * FUN_1800fbdf8 at 1800fbdf8
 * LPCSTR __fastcall FUN_1800fbdf8(LPCSTR param_1)
 * Address ranges: 1800fbdf8-1800fbe1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPCSTR FUN_1800fbdf8(LPCSTR param_1)

{
  DWORD cchLength;
  
  cchLength = lstrlenA(param_1);
  CharLowerBuffA(param_1,cchLength);
  return param_1;
}

