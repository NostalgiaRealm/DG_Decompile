/*
 * FUN_1004f99f at 1004f99f
 * undefined __cdecl FUN_1004f99f(SIZE_T param_1)
 * Address ranges: 1004f99f-1004f9b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1004f99f(SIZE_T param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,dwFlags,param_1);
  return;
}

