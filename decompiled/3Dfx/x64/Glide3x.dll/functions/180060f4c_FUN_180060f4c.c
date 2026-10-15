/*
 * FUN_180060f4c at 180060f4c
 * undefined __fastcall FUN_180060f4c(LPVOID param_1)
 * Address ranges: 180060f4c-180060f6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180060f4c(LPVOID param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000180060f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(hHeap,0,param_1);
  return;
}

