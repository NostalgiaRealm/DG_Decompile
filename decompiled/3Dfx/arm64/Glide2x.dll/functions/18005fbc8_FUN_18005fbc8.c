/*
 * FUN_18005fbc8 at 18005fbc8
 * undefined __cdecl FUN_18005fbc8(LPVOID param_1)
 * Address ranges: 18005fbc8-18005fc07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005fbc8(LPVOID param_1)

{
  HANDLE hHeap;
  
  if (param_1 != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,param_1);
  }
  return;
}

