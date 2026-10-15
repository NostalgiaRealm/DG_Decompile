/*
 * FUN_180080cb0 at 180080cb0
 * undefined FUN_180080cb0(void)
 * Address ranges: 180080cb0-180080ef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180080cb0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,int param_5,
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
  undefined4 local_5c;
  undefined4 local_58;
  
  if (param_2 != 0) {
    local_5c = param_4;
    local_58 = param_8;
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
    puVar3 = (undefined8 *)FUN_180102f80(0x140);
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
      *(undefined4 *)(puVar3 + 7) = 0;
      puVar3[8] = 0;
      *(uint *)(puVar3 + 4) = uVar1;
      *(undefined4 *)((longlong)puVar3 + 0x24) = param_3;
      puVar3[6] = 0x100000000;
      *(undefined4 *)(puVar3 + 5) = local_5c;
      *(int *)((longlong)puVar3 + 0x2c) = iVar4;
      *(undefined4 *)(puVar3 + 9) = 0;
      *(undefined2 *)((longlong)puVar3 + 0x4c) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = *(undefined4 *)(puVar3 + 6);
      if (iVar4 - 0x27U < 3) {
        *(undefined4 *)(puVar3 + 8) = 8;
      }
      FUN_1800a29c0(&local_5c,param_1);
      *(undefined4 *)(puVar3 + 9) = local_5c;
      *puVar3 = &PTR_D3DPERF_GetStatus_180235050;
      lVar8 = *(longlong *)(param_1 + 0x1cf10);
      puVar3[10] = lVar8;
      lVar2 = *(longlong *)(param_1 + 0x1cf10);
      *(int *)(puVar3 + 0xd) = (int)uVar6;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0;
      puVar3[0xc] = lVar2;
      puVar3[0xe] = lVar2 + (uVar6 & 0xffffffff) * 0x18c0 + 0x6b0;
      puVar3[0xf] = 0;
      lVar2 = *(longlong *)(param_1 + 0x1cf10);
      *(int *)(puVar3 + 0x15) = (int)uVar6;
      puVar3[0x18] = 0;
      puVar3[0x19] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x1b] = 0;
      puVar3[0x14] = lVar2;
      puVar3[0x1e] = uVar5;
      puVar3[0x1f] = param_1;
      puVar3[0x22] = param_2;
      puVar3[0x23] = 0;
      puVar3[0x24] = 0;
      puVar3[0x16] = lVar2 + (uVar6 & 0xffffffff) * 0x18c0 + 0x6b0;
      puVar3[0x17] = 0;
      *(undefined4 *)(puVar3 + 0x20) = uVar7;
      *(undefined4 *)((longlong)puVar3 + 0x104) = uVar11;
      *(undefined4 *)(puVar3 + 0x21) = uVar10;
      *(undefined4 *)((longlong)puVar3 + 0x10c) = uVar9;
      puVar3[0xb] = lVar8 + (uVar6 & 0xffffffff) * 0x18c0 + 0x6b0;
      *puVar3 = &PTR_D3DPERF_SetMarker_180235190;
      puVar3[0x1c] = &PTR_FUN_180235118;
      *(undefined4 *)(puVar3 + 0x25) = local_58;
      *(undefined4 *)((longlong)puVar3 + 300) = param_9;
      if (param_5 < 4) {
        uVar7 = *(undefined4 *)(extraout_x15 + (longlong)param_5 * 4);
      }
      else {
        uVar7 = 0;
      }
      *(undefined4 *)(puVar3 + 0x1d) = 0;
      *(undefined4 *)(puVar3 + 0x26) = uVar7;
      *(uint *)((longlong)puVar3 + 0x134) = (uint)(param_7 == 1);
      uVar7 = 2;
      if (param_6 == 1) {
        uVar7 = 3;
      }
      *(undefined4 *)(puVar3 + 0x27) = uVar7;
      uVar6 = FUN_180089168(puVar3,param_10);
      if ((uVar6 & 1) != 0) {
        if (puVar3 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        return puVar3 + 0x1c;
      }
      FUN_1800890d8(puVar3);
      FUN_180102fc0(puVar3,0x140);
    }
  }
  return (undefined8 *)0x0;
}

