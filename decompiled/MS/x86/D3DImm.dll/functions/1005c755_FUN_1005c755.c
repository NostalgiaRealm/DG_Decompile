/*
 * FUN_1005c755 at 1005c755
 * undefined __cdecl FUN_1005c755(SIZE_T param_1)
 * Address ranges: 1005c755-1005c76b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1005c755(SIZE_T param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,dwFlags,param_1);
  return;
}

