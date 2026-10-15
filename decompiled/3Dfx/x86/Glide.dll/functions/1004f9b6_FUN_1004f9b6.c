/*
 * FUN_1004f9b6 at 1004f9b6
 * undefined __cdecl FUN_1004f9b6(LPVOID param_1)
 * Address ranges: 1004f9b6-1004f9d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1004f9b6(LPVOID param_1)

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

