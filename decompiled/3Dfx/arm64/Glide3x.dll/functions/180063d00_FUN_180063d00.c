/*
 * FUN_180063d00 at 180063d00
 * undefined __cdecl FUN_180063d00(LPVOID param_1)
 * Address ranges: 180063d00-180063d3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180063d00(LPVOID param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapFree(hHeap,0,param_1);
  return;
}

