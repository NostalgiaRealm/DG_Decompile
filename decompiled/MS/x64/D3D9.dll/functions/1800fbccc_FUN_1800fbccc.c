/*
 * FUN_1800fbccc at 1800fbccc
 * undefined __fastcall FUN_1800fbccc(undefined8 param_1)
 * Address ranges: 1800fbccc-1800fbcee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fbccc(undefined8 param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001800fbce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(pvVar1,0,param_1);
  return;
}

