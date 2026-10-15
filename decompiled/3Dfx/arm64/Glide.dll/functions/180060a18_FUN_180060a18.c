/*
 * FUN_180060a18 at 180060a18
 * undefined __cdecl FUN_180060a18(LPVOID param_1)
 * Address ranges: 180060a18-180060a57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180060a18(LPVOID param_1)

{
  HANDLE hHeap;
  
  if (param_1 != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,param_1);
  }
  return;
}

