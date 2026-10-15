/*
 * thunk_FUN_10060be1 at 10060c07
 * undefined __cdecl thunk_FUN_10060be1(LPVOID param_1)
 * Address ranges: 10060c07-10060c0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_10060be1
 */

void __cdecl thunk_FUN_10060be1(LPVOID param_1)

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

