/*
 * thunk_FUN_10055686 at 100556ac
 * undefined __cdecl thunk_FUN_10055686(LPVOID param_1)
 * Address ranges: 100556ac-100556b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_10055686
 */

void __cdecl thunk_FUN_10055686(LPVOID param_1)

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

