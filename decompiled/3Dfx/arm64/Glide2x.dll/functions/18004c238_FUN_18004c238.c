/*
 * FUN_18004c238 at 18004c238
 * undefined __cdecl FUN_18004c238(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6)
 * Address ranges: 18004c238-18004c243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c238(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_18004a790(param_1);
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x78))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6);
  FUN_18004a7e0(param_1);
  return;
}

