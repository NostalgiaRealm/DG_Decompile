/*
 * FUN_1800076f4 at 1800076f4
 * undefined8 * __fastcall FUN_1800076f4(undefined8 * param_1, longlong param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined8 param_8, undefined8 * param_9)
 * Address ranges: 1800076f4-180007963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800076f4(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffb8;
  
  FUN_18001afc8(param_1,DAT_180111f20,(undefined8 *)(-(ulonglong)(param_2 != 0) & param_2 + 0x18U),
                param_4,in_stack_ffffffffffffffb8,param_6,param_7);
  *(undefined4 *)((longlong)param_1 + 0xe64) = param_3;
  *(int *)(param_1 + 0x1cd) = (int)param_4;
  *param_1 = &PTR_FUN_1800fd8a0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1ce] = param_5;
  param_1[0x1c5] = param_2;
  uVar1 = *param_9;
  uVar2 = param_9[1];
  param_1[0xcfe] = 0xffff;
  *(undefined4 *)(param_1 + 0xcff) = 0xffff;
  param_1[0x1cf] = uVar1;
  param_1[0x1d0] = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x67fc) = 0x1f;
  *(undefined4 *)((longlong)param_1 + 0x6804) = 0x1f;
  param_1[0xd01] = 0xffff;
  *(undefined4 *)(param_1 + 0x1d1) = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 0;
  *(undefined4 *)(param_1 + 0x1d5) = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  param_1[0x1db] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e4] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
  param_1[0xcd8] = 0;
  *(undefined4 *)(param_1 + 0xcf9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x67cc) = 0xffffffff;
  param_1[0xcfa] = 0;
  param_1[0xcfb] = 0;
  param_1[0xcfc] = 0;
  param_1[0xcfd] = 0;
  param_1[0xd02] = 0;
  *(undefined4 *)(param_1 + 0xd03) = 0x10001;
  *(undefined1 *)((longlong)param_1 + 0x681c) = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  FUN_1800fbea0((undefined1 *)(param_1 + 0xcd9),0,0x80);
  FUN_1800fbea0((undefined1 *)(param_1 + 0xce9),0,0x40);
  FUN_1800fbea0((undefined1 *)(param_1 + 0xcf1),0,0x40);
  FUN_1800fbea0((undefined1 *)(param_1 + 0x27c),0,0x4000);
  FUN_1800fbea0((undefined1 *)(param_1 + 0xa7c),0,0xe00);
  FUN_1800fbea0((undefined1 *)(param_1 + 0x267),0,0x80);
  FUN_1800fbea0((undefined1 *)(param_1 + 0x1e7),0xff,0x400);
  return param_1;
}

