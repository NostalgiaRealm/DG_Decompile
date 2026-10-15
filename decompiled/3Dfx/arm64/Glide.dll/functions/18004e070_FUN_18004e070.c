/*
 * FUN_18004e070 at 18004e070
 * undefined __cdecl FUN_18004e070(longlong param_1, undefined8 param_2)
 * Address ranges: 18004e070-18004e073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004e070(longlong param_1,undefined8 param_2)

{
  FUN_18004b5e0(param_1);
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x260))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

