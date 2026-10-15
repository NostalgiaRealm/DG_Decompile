/*
 * FUN_180024580 at 180024580
 * undefined __cdecl FUN_180024580(longlong param_1, undefined4 param_2)
 * Address ranges: 180024580-1800245c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180024580(longlong param_1,undefined4 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3180) + 0x50))(*(longlong **)(param_1 + 0x3180),1,0);
  *(undefined4 *)(param_1 + 0x2c00) = param_2;
  *(undefined1 *)(param_1 + 0x3170) = 1;
  return;
}

