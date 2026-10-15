/*
 * FUN_180060290 at 180060290
 * undefined __cdecl FUN_180060290(longlong param_1, longlong param_2)
 * Address ranges: 180060290-1800602cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180060290(longlong param_1,longlong param_2)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,8,param_1 * param_2);
  return;
}

