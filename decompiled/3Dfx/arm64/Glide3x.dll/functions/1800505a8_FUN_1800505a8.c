/*
 * FUN_1800505a8 at 1800505a8
 * undefined __cdecl FUN_1800505a8(longlong param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 1800505a8-1800505af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800505a8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_18004e320(param_1);
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x198))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  FUN_18004e370(param_1);
  return;
}

