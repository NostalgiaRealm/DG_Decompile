/*
 * FUN_18004cbb0 at 18004cbb0
 * undefined __cdecl FUN_18004cbb0(longlong param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7)
 * Address ranges: 18004cbb0-18004cbbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004cbb0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_18004a790(param_1);
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1d8))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined1 *)(param_1 + 0x674) = 1;
  FUN_18004a7e0(param_1);
  return;
}

