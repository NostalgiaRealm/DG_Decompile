/*
 * FUN_18004d868 at 18004d868
 * undefined __cdecl FUN_18004d868(longlong param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 18004d868-18004d86f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d868(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_18004b5e0(param_1);
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x198))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  FUN_18004b630(param_1);
  return;
}

