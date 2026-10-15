/*
 * FUN_1800503d8 at 1800503d8
 * undefined __cdecl FUN_1800503d8(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined4 param_7)
 * Address ranges: 1800503d8-18005044f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800503d8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_18004e320(param_1);
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x90))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_18004e370(param_1);
  return;
}

