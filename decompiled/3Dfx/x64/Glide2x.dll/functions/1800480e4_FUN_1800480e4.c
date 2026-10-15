/*
 * FUN_1800480e4 at 1800480e4
 * undefined __fastcall FUN_1800480e4(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1800480e4-18004811d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800480e4(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180048117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x108))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

