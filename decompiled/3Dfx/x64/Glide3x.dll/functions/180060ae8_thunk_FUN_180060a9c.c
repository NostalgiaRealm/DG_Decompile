/*
 * thunk_FUN_180060a9c at 180060ae8
 * undefined __fastcall thunk_FUN_180060a9c(undefined8 param_1)
 * Address ranges: 180060ae8-180060aec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_180060a9c
 */

void thunk_FUN_180060a9c(undefined8 param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000180060ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(pvVar1,0,param_1);
  return;
}

