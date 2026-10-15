/*
 * FUN_1800609d8 at 1800609d8
 * undefined __cdecl FUN_1800609d8(SIZE_T param_1)
 * Address ranges: 1800609d8-180060a13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800609d8(SIZE_T param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,0,param_1);
  return;
}

