/*
 * FUN_180063700 at 180063700
 * undefined __cdecl FUN_180063700(LPVOID param_1)
 * Address ranges: 180063700-18006373f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180063700(LPVOID param_1)

{
  HANDLE hHeap;
  
  if (param_1 != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,param_1);
  }
  return;
}

