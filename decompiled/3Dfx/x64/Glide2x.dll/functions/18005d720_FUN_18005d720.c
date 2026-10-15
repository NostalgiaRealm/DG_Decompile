/*
 * FUN_18005d720 at 18005d720
 * undefined __fastcall FUN_18005d720(LPVOID param_1)
 * Address ranges: 18005d720-18005d746
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005d720(LPVOID param_1)

{
  HANDLE hHeap;
  
  if (param_1 != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,param_1);
  }
  return;
}

