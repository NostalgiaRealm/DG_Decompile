/*
 * FUN_10049893 at 10049893
 * undefined __thiscall FUN_10049893(void * this, int param_1, uint * param_2, int param_3, undefined4 * param_4, uint param_5, int param_6, uint * param_7, uint param_8, int param_9, undefined4 param_10)
 * Address ranges: 10049893-10049da1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10049893(void *this,int param_1,uint *param_2,int param_3,undefined4 *param_4,uint param_5,
            int param_6,uint *param_7,uint param_8,int param_9,undefined4 param_10)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 uVar4;
  void *pvVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  int **ppiVar14;
  uint uVar15;
  uint *puVar16;
  char cVar17;
  uint local_88;
  uint local_7c;
  uint local_78;
  void *local_74;
  uint *local_70;
  int *local_6c;
  uint local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int *local_50 [2];
  undefined4 **local_48;
  uint *local_44;
  void *local_40;
  uint **local_3c;
  uint *local_38;
  uint *local_34;
  undefined4 *local_30;
  undefined4 local_2c [10];
  
  puVar16 = param_7;
  local_6c = (int *)((int)this + 0xf6b8);
  local_88 = param_5;
  iVar8 = *local_6c;
  local_78 = local_78 & 0xffffff00;
  uVar15 = 0;
  local_7c = 0;
  local_68 = 0;
  local_64 = (undefined4 *)0x0;
  local_70 = param_2;
  local_74 = this;
  FUN_100ce620((int *)(iVar8 + 0x11c0));
  pvVar5 = local_74;
  piVar13 = local_6c;
  if (*(char *)(iVar8 + 0x12ec) != '\0') {
    if (*param_2 != *(uint *)((int)local_74 + 0xfd04)) {
      *(uint *)((int)local_74 + 0xfd04) = *param_2;
      uVar7 = FUN_10045eba((void *)((int)local_74 + 0xf734),param_2);
      *(undefined4 *)((int)pvVar5 + 0xfd08) = uVar7;
    }
    local_70 = *(uint **)((int)pvVar5 + 0xfd08);
    if (local_70 != (uint *)0x0) {
      local_7c = 0;
      FUN_10043860(param_7,param_8,(char)param_10,&local_68,&local_7c);
      param_6 = (local_7c - local_68) + 1;
      local_7c = param_2[3] * param_6;
      iVar8 = 2;
      if ((char)param_10 != '\0') {
        iVar8 = 4;
      }
      uVar15 = local_7c + 0x20 + iVar8 * param_8;
      local_64 = (undefined4 *)((param_9 + local_68) * param_5 + (int)param_4);
    }
    uVar3 = param_8;
    iVar8 = param_6;
    piVar13 = (int *)((int)pvVar5 + 0xf6b8);
    local_78 = 1;
    local_54 = uVar15;
    if (uVar15 < 0x3f00) {
      uVar4 = (char)param_10;
      local_6c = (int *)param_2[3];
      iVar1 = *(int *)((int)pvVar5 + 0xf6b8);
      piVar13 = (int *)(iVar1 + 0x11c0);
      local_40 = pvVar5;
      local_50[0] = &param_6;
      local_50[1] = (int *)param_2;
      local_48 = &local_64;
      local_44 = &param_5;
      local_3c = &param_7;
      local_38 = &param_8;
      local_34 = &local_68;
      local_30 = &param_10;
      cVar17 = *(char *)(iVar1 + 0x12ec) == '\0';
      if (*(char *)(iVar1 + 0x12ec) != '\0') {
        iVar11 = 0x24;
        if (uVar15 != 0) {
          iVar11 = (uVar15 + 3 & 0xfffffffc) + 0x28;
        }
        puVar9 = (undefined4 *)FUN_100ce540(piVar13,iVar11);
        if (puVar9 == (undefined4 *)0x0) {
          FUN_1003971e(piVar13);
          cVar17 = (char)local_78;
        }
        else {
          LOCK();
          *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
          UNLOCK();
          puVar9[1] = iVar11;
          uVar10 = (uint)(uVar15 != 0);
          puVar9[uVar10 + 2] = local_7c;
          puVar9[uVar10 + 3] = local_74;
          puVar9[uVar10 + 4] = param_1;
          puVar9[uVar10 + 5] = local_70;
          puVar9[uVar10 + 6] = param_3;
          puVar9[uVar10 + 7] = local_6c;
          puVar9[uVar10 + 8] = iVar8;
          puVar9[uVar10 + 9] = uVar3;
          *(undefined1 *)(puVar9 + uVar10 + 10) = uVar4;
          puVar12 = (undefined4 *)((int)puVar9 + (uVar10 + 2) * 4 + 0x27 & 0xfffffffc);
          if (uVar15 != 0) {
            puVar9[2] = puVar12;
            FUN_10046c6e(local_50,puVar12);
            puVar12 = (undefined4 *)((int)puVar12 + (uVar15 + 3 & 0xfffffffc));
          }
          *puVar12 = 0;
          *puVar9 = FUN_10049da2;
          piVar13[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar12;
          if (*(char *)(iVar1 + 0x12ed) != '\0') {
            *piVar13 = 0;
            SetEvent(*(HANDLE *)(iVar1 + 0x1220));
            local_78 = local_78 & 0xffffff00;
          }
        }
      }
      if (cVar17 != '\0') {
        ppiVar14 = local_50;
        puVar9 = local_2c;
        for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar9 = *ppiVar14;
          ppiVar14 = ppiVar14 + 1;
          puVar9 = puVar9 + 1;
        }
        piVar2 = *(int **)(iVar1 + 0x12d0);
        uVar15 = (uint)(local_54 != 0);
        piVar2[uVar15] = local_7c;
        piVar2[uVar15 + 1] = (int)local_74;
        piVar2[uVar15 + 2] = param_1;
        piVar2[uVar15 + 3] = (int)local_70;
        piVar2[uVar15 + 4] = param_3;
        piVar2[uVar15 + 5] = (int)local_6c;
        piVar2[uVar15 + 6] = iVar8;
        piVar2[uVar15 + 7] = uVar3;
        *(undefined1 *)(piVar2 + uVar15 + 8) = uVar4;
        if (local_54 != 0) {
          *piVar2 = (int)(piVar2 + uVar15 + 9);
          FUN_10046c6e(local_2c,piVar2 + uVar15 + 9);
        }
        FUN_10049da2(piVar2);
      }
      if ((char)local_78 == '\0') {
        return;
      }
      *piVar13 = 0;
      return;
    }
  }
  local_60 = (undefined4 *)0x0;
  local_5c = 0;
  local_58 = 0;
  puVar9 = local_60;
  if (((char)local_78 != '\0') &&
     (bVar6 = FUN_100c245a((void *)(*piVar13 + 0x14f0),uVar15,(int *)&local_60), puVar9 = local_60,
     bVar6)) {
    local_88 = param_2[3];
    param_4 = local_60;
    param_9 = 0;
    puVar12 = FUN_10045dc1(param_6,local_88,local_64,param_5,local_60,local_88);
    puVar16 = (uint *)((int)puVar12 + 0xfU & 0xfffffff0);
    FUN_100439d0((int *)param_7,(int *)puVar16,param_8,-local_68,(char)param_10);
  }
  uVar15 = param_8;
  iVar1 = param_6;
  uVar4 = (char)param_10;
  iVar8 = *local_6c;
  piVar13 = (int *)(iVar8 + 0x11c0);
  if (*(char *)(iVar8 + 0x12ec) != '\0') {
    puVar12 = (undefined4 *)FUN_100ce540(piVar13,0x38);
    if (puVar12 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar8 + 0x12e8) = *(int *)(iVar8 + 0x12e8) + 1;
      UNLOCK();
      puVar12[1] = 0x38;
      puVar12[2] = local_74;
      puVar12[3] = param_1;
      puVar12[4] = local_70;
      puVar12[5] = param_3;
      puVar12[6] = param_4;
      puVar12[7] = local_88;
      puVar12[8] = iVar1;
      puVar12[9] = puVar16;
      puVar12[10] = uVar15;
      puVar12[0xb] = param_9;
      *(undefined1 *)(puVar12 + 0xc) = uVar4;
      puVar12[0xd] = puVar9;
      puVar12[0xe] = local_5c;
      puVar12[0xf] = local_58;
      puVar9 = (undefined4 *)((int)puVar12 + 0x43U & 0xfffffffc);
      *puVar9 = 0;
      *puVar12 = FUN_10049eb1;
      piVar13[*(int *)(iVar8 + 0x12e4) * 5 + 0x1a] = (int)puVar9;
      if (*(char *)(iVar8 + 0x12ed) != '\0') {
        *piVar13 = 0;
        SetEvent(*(HANDLE *)(iVar8 + 0x1220));
        return;
      }
      goto LAB_10049d93;
    }
    FUN_1003971e(piVar13);
  }
  piVar2 = *(int **)(iVar8 + 0x12d0);
  *piVar2 = (int)local_74;
  piVar2[1] = param_1;
  piVar2[2] = (int)local_70;
  piVar2[3] = param_3;
  piVar2[4] = (int)param_4;
  piVar2[5] = local_88;
  piVar2[6] = iVar1;
  piVar2[7] = (int)puVar16;
  piVar2[8] = uVar15;
  piVar2[9] = param_9;
  *(undefined1 *)(piVar2 + 10) = uVar4;
  piVar2[0xb] = (int)puVar9;
  piVar2[0xc] = local_5c;
  piVar2[0xd] = local_58;
  FUN_10049eb1(piVar2);
LAB_10049d93:
  *piVar13 = 0;
  return;
}

