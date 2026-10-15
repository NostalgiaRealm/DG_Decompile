/*
 * FUN_1004fb90 at 1004fb90
 * undefined __cdecl FUN_1004fb90(LPVOID param_1)
 * Address ranges: 1004fb90-1004fba6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1004fb90(LPVOID param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapFree(hHeap,dwFlags,param_1);
  return;
}

