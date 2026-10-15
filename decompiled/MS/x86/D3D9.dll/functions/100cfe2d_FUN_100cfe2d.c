/*
 * FUN_100cfe2d at 100cfe2d
 * undefined __cdecl FUN_100cfe2d(LPVOID param_1)
 * Address ranges: 100cfe2d-100cfe43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100cfe2d(LPVOID param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapFree(hHeap,dwFlags,param_1);
  return;
}

