/*
 * FUN_14002423c at 14002423c
 * undefined __fastcall FUN_14002423c(undefined8 param_1)
 * Address ranges: 14002423c-14002425e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14002423c(undefined8 param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140024258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(pvVar1,0,param_1);
  return;
}

