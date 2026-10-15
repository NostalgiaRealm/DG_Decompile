/*
 * FUN_18004b9dc at 18004b9dc
 * undefined __fastcall FUN_18004b9dc(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined8 param_6, undefined4 param_7, undefined8 param_8, undefined4 param_9, undefined4 param_10)
 * Address ranges: 18004b9dc-18004ba6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b9dc(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  FUN_180049814(param_1);
  FUN_180049954(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x200))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7,param_8
             ,param_9,param_10);
  FUN_180049904(param_1);
  return;
}

