/*
 * FUN_180050998 at 180050998
 * undefined __cdecl FUN_180050998(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined8 param_6, undefined4 param_7, undefined8 param_8, undefined4 param_9, undefined4 param_10)
 * Address ranges: 180050998-1800509a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050998(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  FUN_18004e320(param_1);
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x200))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7,param_8
             ,param_9,param_10);
  FUN_18004e370(param_1);
  return;
}

