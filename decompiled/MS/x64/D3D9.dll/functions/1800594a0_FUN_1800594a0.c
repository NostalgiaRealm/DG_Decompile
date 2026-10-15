/*
 * FUN_1800594a0 at 1800594a0
 * undefined8 * __fastcall FUN_1800594a0(undefined8 * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1800594a0-18005954c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800594a0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 3) = param_2;
  *param_1 = &PTR_FUN_180102408;
  *(undefined4 *)((longlong)param_1 + 0x9c) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x400;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x4140;
  *(undefined4 *)(param_1 + 0x15) = 1;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0x100;
  FUN_180059580((longlong)(param_1 + 0x16));
  puVar2 = param_1 + 6;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined4 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 4);
  }
  return param_1;
}

