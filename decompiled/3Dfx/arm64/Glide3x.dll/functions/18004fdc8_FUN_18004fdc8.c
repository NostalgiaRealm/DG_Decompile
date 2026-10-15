/*
 * FUN_18004fdc8 at 18004fdc8
 * undefined __cdecl FUN_18004fdc8(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6)
 * Address ranges: 18004fdc8-18004fdd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004fdc8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_18004e320(param_1);
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x78))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6);
  FUN_18004e370(param_1);
  return;
}

