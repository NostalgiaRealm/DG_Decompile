/*
 * FUN_18004bb68 at 18004bb68
 * undefined __fastcall FUN_18004bb68(longlong param_1)
 * Address ranges: 18004bb68-18004bb93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004bb68(longlong param_1)

{
  FUN_180049814(param_1);
  FUN_180049954(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004bb8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x228))();
  return;
}

