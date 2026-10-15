/*
 * FUN_18004d918 at 18004d918
 * undefined __cdecl FUN_18004d918(longlong param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 18004d918-18004d91f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d918(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_18004b5e0(param_1);
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1c0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

