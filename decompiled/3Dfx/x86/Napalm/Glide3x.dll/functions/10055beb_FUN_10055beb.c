/*
 * FUN_10055beb at 10055beb
 * undefined __cdecl FUN_10055beb(int param_1, int param_2)
 * Address ranges: 10055beb-10055c06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10055beb(int param_1,int param_2)

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

