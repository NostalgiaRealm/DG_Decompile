/*
 * FUN_18004b068 at 18004b068
 * undefined __fastcall FUN_18004b068(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined8 param_6, undefined8 param_7)
 * Address ranges: 18004b068-18004b0d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b068(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_180049814(param_1);
  FUN_180049954(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x80))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_180049904(param_1);
  return;
}

