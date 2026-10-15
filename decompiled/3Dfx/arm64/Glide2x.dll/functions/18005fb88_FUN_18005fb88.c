/*
 * FUN_18005fb88 at 18005fb88
 * undefined __cdecl FUN_18005fb88(SIZE_T param_1)
 * Address ranges: 18005fb88-18005fbc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005fb88(SIZE_T param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,0,param_1);
  return;
}

