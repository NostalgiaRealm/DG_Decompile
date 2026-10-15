/*
 * FUN_180049834 at 180049834
 * undefined __fastcall FUN_180049834(longlong param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4)
 * Address ranges: 180049834-180049875
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049834(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004986f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1f8))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

