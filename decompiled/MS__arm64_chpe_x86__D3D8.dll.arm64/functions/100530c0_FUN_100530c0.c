/*
 * FUN_100530c0 at 100530c0
 * undefined FUN_100530c0(void)
 * Address ranges: 100530c0-10053867
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100530c0(int param_1,int param_2,uint *param_3,int param_4,uint param_5,int param_6,
                 undefined1 param_7)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int *piVar25;
  uint uVar26;
  uint *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 local_60;
  int local_58;
  uint *local_50;
  int local_4c;
  uint local_48;
  
  iVar13 = FUN_100fd300(*(int *)(param_1 + 0xd9b8) + 0x11c0);
  if (*(char *)(iVar13 + 300) == '\0') {
    bVar10 = false;
    puVar27 = param_3;
  }
  else {
    if (*param_3 != *(uint *)(param_1 + 0xddc4)) {
      *(uint *)(param_1 + 0xddc4) = *param_3;
      puVar14 = (undefined4 *)FUN_10057e10(param_1 + 0xda34,param_3);
      if (puVar14 == (undefined4 *)0x0) {
        puVar15 = (undefined8 *)FUN_100febf0(0xb0);
        if (puVar15 != (undefined8 *)0x0) {
          uVar30 = *(undefined8 *)param_3;
          uVar29 = *(undefined8 *)(param_3 + 6);
          uVar28 = *(undefined8 *)(param_3 + 4);
          puVar27 = (uint *)(param_1 + 0xda3c);
          uVar26 = 0;
          puVar15[1] = *(undefined8 *)(param_3 + 2);
          *puVar15 = uVar30;
          puVar15[3] = uVar29;
          puVar15[2] = uVar28;
          uVar30 = *(undefined8 *)(param_3 + 8);
          uVar29 = *(undefined8 *)(param_3 + 0xe);
          uVar28 = *(undefined8 *)(param_3 + 0xc);
          puVar15[5] = *(undefined8 *)(param_3 + 10);
          puVar15[4] = uVar30;
          puVar15[7] = uVar29;
          puVar15[6] = uVar28;
          uVar30 = *(undefined8 *)(param_3 + 0x10);
          uVar29 = *(undefined8 *)(param_3 + 0x16);
          uVar28 = *(undefined8 *)(param_3 + 0x14);
          puVar15[9] = *(undefined8 *)(param_3 + 0x12);
          puVar15[8] = uVar30;
          puVar15[0xb] = uVar29;
          puVar15[10] = uVar28;
          uVar30 = *(undefined8 *)(param_3 + 0x18);
          uVar29 = *(undefined8 *)(param_3 + 0x1e);
          uVar28 = *(undefined8 *)(param_3 + 0x1c);
          puVar15[0xd] = *(undefined8 *)(param_3 + 0x1a);
          puVar15[0xc] = uVar30;
          puVar15[0xf] = uVar29;
          puVar15[0xe] = uVar28;
          uVar30 = *(undefined8 *)(param_3 + 0x20);
          uVar29 = *(undefined8 *)(param_3 + 0x26);
          uVar28 = *(undefined8 *)(param_3 + 0x24);
          puVar15[0x11] = *(undefined8 *)(param_3 + 0x22);
          puVar15[0x10] = uVar30;
          puVar15[0x13] = uVar29;
          puVar15[0x12] = uVar28;
          uVar28 = *(undefined8 *)(param_3 + 0x28);
          puVar15[0x15] = *(undefined8 *)(param_3 + 0x2a);
          puVar15[0x14] = uVar28;
          uVar18 = *puVar27;
          uVar24 = (ulonglong)*param_3;
          if (uVar18 == 0) {
LAB_10053224:
            puVar1 = (uint *)(param_1 + 0xda40);
            uVar21 = *puVar1;
            local_50 = puVar27;
            if (uVar21 == uVar18) {
              local_48 = 0x10;
              if (uVar21 != 0) {
                local_48 = uVar21 << 1;
              }
              local_4c = FUN_100fece0(local_48 * 0x10 + 0x7f);
              if (local_4c != 0) {
                uVar21 = local_4c + 0x7fU & 0xffffff80;
                uVar18 = 0;
                if (*local_50 != 0) {
                  do {
                    puVar3 = (undefined8 *)(*(int *)(&DAT_0000da38 + param_1) + uVar18 * 0x10);
                    puVar4 = (undefined8 *)(uVar21 + uVar18 * 0x10);
                    uVar18 = uVar18 + 1;
                    uVar28 = *puVar3;
                    puVar4[1] = puVar3[1];
                    *puVar4 = uVar28;
                  } while (uVar18 < *(uint *)(param_1 + 0xda3c));
                }
                FUN_100fed00(*(undefined4 *)(param_1 + 0xda34));
                *(uint *)(&DAT_0000da38 + param_1) = uVar21;
                *(int *)(param_1 + 0xda34) = local_4c;
                *puVar1 = local_48;
              }
            }
            piVar25 = (int *)(&DAT_0000da38 + param_1);
            uVar18 = *puVar27;
            if (*puVar1 != uVar18) {
              for (; uVar26 < uVar18; uVar18 = uVar18 - 1) {
                puVar3 = (undefined8 *)(*piVar25 + uVar18 * 0x10);
                puVar3[1] = puVar3[-1];
                *puVar3 = puVar3[-2];
              }
              *puVar27 = *puVar27 + 1;
              *(uint *)(*piVar25 + uVar26 * 0x10 + 8) = *param_3;
              *(undefined8 **)(*piVar25 + uVar26 * 0x10 + 0xc) = puVar15;
              *(ulonglong *)(*piVar25 + uVar26 * 0x10) = uVar24;
            }
          }
          else {
            uVar21 = 0;
            uVar17 = uVar18;
            do {
              uVar26 = uVar17 + uVar21 >> 1;
              uVar23 = *(ulonglong *)(*(int *)(&DAT_0000da38 + param_1) + uVar26 * 0x10);
              uVar12 = uVar26;
              if (uVar23 <= uVar24) {
                if (uVar24 <= uVar23) break;
                uVar21 = uVar26 + 1;
                uVar26 = uVar21;
                uVar12 = uVar17;
              }
              uVar17 = uVar12;
            } while (uVar17 != uVar21);
            if ((uVar26 == uVar18) ||
               (puVar2 = (ulonglong *)(*(int *)(&DAT_0000da38 + param_1) + uVar26 * 0x10),
               *puVar2 != uVar24)) goto LAB_10053224;
            *(undefined8 **)((int)puVar2 + 0xc) = puVar15;
          }
          puVar14 = (undefined4 *)FUN_10057e10(param_1 + 0xda34,param_3);
          if (puVar14 != (undefined4 *)0x0) goto LAB_10053380;
        }
        uVar22 = 0;
      }
      else {
LAB_10053380:
        uVar22 = *puVar14;
      }
      *(undefined4 *)(param_1 + 0xddc8) = uVar22;
    }
    bVar10 = true;
    puVar27 = *(uint **)(param_1 + 0xddc8);
  }
  puVar1 = param_3 + 3;
  uVar18 = *puVar1;
  iVar13 = uVar18 * param_6;
  if ((bVar10) && (iVar13 + 4U < 0x3f00)) {
    iVar20 = *(int *)(param_1 + 0xd9b8);
    puVar14 = (undefined4 *)(iVar20 + 0x11c0);
    bVar10 = true;
    cVar7 = *(char *)(iVar20 + 0x12ec);
    if (cVar7 == '\0') {
LAB_10053554:
      if (cVar7 != '\0') goto LAB_100535e0;
    }
    else {
      if (iVar13 == -4) {
        iVar19 = 0x18;
      }
      else {
        iVar19 = (iVar13 + 7U & 0xfffffffc) + 0x1c;
      }
      puVar16 = (undefined4 *)FUN_100fd1a8(puVar14,iVar19);
      if (puVar16 != (undefined4 *)0x0) {
        piVar25 = (int *)(iVar20 + 0x12e8);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar25),0x10);
          if (bVar9) {
            *piVar25 = *piVar25 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        DataMemoryBarrier(2,3);
        puVar16[1] = iVar19;
        iVar19 = 0xc;
        if (iVar13 == -4) {
          iVar19 = 8;
        }
        piVar25 = (int *)(iVar19 + (int)puVar16);
        *piVar25 = param_1;
        piVar25[1] = param_2;
        piVar25[2] = (int)puVar27;
        piVar25[3] = uVar18;
        piVar25[4] = param_6;
        *(undefined1 *)(piVar25 + 5) = param_7;
        puVar6 = (undefined4 *)((int)piVar25 + 0x1bU & 0xfffffffc);
        if (iVar13 != -4) {
          puVar16[2] = puVar6;
          FUN_10052990(param_6,*puVar1,param_4,param_5,puVar6,*puVar1);
          puVar6 = (undefined4 *)((iVar13 + 7U & 0xfffffffc) + (int)puVar6);
        }
        *puVar6 = 0;
        *puVar16 = FUN_10053870;
        puVar14[*(int *)(iVar20 + 0x12e4) * 5 + 0x1a] = puVar6;
        if (*(char *)(iVar20 + 0x12ed) != '\0') {
          *puVar14 = 0;
          (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar20 + 0x1220));
          bVar10 = false;
        }
        goto LAB_10053554;
      }
      *puVar14 = 0;
      (*(code *)PTR_FUN_10134114)(100);
      FUN_100fd300(puVar14);
    }
    piVar25 = *(int **)(iVar20 + 0x12d0);
    iVar20 = 4;
    if (iVar13 == -4) {
      iVar20 = 0;
    }
    piVar5 = (int *)(iVar20 + (int)piVar25);
    *piVar5 = param_1;
    piVar5[1] = param_2;
    piVar5[2] = (int)puVar27;
    piVar5[3] = uVar18;
    piVar5[4] = param_6;
    *(undefined1 *)(piVar5 + 5) = param_7;
    if (iVar13 != -4) {
      *piVar25 = (int)(piVar5 + 6);
      FUN_10052990(param_6,param_3[3],param_4,param_5,piVar5 + 6,param_3[3]);
    }
    FUN_10053870(piVar25);
LAB_100535e0:
    if (!bVar10) {
      return;
    }
    *puVar14 = 0;
    return;
  }
  local_60 = 0;
  local_58 = 0;
  if (bVar10) {
    uVar24 = FUN_100ed8b8(*(int *)(param_1 + 0xd9b8) + 0x14f0,iVar13,&local_60);
    iVar13 = (int)local_60;
    if ((uVar24 & 1) != 0) {
      FUN_10052990(param_6,*puVar1,param_4,param_5,local_60 & 0xffffffff,*puVar1);
      param_5 = *puVar1;
      param_4 = iVar13;
    }
  }
  else {
    local_60._0_4_ = 0;
    iVar13 = (int)local_60;
  }
  iVar11 = local_58;
  iVar19 = local_60._4_4_;
  iVar20 = *(int *)(param_1 + 0xd9b8);
  puVar14 = (undefined4 *)(iVar20 + 0x11c0);
  bVar10 = true;
  cVar7 = *(char *)(iVar20 + 0x12ec);
  if (cVar7 == '\0') {
LAB_100537a8:
    if (cVar7 != '\0') goto LAB_1005381c;
  }
  else {
    puVar16 = (undefined4 *)FUN_100fd1a8(puVar14,0x28);
    if (puVar16 != (undefined4 *)0x0) {
      piVar25 = (int *)(iVar20 + 0x12e8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar25),0x10);
        if (bVar9) {
          *piVar25 = *piVar25 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      DataMemoryBarrier(2,3);
      puVar16[1] = 0x28;
      puVar16[2] = param_1;
      puVar16[3] = param_2;
      puVar16[4] = puVar27;
      puVar16[5] = param_4;
      puVar16[6] = param_5;
      puVar16[7] = param_6;
      *(undefined1 *)(puVar16 + 8) = param_7;
      puVar16[9] = iVar13;
      puVar16[10] = iVar19;
      puVar16[0xb] = iVar11;
      puVar6 = (undefined4 *)((int)puVar16 + 0x33U & 0xfffffffc);
      *puVar6 = 0;
      *puVar16 = FUN_10053920;
      puVar14[*(int *)(iVar20 + 0x12e4) * 5 + 0x1a] = puVar6;
      if (*(char *)(iVar20 + 0x12ed) != '\0') {
        *puVar14 = 0;
        (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar20 + 0x1220));
        bVar10 = false;
      }
      goto LAB_100537a8;
    }
    *puVar14 = 0;
    (*(code *)PTR_FUN_10134114)(100);
    FUN_100fd300(puVar14);
  }
  piVar25 = *(int **)(iVar20 + 0x12d0);
  *piVar25 = param_1;
  piVar25[1] = param_2;
  piVar25[2] = (int)puVar27;
  piVar25[3] = param_4;
  piVar25[4] = param_5;
  piVar25[5] = param_6;
  *(undefined1 *)(piVar25 + 6) = param_7;
  piVar25[7] = iVar13;
  piVar25[8] = iVar19;
  piVar25[9] = iVar11;
  FUN_10053920(piVar25);
LAB_1005381c:
  if (bVar10) {
    *puVar14 = 0;
  }
  return;
}

