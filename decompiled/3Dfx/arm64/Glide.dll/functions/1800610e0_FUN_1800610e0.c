/*
 * FUN_1800610e0 at 1800610e0
 * undefined __cdecl FUN_1800610e0(longlong param_1, longlong param_2)
 * Address ranges: 1800610e0-18006111b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800610e0(longlong param_1,longlong param_2)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,8,param_1 * param_2);
  return;
}

