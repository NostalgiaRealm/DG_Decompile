/*
 * FUN_18004966c at 18004966c
 * undefined __fastcall FUN_18004966c(longlong param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7)
 * Address ranges: 18004966c-1800496e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004966c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1d8))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined1 *)(param_1 + 0x674) = 1;
  FUN_1800477a0(param_1);
  return;
}

