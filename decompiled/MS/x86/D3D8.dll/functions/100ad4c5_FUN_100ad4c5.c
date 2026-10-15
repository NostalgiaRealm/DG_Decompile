/*
 * FUN_100ad4c5 at 100ad4c5
 * undefined __cdecl FUN_100ad4c5(LPVOID param_1)
 * Address ranges: 100ad4c5-100ad4db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100ad4c5(LPVOID param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapFree(hHeap,dwFlags,param_1);
  return;
}

