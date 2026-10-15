/*
 * FUN_18004a72c at 18004a72c
 * undefined __fastcall FUN_18004a72c(longlong param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4)
 * Address ranges: 18004a72c-18004a765
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a72c(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_180049954(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004a75f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x120))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

