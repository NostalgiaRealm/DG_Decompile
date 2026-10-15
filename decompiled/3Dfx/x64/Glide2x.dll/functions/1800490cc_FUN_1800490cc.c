/*
 * FUN_1800490cc at 1800490cc
 * undefined __fastcall FUN_1800490cc(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 1800490cc-18004910f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800490cc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180049109. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1b8))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

