/*
 * FUN_100527db at 100527db
 * undefined __cdecl FUN_100527db(int param_1, int param_2)
 * Address ranges: 100527db-100527f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100527db(int param_1,int param_2)

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

