/*
 * FUN_18004d220 at 18004d220
 * undefined __cdecl FUN_18004d220(longlong param_1, undefined8 param_2)
 * Address ranges: 18004d220-18004d223
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d220(longlong param_1,undefined8 param_2)

{
  FUN_18004a790(param_1);
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x260))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

