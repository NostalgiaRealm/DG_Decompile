/*
 * FUN_180023730 at 180023730
 * undefined __cdecl FUN_180023730(longlong param_1, undefined4 param_2)
 * Address ranges: 180023730-180023777
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023730(longlong param_1,undefined4 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3180) + 0x50))(*(longlong **)(param_1 + 0x3180),1,0);
  *(undefined4 *)(param_1 + 0x2c00) = param_2;
  *(undefined1 *)(param_1 + 0x3170) = 1;
  return;
}

