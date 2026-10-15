/*
 * FUN_10026400 at 10026400
 * undefined FUN_10026400(void)
 * Address ranges: 10026400-10026913
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10026400(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  int iVar15;
  int extraout_w12;
  int *extraout_w13;
  int iVar16;
  int iVar17;
  bool local_8f;
  int local_88;
  uint local_84;
  int local_80;
  int iStack_7c;
  undefined4 *local_78;
  undefined8 local_70;
  int *local_68;
  int *piStack_64;
  int *local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_88 = param_4;
  local_80 = param_5;
  iStack_7c = param_6;
  FUN_10021d18(param_1 + 0x35c0);
  *(int *)(param_1 + 0x4278) = param_2;
  iVar11 = FUN_10025630(param_1 + 0x3f50);
  iVar15 = iVar11 * local_88;
  uVar1 = iVar15 + 4;
  local_60 = (int *)(param_1 + 0x3308);
  local_84 = uVar1;
  iVar12 = FUN_10045bd0(*local_60 + 0x11c0);
  iVar16 = iStack_7c;
  iVar17 = local_80;
  iVar7 = local_88;
  local_50 = CONCAT44(param_1,&local_88);
  uStack_48 = CONCAT44(&iStack_7c,&local_80);
  if (0x3eff < uVar1 || *(char *)(iVar12 + 300) == '\0') {
    local_8f = false;
    local_70 = 0;
    local_68 = (int *)0x0;
    if (*(char *)(iVar12 + 300) == '\0') {
      local_70._0_4_ = 0;
      iVar15 = (int)local_70;
    }
    else {
      uVar14 = FUN_10070df0(*extraout_w13 + 0x14f0,uVar1,&local_70);
      iVar15 = (int)local_70;
      local_8f = (uVar14 & 1) != 0;
      if (local_8f) {
        FUN_10026918(&local_50,local_70 & 0xffffffff);
        iVar17 = iVar15;
        iVar16 = iVar11;
      }
    }
    piVar3 = local_68;
    iVar7 = *local_60;
    local_78 = (undefined4 *)local_70._4_4_;
    puVar2 = (undefined4 *)(iVar7 + 0x11c0);
    local_84 = local_88;
    bVar10 = true;
    cVar6 = *(char *)(iVar7 + 0x12ec);
    if (cVar6 == '\0') {
LAB_10026854:
      if (cVar6 != '\0') goto LAB_100268c8;
    }
    else {
      puVar13 = (undefined4 *)FUN_10045a78(puVar2,0x28);
      if (puVar13 != (undefined4 *)0x0) {
        piVar4 = (int *)(iVar7 + 0x12e8);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar4),0x10);
          if (bVar9) {
            *piVar4 = *piVar4 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        DataMemoryBarrier(2,3);
        puVar13[1] = 0x28;
        puVar13[2] = param_1;
        puVar13[3] = param_3;
        puVar13[4] = local_84;
        puVar13[5] = iVar17;
        puVar13[6] = iVar16;
        *(bool *)(puVar13 + 7) = local_8f;
        puVar13[8] = param_2;
        puVar13[9] = iVar15;
        puVar13[10] = local_78;
        puVar13[0xb] = piVar3;
        puVar5 = (undefined4 *)((int)puVar13 + 0x33U & 0xfffffffc);
        *puVar5 = 0;
        *puVar13 = FUN_10026a10;
        puVar2[*(int *)(iVar7 + 0x12e4) * 5 + 0x1a] = puVar5;
        if (*(char *)(iVar7 + 0x12ed) != '\0') {
          *puVar2 = 0;
          (*(code *)PTR_FUN_100a00c4)(*(undefined4 *)(iVar7 + 0x1220));
          bVar10 = false;
        }
        goto LAB_10026854;
      }
      *puVar2 = 0;
      (*(code *)PTR_FUN_100a00dc)(100);
      FUN_10045bd0(puVar2);
    }
    piVar4 = *(int **)(iVar7 + 0x12d0);
    *piVar4 = param_1;
    piVar4[1] = param_3;
    piVar4[2] = local_84;
    piVar4[3] = iVar17;
    piVar4[4] = iVar16;
    *(bool *)(piVar4 + 5) = local_8f;
    piVar4[6] = param_2;
    piVar4[7] = iVar15;
    piVar4[8] = (int)local_78;
    piVar4[9] = (int)piVar3;
    FUN_10026a10(piVar4);
LAB_100268c8:
    if (!bVar10) {
      return;
    }
    *puVar2 = 0;
    return;
  }
  local_68 = &local_80;
  bVar10 = true;
  puVar2 = (undefined4 *)(*extraout_w13 + extraout_w12);
  local_70 = CONCAT44(param_1,&local_88);
  piStack_64 = &iStack_7c;
  cVar6 = *(char *)(puVar2 + 0x4b);
  if (cVar6 == '\0') {
LAB_10026608:
    if (cVar6 != '\0') goto LAB_10026694;
  }
  else {
    if (uVar1 == 0) {
      iVar15 = 0x14;
    }
    else {
      iVar15 = (iVar15 + 7U & 0xfffffffc) + 0x18;
    }
    puVar13 = (undefined4 *)FUN_10045a78(puVar2,iVar15);
    uVar1 = local_84;
    if (puVar13 != (undefined4 *)0x0) {
      piVar3 = puVar2 + 0x4a;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar3),0x10);
        if (bVar9) {
          *piVar3 = *piVar3 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      DataMemoryBarrier(2,3);
      puVar13[1] = iVar15;
      iVar15 = 0xc;
      if (local_84 == 0) {
        iVar15 = 8;
      }
      piVar3 = (int *)(iVar15 + (int)puVar13);
      *piVar3 = param_1;
      piVar3[1] = param_3;
      piVar3[2] = iVar7;
      piVar3[3] = iVar11;
      piVar3[4] = param_2;
      puVar5 = (undefined4 *)((int)piVar3 + 0x17U & 0xfffffffc);
      local_78 = puVar13;
      if (local_84 != 0) {
        puVar13[2] = puVar5;
        FUN_10026918(&local_70,puVar5);
        puVar5 = (undefined4 *)((uVar1 + 3 & 0xfffffffc) + (int)puVar5);
      }
      *puVar5 = 0;
      *local_78 = FUN_100269c0;
      puVar2[puVar2[0x49] * 5 + 0x1a] = puVar5;
      if (*(char *)((int)puVar2 + 0x12d) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a00c4)(puVar2[0x18]);
        bVar10 = false;
      }
      goto LAB_10026608;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a00dc)(100);
    FUN_10045bd0(puVar2);
  }
  piVar3 = (int *)puVar2[0x44];
  iVar15 = 4;
  if (local_84 == 0) {
    iVar15 = 0;
  }
  piVar4 = (int *)(iVar15 + (int)piVar3);
  *piVar4 = param_1;
  piVar4[1] = param_3;
  piVar4[2] = iVar7;
  uStack_48 = CONCAT44(&iStack_7c,&local_80);
  local_50 = CONCAT44(param_1,&local_88);
  piVar4[3] = iVar11;
  piVar4[4] = param_2;
  if (local_84 != 0) {
    *piVar3 = (int)(piVar4 + 5);
    FUN_10026918(&local_50,piVar4 + 5);
  }
  FUN_100269c0(piVar3);
LAB_10026694:
  if (bVar10) {
    *puVar2 = 0;
  }
  return;
}

