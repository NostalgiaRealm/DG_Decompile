/*
 * FUN_100297f0 at 100297f0
 * undefined FUN_100297f0(void)
 * Address ranges: 100297f0-10029d37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100297f0(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  int *extraout_w12;
  uint extraout_w13;
  int extraout_w14;
  uint uVar15;
  int *piVar16;
  undefined1 local_6f;
  undefined8 local_60;
  int local_58;
  int local_50;
  undefined4 *puStack_4c;
  
  FUN_100226d8(param_1 + 0x3940);
  *(int *)(param_1 + 0x4610) = param_2;
  iVar10 = param_1 + 0x42e8;
  iVar7 = FUN_10029060(iVar10);
  iVar7 = param_4 * 4 + iVar7 * param_4;
  iVar8 = FUN_1004b290(*(int *)(param_1 + 0x3688) + 0x11c0);
  if (0x3eff < extraout_w13 || *(char *)(iVar8 + 300) == '\0') {
    local_6f = 0;
    local_60 = 0;
    local_58 = 0;
    piVar16 = extraout_w12;
    if (*(char *)(iVar8 + 300) == '\0') {
      local_60._0_4_ = 0;
      iVar7 = (int)local_60;
    }
    else {
      uVar14 = FUN_10076490(*extraout_w12 + 0x14f0,extraout_w13 + 0x20,&local_60);
      iVar7 = (int)local_60;
      if ((uVar14 & 1) != 0) {
        iVar8 = (int)local_60 + param_4 * 4;
        uVar15 = 0;
        if (param_4 != 0) {
          do {
            *(int *)(iVar7 + uVar15 * 4) = iVar8;
            iVar11 = FUN_10028f48(iVar10,*(undefined4 *)(param_5 + uVar15 * 4),iVar8);
            uVar15 = uVar15 + 1;
            iVar8 = iVar8 + iVar11 * 4;
          } while (uVar15 < param_4);
          piVar16 = (int *)(param_1 + 0x3688);
        }
        local_6f = 1;
        param_5 = iVar7;
      }
    }
    iVar11 = local_58;
    iVar8 = local_60._4_4_;
    iVar10 = *piVar16;
    puVar1 = (undefined4 *)(iVar10 + 0x11c0);
    bVar6 = true;
    cVar3 = *(char *)(iVar10 + 0x12ec);
    if (cVar3 == '\0') {
LAB_10029c84:
      if (cVar3 != '\0') goto joined_r0x10029cf0;
    }
    else {
      puVar9 = (undefined4 *)FUN_1004b138(puVar1,0x24);
      if (puVar9 != (undefined4 *)0x0) {
        piVar16 = (int *)(iVar10 + 0x12e8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar16),0x10);
          if (bVar5) {
            *piVar16 = *piVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        puVar9[1] = 0x24;
        puVar9[2] = param_1;
        puVar9[3] = param_3;
        puVar9[4] = param_4;
        puVar9[5] = param_5;
        *(undefined1 *)(puVar9 + 6) = local_6f;
        puVar9[7] = param_2;
        puVar9[8] = iVar7;
        puVar9[9] = iVar8;
        puVar9[10] = iVar11;
        puVar13 = (undefined4 *)((int)puVar9 + 0x2fU & 0xfffffffc);
        *puVar13 = 0;
        *puVar9 = FUN_10029d90;
        puVar1[*(int *)(iVar10 + 0x12e4) * 5 + 0x1a] = puVar13;
        if (*(char *)(iVar10 + 0x12ed) != '\0') {
          *puVar1 = 0;
          (*(code *)PTR_FUN_100a80c4)(*(undefined4 *)(iVar10 + 0x1220));
          bVar6 = false;
        }
        goto LAB_10029c84;
      }
      *puVar1 = 0;
      (*(code *)PTR_FUN_100a80dc)(100);
      FUN_1004b290(puVar1);
    }
    piVar16 = *(int **)(iVar10 + 0x12d0);
    *piVar16 = param_1;
    piVar16[1] = param_3;
    piVar16[2] = param_4;
    piVar16[3] = param_5;
    *(undefined1 *)(piVar16 + 4) = local_6f;
    piVar16[5] = param_2;
    piVar16[6] = iVar7;
    piVar16[7] = iVar8;
    piVar16[8] = iVar11;
    FUN_10029d90(piVar16);
    goto joined_r0x10029cf0;
  }
  bVar6 = true;
  puVar1 = (undefined4 *)(*extraout_w12 + extraout_w14);
  cVar3 = *(char *)(puVar1 + 0x4b);
  if (cVar3 == '\0') {
LAB_100299f4:
    if (cVar3 != '\0') goto joined_r0x10029cf0;
  }
  else {
    if (extraout_w13 == 0) {
      iVar8 = 0x10;
    }
    else {
      iVar8 = (extraout_w13 + 3 & 0xfffffffc) + 0x14;
    }
    puVar9 = (undefined4 *)FUN_1004b138(puVar1,iVar8);
    if (puVar9 != (undefined4 *)0x0) {
      piVar16 = puVar1 + 0x4a;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar16),0x10);
        if (bVar5) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      puVar9[1] = iVar8;
      iVar8 = 0xc;
      if (iVar7 == -4) {
        iVar8 = 8;
      }
      piVar16 = (int *)(iVar8 + (int)puVar9);
      *piVar16 = param_1;
      piVar16[1] = param_3;
      piVar16[2] = param_4;
      piVar16[3] = param_2;
      puVar13 = (undefined4 *)((int)piVar16 + 0x13U & 0xfffffffc);
      uVar14 = ZEXT48(puVar13);
      if (iVar7 != -4) {
        puVar9[2] = puVar13;
        uVar15 = 0;
        puVar12 = puVar13 + param_4;
        iVar8 = param_3;
        if (param_4 != 0) {
          do {
            puStack_4c = puVar9;
            local_50 = iVar8;
            *(undefined4 **)((int)uVar14 + uVar15 * 4) = puVar12;
            iVar8 = FUN_10028f48(iVar10,*(undefined4 *)(param_5 + uVar15 * 4),puVar12);
            puVar13 = (undefined4 *)uVar14;
            uVar15 = uVar15 + 1;
            puVar12 = puVar12 + iVar8;
            puVar9 = puStack_4c;
            param_3 = local_50;
            iVar8 = local_50;
          } while (uVar15 < param_4);
        }
        puVar13 = (undefined4 *)((iVar7 + 7U & 0xfffffffc) + (int)puVar13);
      }
      *puVar13 = 0;
      *puVar9 = FUN_10029d40;
      puVar1[puVar1[0x49] * 5 + 0x1a] = puVar13;
      if (*(char *)((int)puVar1 + 0x12d) != '\0') {
        *puVar1 = 0;
        (*(code *)PTR_FUN_100a80c4)(puVar1[0x18]);
        bVar6 = false;
      }
      goto LAB_100299f4;
    }
    *puVar1 = 0;
    (*(code *)PTR_FUN_100a80dc)(100);
    FUN_1004b290(puVar1);
  }
  piVar16 = (int *)puVar1[0x44];
  uVar14 = ZEXT48(piVar16);
  iVar10 = 4;
  if (iVar7 == -4) {
    iVar10 = 0;
  }
  piVar2 = (int *)(iVar10 + (int)piVar16);
  *piVar2 = param_1;
  piVar2[1] = param_3;
  piVar2[2] = param_4;
  piVar2[3] = param_2;
  if (iVar7 != -4) {
    piVar2 = piVar2 + 4;
    *piVar16 = (int)piVar2;
    uVar15 = 0;
    piVar16 = piVar2 + param_4;
    if (param_4 != 0) {
      do {
        piVar2[uVar15] = (int)piVar16;
        iVar10 = FUN_10028f48(param_1 + 0x42e8,*(undefined4 *)(param_5 + uVar15 * 4),piVar16);
        uVar15 = uVar15 + 1;
        piVar16 = piVar16 + iVar10;
      } while (uVar15 < param_4);
    }
  }
  FUN_10029d40(uVar14 & 0xffffffff);
joined_r0x10029cf0:
  if (bVar6) {
    *puVar1 = 0;
  }
  return;
}

