/*
 * FUN_1004ff20 at 1004ff20
 * undefined __cdecl FUN_1004ff20(LPVOID param_1)
 * Address ranges: 1004ff20-1004ff36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1004ff20(LPVOID param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapFree(hHeap,dwFlags,param_1);
  return;
}

