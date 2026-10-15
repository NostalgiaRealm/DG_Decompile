/*
 * thunk_FUN_10052276 at 1005229c
 * undefined __cdecl thunk_FUN_10052276(LPVOID param_1)
 * Address ranges: 1005229c-100522a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_10052276
 */

void __cdecl thunk_FUN_10052276(LPVOID param_1)

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

