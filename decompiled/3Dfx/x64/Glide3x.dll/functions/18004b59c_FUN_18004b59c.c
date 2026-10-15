/*
 * FUN_18004b59c at 18004b59c
 * undefined __fastcall FUN_18004b59c(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined8 param_7)
 * Address ranges: 18004b59c-18004b60c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b59c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_180049814(param_1);
  FUN_180049954(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x188))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_180049904(param_1);
  return;
}

