/*
 * FUN_18000fc54 at 18000fc54
 * undefined __fastcall FUN_18000fc54(longlong param_1)
 * Address ranges: 18000fc54-18000fc86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000fc54(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x35a0) + 0x98))();
                    /* WARNING: Could not recover jumptable at 0x00018000fc80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
  return;
}

