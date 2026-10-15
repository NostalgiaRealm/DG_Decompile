/*
 * FUN_1004ff04 at 1004ff04
 * undefined __cdecl FUN_1004ff04(int param_1, int param_2)
 * Address ranges: 1004ff04-1004ff1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1004ff04(int param_1,int param_2)

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

