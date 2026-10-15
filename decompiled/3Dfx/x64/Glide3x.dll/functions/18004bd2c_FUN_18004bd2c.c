/*
 * FUN_18004bd2c at 18004bd2c
 * undefined __fastcall FUN_18004bd2c(longlong param_1, undefined8 param_2)
 * Address ranges: 18004bd2c-18004bd66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004bd2c(longlong param_1,undefined8 param_2)

{
  FUN_180049814(param_1);
  FUN_180049954(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004bd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x260))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

