/*
 * FUN_140024830 at 140024830
 * undefined __cdecl FUN_140024830(LPVOID param_1)
 * Address ranges: 140024830-14002486f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140024830(LPVOID param_1)

{
  HANDLE hHeap;
  
  if (param_1 != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,param_1);
  }
  return;
}

