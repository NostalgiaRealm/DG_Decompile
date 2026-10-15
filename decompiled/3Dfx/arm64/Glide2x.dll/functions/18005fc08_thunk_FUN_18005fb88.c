/*
 * thunk_FUN_18005fb88 at 18005fc08
 * undefined __cdecl thunk_FUN_18005fb88(SIZE_T param_1)
 * Address ranges: 18005fc08-18005fc0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_18005fb88
 */

void thunk_FUN_18005fb88(SIZE_T param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,0,param_1);
  return;
}

