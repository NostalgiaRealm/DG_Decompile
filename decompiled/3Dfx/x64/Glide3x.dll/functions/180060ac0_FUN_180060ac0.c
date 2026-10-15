/*
 * FUN_180060ac0 at 180060ac0
 * undefined __fastcall FUN_180060ac0(LPVOID param_1)
 * Address ranges: 180060ac0-180060ae6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180060ac0(LPVOID param_1)

{
  HANDLE hHeap;
  
  if (param_1 != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,param_1);
  }
  return;
}

