/*
 * FUN_18004b7a4 at 18004b7a4
 * undefined __fastcall FUN_18004b7a4(longlong param_1)
 * Address ranges: 18004b7a4-18004b7cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b7a4(longlong param_1)

{
  FUN_180049814(param_1);
  FUN_180049954(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004b7c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1d0))();
  return;
}

