/*
 * FUN_1004f60f at 1004f60f
 * undefined __cdecl FUN_1004f60f(SIZE_T param_1)
 * Address ranges: 1004f60f-1004f625
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1004f60f(SIZE_T param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,dwFlags,param_1);
  return;
}

