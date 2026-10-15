/*
 * FUN_1800494ac at 1800494ac
 * undefined __fastcall FUN_1800494ac(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined8 param_7)
 * Address ranges: 1800494ac-18004951c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800494ac(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 400))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_1800477a0(param_1);
  return;
}

