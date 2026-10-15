/*
 * FUN_18004fcf8 at 18004fcf8
 * undefined __cdecl FUN_18004fcf8(longlong param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 18004fcf8-18004fd6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004fcf8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_18004e320(param_1);
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x98))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6);
  FUN_18004e370(param_1);
  return;
}

