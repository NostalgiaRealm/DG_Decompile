/*
 * FUN_100cfd55 at 100cfd55
 * undefined __cdecl FUN_100cfd55(SIZE_T param_1)
 * Address ranges: 100cfd55-100cfd6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100cfd55(SIZE_T param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,dwFlags,param_1);
  return;
}

