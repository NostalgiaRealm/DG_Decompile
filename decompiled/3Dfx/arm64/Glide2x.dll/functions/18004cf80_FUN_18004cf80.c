/*
 * FUN_18004cf80 at 18004cf80
 * undefined __cdecl FUN_18004cf80(longlong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined4 param_5)
 * Address ranges: 18004cf80-18004cf8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004cf80(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  FUN_18004a790(param_1);
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x220))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  return;
}

