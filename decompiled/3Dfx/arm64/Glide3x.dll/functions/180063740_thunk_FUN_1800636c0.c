/*
 * thunk_FUN_1800636c0 at 180063740
 * undefined __cdecl thunk_FUN_1800636c0(SIZE_T param_1)
 * Address ranges: 180063740-180063743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_1800636c0
 */

void thunk_FUN_1800636c0(SIZE_T param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,0,param_1);
  return;
}

