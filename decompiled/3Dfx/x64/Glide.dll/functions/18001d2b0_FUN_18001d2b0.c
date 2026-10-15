/*
 * FUN_18001d2b0 at 18001d2b0
 * undefined __fastcall FUN_18001d2b0(longlong param_1)
 * Address ranges: 18001d2b0-18001d2e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d2b0(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x3420) + 0x98))();
                    /* WARNING: Could not recover jumptable at 0x00018001d2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return;
}

