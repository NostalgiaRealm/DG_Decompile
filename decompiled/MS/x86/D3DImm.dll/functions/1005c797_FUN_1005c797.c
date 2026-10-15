/*
 * FUN_1005c797 at 1005c797
 * undefined __cdecl FUN_1005c797(LPVOID param_1)
 * Address ranges: 1005c797-1005c7ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1005c797(LPVOID param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapFree(hHeap,dwFlags,param_1);
  return;
}

