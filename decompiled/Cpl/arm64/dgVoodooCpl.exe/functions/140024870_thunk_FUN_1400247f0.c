/*
 * thunk_FUN_1400247f0 at 140024870
 * undefined __cdecl thunk_FUN_1400247f0(SIZE_T param_1)
 * Address ranges: 140024870-140024873
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_1400247f0
 */

void thunk_FUN_1400247f0(SIZE_T param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,0,param_1);
  return;
}

