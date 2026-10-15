/*
 * FUN_180018410 at 180018410
 * undefined __cdecl FUN_180018410(longlong param_1, ushort param_2)
 * Address ranges: 180018410-18001845b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018410(longlong param_1,ushort param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x50))(*(longlong **)(param_1 + 0x3300),1,0);
  *(uint *)(param_1 + 0x2cb0) = (uint)param_2;
  *(undefined1 *)(param_1 + 0x32f0) = 1;
  return;
}

