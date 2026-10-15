/*
 * FUN_180028208 at 180028208
 * undefined8 * __cdecl FUN_180028208(undefined8 * param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 180028208-1800282db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180028208(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 3) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x604) = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined1 *)((longlong)param_1 + 0x3022) = 0;
  FUN_180063e98((undefined1 *)(param_1 + 4),0,0x1000);
  FUN_180063e98((undefined1 *)(param_1 + 0x204),0,0x1000);
  FUN_180063e98((undefined1 *)(param_1 + 0x404),0,0x1000);
  *param_1 = &PTR_FUN_180067850;
  param_1[0x605] = param_2;
  param_1[0x624] = 0;
  param_1[0x625] = 0;
  param_1[0x626] = 0;
  param_1[0x627] = 0;
  param_1[0x607] = 0;
  param_1[0x606] = 0;
  param_1[0x609] = 0;
  param_1[0x608] = 0;
  param_1[0x60b] = 0;
  param_1[0x60a] = 0;
  param_1[0x60d] = 0;
  param_1[0x60c] = 0;
  param_1[0x60f] = 0;
  param_1[0x60e] = 0;
  param_1[0x611] = 0;
  param_1[0x610] = 0;
  param_1[0x613] = 0;
  param_1[0x612] = 0;
  param_1[0x614] = 0;
  param_1[0x616] = 0;
  param_1[0x615] = 0;
  param_1[0x618] = 0;
  param_1[0x617] = 0;
  param_1[0x61a] = 0;
  param_1[0x619] = 0;
  param_1[0x61c] = 0;
  param_1[0x61b] = 0;
  param_1[0x61e] = 0;
  param_1[0x61d] = 0;
  param_1[0x620] = 0;
  param_1[0x61f] = 0;
  param_1[0x622] = 0;
  param_1[0x621] = 0;
  param_1[0x623] = 0;
  return param_1;
}

