/*
 * FUN_14000ef30 at 14000ef30
 * undefined8 * __fastcall FUN_14000ef30(undefined8 * param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4)
 * Address ranges: 14000ef30-14000efa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_14000ef30(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  *(undefined4 *)(param_1 + 7) = 1;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_140028860;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  SetRectEmpty((LPRECT)(param_1 + 5));
  param_1[8] = 0;
  *param_1 = &PTR_FUN_140028998;
  *(undefined4 *)(param_1 + 9) = param_3;
  param_1[10] = param_4;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  return param_1;
}

