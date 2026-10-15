/*
 * FUN_18004b0dc at 18004b0dc
 * undefined __fastcall FUN_18004b0dc(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5)
 * Address ranges: 18004b0dc-18004b134
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b0dc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  FUN_180049814(param_1);
  FUN_180049954(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x180))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  FUN_180049904(param_1);
  return;
}

