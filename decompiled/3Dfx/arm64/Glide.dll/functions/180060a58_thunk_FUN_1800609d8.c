/*
 * thunk_FUN_1800609d8 at 180060a58
 * undefined __cdecl thunk_FUN_1800609d8(SIZE_T param_1)
 * Address ranges: 180060a58-180060a5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_1800609d8
 */

void thunk_FUN_1800609d8(SIZE_T param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,0,param_1);
  return;
}

