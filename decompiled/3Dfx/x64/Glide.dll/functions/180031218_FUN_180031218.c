/*
 * FUN_180031218 at 180031218
 * undefined8 * __fastcall FUN_180031218(undefined8 * param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 180031218-1800312fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180031218(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x604) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3022) = 0;
  FUN_18005f814((undefined1 *)(param_1 + 4),0,0x1000);
  FUN_18005f814((undefined1 *)(param_1 + 0x204),0,0x1000);
  FUN_18005f814((undefined1 *)(param_1 + 0x404),0,0x1000);
  param_1[0x605] = param_2;
  *param_1 = &PTR_FUN_180063a68;
  param_1[0x624] = 0;
  param_1[0x625] = 0;
  param_1[0x626] = 0;
  param_1[0x627] = 0;
  FUN_18005f814((undefined1 *)(param_1 + 0x606),0,0x78);
  FUN_18005f814((undefined1 *)(param_1 + 0x615),0,0x78);
  return param_1;
}

