/*
 * FUN_1005c84c at 1005c84c
 * undefined __cdecl FUN_1005c84c(int param_1, int param_2)
 * Address ranges: 1005c84c-1005c867
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1005c84c(int param_1,int param_2)

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

