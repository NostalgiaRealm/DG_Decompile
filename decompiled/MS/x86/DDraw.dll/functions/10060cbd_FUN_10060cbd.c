/*
 * FUN_10060cbd at 10060cbd
 * undefined __cdecl FUN_10060cbd(LPVOID param_1)
 * Address ranges: 10060cbd-10060cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10060cbd(LPVOID param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapFree(hHeap,dwFlags,param_1);
  return;
}

