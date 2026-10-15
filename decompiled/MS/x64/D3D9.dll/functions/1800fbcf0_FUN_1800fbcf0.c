/*
 * FUN_1800fbcf0 at 1800fbcf0
 * undefined __fastcall FUN_1800fbcf0(LPVOID param_1)
 * Address ranges: 1800fbcf0-1800fbd16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fbcf0(LPVOID param_1)

{
  HANDLE hHeap;
  
  if (param_1 != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,param_1);
  }
  return;
}

