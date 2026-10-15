/*
 * FUN_1005225f at 1005225f
 * undefined __cdecl FUN_1005225f(SIZE_T param_1)
 * Address ranges: 1005225f-10052275
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1005225f(SIZE_T param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,dwFlags,param_1);
  return;
}

