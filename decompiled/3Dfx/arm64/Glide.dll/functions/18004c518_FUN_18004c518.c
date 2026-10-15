/*
 * FUN_18004c518 at 18004c518
 * undefined __cdecl FUN_18004c518(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18004c518-18004c55f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c518(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x110))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

