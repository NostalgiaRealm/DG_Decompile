/*
 * FUN_10060ca2 at 10060ca2
 * LPCSTR __cdecl FUN_10060ca2(LPCSTR param_1)
 * Address ranges: 10060ca2-10060cbc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPCSTR __cdecl FUN_10060ca2(LPCSTR param_1)

{
  DWORD cchLength;
  
  cchLength = lstrlenA(param_1);
  CharLowerBuffA(param_1,cchLength);
  return param_1;
}

