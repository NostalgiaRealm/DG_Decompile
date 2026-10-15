/*
 * FUN_1400106d8 at 1400106d8
 * undefined8 * __cdecl FUN_1400106d8(undefined8 * param_1, undefined4 param_2)
 * Address ranges: 1400106d8-140010727
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1400106d8(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_140028960;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = param_2;
  SetRectEmpty((LPRECT)(param_1 + 5));
  return param_1;
}

