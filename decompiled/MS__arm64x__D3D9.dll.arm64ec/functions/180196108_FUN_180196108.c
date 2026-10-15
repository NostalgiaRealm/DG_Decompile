/*
 * FUN_180196108 at 180196108
 * undefined FUN_180196108(void)
 * Address ranges: 180196108-18019634f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180196108(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,int param_5,
             int param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined8 param_10)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined8 extraout_x10;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_60;
  undefined4 local_54;
  undefined4 uStack_50;
  longlong local_48;
  
  if (param_2 != 0) {
    local_54 = param_4;
    uStack_50 = param_8;
    local_48 = param_2;
    lVar2 = FUN_1801b91a0();
    if (lVar2 == 0) {
      local_60 = 0;
      uVar9 = 1;
      uVar8 = 1;
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(lVar2 + 0x1c);
      local_60 = *(undefined4 *)(lVar2 + 0x20);
      uVar9 = *(undefined4 *)(lVar2 + 0x24);
      uVar8 = *(undefined4 *)(lVar2 + 0x28);
      if (param_6 == 2) {
        param_6 = *(int *)(lVar2 + 0x18);
      }
      if (param_7 == 2) {
        param_7 = *(int *)(lVar2 + 0x14);
      }
    }
    puVar3 = (undefined8 *)FUN_1802229a8(0x140);
    if (puVar3 != (undefined8 *)0x0) {
      if (param_5 < 4) {
        iVar4 = *(int *)(&DAT_18022da38 + (longlong)param_5 * 4);
      }
      else {
        iVar4 = 0;
      }
      uVar1 = *(uint *)(param_1 + 0x28);
      uVar5 = (ulonglong)uVar1;
      *puVar3 = &PTR_D3DPERF_GetStatus_native_18022e0f8;
      puVar3[1] = param_1;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined4 *)(puVar3 + 7) = 0;
      puVar3[8] = 0;
      *(uint *)(puVar3 + 4) = uVar1;
      *(undefined4 *)((longlong)puVar3 + 0x24) = param_3;
      puVar3[6] = 0x100000000;
      *(undefined4 *)(puVar3 + 5) = local_54;
      *(int *)((longlong)puVar3 + 0x2c) = iVar4;
      *(undefined4 *)(puVar3 + 9) = 0;
      *(undefined2 *)((longlong)puVar3 + 0x4c) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = *(undefined4 *)(puVar3 + 6);
      if (iVar4 - 0x27U < 3) {
        *(undefined4 *)(puVar3 + 8) = 8;
      }
      FUN_1801baf90(&local_54,param_1);
      *(undefined4 *)(puVar3 + 9) = local_54;
      *puVar3 = &PTR_D3DPERF_GetStatus_native_18022cbd8;
      lVar7 = *(longlong *)(param_1 + 0x1cf10);
      puVar3[10] = lVar7;
      lVar2 = *(longlong *)(param_1 + 0x1cf10);
      *(int *)(puVar3 + 0xd) = (int)uVar5;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0;
      puVar3[0xc] = lVar2;
      puVar3[0xe] = lVar2 + (uVar5 & 0xffffffff) * 0x18c0 + 0x6b0;
      puVar3[0xf] = 0;
      lVar2 = *(longlong *)(param_1 + 0x1cf10);
      *(int *)(puVar3 + 0x15) = (int)uVar5;
      puVar3[0x18] = 0;
      puVar3[0x19] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x1b] = 0;
      puVar3[0x14] = lVar2;
      puVar3[0x1e] = extraout_x10;
      puVar3[0x1f] = param_1;
      puVar3[0x22] = local_48;
      puVar3[0x23] = 0;
      puVar3[0x24] = 0;
      puVar3[0x16] = lVar2 + (uVar5 & 0xffffffff) * 0x18c0 + 0x6b0;
      puVar3[0x17] = 0;
      *(undefined4 *)(puVar3 + 0x21) = uVar9;
      *(undefined4 *)((longlong)puVar3 + 0x10c) = uVar8;
      puVar3[0xb] = lVar7 + (uVar5 & 0xffffffff) * 0x18c0 + 0x6b0;
      *puVar3 = &PTR_D3DPERF_SetMarker_native_18022cd18;
      puVar3[0x1c] = &PTR_FUN_18022cca0;
      *(undefined4 *)(puVar3 + 0x20) = uVar6;
      *(undefined4 *)((longlong)puVar3 + 0x104) = local_60;
      *(undefined4 *)(puVar3 + 0x25) = uStack_50;
      *(undefined4 *)((longlong)puVar3 + 300) = param_9;
      if (param_5 < 4) {
        uVar6 = *(undefined4 *)(&DAT_18022da28 + (longlong)param_5 * 4);
      }
      else {
        uVar6 = 0;
      }
      *(undefined4 *)(puVar3 + 0x1d) = 0;
      *(undefined4 *)(puVar3 + 0x26) = uVar6;
      *(uint *)((longlong)puVar3 + 0x134) = (uint)(param_7 == 1);
      uVar6 = 2;
      if (param_6 == 1) {
        uVar6 = 3;
      }
      *(undefined4 *)(puVar3 + 0x27) = uVar6;
      uVar5 = FUN_18019f338(puVar3,param_10);
      if ((uVar5 & 1) != 0) {
        if (puVar3 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        return puVar3 + 0x1c;
      }
      FUN_18019f250(puVar3);
      FUN_1802229d8(puVar3,0x140);
    }
  }
  return (undefined8 *)0x0;
}

