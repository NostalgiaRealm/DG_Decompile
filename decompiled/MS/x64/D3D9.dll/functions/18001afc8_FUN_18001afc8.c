/*
 * FUN_18001afc8 at 18001afc8
 * undefined8 * __fastcall FUN_18001afc8(undefined8 * param_1, undefined8 param_2, undefined8 * param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 18001afc8-18001b234
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18001afc8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  param_1[3] = param_2;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_1801012a0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x1000000;
  uVar1 = thunk_FUN_1800fbccc(0x2600);
  param_1[0x69] = uVar1;
  param_1[0x6a] = 0x10;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 7;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((longlong)param_1 + 0x414) = 0;
  param_1[0x19c] = 0;
  *(undefined1 *)(param_1 + 0x19d) = 0;
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  *(undefined2 *)(param_1 + 0x1a2) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd12) = 1;
  *(undefined4 *)((longlong)param_1 + 0xd14) = 0xff;
  *(undefined4 *)(param_1 + 0x1a3) = 0xffff;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  uVar1 = thunk_FUN_1800fbccc(0x13000);
  param_1[0x1a9] = uVar1;
  param_1[0x1aa] = 0x80;
  *(undefined1 *)(param_1 + 0x1ab) = 1;
  FUN_1800fbea0((undefined1 *)(param_1 + 0x1b1),0,0x40);
  *(undefined4 *)((longlong)param_1 + 0xdc4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b6) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xd9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b1) = 0x3f800000;
  param_1[0x1bf] = param_1 + 0xa1;
  param_1[0x1c0] = (longlong)param_1 + 0x50c;
  param_1[0x1c1] = param_1 + 0xa2;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  *(undefined4 *)(param_1 + 0x1be) = 0;
  param_1[0x1c2] = 0;
  *(undefined2 *)((longlong)param_1 + 0xe21) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe23) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  FUN_180088764((undefined1 *)(param_1 + 0xe));
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x1ac] = *param_3;
  param_1[0x1ad] = param_3[1];
  param_1[0x1ae] = param_3[2];
  param_1[0x1af] = param_3[3];
  param_1[0x1b0] = param_3[4];
  *(undefined4 *)(param_1 + 0xc) = param_6;
  *(undefined4 *)((longlong)param_1 + 100) = param_7;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  return param_1;
}

