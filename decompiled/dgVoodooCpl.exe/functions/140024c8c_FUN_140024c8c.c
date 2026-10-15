/*
 * FUN_140024c8c at 140024c8c
 * undefined __fastcall FUN_140024c8c(LPVOID param_1)
 * Address ranges: 140024c8c-140024cae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140024c8c(LPVOID param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140024ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(hHeap,0,param_1);
  return;
}

