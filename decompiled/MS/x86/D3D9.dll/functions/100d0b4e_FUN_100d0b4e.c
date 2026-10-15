/*
 * FUN_100d0b4e at 100d0b4e
 * undefined __cdecl FUN_100d0b4e(int param_1, int param_2)
 * Address ranges: 100d0b4e-100d0b69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100d0b4e(int param_1,int param_2)

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

