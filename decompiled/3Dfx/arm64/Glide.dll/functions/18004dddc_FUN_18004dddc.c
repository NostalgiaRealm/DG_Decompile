/*
 * FUN_18004dddc at 18004dddc
 * undefined __cdecl FUN_18004dddc(longlong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined4 param_5)
 * Address ranges: 18004dddc-18004de37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004dddc(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  FUN_18004b5e0(param_1);
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x220))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  return;
}

