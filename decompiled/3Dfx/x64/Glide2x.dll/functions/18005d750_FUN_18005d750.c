/*
 * FUN_18005d750 at 18005d750
 * LPCSTR __fastcall FUN_18005d750(LPCSTR param_1)
 * Address ranges: 18005d750-18005d772
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPCSTR FUN_18005d750(LPCSTR param_1)

{
  DWORD cchLength;
  
  cchLength = lstrlenA(param_1);
  CharLowerBuffA(param_1,cchLength);
  return param_1;
}

