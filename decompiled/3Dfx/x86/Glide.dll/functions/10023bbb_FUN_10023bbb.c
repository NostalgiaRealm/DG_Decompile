/*
 * FUN_10023bbb at 10023bbb
 * undefined __thiscall FUN_10023bbb(void * this, uint param_1, uint * param_2, int * param_3)
 * Address ranges: 10023bbb-10023f65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10023bbb(void *this,uint param_1,uint *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int **ppiVar11;
  uint uVar12;
  char local_65;
  uint local_60;
  uint local_5c;
  int local_58;
  int *local_54;
  uint *local_50;
  undefined4 *local_4c;
  int local_48;
  uint local_44;
  int *local_40;
  uint local_3c;
  int *local_38;
  int **local_34;
  void *local_30;
  uint **local_2c;
  uint *local_28;
  uint *local_24;
  undefined4 local_20 [7];
  
  FUN_100210e5((int)this + 0x3440);
  iVar8 = *(int *)((int)this + 0x3188);
  local_50 = param_2;
  local_60 = local_60 & 0xffffff00;
  uVar12 = 0;
  local_54 = (int *)0x0;
  local_58 = 0;
  local_5c = 0;
  FUN_100360e0((int *)(iVar8 + 0x11c0));
  if (*(char *)(iVar8 + 0x12ec) != '\0') {
    local_60 = 0;
    FUN_10017107(param_2,param_1,&local_5c,&local_60);
    iVar4 = (local_60 - local_5c) + 1;
    local_48 = iVar4 * 0x3c;
    local_44 = param_1;
    iVar8 = param_1 + 8;
    uVar12 = local_48 + iVar8 * 4;
    local_60 = 1;
    local_54 = param_3 + local_5c * 0xf;
    local_58 = iVar4;
    local_3c = uVar12;
    if (uVar12 < 0x3f00) {
      local_38 = &local_58;
      local_34 = &local_54;
      local_2c = &param_2;
      iVar1 = *(int *)((int)this + 0x3188);
      piVar10 = (int *)(iVar1 + 0x11c0);
      local_28 = &param_1;
      local_24 = &local_5c;
      local_30 = this;
      local_65 = *(char *)(iVar1 + 0x12ec) == '\0';
      local_40 = piVar10;
      if (*(char *)(iVar1 + 0x12ec) != '\0') {
        local_50 = (uint *)((uint)(uVar12 != 0) * 4 + 0xc);
        if (uVar12 != 0) {
          local_50 = local_50 + iVar8 + iVar4 * 0xf;
        }
        local_4c = (undefined4 *)FUN_10036000(piVar10,(int)local_50);
        if (local_4c == (undefined4 *)0x0) {
          FUN_10021ec0(piVar10);
          local_65 = (char)local_60;
        }
        else {
          LOCK();
          *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
          UNLOCK();
          local_4c[1] = local_50;
          uVar6 = (uint)(uVar12 != 0);
          local_4c[uVar6 + 2] = local_48;
          local_4c[uVar6 + 3] = this;
          local_4c[uVar6 + 4] = local_44;
          puVar7 = (uint *)((int)local_4c + (uVar6 + 2) * 4 + 0xf & 0xfffffffc);
          local_50 = puVar7;
          if (uVar12 != 0) {
            local_4c[2] = puVar7;
            FUN_1002332a(&local_38,puVar7);
            puVar7 = local_50 + iVar8 + iVar4 * 0xf;
          }
          *puVar7 = 0;
          *local_4c = FUN_10023f66;
          piVar10[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar7;
          if (*(char *)(iVar1 + 0x12ed) != '\0') {
            *piVar10 = 0;
            SetEvent(*(HANDLE *)(iVar1 + 0x1220));
            local_60 = local_60 & 0xffffff00;
          }
        }
      }
      piVar2 = local_40;
      if (local_65 != '\0') {
        ppiVar11 = &local_38;
        puVar5 = local_20;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar5 = *ppiVar11;
          ppiVar11 = ppiVar11 + 1;
          puVar5 = puVar5 + 1;
        }
        uVar12 = (uint)(local_3c != 0);
        piVar10 = (int *)local_40[0x44];
        piVar10[uVar12] = local_48;
        piVar10[uVar12 + 1] = (int)this;
        piVar10[uVar12 + 2] = local_44;
        if (local_3c != 0) {
          *piVar10 = (int)(piVar10 + uVar12 + 3);
          FUN_1002332a(local_20,piVar10 + uVar12 + 3);
        }
        FUN_10023f66(piVar10);
        piVar10 = piVar2;
      }
      if ((char)local_60 == '\0') {
        return;
      }
      goto LAB_10023f58;
    }
  }
  local_38 = (int *)0x0;
  local_34 = (int **)0x0;
  local_30 = (void *)0x0;
  if (((char)local_60 != '\0') &&
     (bVar3 = FUN_10046e00((void *)(*(int *)((int)this + 0x3188) + 0x14f0),uVar12,(int *)&local_38),
     bVar3)) {
    uVar12 = local_58 * 0x3c;
    param_3 = local_38;
    FUN_100500b0(local_38,local_54,uVar12);
    local_50 = (uint *)((int)param_3 + uVar12 + 0xf & 0xfffffff0);
    FUN_100171a8((int *)param_2,(int *)local_50,param_1,-local_5c);
  }
  iVar8 = *(int *)((int)this + 0x3188);
  piVar10 = (int *)(iVar8 + 0x11c0);
  local_40 = (int *)param_1;
  if (*(char *)(iVar8 + 0x12ec) != '\0') {
    puVar5 = (undefined4 *)FUN_10036000(piVar10,0x1c);
    if (puVar5 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar8 + 0x12e8) = *(int *)(iVar8 + 0x12e8) + 1;
      UNLOCK();
      puVar5[1] = 0x1c;
      puVar5[2] = this;
      puVar5[3] = local_40;
      puVar5[4] = local_50;
      puVar5[5] = param_3;
      puVar5[6] = local_38;
      puVar5[7] = local_30;
      puVar5[8] = local_34;
      puVar9 = (undefined4 *)((int)puVar5 + 0x27U & 0xfffffffc);
      *puVar9 = 0;
      *puVar5 = FUN_10023f8f;
      piVar10[*(int *)(iVar8 + 0x12e4) * 5 + 0x1a] = (int)puVar9;
      if (*(char *)(iVar8 + 0x12ed) != '\0') {
        *piVar10 = 0;
        SetEvent(*(HANDLE *)(iVar8 + 0x1220));
        return;
      }
      goto LAB_10023f58;
    }
    FUN_10021ec0(piVar10);
  }
  piVar2 = *(int **)(iVar8 + 0x12d0);
  *piVar2 = (int)this;
  piVar2[1] = (int)local_40;
  piVar2[2] = (int)local_50;
  piVar2[3] = (int)param_3;
  piVar2[4] = (int)local_38;
  piVar2[5] = (int)local_30;
  piVar2[6] = (int)local_34;
  FUN_10023f8f(piVar2);
LAB_10023f58:
  *piVar10 = 0;
  return;
}

