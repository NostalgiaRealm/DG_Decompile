/*
 * FUN_18004e0b8 at 18004e0b8
 * undefined __cdecl FUN_18004e0b8(longlong param_1, undefined4 param_2, undefined8 param_3)
 * Address ranges: 18004e0b8-18004e0f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004e0b8(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x268))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  return;
}

