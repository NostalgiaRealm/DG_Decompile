/*
 * FUN_100ae270 at 100ae270
 * undefined __cdecl FUN_100ae270(int param_1, int param_2)
 * Address ranges: 100ae270-100ae28b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100ae270(int param_1,int param_2)

{
  SIZE_T dwBytes;
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwBytes = param_1 * param_2;
  dwFlags = 8;
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,dwFlags,dwBytes);
  return;
}

