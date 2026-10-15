/*
 * FUN_10060bca at 10060bca
 * undefined __cdecl FUN_10060bca(SIZE_T param_1)
 * Address ranges: 10060bca-10060be0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10060bca(SIZE_T param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,dwFlags,param_1);
  return;
}

