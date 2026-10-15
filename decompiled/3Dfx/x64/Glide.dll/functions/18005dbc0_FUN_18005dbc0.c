/*
 * FUN_18005dbc0 at 18005dbc0
 * undefined __fastcall FUN_18005dbc0(LPVOID param_1)
 * Address ranges: 18005dbc0-18005dbe6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005dbc0(LPVOID param_1)

{
  HANDLE hHeap;
  
  if (param_1 != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,param_1);
  }
  return;
}

