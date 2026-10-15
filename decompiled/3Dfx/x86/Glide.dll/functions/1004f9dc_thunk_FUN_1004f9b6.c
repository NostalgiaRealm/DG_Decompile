/*
 * thunk_FUN_1004f9b6 at 1004f9dc
 * undefined __cdecl thunk_FUN_1004f9b6(LPVOID param_1)
 * Address ranges: 1004f9dc-1004f9e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_1004f9b6
 */

void __cdecl thunk_FUN_1004f9b6(LPVOID param_1)

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

