/*
 * FUN_10052276 at 10052276
 * undefined __cdecl FUN_10052276(LPVOID param_1)
 * Address ranges: 10052276-10052292
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10052276(LPVOID param_1)

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

