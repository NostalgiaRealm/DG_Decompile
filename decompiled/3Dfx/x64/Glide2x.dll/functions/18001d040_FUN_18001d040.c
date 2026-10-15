/*
 * FUN_18001d040 at 18001d040
 * undefined __fastcall FUN_18001d040(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18001d040-18001d073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d040(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  
  FUN_18001cf18(param_1,param_2,param_3,param_4);
  do {
    bVar1 = FUN_18001c2a0(param_1);
  } while (bVar1);
                    /* WARNING: Could not recover jumptable at 0x00018001d06d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return;
}

