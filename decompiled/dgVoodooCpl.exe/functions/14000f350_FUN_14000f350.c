/*
 * FUN_14000f350 at 14000f350
 * undefined8 * __fastcall FUN_14000f350(undefined8 * param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4)
 * Address ranges: 14000f350-14000f3bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_14000f350(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_140028860;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  SetRectEmpty((LPRECT)(param_1 + 5));
  param_1[8] = 0;
  *param_1 = &PTR_FUN_1400288f8;
  *(undefined4 *)(param_1 + 9) = param_3;
  param_1[10] = param_4;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  return param_1;
}

