/*
 * FUN_18005db9c at 18005db9c
 * undefined __fastcall FUN_18005db9c(undefined8 param_1)
 * Address ranges: 18005db9c-18005dbbe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005db9c(undefined8 param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x00018005dbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(pvVar1,0,param_1);
  return;
}

