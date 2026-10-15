/*
 * FUN_10060be1 at 10060be1
 * undefined __cdecl FUN_10060be1(LPVOID param_1)
 * Address ranges: 10060be1-10060bfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10060be1(LPVOID param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  if (param_1 != (LPVOID)0x0) {
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,param_1);
  }
  return;
}

