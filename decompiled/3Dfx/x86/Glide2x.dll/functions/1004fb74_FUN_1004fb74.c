/*
 * FUN_1004fb74 at 1004fb74
 * undefined __cdecl FUN_1004fb74(int param_1, int param_2)
 * Address ranges: 1004fb74-1004fb8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1004fb74(int param_1,int param_2)

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

