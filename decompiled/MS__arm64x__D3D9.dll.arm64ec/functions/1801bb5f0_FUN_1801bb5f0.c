/*
 * FUN_1801bb5f0 at 1801bb5f0
 * undefined FUN_1801bb5f0(void)
 * Address ranges: 1801bb5f0-1801bb7b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1801bb5f0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             byte param_9,byte param_10,undefined1 param_11,undefined8 param_12,undefined8 param_13,
             byte param_14)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar3 = (undefined8 *)FUN_1802229a8(0xd8);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3[3] = 0;
    puVar3[4] = 0;
    lVar2 = 0;
    if (param_4 != 0) {
      lVar2 = param_4 + 8;
    }
    lVar1 = 0;
    if (*(longlong *)(param_1 + 0xe28) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xe28) + 8;
    }
    *puVar3 = &PTR_D3DPERF_GetStatus_native_18022a940;
    puVar4 = (undefined8 *)FUN_1802229a8(0x108);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4[0xf] = 0;
      puVar4[0x10] = 0;
      puVar4[0xd] = param_12;
      puVar4[0xe] = param_13;
      *(undefined4 *)(puVar4 + 0x11) = 0xffffffff;
      puVar4[0x16] = 0;
      puVar4[0x15] = 0;
      puVar4[0x18] = 0;
      puVar4[0x17] = 0;
      puVar4[0x1a] = 0;
      puVar4[0x19] = 0;
      puVar4[0x1c] = 0;
      puVar4[0x1b] = 0;
      puVar4[0x1d] = 0;
      *(undefined4 *)((longlong)puVar4 + 0x94) = param_6;
      *(undefined4 *)(puVar4 + 0x13) = param_7;
      puVar4[1] = lVar1;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[4] = 0;
      puVar4[6] = 0;
      puVar4[5] = 0;
      puVar4[8] = 0;
      puVar4[7] = 0;
      puVar4[9] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      *(undefined4 *)(puVar4 + 0xc) = 0;
      *(undefined1 *)(puVar4 + 0xc) = param_11;
      *puVar4 = &PTR_FUN_18022a970;
      *(undefined4 *)(puVar4 + 0x1e) = 0;
      puVar4[0x1f] = 0;
      puVar4[0x20] = 0;
    }
    *(undefined2 *)(puVar3 + 2) = 0;
    *puVar3 = &PTR_FUN_180229d70;
    puVar3[1] = puVar4;
    puVar3[5] = param_1;
    puVar3[6] = param_3;
    puVar3[7] = lVar2;
    puVar3[8] = 0;
    uVar6 = param_5[1];
    uVar5 = *param_5;
    uVar8 = param_5[3];
    uVar7 = param_5[2];
    *(undefined4 *)(puVar3 + 0xd) = param_6;
    *(undefined4 *)((longlong)puVar3 + 0x6c) = param_7;
    *(undefined4 *)(puVar3 + 0xe) = param_8;
    *(undefined8 *)((longlong)puVar3 + 0x74) = 0;
    puVar3[10] = uVar6;
    puVar3[9] = uVar5;
    puVar3[0xc] = uVar8;
    puVar3[0xb] = uVar7;
    if (puVar4 != (undefined8 *)0x0) {
      *(uint *)(puVar4 + 0x20) = (uint)param_14 | (uint)param_10 << 9 | (uint)param_9 << 10;
    }
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    lVar2 = 0;
    if (param_1 != 0) {
      lVar2 = param_1 + 0x6838;
    }
    puVar3[0x13] = lVar2;
    *(undefined4 *)(puVar3 + 0x14) = 1;
    puVar3[0x15] = 0;
    puVar3[0x16] = puVar3 + 0x10;
    *puVar3 = &PTR_FUN_18022eeb8;
    puVar3[0x17] = param_1;
    puVar3[0x18] = param_2;
    puVar3[0x10] = &PTR_FUN_18022ee30;
    puVar3[0x19] = param_3;
    puVar3[0x1a] = param_4;
  }
  return puVar3;
}

