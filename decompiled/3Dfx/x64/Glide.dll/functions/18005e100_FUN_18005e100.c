/*
 * FUN_18005e100 at 18005e100
 * undefined __fastcall FUN_18005e100(LPVOID param_1)
 * Address ranges: 18005e100-18005e122
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005e100(LPVOID param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x00018005e11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(hHeap,0,param_1);
  return;
}

