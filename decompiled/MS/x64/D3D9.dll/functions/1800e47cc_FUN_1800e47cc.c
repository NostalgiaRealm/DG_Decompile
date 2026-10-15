/*
 * FUN_1800e47cc at 1800e47cc
 * undefined __fastcall FUN_1800e47cc(longlong param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1800e47cc-1800e4817
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e47cc(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1800e24c4(param_1);
  FUN_1800e2604(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800e4811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1f0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  return;
}

