/*
 * FUN_180061120 at 180061120
 * undefined __cdecl FUN_180061120(LPVOID param_1)
 * Address ranges: 180061120-18006115b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180061120(LPVOID param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapFree(hHeap,0,param_1);
  return;
}

