/*
 * FUN_18008ce88 at 18008ce88
 * undefined FUN_18008ce88(void)
 * Address ranges: 18008ce88-18008d0f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18008ce88(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,int param_5,
             int param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined8 param_10)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong extraout_x15;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_6c;
  undefined4 local_68;
  longlong local_60;
  
  if (param_2 != 0) {
    local_68 = param_8;
    local_60 = param_2;
    lVar2 = func_0x0001801b91a0();
    if (lVar2 == 0) {
      uVar11 = 0;
      uVar10 = 1;
      uVar9 = 1;
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(lVar2 + 0x1c);
      uVar11 = *(undefined4 *)(lVar2 + 0x20);
      uVar10 = *(undefined4 *)(lVar2 + 0x24);
      uVar9 = *(undefined4 *)(lVar2 + 0x28);
      if (param_6 == 2) {
        param_6 = *(int *)(lVar2 + 0x18);
      }
      if (param_7 == 2) {
        param_7 = *(int *)(lVar2 + 0x14);
      }
    }
    puVar3 = (undefined8 *)FUN_180102f80(0x168);
    if (puVar3 != (undefined8 *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      if (param_5 < 4) {
        iVar4 = *(int *)(&DAT_180231460 + (longlong)param_5 * 4);
      }
      else {
        iVar4 = 0;
      }
      uVar1 = *(uint *)(param_1 + 0x28);
      uVar6 = (ulonglong)uVar1;
      *puVar3 = &PTR_D3DPERF_GetStatus_180235d90;
      puVar3[1] = param_1;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined4 *)(puVar3 + 5) = param_4;
      *(int *)((longlong)puVar3 + 0x2c) = iVar4;
      *(undefined4 *)(puVar3 + 7) = 0;
      *(uint *)(puVar3 + 4) = uVar1;
      *(undefined4 *)((longlong)puVar3 + 0x24) = param_3;
      puVar3[6] = 0x100000000;
      puVar3[8] = 0;
      *(undefined4 *)(puVar3 + 9) = 0;
      *(undefined2 *)((longlong)puVar3 + 0x4c) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = *(undefined4 *)(puVar3 + 6);
      if (iVar4 - 0x27U < 3) {
        *(undefined4 *)(puVar3 + 8) = 8;
      }
      FUN_1800a29c0(&local_6c,param_1);
      *(undefined4 *)(puVar3 + 9) = local_6c;
      *puVar3 = &PTR_D3DPERF_GetStatus_180235838;
      lVar8 = *(longlong *)(param_1 + 0x1cf10);
      puVar3[10] = lVar8;
      lVar2 = *(longlong *)(param_1 + 0x1cf10);
      *(int *)(puVar3 + 0xd) = (int)uVar6;
      *(undefined8 *)((longlong)puVar3 + 0x9c) = 0xffffffff;
      *(undefined8 *)((longlong)puVar3 + 0xa4) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x7c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x84) = 0;
      puVar3[0xc] = lVar2;
      *(undefined8 *)((longlong)puVar3 + 0x8c) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar3 + 0x94) = 0xffffffffffffffff;
      *(undefined2 *)((longlong)puVar3 + 0xac) = 0;
      *(ulonglong *)((longlong)puVar3 + 0x6c) = lVar2 + (uVar6 & 0xffffffff) * 0x1ac0 + 0x900;
      *(undefined8 *)((longlong)puVar3 + 0x74) = 0;
      lVar2 = *(longlong *)(param_1 + 0x1cf10);
      *(undefined8 *)((longlong)puVar3 + 0xec) = 0xffffffff;
      *(undefined8 *)((longlong)puVar3 + 0xf4) = 0;
      *(int *)(puVar3 + 0x17) = (int)uVar6;
      *(undefined8 *)((longlong)puVar3 + 0xcc) = 0;
      *(undefined8 *)((longlong)puVar3 + 0xd4) = 0;
      puVar3[0x16] = lVar2;
      *(undefined8 *)((longlong)puVar3 + 0xdc) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar3 + 0xe4) = 0xffffffffffffffff;
      *(undefined2 *)((longlong)puVar3 + 0xfc) = 0;
      puVar3[0x22] = uVar5;
      puVar3[0x23] = param_1;
      *(ulonglong *)((longlong)puVar3 + 0xbc) = lVar2 + (uVar6 & 0xffffffff) * 0x1ac0 + 0x900;
      *(undefined8 *)((longlong)puVar3 + 0xc4) = 0;
      *(undefined4 *)(puVar3 + 0x24) = uVar7;
      *(undefined4 *)((longlong)puVar3 + 0x124) = uVar11;
      *(undefined4 *)(puVar3 + 0x25) = uVar10;
      *(undefined4 *)((longlong)puVar3 + 300) = uVar9;
      puVar3[0x26] = local_60;
      puVar3[0x27] = 0;
      puVar3[0xb] = lVar8 + (uVar6 & 0xffffffff) * 0x1ac0 + 0x900;
      *puVar3 = &PTR_D3DPERF_SetMarker_180235970;
      puVar3[0x28] = 0;
      puVar3[0x20] = &PTR_FUN_1802358f8;
      *(undefined4 *)(puVar3 + 0x29) = param_3;
      *(undefined4 *)((longlong)puVar3 + 0x14c) = param_4;
      *(undefined4 *)(puVar3 + 0x2a) = local_68;
      *(undefined4 *)((longlong)puVar3 + 0x154) = param_9;
      if (param_5 < 4) {
        uVar7 = *(undefined4 *)(extraout_x15 + (longlong)param_5 * 4);
      }
      else {
        uVar7 = 0;
      }
      *(undefined4 *)(puVar3 + 0x21) = 0;
      *(undefined4 *)(puVar3 + 0x2b) = uVar7;
      *(uint *)((longlong)puVar3 + 0x15c) = (uint)(param_7 == 1);
      uVar7 = 2;
      if (param_6 == 1) {
        uVar7 = 3;
      }
      *(undefined4 *)(puVar3 + 0x2c) = uVar7;
      uVar6 = FUN_180099640(puVar3,param_10);
      if ((uVar6 & 1) != 0) {
        if (puVar3 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        return puVar3 + 0x20;
      }
      FUN_1800995b0(puVar3);
      FUN_180102fc0(puVar3,0x168);
    }
  }
  return (undefined8 *)0x0;
}

