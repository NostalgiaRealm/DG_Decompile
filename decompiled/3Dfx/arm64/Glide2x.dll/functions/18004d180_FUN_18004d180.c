/*
 * FUN_18004d180 at 18004d180
 * undefined __cdecl FUN_18004d180(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 18004d180-18004d1cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d180(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_18004a790(param_1);
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x250))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

