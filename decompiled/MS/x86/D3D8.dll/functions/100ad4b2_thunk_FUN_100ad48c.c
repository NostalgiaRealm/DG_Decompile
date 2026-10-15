/*
 * thunk_FUN_100ad48c at 100ad4b2
 * undefined __cdecl thunk_FUN_100ad48c(LPVOID param_1)
 * Address ranges: 100ad4b2-100ad4b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_100ad48c
 */

void __cdecl thunk_FUN_100ad48c(LPVOID param_1)

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

