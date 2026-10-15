/*
 * FUN_18004990c at 18004990c
 * undefined __fastcall FUN_18004990c(longlong param_1, undefined4 param_2)
 * Address ranges: 18004990c-180049944
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004990c(longlong param_1,undefined4 param_2)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004993e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x208))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

