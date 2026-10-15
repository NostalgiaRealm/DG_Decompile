/*
 * FUN_100cfd6c at 100cfd6c
 * undefined __cdecl FUN_100cfd6c(LPVOID param_1)
 * Address ranges: 100cfd6c-100cfd88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100cfd6c(LPVOID param_1)

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

