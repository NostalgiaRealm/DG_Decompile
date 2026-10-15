/*
 * FUN_180049640 at 180049640
 * undefined __fastcall FUN_180049640(longlong param_1)
 * Address ranges: 180049640-18004966b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049640(longlong param_1)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180049665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1d0))();
  return;
}

