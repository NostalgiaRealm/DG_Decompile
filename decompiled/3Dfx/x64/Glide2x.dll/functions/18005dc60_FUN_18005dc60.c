/*
 * FUN_18005dc60 at 18005dc60
 * undefined __fastcall FUN_18005dc60(LPVOID param_1)
 * Address ranges: 18005dc60-18005dc82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005dc60(LPVOID param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x00018005dc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(hHeap,0,param_1);
  return;
}

