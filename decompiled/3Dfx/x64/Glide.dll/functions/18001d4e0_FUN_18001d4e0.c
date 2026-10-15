/*
 * FUN_18001d4e0 at 18001d4e0
 * undefined __fastcall FUN_18001d4e0(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18001d4e0-18001d513
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d4e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  
  FUN_18001d3b8(param_1,param_2,param_3,param_4);
  do {
    bVar1 = FUN_18001c740(param_1);
  } while (bVar1);
                    /* WARNING: Could not recover jumptable at 0x00018001d50d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return;
}

