/*
 * FUN_1800473a8 at 1800473a8
 * undefined8 * __fastcall FUN_1800473a8(undefined8 * param_1, longlong param_2, uint param_3, undefined8 param_4, undefined4 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, undefined8 param_10)
 * Address ranges: 1800473a8-18004751d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800473a8(undefined8 *param_1,longlong param_2,uint param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             char *param_9,undefined8 param_10)

{
  undefined4 uVar1;
  char *pcVar2;
  
  param_1[2] = param_2;
  *(uint *)(param_1 + 3) = param_3;
  param_1[0xd0] = 0x800;
  *param_1 = &PTR_FUN_180064328;
  param_1[1] = &PTR_LAB_1800642d0;
  param_1[0x163] = param_6;
  param_1[0x168] = param_10;
  *(undefined4 *)((longlong)param_1 + 0xb5c) = param_5;
  param_1[0xd1] = 0;
  param_1[0x162] = param_4;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x169] = 0;
  *(undefined4 *)(param_1 + 0x16a) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xb54) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb64) = 0x18;
  *(undefined8 *)((longlong)param_1 + 0xb6c) = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  pcVar2 = "[noname]";
  if (param_9 != (char *)0x0) {
    pcVar2 = param_9;
  }
  param_1[0x172] = pcVar2;
  uVar1 = (**(code **)(**(longlong **)((ulonglong)param_3 * 0x20 + param_2) + 0x78))();
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  *(undefined4 *)(param_1 + 0x176) = 0;
  *(undefined4 *)(param_1 + 0x173) = uVar1;
  FUN_18005f814((undefined1 *)(param_1 + 0xd2),0,0xc0);
  FUN_18005f814((undefined1 *)(param_1 + 0xea),0,0xc0);
  FUN_18005f814((undefined1 *)(param_1 + 0x102),0,0x100);
  FUN_18005f814((undefined1 *)(param_1 + 0x122),0,0x200);
  FUN_18005f814((undefined1 *)(param_1 + 4),0,0x660);
  return param_1;
}

