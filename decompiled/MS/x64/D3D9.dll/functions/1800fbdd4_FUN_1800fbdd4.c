/*
 * FUN_1800fbdd4 at 1800fbdd4
 * undefined __fastcall FUN_1800fbdd4(LPVOID param_1)
 * Address ranges: 1800fbdd4-1800fbdf6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fbdd4(LPVOID param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001800fbdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(hHeap,0,param_1);
  return;
}

