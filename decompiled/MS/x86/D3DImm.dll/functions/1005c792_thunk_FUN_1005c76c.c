/*
 * thunk_FUN_1005c76c at 1005c792
 * undefined __cdecl thunk_FUN_1005c76c(LPVOID param_1)
 * Address ranges: 1005c792-1005c796
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_1005c76c
 */

void __cdecl thunk_FUN_1005c76c(LPVOID param_1)

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

