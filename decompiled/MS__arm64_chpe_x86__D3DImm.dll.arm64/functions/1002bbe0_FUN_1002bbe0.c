/*
 * FUN_1002bbe0 at 1002bbe0
 * undefined FUN_1002bbe0(void)
 * Address ranges: 1002bbe0-1002c483
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002bbe0(int param_1,int param_2,uint *param_3,int param_4,int param_5,undefined1 param_6)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  char cVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint *puVar21;
  undefined4 *puVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  uint *local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  uint *local_5c;
  int local_58;
  undefined8 local_50;
  
  local_78 = CONCAT44(local_78._4_4_,param_3 + 2);
  local_68 = param_3[2] << 3;
  local_64 = 0;
  local_88 = CONCAT44(local_88._4_4_,(int *)(param_1 + 0x1d54));
  local_70 = param_3;
  local_6c = param_4;
  iVar16 = FUN_10081528(*(int *)(param_1 + 0x1d54) + 0x11c0);
  if (*(char *)(iVar16 + 300) == '\0') {
    bVar13 = false;
  }
  else {
    if (*param_3 != *(uint *)(param_1 + 0x2140)) {
      *(uint *)(param_1 + 0x2140) = *param_3;
      puVar1 = (uint *)(param_1 + 0x1dd8);
      uVar25 = *puVar1;
      if (uVar25 == 0) {
LAB_1002bd04:
        puVar17 = (undefined8 *)FUN_10081cb0(0xb0);
        if (puVar17 != (undefined8 *)0x0) {
          uVar33 = *(undefined8 *)param_3;
          uVar32 = *(undefined8 *)(param_3 + 6);
          uVar31 = *(undefined8 *)(param_3 + 4);
          puVar17[1] = *(undefined8 *)(param_3 + 2);
          *puVar17 = uVar33;
          puVar17[3] = uVar32;
          puVar17[2] = uVar31;
          uVar33 = *(undefined8 *)(param_3 + 8);
          uVar32 = *(undefined8 *)(param_3 + 0xe);
          uVar31 = *(undefined8 *)(param_3 + 0xc);
          puVar17[5] = *(undefined8 *)(param_3 + 10);
          puVar17[4] = uVar33;
          puVar17[7] = uVar32;
          puVar17[6] = uVar31;
          uVar33 = *(undefined8 *)(param_3 + 0x10);
          uVar32 = *(undefined8 *)(param_3 + 0x16);
          uVar31 = *(undefined8 *)(param_3 + 0x14);
          puVar17[9] = *(undefined8 *)(param_3 + 0x12);
          puVar17[8] = uVar33;
          puVar17[0xb] = uVar32;
          puVar17[10] = uVar31;
          uVar33 = *(undefined8 *)(param_3 + 0x18);
          uVar32 = *(undefined8 *)(param_3 + 0x1e);
          uVar31 = *(undefined8 *)(param_3 + 0x1c);
          puVar17[0xd] = *(undefined8 *)(param_3 + 0x1a);
          puVar17[0xc] = uVar33;
          puVar17[0xf] = uVar32;
          puVar17[0xe] = uVar31;
          uVar33 = *(undefined8 *)(param_3 + 0x20);
          uVar32 = *(undefined8 *)(param_3 + 0x26);
          uVar31 = *(undefined8 *)(param_3 + 0x24);
          puVar17[0x11] = *(undefined8 *)(param_3 + 0x22);
          puVar17[0x10] = uVar33;
          puVar17[0x13] = uVar32;
          puVar17[0x12] = uVar31;
          uVar31 = *(undefined8 *)(param_3 + 0x28);
          puVar17[0x15] = *(undefined8 *)(param_3 + 0x2a);
          puVar17[0x14] = uVar31;
          uVar25 = *puVar1;
          uVar30 = (ulonglong)*param_3;
          if (uVar25 == 0) {
            uVar24 = 0;
          }
          else {
            uVar27 = 0;
            uVar20 = uVar25;
            do {
              uVar24 = uVar20 + uVar27 >> 1;
              uVar29 = *(ulonglong *)(*(int *)(param_1 + 0x1dd4) + uVar24 * 0x10);
              uVar28 = uVar24;
              if (uVar29 <= uVar30) {
                if (uVar30 <= uVar29) break;
                uVar27 = uVar24 + 1;
                uVar24 = uVar27;
                uVar28 = uVar20;
              }
              uVar20 = uVar28;
            } while (uVar20 != uVar27);
          }
          puVar21 = (uint *)(param_1 + 0x1dd4);
          if ((uVar24 == uVar25) ||
             (puVar4 = (ulonglong *)(*puVar21 + uVar24 * 0x10), *puVar4 != uVar30)) {
            puVar2 = (uint *)(param_1 + 0x1ddc);
            uVar27 = *puVar2;
            local_5c = puVar21;
            if (uVar27 == uVar25) {
              iVar16 = 0x10;
              if (uVar27 != 0) {
                iVar16 = uVar27 << 1;
              }
              local_50 = CONCAT44(local_50._4_4_,iVar16);
              local_58 = FUN_10081da0(iVar16 * 0x10 + 0x7f);
              if (local_58 != 0) {
                local_60 = local_58 + 0x7fU & 0xffffff80;
                uVar25 = 0;
                if (*puVar1 != 0) {
                  do {
                    puVar5 = (undefined8 *)(*local_5c + uVar25 * 0x10);
                    puVar6 = (undefined8 *)(local_60 + uVar25 * 0x10);
                    uVar25 = uVar25 + 1;
                    uVar31 = *puVar5;
                    puVar6[1] = puVar5[1];
                    *puVar6 = uVar31;
                  } while (uVar25 < *puVar1);
                }
                FUN_10081dc0(*(int *)(param_1 + 0x1dd0));
                *(int *)(param_1 + 0x1dd0) = local_58;
                *puVar21 = local_60;
                *puVar2 = (uint)local_50;
              }
            }
            uVar25 = *puVar1;
            if (*puVar2 != uVar25) {
              for (; uVar24 < uVar25; uVar25 = uVar25 - 1) {
                puVar5 = (undefined8 *)(*puVar21 + uVar25 * 0x10);
                puVar5[1] = puVar5[-1];
                *puVar5 = puVar5[-2];
              }
              *puVar1 = *puVar1 + 1;
              *(uint *)(*puVar21 + uVar24 * 0x10 + 8) = *param_3;
              *(undefined8 **)(*puVar21 + uVar24 * 0x10 + 0xc) = puVar17;
              *(ulonglong *)(*puVar21 + uVar24 * 0x10) = uVar30;
            }
          }
          else {
            *(undefined8 **)((int)puVar4 + 0xc) = puVar17;
          }
          uVar25 = *puVar1;
          if (uVar25 == 0) {
LAB_1002bfac:
            puVar22 = (undefined4 *)0x0;
          }
          else {
            uVar24 = 0;
            uVar27 = *param_3;
            uVar20 = uVar25;
            do {
              uVar28 = uVar20 + uVar24 >> 1;
              uVar30 = *(ulonglong *)(*puVar21 + uVar28 * 0x10);
              uVar15 = uVar28;
              if (uVar30 <= uVar27) {
                if (uVar27 <= uVar30) break;
                uVar24 = uVar28 + 1;
                uVar28 = uVar24;
                uVar15 = uVar20;
              }
              uVar20 = uVar15;
            } while (uVar20 != uVar24);
            if ((uVar28 == uVar25) ||
               (puVar4 = (ulonglong *)(*puVar21 + uVar28 * 0x10),
               puVar22 = (undefined4 *)((int)puVar4 + 0xc), *puVar4 != (ulonglong)uVar27))
            goto LAB_1002bfac;
          }
          if (puVar22 != (undefined4 *)0x0) goto LAB_1002bfb8;
        }
        uVar26 = 0;
      }
      else {
        uVar27 = *param_3;
        uVar24 = 0;
        uVar20 = uVar25;
        do {
          uVar28 = uVar20 + uVar24 >> 1;
          uVar30 = *(ulonglong *)(*(int *)(param_1 + 0x1dd4) + uVar28 * 0x10);
          uVar15 = uVar28;
          if (uVar30 <= uVar27) {
            if (uVar27 <= uVar30) break;
            uVar24 = uVar28 + 1;
            uVar28 = uVar24;
            uVar15 = uVar20;
          }
          uVar20 = uVar15;
        } while (uVar20 != uVar24);
        if (((uVar28 == uVar25) ||
            (puVar4 = (ulonglong *)(*(int *)(param_1 + 0x1dd4) + uVar28 * 0x10),
            *puVar4 != (ulonglong)uVar27)) ||
           (puVar22 = (undefined4 *)((int)puVar4 + 0xc), puVar22 == (undefined4 *)0x0))
        goto LAB_1002bd04;
LAB_1002bfb8:
        uVar26 = *puVar22;
      }
      *(undefined4 *)(param_1 + 0x2144) = uVar26;
    }
    local_70 = *(uint **)(param_1 + 0x2144);
    if (local_70 != (uint *)0x0) {
      uVar25 = 0;
      if (*(uint *)local_78 != 0) {
        do {
          iVar16 = uVar25 + 0x9c;
          uVar25 = uVar25 + 1;
          local_64 = local_64 +
                     (uint)*(byte *)((int)param_3 +
                                    (uint)*(byte *)((int)param_3 + iVar16) * 8 + 0x16) * param_5 +
                     0x10;
        } while (uVar25 < *(uint *)local_78);
      }
    }
    bVar13 = true;
  }
  puVar1 = local_70;
  local_78 = CONCAT44(param_5,&local_70);
  iVar16 = local_64 + local_68;
  uVar25 = iVar16 + 0x10;
  if (0x3eff < uVar25 || !bVar13) {
    local_88 = 0;
    local_80 = 0;
    if (bVar13) {
      uVar30 = FUN_10078c70(*(int *)(param_1 + 0x1d54) + 0x14f0,uVar25,&local_88);
      iVar16 = (int)(int *)local_88;
      if ((uVar30 & 1) != 0) {
        FUN_1002c488(&local_78,local_88 & 0xffffffff);
      }
    }
    else {
      local_88._0_4_ = (int *)0x0;
      iVar16 = (int)(int *)local_88;
    }
    iVar14 = local_6c;
    puVar1 = local_70;
    iVar18 = local_80;
    iVar23 = local_88._4_4_;
    bVar13 = true;
    iVar10 = *(int *)(param_1 + 0x1d54);
    puVar22 = (undefined4 *)(iVar10 + 0x11c0);
    cVar9 = *(char *)(iVar10 + 0x12ec);
    if (cVar9 == '\0') {
LAB_1002c3d8:
      if (cVar9 != '\0') goto LAB_1002c440;
    }
    else {
      puVar19 = (undefined4 *)FUN_100813d0(puVar22,0x24);
      if (puVar19 != (undefined4 *)0x0) {
        piVar3 = (int *)(iVar10 + 0x12e8);
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ZEXT48(piVar3),0x10);
          if (bVar12) {
            *piVar3 = *piVar3 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        DataMemoryBarrier(2,3);
        puVar19[1] = 0x24;
        puVar19[2] = param_1;
        puVar19[3] = param_2;
        puVar19[4] = puVar1;
        puVar19[5] = iVar14;
        puVar19[6] = param_5;
        *(undefined1 *)(puVar19 + 7) = param_6;
        puVar19[8] = iVar16;
        puVar19[9] = iVar23;
        puVar19[10] = iVar18;
        puVar8 = (undefined4 *)((int)puVar19 + 0x2fU & 0xfffffffc);
        *puVar8 = 0;
        *puVar19 = FUN_1002c650;
        puVar22[*(int *)(iVar10 + 0x12e4) * 5 + 0x1a] = puVar8;
        if (*(char *)(iVar10 + 0x12ed) != '\0') {
          *puVar22 = 0;
          (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar10 + 0x1220));
          bVar13 = false;
        }
        goto LAB_1002c3d8;
      }
      *puVar22 = 0;
      (*(code *)PTR_FUN_100a1074)(100);
      FUN_10081528(puVar22);
    }
    piVar3 = *(int **)(iVar10 + 0x12d0);
    *piVar3 = param_1;
    piVar3[1] = param_2;
    piVar3[2] = (int)puVar1;
    piVar3[3] = iVar14;
    piVar3[4] = param_5;
    *(undefined1 *)(piVar3 + 5) = param_6;
    piVar3[6] = iVar16;
    piVar3[7] = iVar23;
    piVar3[8] = iVar18;
    FUN_1002c650(piVar3);
LAB_1002c440:
    if (!bVar13) {
      return;
    }
    *puVar22 = 0;
    return;
  }
  bVar13 = true;
  iVar10 = *(int *)local_88;
  puVar22 = (undefined4 *)(iVar10 + 0x11c0);
  local_50 = local_78;
  cVar9 = *(char *)(iVar10 + 0x12ec);
  if (cVar9 == '\0') {
LAB_1002c1d0:
    if (cVar9 != '\0') goto LAB_1002c240;
  }
  else {
    if (uVar25 == 0) {
      iVar23 = 0x14;
    }
    else {
      iVar23 = (iVar16 + 0x13U & 0xfffffffc) + 0x18;
    }
    iVar18 = FUN_100813d0(puVar22,iVar23);
    if (iVar18 != 0) {
      piVar3 = (int *)(iVar10 + 0x12e8);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ZEXT48(piVar3),0x10);
        if (bVar12) {
          *piVar3 = *piVar3 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      DataMemoryBarrier(2,3);
      local_88 = CONCAT44(local_88._4_4_,iVar18);
      *(int *)(iVar18 + 4) = iVar23;
      iVar23 = 0xc;
      if (uVar25 == 0) {
        iVar23 = 8;
      }
      piVar3 = (int *)(iVar23 + iVar18);
      *piVar3 = param_1;
      piVar3[1] = param_2;
      piVar3[2] = (int)puVar1;
      piVar3[3] = param_5;
      *(undefined1 *)(piVar3 + 4) = param_6;
      puVar19 = (undefined4 *)((int)piVar3 + 0x17U & 0xfffffffc);
      if (uVar25 != 0) {
        *(undefined4 **)(iVar18 + 8) = puVar19;
        FUN_1002c488(&local_78,puVar19);
        puVar19 = (undefined4 *)((iVar16 + 0x13U & 0xfffffffc) + (int)puVar19);
      }
      *puVar19 = 0;
      *(int *)local_88 = (int)FUN_1002c5b0;
      puVar22[*(int *)(iVar10 + 0x12e4) * 5 + 0x1a] = puVar19;
      if (*(char *)(iVar10 + 0x12ed) != '\0') {
        *puVar22 = 0;
        (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar10 + 0x1220));
        bVar13 = false;
      }
      goto LAB_1002c1d0;
    }
    *puVar22 = 0;
    (*(code *)PTR_FUN_100a1074)(100);
    FUN_10081528(puVar22);
  }
  local_88 = local_50;
  piVar3 = *(int **)(iVar10 + 0x12d0);
  iVar16 = 4;
  if (uVar25 == 0) {
    iVar16 = 0;
  }
  piVar7 = (int *)(iVar16 + (int)piVar3);
  *piVar7 = param_1;
  piVar7[1] = param_2;
  piVar7[2] = (int)puVar1;
  piVar7[3] = param_5;
  *(undefined1 *)(piVar7 + 4) = param_6;
  if (uVar25 != 0) {
    *piVar3 = (int)(piVar7 + 5);
    FUN_1002c488(&local_88,piVar7 + 5);
  }
  FUN_1002c5b0(piVar3);
LAB_1002c240:
  if (bVar13) {
    *puVar22 = 0;
  }
  return;
}

