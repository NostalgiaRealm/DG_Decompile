/*
 * thunk_FUN_14002423c at 140024288
 * undefined __fastcall thunk_FUN_14002423c(undefined8 param_1)
 * Address ranges: 140024288-14002428c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_14002423c
 */

void thunk_FUN_14002423c(undefined8 param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140024258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(pvVar1,0,param_1);
  return;
}

