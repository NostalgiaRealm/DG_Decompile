/*
 * FUN_1800e4624 at 1800e4624
 * undefined __fastcall FUN_1800e4624(longlong param_1)
 * Address ranges: 1800e4624-1800e464f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e4624(longlong param_1)

{
  FUN_1800e24c4(param_1);
  FUN_1800e2604(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800e4649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1d0))();
  return;
}

