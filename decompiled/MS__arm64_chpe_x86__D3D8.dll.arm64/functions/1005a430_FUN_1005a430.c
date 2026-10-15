/*
 * FUN_1005a430 at 1005a430
 * undefined FUN_1005a430(void)
 * Address ranges: 1005a430-1005abc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005a430(int param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int *piVar24;
  undefined4 uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 local_88;
  int local_80;
  uint *local_78;
  undefined8 local_70;
  uint *local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint *local_58;
  int local_54;
  undefined8 local_50;
  
  local_70 = CONCAT44(local_70._4_4_,param_3 + 2);
  local_60 = param_3[2] << 3;
  local_5c = 0;
  local_88 = CONCAT44(local_88._4_4_,(int *)(param_1 + 0xd9b8));
  local_78 = param_3;
  local_68 = param_3;
  local_64 = param_5;
  iVar15 = FUN_100fd300(*(int *)(param_1 + 0xd9b8) + 0x11c0);
  if (*(char *)(iVar15 + 300) == '\0') {
    bVar12 = false;
  }
  else {
    if (*param_3 != *(uint *)(param_1 + 0xddc4)) {
      *(uint *)(param_1 + 0xddc4) = *param_3;
      puVar16 = (undefined4 *)FUN_10057e10(param_1 + 0xda34,param_3);
      if (puVar16 == (undefined4 *)0x0) {
        puVar17 = (undefined8 *)FUN_100febf0(0xb0);
        if (puVar17 != (undefined8 *)0x0) {
          uVar31 = *(undefined8 *)param_3;
          uVar30 = *(undefined8 *)(param_3 + 6);
          uVar29 = *(undefined8 *)(param_3 + 4);
          puVar1 = (uint *)(param_1 + 0xda3c);
          puVar17[1] = *(undefined8 *)(param_3 + 2);
          *puVar17 = uVar31;
          puVar17[3] = uVar30;
          puVar17[2] = uVar29;
          uVar31 = *(undefined8 *)(param_3 + 8);
          uVar30 = *(undefined8 *)(param_3 + 0xe);
          uVar29 = *(undefined8 *)(param_3 + 0xc);
          puVar17[5] = *(undefined8 *)(param_3 + 10);
          puVar17[4] = uVar31;
          puVar17[7] = uVar30;
          puVar17[6] = uVar29;
          uVar31 = *(undefined8 *)(param_3 + 0x10);
          uVar30 = *(undefined8 *)(param_3 + 0x16);
          uVar29 = *(undefined8 *)(param_3 + 0x14);
          puVar17[9] = *(undefined8 *)(param_3 + 0x12);
          puVar17[8] = uVar31;
          puVar17[0xb] = uVar30;
          puVar17[10] = uVar29;
          uVar31 = *(undefined8 *)(param_3 + 0x18);
          uVar30 = *(undefined8 *)(param_3 + 0x1e);
          uVar29 = *(undefined8 *)(param_3 + 0x1c);
          puVar17[0xd] = *(undefined8 *)(param_3 + 0x1a);
          puVar17[0xc] = uVar31;
          puVar17[0xf] = uVar30;
          puVar17[0xe] = uVar29;
          uVar31 = *(undefined8 *)(param_3 + 0x20);
          uVar30 = *(undefined8 *)(param_3 + 0x26);
          uVar29 = *(undefined8 *)(param_3 + 0x24);
          puVar17[0x11] = *(undefined8 *)(param_3 + 0x22);
          puVar17[0x10] = uVar31;
          puVar17[0x13] = uVar30;
          puVar17[0x12] = uVar29;
          uVar29 = *(undefined8 *)(param_3 + 0x28);
          puVar17[0x15] = *(undefined8 *)(param_3 + 0x2a);
          puVar17[0x14] = uVar29;
          uVar21 = *puVar1;
          uVar27 = (ulonglong)*param_3;
          uVar28 = 0;
          if (uVar21 == 0) {
LAB_1005a5a8:
            puVar2 = (uint *)(param_1 + 0xda40);
            uVar23 = *puVar2;
            local_58 = puVar1;
            if (uVar23 == uVar21) {
              iVar15 = 0x10;
              if (uVar23 != 0) {
                iVar15 = uVar23 << 1;
              }
              local_50 = CONCAT44(local_50._4_4_,iVar15);
              local_54 = FUN_100fece0(iVar15 * 0x10 + 0x7f);
              if (local_54 != 0) {
                uVar23 = local_54 + 0x7fU & 0xffffff80;
                uVar21 = 0;
                if (*local_58 != 0) {
                  do {
                    puVar4 = (undefined8 *)(*(int *)(&DAT_0000da38 + param_1) + uVar21 * 0x10);
                    puVar5 = (undefined8 *)(uVar23 + uVar21 * 0x10);
                    uVar21 = uVar21 + 1;
                    uVar29 = *puVar4;
                    puVar5[1] = puVar4[1];
                    *puVar5 = uVar29;
                  } while (uVar21 < *(uint *)(param_1 + 0xda3c));
                }
                FUN_100fed00(*(undefined4 *)(param_1 + 0xda34));
                *(int *)(param_1 + 0xda34) = local_54;
                *(uint *)(&DAT_0000da38 + param_1) = uVar23;
                *puVar2 = (uint)local_50;
              }
            }
            piVar24 = (int *)(&DAT_0000da38 + param_1);
            uVar21 = *puVar1;
            if (*puVar2 != uVar21) {
              for (; uVar28 < uVar21; uVar21 = uVar21 - 1) {
                puVar4 = (undefined8 *)(*piVar24 + uVar21 * 0x10);
                puVar4[1] = puVar4[-1];
                *puVar4 = puVar4[-2];
              }
              *puVar1 = *puVar1 + 1;
              *(uint *)(*piVar24 + uVar28 * 0x10 + 8) = *local_78;
              *(undefined8 **)(*piVar24 + uVar28 * 0x10 + 0xc) = puVar17;
              *(ulonglong *)(*piVar24 + uVar28 * 0x10) = uVar27;
            }
          }
          else {
            uVar23 = 0;
            uVar20 = uVar21;
            do {
              uVar28 = uVar20 + uVar23 >> 1;
              uVar26 = *(ulonglong *)(*(int *)(&DAT_0000da38 + param_1) + uVar28 * 0x10);
              uVar14 = uVar28;
              if (uVar26 <= uVar27) {
                if (uVar27 <= uVar26) break;
                uVar23 = uVar28 + 1;
                uVar28 = uVar23;
                uVar14 = uVar20;
              }
              uVar20 = uVar14;
            } while (uVar20 != uVar23);
            if ((uVar28 == uVar21) ||
               (puVar3 = (ulonglong *)(*(int *)(&DAT_0000da38 + param_1) + uVar28 * 0x10),
               *puVar3 != uVar27)) goto LAB_1005a5a8;
            *(undefined8 **)((int)puVar3 + 0xc) = puVar17;
          }
          puVar16 = (undefined4 *)FUN_10057e10(param_1 + 0xda34,local_78);
          if (puVar16 != (undefined4 *)0x0) goto LAB_1005a710;
        }
        uVar25 = 0;
      }
      else {
LAB_1005a710:
        uVar25 = *puVar16;
      }
      *(undefined4 *)(param_1 + 0xddc8) = uVar25;
    }
    local_68 = *(uint **)(param_1 + 0xddc8);
    if (local_68 != (uint *)0x0) {
      uVar21 = 0;
      if (*(uint *)local_70 != 0) {
        do {
          iVar15 = uVar21 + 0x9c;
          uVar21 = uVar21 + 1;
          local_5c = local_5c +
                     (uint)*(byte *)((int)local_78 +
                                    (uint)*(byte *)((int)local_78 + iVar15) * 8 + 0x16) * param_6 +
                     0x10;
        } while (uVar21 < *(uint *)local_70);
      }
    }
    bVar12 = true;
  }
  puVar1 = local_68;
  local_70 = CONCAT44(param_6,&local_68);
  iVar15 = local_5c + local_60;
  uVar21 = iVar15 + 0x10;
  if (0x3eff < uVar21 || !bVar12) {
    local_88 = 0;
    local_80 = 0;
    if (bVar12) {
      uVar27 = FUN_100ed8b8(*(int *)(param_1 + 0xd9b8) + 0x14f0,uVar21,&local_88);
      iVar15 = (int)(int *)local_88;
      if ((uVar27 & 1) != 0) {
        FUN_10054d18(&local_70,local_88 & 0xffffffff);
      }
    }
    else {
      local_88._0_4_ = (int *)0x0;
      iVar15 = (int)(int *)local_88;
    }
    iVar13 = local_64;
    puVar1 = local_68;
    iVar18 = local_80;
    iVar22 = local_88._4_4_;
    bVar12 = true;
    iVar9 = *(int *)(param_1 + 0xd9b8);
    puVar16 = (undefined4 *)(iVar9 + 0x11c0);
    cVar8 = *(char *)(iVar9 + 0x12ec);
    if (cVar8 == '\0') {
LAB_1005ab1c:
      if (cVar8 != '\0') goto LAB_1005ab84;
    }
    else {
      puVar19 = (undefined4 *)FUN_100fd1a8(puVar16,0x24);
      if (puVar19 != (undefined4 *)0x0) {
        piVar24 = (int *)(iVar9 + 0x12e8);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(piVar24),0x10);
          if (bVar11) {
            *piVar24 = *piVar24 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        DataMemoryBarrier(2,3);
        puVar19[1] = 0x24;
        puVar19[2] = param_1;
        puVar19[3] = param_2;
        puVar19[4] = puVar1;
        puVar19[5] = param_4;
        puVar19[6] = iVar13;
        puVar19[7] = param_6;
        puVar19[8] = iVar15;
        puVar19[9] = iVar22;
        puVar19[10] = iVar18;
        puVar7 = (undefined4 *)((int)puVar19 + 0x2fU & 0xfffffffc);
        *puVar7 = 0;
        *puVar19 = FUN_1005ac10;
        puVar16[*(int *)(iVar9 + 0x12e4) * 5 + 0x1a] = puVar7;
        if (*(char *)(iVar9 + 0x12ed) != '\0') {
          *puVar16 = 0;
          (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar9 + 0x1220));
          bVar12 = false;
        }
        goto LAB_1005ab1c;
      }
      *puVar16 = 0;
      (*(code *)PTR_FUN_10134114)(100);
      FUN_100fd300(puVar16);
    }
    piVar24 = *(int **)(iVar9 + 0x12d0);
    *piVar24 = param_1;
    piVar24[1] = param_2;
    piVar24[2] = (int)puVar1;
    piVar24[3] = param_4;
    piVar24[4] = iVar13;
    piVar24[5] = param_6;
    piVar24[6] = iVar15;
    piVar24[7] = iVar22;
    piVar24[8] = iVar18;
    FUN_1005ac10(piVar24);
LAB_1005ab84:
    if (!bVar12) {
      return;
    }
    *puVar16 = 0;
    return;
  }
  bVar12 = true;
  iVar9 = *(int *)local_88;
  puVar16 = (undefined4 *)(iVar9 + 0x11c0);
  local_50 = local_70;
  cVar8 = *(char *)(iVar9 + 0x12ec);
  if (cVar8 == '\0') {
LAB_1005a914:
    if (cVar8 != '\0') goto LAB_1005a984;
  }
  else {
    if (uVar21 == 0) {
      iVar22 = 0x14;
    }
    else {
      iVar22 = (iVar15 + 0x13U & 0xfffffffc) + 0x18;
    }
    iVar18 = FUN_100fd1a8(puVar16,iVar22);
    if (iVar18 != 0) {
      piVar24 = (int *)(iVar9 + 0x12e8);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(piVar24),0x10);
        if (bVar11) {
          *piVar24 = *piVar24 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      DataMemoryBarrier(2,3);
      local_88 = CONCAT44(local_88._4_4_,iVar18);
      *(int *)(iVar18 + 4) = iVar22;
      iVar22 = 0xc;
      if (uVar21 == 0) {
        iVar22 = 8;
      }
      piVar24 = (int *)(iVar22 + iVar18);
      *piVar24 = param_1;
      piVar24[1] = param_2;
      piVar24[2] = (int)puVar1;
      piVar24[3] = param_4;
      piVar24[4] = param_6;
      puVar19 = (undefined4 *)((int)piVar24 + 0x17U & 0xfffffffc);
      if (uVar21 != 0) {
        *(undefined4 **)(iVar18 + 8) = puVar19;
        FUN_10054d18(&local_70,puVar19);
        puVar19 = (undefined4 *)((iVar15 + 0x13U & 0xfffffffc) + (int)puVar19);
      }
      *puVar19 = 0;
      *(int *)local_88 = (int)FUN_1005abd0;
      puVar16[*(int *)(iVar9 + 0x12e4) * 5 + 0x1a] = puVar19;
      if (*(char *)(iVar9 + 0x12ed) != '\0') {
        *puVar16 = 0;
        (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar9 + 0x1220));
        bVar12 = false;
      }
      goto LAB_1005a914;
    }
    *puVar16 = 0;
    (*(code *)PTR_FUN_10134114)(100);
    FUN_100fd300(puVar16);
  }
  local_88 = local_50;
  piVar24 = *(int **)(iVar9 + 0x12d0);
  iVar15 = 4;
  if (uVar21 == 0) {
    iVar15 = 0;
  }
  piVar6 = (int *)(iVar15 + (int)piVar24);
  *piVar6 = param_1;
  piVar6[1] = param_2;
  piVar6[2] = (int)puVar1;
  piVar6[3] = param_4;
  piVar6[4] = param_6;
  if (uVar21 != 0) {
    *piVar24 = (int)(piVar6 + 5);
    FUN_10054d18(&local_88,piVar6 + 5);
  }
  FUN_1005abd0(piVar24);
LAB_1005a984:
  if (bVar12) {
    *puVar16 = 0;
  }
  return;
}

