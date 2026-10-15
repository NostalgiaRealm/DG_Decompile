/*
 * FUN_10055686 at 10055686
 * undefined __cdecl FUN_10055686(LPVOID param_1)
 * Address ranges: 10055686-100556a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10055686(LPVOID param_1)

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

