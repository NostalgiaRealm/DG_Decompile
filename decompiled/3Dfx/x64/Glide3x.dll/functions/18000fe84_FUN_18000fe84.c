/*
 * FUN_18000fe84 at 18000fe84
 * undefined __fastcall FUN_18000fe84(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18000fe84-18000feb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000fe84(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  
  FUN_18000fd5c(param_1,param_2,param_3,param_4);
  do {
    bVar1 = FUN_18000f12c(param_1);
  } while (bVar1);
                    /* WARNING: Could not recover jumptable at 0x00018000feb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
  return;
}

