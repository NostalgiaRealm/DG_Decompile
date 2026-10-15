/*
 * FUN_100619ce at 100619ce
 * undefined __cdecl FUN_100619ce(int param_1, int param_2)
 * Address ranges: 100619ce-100619e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100619ce(int param_1,int param_2)

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

