/*
 * FUN_1800497a0 at 1800497a0
 * undefined __fastcall FUN_1800497a0(longlong param_1, undefined8 param_2)
 * Address ranges: 1800497a0-1800497d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800497a0(longlong param_1,undefined8 param_2)

{
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800497cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x270))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

