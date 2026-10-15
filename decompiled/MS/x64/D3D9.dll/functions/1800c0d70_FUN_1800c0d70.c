/*
 * FUN_1800c0d70 at 1800c0d70
 * undefined8 * __fastcall FUN_1800c0d70(undefined8 * param_1, longlong param_2, undefined8 param_3, undefined8 param_4, longlong param_5, undefined8 * param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, byte param_10, byte param_11, undefined1 param_12, undefined8 param_13, undefined8 param_14, byte param_15)
 * Address ranges: 1800c0d70-1800c0fb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800c0d70(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 *param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,byte param_10,byte param_11,undefined1 param_12,undefined8 param_13,
             undefined8 param_14,byte param_15)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  param_1[3] = 0;
  param_1[4] = 0;
  lVar1 = *(longlong *)(param_2 + 0xe28);
  *param_1 = &PTR_D3DPERF_GetStatus_1801016d8;
  puVar4 = (undefined8 *)FUN_1800fbccc(0x108);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xd] = param_13;
    puVar4[0xe] = param_14;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    *(undefined4 *)(puVar4 + 0x11) = 0xffffffff;
    FUN_1800fbea0((undefined1 *)(puVar4 + 0x15),0,0x48);
    *(undefined4 *)((longlong)puVar4 + 0x94) = param_7;
    *(undefined4 *)(puVar4 + 0x13) = param_8;
    puVar4[1] = -(ulonglong)(lVar1 != 0) & lVar1 + 8U;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(undefined4 *)(puVar4 + 0xc) = 0;
    *(undefined1 *)(puVar4 + 0xc) = param_12;
    *puVar4 = &PTR_LAB_180101708;
    *(undefined4 *)(puVar4 + 0x1e) = 0;
    puVar4[0x1f] = 0;
    puVar4[0x20] = 0;
    puVar5 = puVar4;
  }
  param_1[1] = puVar5;
  *param_1 = &PTR_LAB_180100f98;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[5] = param_2;
  param_1[6] = param_4;
  param_1[7] = -(ulonglong)(param_5 != 0) & param_5 + 8U;
  param_1[8] = 0;
  uVar2 = param_6[1];
  param_1[9] = *param_6;
  param_1[10] = uVar2;
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *(undefined4 *)(param_1 + 0xd) = param_7;
  *(undefined4 *)(param_1 + 0xe) = param_9;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_8;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar3;
  if (puVar5 != (undefined8 *)0x0) {
    *(uint *)(puVar5 + 0x20) = (uint)param_10 << 10 | (uint)param_15 | (uint)param_11 << 9;
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  param_1[0x13] = -(ulonglong)(param_2 != 0) & param_2 + 0x6838U;
  param_1[0x16] = param_1 + 0x10;
  *param_1 = &PTR_LAB_1801049e8;
  param_1[0x10] = &PTR_FUN_180104960;
  param_1[0x18] = param_3;
  param_1[0x15] = 0;
  param_1[0x17] = param_2;
  param_1[0x19] = param_4;
  param_1[0x1a] = param_5;
  return param_1;
}

