/*
 * FUN_1800602d0 at 1800602d0
 * undefined __cdecl FUN_1800602d0(LPVOID param_1)
 * Address ranges: 1800602d0-18006030b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800602d0(LPVOID param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapFree(hHeap,0,param_1);
  return;
}

