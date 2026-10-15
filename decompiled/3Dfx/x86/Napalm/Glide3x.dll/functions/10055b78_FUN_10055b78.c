/*
 * FUN_10055b78 at 10055b78
 * undefined __cdecl FUN_10055b78(LPVOID param_1)
 * Address ranges: 10055b78-10055b8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10055b78(LPVOID param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapFree(hHeap,dwFlags,param_1);
  return;
}

