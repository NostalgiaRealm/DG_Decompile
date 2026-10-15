/*
 * FUN_1004dac2 at 1004dac2
 * bool __thiscall FUN_1004dac2(void * this, uint * param_1, undefined4 * param_2, undefined4 param_3)
 * Address ranges: 1004dac2-1004ddfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1004dac2(void *this,uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  byte *pbVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  int *piVar14;
  undefined1 *local_304;
  uint local_300;
  void *local_2fc;
  int *local_2f8;
  int *local_2f4;
  int local_2f0;
  LPCRITICAL_SECTION local_2ec;
  int local_2e8 [4];
  int local_2d8 [16];
  undefined4 *local_298;
  int local_294;
  int local_290;
  undefined4 local_28c [142];
  undefined4 local_54;
  uint local_50;
  int local_4c [18];
  
  local_2ec = (LPCRITICAL_SECTION)((int)this + 0x90);
  local_2fc = this;
  EnterCriticalSection(local_2ec);
  local_300 = *param_1;
  local_304 = (undefined1 *)((int)this + 0x78);
  local_2f8 = (int *)FUN_1004e034(local_304,&local_300);
  if (local_2f8 == (int *)0x0) {
    FUN_100cfed0((int *)&local_298,0,0x28c);
    puVar3 = (undefined4 *)FUN_100cfd55(0x264);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar10 = param_1;
      puVar13 = puVar3 + 4;
      for (iVar4 = 0x95; this = local_2fc, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
    }
    local_298 = puVar3;
    if (puVar3 == (undefined4 *)0x0) goto LAB_1004dde1;
    local_294 = FUN_1004d75d((void *)((int)this + -0x18),(int)param_1,(int)param_2);
    if ((local_294 == 0) ||
       (local_290 = FUN_1004d75d((void *)((int)this + -0x18),(int)(param_1 + 0x95),(int)param_2),
       local_290 == 0)) {
      if (puVar3 != (undefined4 *)0x0) {
        FUN_10008783(puVar3);
        FUN_100cfd6c(puVar3);
      }
      goto LAB_1004dde1;
    }
    local_50 = param_1[0x12a];
    puVar3 = param_2;
    puVar5 = local_28c;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_100cfed0(local_4c,0,0x40);
    local_54 = 1;
    local_2f8 = (int *)FUN_1004d8b0(local_304,*param_1,&local_298);
    this = local_2fc;
    if (local_2f8 == (int *)0x0) goto LAB_1004dde1;
  }
  uVar6 = 0;
  uVar7 = 0xffffffff;
  do {
    local_300 = uVar6 * 0x48;
    local_2f0 = local_2f8[uVar6 * 0x12 + 1];
    if ((local_2f0 == 0) ||
       (local_304 = (undefined1 *)local_2f8[0x91],
       (*(byte *)((int)&local_304 + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) == 0)) {
      uVar8 = uVar6;
      if (uVar7 != 0xffffffff) {
        uVar8 = uVar7;
      }
    }
    else {
      local_2f4 = local_2f8 + uVar6 * 0x12 + 3;
      local_304 = (undefined1 *)0x0;
      while (uVar8 = uVar7, this = local_2fc,
            param_2[(int)local_304] == (local_2f8 + uVar6 * 0x12 + 3)[(int)local_304]) {
        local_304 = local_304 + 1;
        if (local_304 == &DAT_00000010) {
          local_2e8[2] = local_2f8[uVar6 * 0x12 + 2];
          local_2e8[1] = local_2f0;
          goto LAB_1004dd12;
        }
      }
    }
    uVar6 = uVar6 + 1;
    uVar7 = uVar8;
  } while ((int)uVar6 < 8);
  local_300 = uVar8;
  if (uVar6 == 8) {
    uVar7 = 0;
    if (uVar8 != 0xffffffff) {
      uVar7 = uVar8;
    }
    local_2e8[1] = FUN_1004d75d((void *)((int)this + -0x18),(int)param_1,(int)param_2);
    local_2f8[uVar7 * 0x12 + 1] = local_2e8[1];
    local_2e8[2] = FUN_1004d75d((void *)((int)this + -0x18),(int)(param_1 + 0x95),(int)param_2);
    local_2f8[uVar7 * 0x12 + 2] = local_2e8[2];
    pbVar1 = (byte *)((int)local_2f8 + ((int)uVar7 >> 3) + 0x244);
    *pbVar1 = *pbVar1 | '\x01' << (uVar7 & 7);
  }
LAB_1004dd12:
  pvVar2 = local_2fc;
  local_2e8[0] = *local_2f8;
  local_2e8[3] = param_3;
  piVar9 = local_2f8 + 0x93;
  piVar11 = local_2d8;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar11 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar11 = piVar11 + 1;
  }
  piVar9 = (int *)(*(int *)((int)local_2fc + -0x14) +
                  *(int *)((int)local_2fc + -0x10) * 0x16c0 + 0x1880);
  FUN_100ce620(piVar9);
  if ((char)piVar9[0x4b] == '\0') {
LAB_1004ddbd:
    piVar11 = (int *)piVar9[0x44];
    *piVar11 = (int)pvVar2 + -0x18;
    piVar12 = local_2e8;
    piVar14 = piVar11;
    for (iVar4 = 0x14; piVar14 = piVar14 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar14 = *piVar12;
      piVar12 = piVar12 + 1;
    }
    FUN_1004ddfc(piVar11);
  }
  else {
    puVar3 = (undefined4 *)FUN_100ce540(piVar9,0x54);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_1003971e(piVar9);
      goto LAB_1004ddbd;
    }
    LOCK();
    piVar9[0x4a] = piVar9[0x4a] + 1;
    UNLOCK();
    puVar3[1] = 0x54;
    puVar3[2] = (int)pvVar2 + -0x18;
    piVar11 = local_2e8;
    piVar14 = puVar3 + 3;
    for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar14 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar14 = piVar14 + 1;
    }
    puVar5 = (undefined4 *)((int)puVar3 + 0x5fU & 0xfffffffc);
    *puVar5 = 0;
    *puVar3 = FUN_1004ddfc;
    piVar9[piVar9[0x49] * 5 + 0x1a] = (int)puVar5;
    if (*(char *)((int)piVar9 + 0x12d) != '\0') {
      *piVar9 = 0;
      SetEvent((HANDLE)piVar9[0x18]);
      goto LAB_1004dde1;
    }
  }
  *piVar9 = 0;
LAB_1004dde1:
  LeaveCriticalSection(local_2ec);
  return local_2f8 != (int *)0x0;
}

