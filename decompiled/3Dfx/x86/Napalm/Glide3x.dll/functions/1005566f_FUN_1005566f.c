/*
 * FUN_1005566f at 1005566f
 * undefined __cdecl FUN_1005566f(SIZE_T param_1)
 * Address ranges: 1005566f-10055685
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1005566f(SIZE_T param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,dwFlags,param_1);
  return;
}

