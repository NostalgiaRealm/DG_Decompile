/*
 * FUN_100ad475 at 100ad475
 * undefined __cdecl FUN_100ad475(SIZE_T param_1)
 * Address ranges: 100ad475-100ad48b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100ad475(SIZE_T param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,dwFlags,param_1);
  return;
}

