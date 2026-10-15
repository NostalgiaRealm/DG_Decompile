/*
 * FUN_10038610 at 10038610
 * undefined FUN_10038610(void)
 * Address ranges: 10038610-100389cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10038610(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  int extraout_w12;
  undefined4 *puVar15;
  undefined8 local_50;
  int local_48;
  
  FUN_10032bf8(param_1 + 0x3440);
  piVar2 = (int *)(param_1 + 0x3188);
  iVar12 = FUN_10054e70(*piVar2 + 0x11c0);
  iVar7 = param_2 * 0x3c;
  if ((*(char *)(iVar12 + 300) == '\0') || (uVar1 = iVar7 + 4, 0x3eff < uVar1)) {
    local_50 = 0;
    local_48 = 0;
    if (*(char *)(iVar12 + 300) == '\0') {
      local_50._0_4_ = 0;
      iVar12 = (int)local_50;
    }
    else {
      uVar14 = FUN_1006d150(*piVar2 + 0x14f0,iVar7,&local_50);
      iVar12 = (int)local_50;
      if ((uVar14 & 1) != 0) {
        FUN_1007a780(local_50 & 0xffffffff,param_3,iVar7);
        param_3 = iVar12;
      }
    }
    iVar11 = local_48;
    iVar7 = *piVar2;
    iVar5 = local_50._4_4_;
    bVar10 = true;
    puVar3 = (undefined4 *)(iVar7 + 0x11c0);
    cVar6 = *(char *)(iVar7 + 0x12ec);
    if (cVar6 == '\0') {
LAB_10038948:
      if (cVar6 != '\0') goto joined_r0x1003898c;
    }
    else {
      puVar13 = (undefined4 *)FUN_10054d18(puVar3,0x18);
      if (puVar13 != (undefined4 *)0x0) {
        piVar2 = (int *)(iVar7 + 0x12e8);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
          if (bVar9) {
            *piVar2 = *piVar2 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        DataMemoryBarrier(2,3);
        puVar13[1] = 0x18;
        puVar13[2] = param_1;
        puVar13[3] = param_2;
        puVar13[4] = param_3;
        puVar13[5] = iVar12;
        puVar13[6] = iVar5;
        puVar13[7] = iVar11;
        puVar15 = (undefined4 *)((int)puVar13 + 0x23U & 0xfffffffc);
        *puVar15 = 0;
        *puVar13 = FUN_10038a00;
        puVar3[*(int *)(iVar7 + 0x12e4) * 5 + 0x1a] = puVar15;
        if (*(char *)(iVar7 + 0x12ed) != '\0') {
          *puVar3 = 0;
          (*(code *)PTR_FUN_1009d0c4)(*(undefined4 *)(iVar7 + 0x1220));
          bVar10 = false;
        }
        goto LAB_10038948;
      }
      *puVar3 = 0;
      (*(code *)PTR_FUN_1009d0dc)(100);
      FUN_10054e70(puVar3);
    }
    piVar2 = *(int **)(iVar7 + 0x12d0);
    *piVar2 = param_1;
    piVar2[1] = param_2;
    piVar2[2] = param_3;
    piVar2[3] = iVar12;
    piVar2[4] = iVar5;
    piVar2[5] = iVar11;
    FUN_10038a00(piVar2);
    goto joined_r0x1003898c;
  }
  bVar10 = true;
  puVar3 = (undefined4 *)(*piVar2 + extraout_w12);
  cVar6 = *(char *)(puVar3 + 0x4b);
  if (cVar6 == '\0') {
LAB_10038790:
    if (cVar6 != '\0') goto joined_r0x1003898c;
  }
  else {
    iVar12 = 0xc;
    if (uVar1 == 0) {
      iVar12 = 8;
    }
    iVar5 = iVar12;
    if (uVar1 != 0) {
      iVar5 = iVar12 + uVar1;
    }
    puVar13 = (undefined4 *)FUN_10054d18(puVar3,iVar5);
    if (puVar13 != (undefined4 *)0x0) {
      piVar2 = puVar3 + 0x4a;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
        if (bVar9) {
          *piVar2 = *piVar2 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      DataMemoryBarrier(2,3);
      puVar13[1] = iVar5;
      piVar2 = (int *)(iVar12 + (int)puVar13);
      *piVar2 = param_1;
      piVar2[1] = param_2;
      puVar15 = (undefined4 *)((int)piVar2 + 0xbU & 0xfffffffc);
      if (uVar1 != 0) {
        puVar13[2] = puVar15;
        FUN_1007a780(puVar15,param_3,iVar7);
        puVar15 = puVar15 + param_2 * 0xf + 1;
      }
      *puVar15 = 0;
      *puVar13 = FUN_100389e0;
      puVar3[puVar3[0x49] * 5 + 0x1a] = puVar15;
      if (*(char *)((int)puVar3 + 0x12d) != '\0') {
        *puVar3 = 0;
        (*(code *)PTR_FUN_1009d0c4)(puVar3[0x18]);
        bVar10 = false;
      }
      goto LAB_10038790;
    }
    *puVar3 = 0;
    (*(code *)PTR_FUN_1009d0dc)(100);
    FUN_10054e70(puVar3);
  }
  piVar2 = (int *)puVar3[0x44];
  iVar12 = 4;
  if (uVar1 == 0) {
    iVar12 = 0;
  }
  piVar4 = (int *)(iVar12 + (int)piVar2);
  *piVar4 = param_1;
  piVar4[1] = param_2;
  if (uVar1 != 0) {
    *piVar2 = (int)(piVar4 + 2);
    FUN_1007a780(piVar4 + 2,param_3,iVar7);
  }
  FUN_100389e0(piVar2);
joined_r0x1003898c:
  if (bVar10) {
    *puVar3 = 0;
  }
  return;
}

