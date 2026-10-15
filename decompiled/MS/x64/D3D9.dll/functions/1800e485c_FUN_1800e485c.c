/*
 * FUN_1800e485c at 1800e485c
 * undefined __fastcall FUN_1800e485c(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined8 param_6, undefined4 param_7, undefined8 param_8, undefined4 param_9, undefined4 param_10)
 * Address ranges: 1800e485c-1800e48ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e485c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  FUN_1800e24c4(param_1);
  FUN_1800e2604(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x200))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7,param_8
             ,param_9,param_10);
  FUN_1800e25b4(param_1);
  return;
}

