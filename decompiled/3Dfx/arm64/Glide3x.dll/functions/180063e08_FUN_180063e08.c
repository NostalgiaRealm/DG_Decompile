/*
 * FUN_180063e08 at 180063e08
 * undefined __cdecl FUN_180063e08(longlong param_1, longlong param_2)
 * Address ranges: 180063e08-180063e43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180063e08(longlong param_1,longlong param_2)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,8,param_1 * param_2);
  return;
}

