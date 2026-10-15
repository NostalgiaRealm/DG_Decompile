/*
 * FUN_180049340 at 180049340
 * undefined __fastcall FUN_180049340(longlong param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 180049340-18004938b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049340(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180049385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1f0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  return;
}

