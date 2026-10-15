/*
 * FUN_18004ca20 at 18004ca20
 * undefined __cdecl FUN_18004ca20(longlong param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 18004ca20-18004ca6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004ca20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_18004a790(param_1);
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x198))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  FUN_18004a7e0(param_1);
  return;
}

