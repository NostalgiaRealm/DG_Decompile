/*
 * FUN_180061030 at 180061030
 * undefined __fastcall FUN_180061030(longlong param_1, longlong param_2)
 * Address ranges: 180061030-180061059
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180061030(longlong param_1,longlong param_2)

{
  HANDLE pvVar1;
  
  pvVar1 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000180061053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(pvVar1,8,param_1 * param_2);
  return;
}

