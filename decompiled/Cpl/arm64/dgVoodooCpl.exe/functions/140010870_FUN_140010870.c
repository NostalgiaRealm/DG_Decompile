/*
 * FUN_140010870 at 140010870
 * undefined8 * __cdecl FUN_140010870(undefined8 * param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4)
 * Address ranges: 140010870-1400108c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_140010870(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_1400106d8(param_1,1);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = param_3;
  *param_1 = &PTR_FUN_1400289f8;
  param_1[10] = param_4;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  return param_1;
}

