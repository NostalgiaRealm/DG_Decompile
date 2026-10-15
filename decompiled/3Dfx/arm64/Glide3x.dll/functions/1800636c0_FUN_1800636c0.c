/*
 * FUN_1800636c0 at 1800636c0
 * undefined __cdecl FUN_1800636c0(SIZE_T param_1)
 * Address ranges: 1800636c0-1800636fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800636c0(SIZE_T param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,0,param_1);
  return;
}

