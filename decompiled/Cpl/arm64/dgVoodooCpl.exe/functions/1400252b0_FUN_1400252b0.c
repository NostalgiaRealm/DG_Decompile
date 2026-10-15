/*
 * FUN_1400252b0 at 1400252b0
 * undefined __cdecl FUN_1400252b0(LPVOID param_1)
 * Address ranges: 1400252b0-1400252eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400252b0(LPVOID param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapFree(hHeap,0,param_1);
  return;
}

