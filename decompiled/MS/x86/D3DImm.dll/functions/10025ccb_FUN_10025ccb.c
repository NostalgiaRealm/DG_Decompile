/*
 * FUN_10025ccb at 10025ccb
 * undefined __thiscall FUN_10025ccb(void * this, int param_1, uint * param_2, int param_3, uint param_4, uint * param_5, uint param_6, int param_7, byte param_8, undefined1 param_9)
 * Address ranges: 10025ccb-10026161
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10025ccb(void *this,int param_1,uint *param_2,int param_3,uint param_4,uint *param_5,
            uint param_6,int param_7,byte param_8,undefined1 param_9)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint ***pppuVar10;
  undefined4 **ppuVar11;
  bool bVar12;
  uint local_64;
  uint local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  undefined4 *local_50 [5];
  uint **local_3c;
  void *local_38;
  uint local_34;
  uint local_30;
  byte local_2c;
  uint *local_28;
  int local_24;
  uint *local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  local_24 = param_3;
  local_28 = param_2;
  iVar1 = *(int *)((int)this + 0x1d54);
  local_1c = param_2[2] << 3;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  bVar12 = false;
  local_20 = param_5;
  local_14 = param_7;
  local_5c = this;
  FUN_1005c1d0((int *)(iVar1 + 0x11c0));
  local_54 = (uint *)0x1;
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
    local_64 = param_4;
  }
  else {
    if (*param_2 != *(uint *)((int)this + 0x2140)) {
      *(uint *)((int)this + 0x2140) = *param_2;
      uVar3 = FUN_1002498e((void *)((int)this + 0x1dd0),param_2);
      *(undefined4 *)((int)this + 0x2144) = uVar3;
    }
    local_28 = *(uint **)((int)this + 0x2144);
    if (*(uint **)((int)this + 0x2144) != (uint *)0x0) {
      local_64 = 0;
      FUN_10022e60(param_5,param_6,param_8,&local_10,&local_64);
      uVar6 = 0;
      param_4 = (local_64 - local_10) + 1;
      if (param_2[2] != 0) {
        do {
          iVar1 = uVar6 + 0x9c;
          uVar6 = uVar6 + 1;
          local_18 = local_18 + 0x10 +
                     *(byte *)((int)param_2 + (uint)*(byte *)((int)param_2 + iVar1) * 8 + 0x16) *
                     param_4;
        } while (uVar6 < param_2[2]);
      }
      local_c = ((uint)param_8 * 2 + 2) * param_6;
    }
    bVar12 = true;
    local_64 = param_4;
  }
  uVar6 = local_64;
  local_3c = &local_28;
  uVar7 = local_1c + 0x24 + local_18 + local_c;
  local_30 = param_6;
  local_2c = param_8;
  local_38 = this;
  local_34 = local_64;
  if ((bVar12) && (uVar7 < 0x3f00)) {
    iVar1 = *(int *)((int)this + 0x1d54);
    piVar8 = (int *)(iVar1 + 0x11c0);
    local_58 = local_28;
    pppuVar10 = &local_3c;
    ppuVar11 = local_50;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppuVar11 = *pppuVar10;
      pppuVar10 = pppuVar10 + 1;
      ppuVar11 = ppuVar11 + 1;
    }
    bVar12 = *(char *)(iVar1 + 0x12ec) == '\0';
    if (*(char *)(iVar1 + 0x12ec) != '\0') {
      iVar5 = 0x1c;
      if (uVar7 != 0) {
        iVar5 = (uVar7 + 3 & 0xfffffffc) + 0x20;
      }
      local_60 = uVar7 + 3;
      puVar4 = (undefined4 *)FUN_1005c0f0(piVar8,iVar5);
      if (puVar4 == (undefined4 *)0x0) {
        FUN_1001b0b6(piVar8);
        bVar12 = true;
      }
      else {
        LOCK();
        *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
        UNLOCK();
        puVar4[1] = iVar5;
        uVar6 = (uint)(uVar7 != 0);
        puVar4[uVar6 + 2] = local_5c;
        puVar4[uVar6 + 3] = param_1;
        puVar4[uVar6 + 4] = local_58;
        puVar4[uVar6 + 5] = local_64;
        puVar4[uVar6 + 6] = param_6;
        *(byte *)(puVar4 + uVar6 + 7) = param_8;
        puVar9 = (undefined4 *)((int)puVar4 + (uVar6 + 2) * 4 + 0x1f & 0xfffffffc);
        *(undefined1 *)(puVar4 + uVar6 + 8) = param_9;
        if (uVar7 != 0) {
          puVar4[2] = puVar9;
          FUN_10026162(local_50,puVar9);
          puVar9 = (undefined4 *)((int)puVar9 + (local_60 & 0xfffffffc));
        }
        *puVar9 = 0;
        *puVar4 = FUN_10026235;
        piVar8[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar9;
        if (*(char *)(iVar1 + 0x12ed) != '\0') {
          *piVar8 = 0;
          SetEvent(*(HANDLE *)(iVar1 + 0x1220));
          local_54 = (uint *)((uint)local_54 & 0xffffff00);
        }
      }
    }
    if (bVar12) {
      pppuVar10 = &local_3c;
      ppuVar11 = local_50;
      for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppuVar11 = *pppuVar10;
        pppuVar10 = pppuVar10 + 1;
        ppuVar11 = ppuVar11 + 1;
      }
      piVar2 = *(int **)(iVar1 + 0x12d0);
      uVar6 = (uint)(uVar7 != 0);
      piVar2[uVar6] = (int)local_5c;
      piVar2[uVar6 + 1] = param_1;
      piVar2[uVar6 + 2] = (int)local_58;
      piVar2[uVar6 + 3] = local_64;
      piVar2[uVar6 + 4] = param_6;
      *(byte *)(piVar2 + uVar6 + 5) = param_8;
      *(undefined1 *)(piVar2 + uVar6 + 6) = param_9;
      if (uVar7 != 0) {
        *piVar2 = (int)(piVar2 + uVar6 + 7);
        FUN_10026162(local_50,piVar2 + uVar6 + 7);
      }
      FUN_10026235(piVar2);
    }
    if ((char)local_54 == '\0') {
      return;
    }
    *piVar8 = 0;
    return;
  }
  local_50[0] = (undefined4 *)0x0;
  local_50[1] = (undefined4 *)0x0;
  local_50[2] = (undefined4 *)0x0;
  if ((bVar12) &&
     (bVar12 = FUN_10056854((void *)(*(int *)((int)this + 0x1d54) + 0x14f0),uVar7,(int *)local_50),
     bVar12)) {
    FUN_10026162(&local_3c,local_50[0]);
  }
  iVar1 = *(int *)((int)this + 0x1d54);
  local_60 = local_14;
  piVar8 = (int *)(iVar1 + 0x11c0);
  local_5c = local_20;
  local_58 = (uint *)local_24;
  local_54 = local_28;
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar4 = (undefined4 *)FUN_1005c0f0(piVar8,0x34);
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar4[1] = 0x34;
      puVar4[2] = this;
      puVar4[3] = param_1;
      puVar4[4] = local_54;
      puVar4[5] = local_58;
      puVar4[6] = uVar6;
      puVar4[7] = local_5c;
      puVar4[8] = param_6;
      puVar4[9] = local_60;
      *(byte *)(puVar4 + 10) = param_8;
      *(undefined1 *)(puVar4 + 0xb) = param_9;
      puVar4[0xc] = local_50[0];
      puVar4[0xd] = local_50[1];
      puVar4[0xe] = local_50[2];
      puVar9 = (undefined4 *)((int)puVar4 + 0x3fU & 0xfffffffc);
      *puVar9 = 0;
      *puVar4 = FUN_10026323;
      piVar8[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar9;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *piVar8 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10026153;
    }
    FUN_1001b0b6(piVar8);
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar4 = this;
  puVar4[1] = param_1;
  puVar4[2] = local_54;
  puVar4[3] = local_58;
  puVar4[4] = uVar6;
  puVar4[5] = local_5c;
  puVar4[6] = param_6;
  puVar4[7] = local_60;
  *(byte *)(puVar4 + 8) = param_8;
  *(undefined1 *)(puVar4 + 9) = param_9;
  puVar4[10] = local_50[0];
  puVar4[0xb] = local_50[1];
  puVar4[0xc] = local_50[2];
  FUN_10026323(puVar4);
LAB_10026153:
  *piVar8 = 0;
  return;
}

