/*
 * FUN_18005dc34 at 18005dc34
 * undefined __fastcall FUN_18005dc34(longlong param_1, longlong param_2)
 * Address ranges: 18005dc34-18005dc5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005dc34(longlong param_1,longlong param_2)

{
  HANDLE pvVar1;
  
  pvVar1 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x00018005dc57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(pvVar1,8,param_1 * param_2);
  return;
}

