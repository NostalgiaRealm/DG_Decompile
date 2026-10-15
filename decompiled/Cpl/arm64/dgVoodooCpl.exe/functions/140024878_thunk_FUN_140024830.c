/*
 * thunk_FUN_140024830 at 140024878
 * undefined __cdecl thunk_FUN_140024830(LPVOID param_1)
 * Address ranges: 140024878-14002487b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_140024830
 */

void thunk_FUN_140024830(LPVOID param_1)

{
  HANDLE hHeap;
  
  if (param_1 != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,param_1);
  }
  return;
}

