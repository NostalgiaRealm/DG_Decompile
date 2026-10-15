/*
 * thunk_FUN_1004f626 at 1004f64c
 * undefined __cdecl thunk_FUN_1004f626(LPVOID param_1)
 * Address ranges: 1004f64c-1004f650
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_1004f626
 */

void __cdecl thunk_FUN_1004f626(LPVOID param_1)

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

