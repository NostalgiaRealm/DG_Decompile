/*
 * FUN_180049198 at 180049198
 * undefined __fastcall FUN_180049198(longlong param_1)
 * Address ranges: 180049198-1800491c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049198(longlong param_1)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800491bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1d0))();
  return;
}

