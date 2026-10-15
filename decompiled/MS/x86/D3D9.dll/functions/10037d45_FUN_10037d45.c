/*
 * FUN_10037d45 at 10037d45
 * bool __thiscall FUN_10037d45(void * this, uint * param_1, undefined4 * param_2, undefined4 param_3)
 * Address ranges: 10037d45-10038013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10037d45(void *this,uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  undefined4 *puVar12;
  LPVOID local_2c4;
  void *local_2c0;
  undefined4 *local_2bc;
  uint local_2b8;
  LPCRITICAL_SECTION local_2b4;
  LPVOID local_2b0;
  int local_2ac;
  undefined4 *local_2a0;
  LPVOID local_29c;
  int local_298;
  uint local_294;
  uint local_290;
  undefined4 local_28c [142];
  undefined4 local_54;
  uint local_50;
  int local_4c [18];
  
  local_2b4 = (LPCRITICAL_SECTION)((int)this + 0x88);
  local_2c0 = this;
  EnterCriticalSection(local_2b4);
  local_2c4 = (LPVOID)*param_1;
  local_2bc = (undefined4 *)((int)this + 0x70);
  puVar2 = (undefined4 *)FUN_100382bb(local_2bc,(uint *)&local_2c4);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_100cfed0((int *)&local_2a0,0,0x294);
    local_2a0 = (undefined4 *)FUN_100cfd55(0x264);
    if (local_2a0 == (undefined4 *)0x0) {
      local_2a0 = (undefined4 *)0x0;
    }
    else {
      *local_2a0 = 0;
      local_2a0[1] = 0;
      local_2a0[2] = 0;
      local_2a0[3] = 0;
      puVar8 = param_1;
      puVar10 = local_2a0 + 4;
      for (iVar5 = 0x95; this = local_2c0, iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    if (local_2a0 == (undefined4 *)0x0) goto LAB_10037ffc;
    FUN_10036e19(&local_2b0,0x100);
    FUN_10072e3c(*(undefined4 *)((int)this + 4),(int)param_1,(int *)&local_2b0);
    local_2c4 = local_2b0;
    local_298 = local_2ac - (int)local_2b0;
    local_29c = local_2b0;
    uVar3 = FUN_100381b1(*(int *)((int)this + -0x14),*(int *)((int)this + -0x10),local_2b0,local_298
                         ,(uint)param_1,(int)param_2,&local_294,&local_290);
    puVar9 = local_2a0;
    if ((char)uVar3 == '\0') {
      if (local_2a0 != (undefined4 *)0x0) {
        FUN_10008783(local_2a0);
        FUN_100cfd6c(puVar9);
      }
    }
    else {
      local_50 = param_1[0x12a];
      puVar2 = param_2;
      puVar9 = local_28c;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar9 = puVar9 + 1;
      }
      local_2c4 = (LPVOID)0x0;
      FUN_100cfed0(local_4c,0,0x40);
      local_54 = 1;
      puVar2 = (undefined4 *)FUN_10037b85(local_2bc,*param_1,&local_2a0);
      this = local_2c0;
    }
    thunk_FUN_100cfd6c(local_2c4);
    if (puVar2 == (undefined4 *)0x0) goto LAB_10037ffc;
  }
  uVar6 = 0;
  uVar4 = 0xffffffff;
  do {
    local_2b8 = uVar6 * 0x48;
    local_2c4 = (LPVOID)puVar2[uVar6 * 0x12 + 3];
    if ((local_2c4 == (LPVOID)0x0) ||
       (local_2bc = (undefined4 *)puVar2[0x93],
       (*(byte *)((int)&local_2bc + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) == 0)) {
      uVar7 = uVar6;
      if (uVar4 != 0xffffffff) {
        uVar7 = uVar4;
      }
    }
    else {
      local_2bc = puVar2 + uVar6 * 0x12 + 5;
      iVar5 = 0;
      while (uVar7 = uVar4, this = local_2c0, param_2[iVar5] == local_2bc[iVar5]) {
        iVar5 = iVar5 + 1;
        if (iVar5 == 0x10) {
          *(LPVOID *)((int)local_2c0 + 0x68) = local_2c4;
          *(undefined4 *)((int)local_2c0 + 0x6c) = puVar2[uVar6 * 0x12 + 4];
          goto LAB_10037fdf;
        }
      }
    }
    uVar6 = uVar6 + 1;
    uVar4 = uVar7;
  } while ((int)uVar6 < 8);
  if (uVar6 == 8) {
    uVar4 = 0;
    if (uVar7 != 0xffffffff) {
      uVar4 = uVar7;
    }
    local_2c4 = (LPVOID)(uVar4 * 0x48);
    local_2b8 = uVar4;
    if ((int *)puVar2[uVar4 * 0x12 + 3] != (int *)0x0) {
      FUN_100b4ccf(*(void **)((int)this + -0x14),*(int *)((int)this + -0x10),
                   (int *)puVar2[uVar4 * 0x12 + 3]);
      FUN_100b4ccf(*(void **)((int)this + -0x14),*(int *)((int)this + -0x10),
                   (int *)puVar2[uVar4 * 0x12 + 4]);
    }
    iVar11 = *(int *)((int)this + -0x10) * 0x1510;
    iVar5 = *(int *)((int)this + -0x14);
    uVar4 = FUN_100379f3((uint)param_1,(int)param_2,puVar2[1],puVar2[2],
                         *(int **)(iVar11 + 0x510 + iVar5));
    *(uint *)((int)local_2c0 + 0x68) = uVar4;
    *(uint *)((int)local_2c4 + 0xcU + (int)puVar2) = uVar4;
    uVar4 = FUN_100379f3((uint)(param_1 + 0x95),(int)param_2,puVar2[1],puVar2[2],
                         *(int **)(iVar11 + 0x510 + iVar5));
    *(uint *)((int)local_2c0 + 0x6c) = uVar4;
    *(uint *)((int)local_2c4 + 0x10U + (int)puVar2) = uVar4;
    pbVar1 = (byte *)((int)puVar2 + ((int)local_2b8 >> 3) + 0x24c);
    *pbVar1 = *pbVar1 | '\x01' << (local_2b8 & 7);
    this = local_2c0;
  }
LAB_10037fdf:
  *(undefined4 *)((int)this + -0xc) = *puVar2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  puVar9 = puVar2 + 0x95;
  puVar12 = (undefined4 *)((int)local_2c0 + 0x24);
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  }
LAB_10037ffc:
  LeaveCriticalSection(local_2b4);
  return puVar2 != (undefined4 *)0x0;
}

