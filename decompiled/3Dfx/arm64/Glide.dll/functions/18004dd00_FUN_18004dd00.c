/*
 * FUN_18004dd00 at 18004dd00
 * undefined __cdecl FUN_18004dd00(longlong param_1, undefined4 param_2)
 * Address ranges: 18004dd00-18004dd03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004dd00(longlong param_1,undefined4 param_2)

{
  FUN_18004b5e0(param_1);
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x208))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

