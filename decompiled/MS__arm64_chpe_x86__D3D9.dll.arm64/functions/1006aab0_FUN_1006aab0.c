/*
 * FUN_1006aab0 at 1006aab0
 * undefined FUN_1006aab0(void)
 * Address ranges: 1006aab0-1006b223
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006aab0(int param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6)

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
  int iVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int *piVar23;
  undefined4 uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined8 uVar28;
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
  local_60 = param_3[2] * 0xc;
  local_5c = 0;
  local_88 = CONCAT44(local_88._4_4_,(int *)(param_1 + 0xf6b8));
  local_78 = param_3;
  local_68 = param_3;
  local_64 = param_5;
  iVar15 = FUN_101308d0(*(int *)(param_1 + 0xf6b8) + 0x11c0);
  if (*(char *)(iVar15 + 300) == '\0') {
    bVar12 = false;
  }
  else {
    if (*param_3 != *(uint *)(param_1 + 0xfd04)) {
      *(uint *)(param_1 + 0xfd04) = *param_3;
      puVar16 = (undefined4 *)FUN_100684c0(param_1 + 0xf734,param_3);
      if (puVar16 == (undefined4 *)0x0) {
        iVar15 = FUN_101321c0(0x254);
        if (iVar15 != 0) {
          FUN_101325a0(iVar15,param_3,0x254);
          puVar1 = (uint *)(param_1 + 0xf73c);
          uVar26 = (ulonglong)*param_3;
          uVar20 = *puVar1;
          uVar27 = 0;
          if (uVar20 == 0) {
LAB_1006ac04:
            puVar2 = (uint *)(param_1 + 0xf740);
            uVar22 = *puVar2;
            local_58 = puVar1;
            if (uVar22 == uVar20) {
              iVar9 = 0x10;
              if (uVar22 != 0) {
                iVar9 = uVar22 << 1;
              }
              local_50 = CONCAT44(local_50._4_4_,iVar9);
              local_54 = FUN_101322b0(iVar9 * 0x10 + 0x7f);
              if (local_54 != 0) {
                uVar22 = local_54 + 0x7fU & 0xffffff80;
                uVar20 = 0;
                if (*local_58 != 0) {
                  do {
                    puVar4 = (undefined8 *)(*(int *)(param_1 + 0xf738) + uVar20 * 0x10);
                    puVar5 = (undefined8 *)(uVar22 + uVar20 * 0x10);
                    uVar20 = uVar20 + 1;
                    uVar28 = *puVar4;
                    puVar5[1] = puVar4[1];
                    *puVar5 = uVar28;
                  } while (uVar20 < *(uint *)(param_1 + 0xf73c));
                }
                FUN_101322d0(*(undefined4 *)(param_1 + 0xf734));
                *(int *)(param_1 + 0xf734) = local_54;
                *(uint *)(param_1 + 0xf738) = uVar22;
                *puVar2 = (uint)local_50;
              }
            }
            piVar23 = (int *)(param_1 + 0xf738);
            uVar20 = *puVar1;
            if (*puVar2 != uVar20) {
              for (; uVar27 < uVar20; uVar20 = uVar20 - 1) {
                puVar4 = (undefined8 *)(*piVar23 + uVar20 * 0x10);
                puVar4[1] = puVar4[-1];
                *puVar4 = puVar4[-2];
              }
              *puVar1 = *puVar1 + 1;
              *(uint *)(*piVar23 + uVar27 * 0x10 + 8) = *local_78;
              *(int *)(*piVar23 + uVar27 * 0x10 + 0xc) = iVar15;
              *(ulonglong *)(*piVar23 + uVar27 * 0x10) = uVar26;
            }
          }
          else {
            uVar22 = 0;
            uVar19 = uVar20;
            do {
              uVar27 = uVar19 + uVar22 >> 1;
              uVar25 = *(ulonglong *)(*(int *)(param_1 + 0xf738) + uVar27 * 0x10);
              uVar14 = uVar27;
              if (uVar25 <= uVar26) {
                if (uVar26 <= uVar25) break;
                uVar22 = uVar27 + 1;
                uVar27 = uVar22;
                uVar14 = uVar19;
              }
              uVar19 = uVar14;
            } while (uVar19 != uVar22);
            if ((uVar27 == uVar20) ||
               (puVar3 = (ulonglong *)(*(int *)(param_1 + 0xf738) + uVar27 * 0x10),
               *puVar3 != uVar26)) goto LAB_1006ac04;
            *(int *)((int)puVar3 + 0xc) = iVar15;
          }
          puVar16 = (undefined4 *)FUN_100684c0(param_1 + 0xf734,local_78);
          if (puVar16 != (undefined4 *)0x0) goto LAB_1006ad6c;
        }
        uVar24 = 0;
      }
      else {
LAB_1006ad6c:
        uVar24 = *puVar16;
      }
      *(undefined4 *)(param_1 + 0xfd08) = uVar24;
    }
    local_68 = *(uint **)(param_1 + 0xfd08);
    if (local_68 != (uint *)0x0) {
      uVar20 = 0;
      if (*(uint *)local_70 != 0) {
        do {
          iVar15 = uVar20 + 0x214;
          uVar20 = uVar20 + 1;
          local_5c = local_5c +
                     (uint)*(byte *)((int)local_78 +
                                    (uint)*(byte *)((int)local_78 + iVar15) * 8 + 0x16) * param_6 +
                     0x10;
        } while (uVar20 < *(uint *)local_70);
      }
    }
    bVar12 = true;
  }
  puVar1 = local_68;
  local_70 = CONCAT44(param_6,&local_68);
  iVar15 = local_5c + local_60;
  uVar20 = iVar15 + 0x10;
  if (0x3eff < uVar20 || !bVar12) {
    local_88 = 0;
    local_80 = 0;
    if (bVar12) {
      uVar26 = FUN_10120108(*(int *)(param_1 + 0xf6b8) + 0x14f0,uVar20,&local_88);
      iVar15 = (int)(int *)local_88;
      if ((uVar26 & 1) != 0) {
        FUN_10065198(&local_70,local_88 & 0xffffffff);
      }
    }
    else {
      local_88._0_4_ = (int *)0x0;
      iVar15 = (int)(int *)local_88;
    }
    iVar13 = local_64;
    puVar1 = local_68;
    iVar17 = local_80;
    iVar21 = local_88._4_4_;
    bVar12 = true;
    iVar9 = *(int *)(param_1 + 0xf6b8);
    puVar16 = (undefined4 *)(iVar9 + 0x11c0);
    cVar8 = *(char *)(iVar9 + 0x12ec);
    if (cVar8 == '\0') {
LAB_1006b178:
      if (cVar8 != '\0') goto LAB_1006b1e0;
    }
    else {
      puVar18 = (undefined4 *)FUN_10130778(puVar16,0x24);
      if (puVar18 != (undefined4 *)0x0) {
        piVar23 = (int *)(iVar9 + 0x12e8);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(piVar23),0x10);
          if (bVar11) {
            *piVar23 = *piVar23 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        DataMemoryBarrier(2,3);
        puVar18[1] = 0x24;
        puVar18[2] = param_1;
        puVar18[3] = param_2;
        puVar18[4] = puVar1;
        puVar18[5] = param_4;
        puVar18[6] = iVar13;
        puVar18[7] = param_6;
        puVar18[8] = iVar15;
        puVar18[9] = iVar21;
        puVar18[10] = iVar17;
        puVar7 = (undefined4 *)((int)puVar18 + 0x2fU & 0xfffffffc);
        *puVar7 = 0;
        *puVar18 = FUN_1006b270;
        puVar16[*(int *)(iVar9 + 0x12e4) * 5 + 0x1a] = puVar7;
        if (*(char *)(iVar9 + 0x12ed) != '\0') {
          *puVar16 = 0;
          (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar9 + 0x1220));
          bVar12 = false;
        }
        goto LAB_1006b178;
      }
      *puVar16 = 0;
      (*(code *)PTR_FUN_1016c114)(100);
      FUN_101308d0(puVar16);
    }
    piVar23 = *(int **)(iVar9 + 0x12d0);
    *piVar23 = param_1;
    piVar23[1] = param_2;
    piVar23[2] = (int)puVar1;
    piVar23[3] = param_4;
    piVar23[4] = iVar13;
    piVar23[5] = param_6;
    piVar23[6] = iVar15;
    piVar23[7] = iVar21;
    piVar23[8] = iVar17;
    FUN_1006b270(piVar23);
LAB_1006b1e0:
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
LAB_1006af70:
    if (cVar8 != '\0') goto LAB_1006afe0;
  }
  else {
    if (uVar20 == 0) {
      iVar21 = 0x14;
    }
    else {
      iVar21 = (iVar15 + 0x13U & 0xfffffffc) + 0x18;
    }
    iVar17 = FUN_10130778(puVar16,iVar21);
    if (iVar17 != 0) {
      piVar23 = (int *)(iVar9 + 0x12e8);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(piVar23),0x10);
        if (bVar11) {
          *piVar23 = *piVar23 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      DataMemoryBarrier(2,3);
      local_88 = CONCAT44(local_88._4_4_,iVar17);
      *(int *)(iVar17 + 4) = iVar21;
      iVar21 = 0xc;
      if (uVar20 == 0) {
        iVar21 = 8;
      }
      piVar23 = (int *)(iVar21 + iVar17);
      *piVar23 = param_1;
      piVar23[1] = param_2;
      piVar23[2] = (int)puVar1;
      piVar23[3] = param_4;
      piVar23[4] = param_6;
      puVar18 = (undefined4 *)((int)piVar23 + 0x17U & 0xfffffffc);
      if (uVar20 != 0) {
        *(undefined4 **)(iVar17 + 8) = puVar18;
        FUN_10065198(&local_70,puVar18);
        puVar18 = (undefined4 *)((iVar15 + 0x13U & 0xfffffffc) + (int)puVar18);
      }
      *puVar18 = 0;
      *(int *)local_88 = (int)FUN_1006b230;
      puVar16[*(int *)(iVar9 + 0x12e4) * 5 + 0x1a] = puVar18;
      if (*(char *)(iVar9 + 0x12ed) != '\0') {
        *puVar16 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar9 + 0x1220));
        bVar12 = false;
      }
      goto LAB_1006af70;
    }
    *puVar16 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar16);
  }
  local_88 = local_50;
  piVar23 = *(int **)(iVar9 + 0x12d0);
  iVar15 = 4;
  if (uVar20 == 0) {
    iVar15 = 0;
  }
  piVar6 = (int *)(iVar15 + (int)piVar23);
  *piVar6 = param_1;
  piVar6[1] = param_2;
  piVar6[2] = (int)puVar1;
  piVar6[3] = param_4;
  piVar6[4] = param_6;
  if (uVar20 != 0) {
    *piVar23 = (int)(piVar6 + 5);
    FUN_10065198(&local_88,piVar6 + 5);
  }
  FUN_1006b230(piVar23);
LAB_1006afe0:
  if (bVar12) {
    *puVar16 = 0;
  }
  return;
}

