/*
 * FUN_180049a04 at 180049a04
 * undefined __fastcall FUN_180049a04(longlong param_1)
 * Address ranges: 180049a04-180049a2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049a04(longlong param_1)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180049a29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x228))();
  return;
}

