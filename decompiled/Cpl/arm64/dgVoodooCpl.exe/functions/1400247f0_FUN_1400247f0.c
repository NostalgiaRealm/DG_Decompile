/*
 * FUN_1400247f0 at 1400247f0
 * undefined __cdecl FUN_1400247f0(SIZE_T param_1)
 * Address ranges: 1400247f0-14002482b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400247f0(SIZE_T param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,0,param_1);
  return;
}

