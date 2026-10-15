/*
 * FUN_18004955c at 18004955c
 * undefined __fastcall FUN_18004955c(longlong param_1)
 * Address ranges: 18004955c-180049587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004955c(longlong param_1)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180049581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x228))();
  return;
}

