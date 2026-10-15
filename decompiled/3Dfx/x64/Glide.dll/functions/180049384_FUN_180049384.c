/*
 * FUN_180049384 at 180049384
 * undefined __fastcall FUN_180049384(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined4 param_7)
 * Address ranges: 180049384-1800493f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049384(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x90))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_1800477a0(param_1);
  return;
}

