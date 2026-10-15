/*
 * thunk_FUN_18005fbc8 at 18005fc10
 * undefined __cdecl thunk_FUN_18005fbc8(LPVOID param_1)
 * Address ranges: 18005fc10-18005fc13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_18005fbc8
 */

void thunk_FUN_18005fbc8(LPVOID param_1)

{
  HANDLE hHeap;
  
  if (param_1 != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,param_1);
  }
  return;
}

