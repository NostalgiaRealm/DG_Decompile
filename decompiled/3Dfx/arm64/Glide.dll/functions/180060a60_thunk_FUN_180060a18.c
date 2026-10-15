/*
 * thunk_FUN_180060a18 at 180060a60
 * undefined __cdecl thunk_FUN_180060a18(LPVOID param_1)
 * Address ranges: 180060a60-180060a63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_180060a18
 */

void thunk_FUN_180060a18(LPVOID param_1)

{
  HANDLE hHeap;
  
  if (param_1 != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,param_1);
  }
  return;
}

