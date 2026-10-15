/*
 * FUN_18002135c at 18002135c
 * undefined8 * __fastcall FUN_18002135c(undefined8 * param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 18002135c-1800213fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18002135c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x604) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3022) = 0;
  FUN_180060f94((undefined1 *)(param_1 + 4),0,0x1000);
  FUN_180060f94((undefined1 *)(param_1 + 0x204),0,0x1000);
  FUN_180060f94((undefined1 *)(param_1 + 0x404),0,0x1000);
  param_1[0x605] = param_2;
  *param_1 = &PTR_FUN_1800648a8;
  *(undefined4 *)(param_1 + 0x606) = 0x1000;
  param_1[0x607] = 0;
  return param_1;
}

