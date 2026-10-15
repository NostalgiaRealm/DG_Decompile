/*
 * FUN_10052768 at 10052768
 * undefined __cdecl FUN_10052768(LPVOID param_1)
 * Address ranges: 10052768-1005277e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10052768(LPVOID param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapFree(hHeap,dwFlags,param_1);
  return;
}

