/*
 * FUN_18009b1b4 at 18009b1b4
 * undefined8 * __fastcall FUN_18009b1b4(undefined8 * param_1, longlong param_2, undefined4 param_3, undefined4 param_4, uint param_5, uint param_6, int param_7, uint param_8, undefined1 param_9)
 * Address ranges: 18009b1b4-18009b2e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18009b1b4(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             uint param_5,uint param_6,int param_7,uint param_8,undefined1 param_9)

{
  FUN_1800a2624(param_1,param_2,*(uint *)(param_2 + 0x28),param_3,param_4,param_5,param_6,param_7,
                param_8,param_9);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *param_1 = &PTR_FUN_180103488;
  param_1[0x20] = &PTR_LAB_1801035c8;
  *(uint *)(param_1 + 0x29) = *(uint *)(param_1 + 4);
  param_1[0x28] = param_1[10];
  param_1[0x26] = param_2;
  *(ulonglong *)((longlong)param_1 + 0x14c) =
       param_1[10] + 0x900 + (ulonglong)*(uint *)(param_1 + 4) * 0x1ac0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x192) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x21) = 1;
  return param_1;
}

