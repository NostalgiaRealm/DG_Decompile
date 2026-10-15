/*
 * FUN_1005c76c at 1005c76c
 * undefined __cdecl FUN_1005c76c(LPVOID param_1)
 * Address ranges: 1005c76c-1005c788
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1005c76c(LPVOID param_1)

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

