/*
 * FUN_100ad48c at 100ad48c
 * undefined __cdecl FUN_100ad48c(LPVOID param_1)
 * Address ranges: 100ad48c-100ad4a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100ad48c(LPVOID param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  if (param_1 != (LPVOID)0x0) {
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,param_1);
  }
  return;
}

