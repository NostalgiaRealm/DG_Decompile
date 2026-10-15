/*
 * FUN_1004f626 at 1004f626
 * undefined __cdecl FUN_1004f626(LPVOID param_1)
 * Address ranges: 1004f626-1004f642
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1004f626(LPVOID param_1)

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

