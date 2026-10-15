/*
 * thunk_FUN_180063700 at 180063748
 * undefined __cdecl thunk_FUN_180063700(LPVOID param_1)
 * Address ranges: 180063748-18006374b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_180063700
 */

void thunk_FUN_180063700(LPVOID param_1)

{
  HANDLE hHeap;
  
  if (param_1 != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,param_1);
  }
  return;
}

