/*
 * thunk_FUN_100cfd6c at 100cfd92
 * undefined __cdecl thunk_FUN_100cfd6c(LPVOID param_1)
 * Address ranges: 100cfd92-100cfd96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_100cfd6c
 */

void __cdecl thunk_FUN_100cfd6c(LPVOID param_1)

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

