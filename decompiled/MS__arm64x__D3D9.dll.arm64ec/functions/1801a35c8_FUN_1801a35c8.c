/*
 * FUN_1801a35c8 at 1801a35c8
 * undefined FUN_1801a35c8(void)
 * Address ranges: 1801a35c8-1801a383b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1801a35c8(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,int param_5,
             int param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined8 param_10)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 extraout_x10;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_60;
  undefined4 uStack_50;
  undefined4 local_4c;
  longlong local_48;
  
  if (param_2 != 0) {
    local_4c = param_8;
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
    puVar3 = (undefined8 *)FUN_1802229a8(0x168);
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
      *(undefined4 *)(puVar3 + 5) = param_4;
      *(int *)((longlong)puVar3 + 0x2c) = iVar4;
      *(undefined4 *)(puVar3 + 9) = 0;
      *(undefined2 *)((longlong)puVar3 + 0x4c) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = *(undefined4 *)(puVar3 + 6);
      if (iVar4 - 0x27U < 3) {
        *(undefined4 *)(puVar3 + 8) = 8;
      }
      FUN_1801baf90(&uStack_50,param_1);
      *(undefined4 *)(puVar3 + 9) = uStack_50;
      *puVar3 = &PTR_D3DPERF_GetStatus_native_18022d478;
      lVar2 = *(longlong *)(param_1 + 0x1cf10);
      puVar3[10] = lVar2;
      lVar7 = *(longlong *)(param_1 + 0x1cf10);
      *(undefined8 *)((longlong)puVar3 + 0x9c) = 0xffffffff;
      *(undefined8 *)((longlong)puVar3 + 0xa4) = 0;
      *(int *)(puVar3 + 0xd) = (int)uVar5;
      *(undefined8 *)((longlong)puVar3 + 0x7c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x84) = 0;
      puVar3[0xc] = lVar7;
      *(undefined8 *)((longlong)puVar3 + 0x8c) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar3 + 0x94) = 0xffffffffffffffff;
      *(undefined2 *)((longlong)puVar3 + 0xac) = 0;
      *(ulonglong *)((longlong)puVar3 + 0x6c) = lVar7 + (uVar5 & 0xffffffff) * 0x1ac0 + 0x900;
      *(undefined8 *)((longlong)puVar3 + 0x74) = 0;
      lVar7 = *(longlong *)(param_1 + 0x1cf10);
      *(undefined8 *)((longlong)puVar3 + 0xec) = 0xffffffff;
      *(undefined8 *)((longlong)puVar3 + 0xf4) = 0;
      *(int *)(puVar3 + 0x17) = (int)uVar5;
      *(undefined8 *)((longlong)puVar3 + 0xcc) = 0;
      *(undefined8 *)((longlong)puVar3 + 0xd4) = 0;
      puVar3[0x16] = lVar7;
      *(undefined8 *)((longlong)puVar3 + 0xdc) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar3 + 0xe4) = 0xffffffffffffffff;
      *(undefined2 *)((longlong)puVar3 + 0xfc) = 0;
      puVar3[0x22] = extraout_x10;
      puVar3[0x23] = param_1;
      *(ulonglong *)((longlong)puVar3 + 0xbc) = lVar7 + (uVar5 & 0xffffffff) * 0x1ac0 + 0x900;
      *(undefined8 *)((longlong)puVar3 + 0xc4) = 0;
      *(undefined4 *)(puVar3 + 0x25) = uVar9;
      *(undefined4 *)((longlong)puVar3 + 300) = uVar8;
      puVar3[0x26] = local_48;
      puVar3[0x27] = 0;
      puVar3[0x28] = 0;
      puVar3[0xb] = lVar2 + (uVar5 & 0xffffffff) * 0x1ac0 + 0x900;
      *puVar3 = &PTR_D3DPERF_SetMarker_native_18022d5b0;
      puVar3[0x20] = &PTR_FUN_18022d538;
      *(undefined4 *)(puVar3 + 0x24) = uVar6;
      *(undefined4 *)((longlong)puVar3 + 0x124) = local_60;
      *(undefined4 *)(puVar3 + 0x29) = param_3;
      *(undefined4 *)((longlong)puVar3 + 0x14c) = param_4;
      *(undefined4 *)(puVar3 + 0x2a) = local_4c;
      *(undefined4 *)((longlong)puVar3 + 0x154) = param_9;
      if (param_5 < 4) {
        uVar6 = *(undefined4 *)(&DAT_18022da28 + (longlong)param_5 * 4);
      }
      else {
        uVar6 = 0;
      }
      *(undefined4 *)(puVar3 + 0x21) = 0;
      *(undefined4 *)(puVar3 + 0x2b) = uVar6;
      *(uint *)((longlong)puVar3 + 0x15c) = (uint)(param_7 == 1);
      uVar6 = 2;
      if (param_6 == 1) {
        uVar6 = 3;
      }
      *(undefined4 *)(puVar3 + 0x2c) = uVar6;
      uVar5 = FUN_1801b0a40(puVar3,param_10);
      if ((uVar5 & 1) != 0) {
        if (puVar3 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        return puVar3 + 0x20;
      }
      FUN_1801b0968(puVar3);
      FUN_1802229d8(puVar3,0x168);
    }
  }
  return (undefined8 *)0x0;
}

