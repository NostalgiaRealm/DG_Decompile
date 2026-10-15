/*
 * thunk_FUN_1800fbccc at 1800fbd18
 * undefined __fastcall thunk_FUN_1800fbccc(undefined8 param_1)
 * Address ranges: 1800fbd18-1800fbd1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_1800fbccc
 */

void thunk_FUN_1800fbccc(undefined8 param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001800fbce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(pvVar1,0,param_1);
  return;
}

