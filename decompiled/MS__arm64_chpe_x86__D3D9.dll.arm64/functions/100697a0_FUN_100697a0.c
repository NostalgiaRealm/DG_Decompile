/*
 * FUN_100697a0 at 100697a0
 * undefined FUN_100697a0(void)
 * Address ranges: 100697a0-10069f1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100697a0(int param_1,int param_2,uint *param_3,int param_4,int param_5,uint param_6,
                 int param_7)

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
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int *piVar24;
  uint uVar25;
  uint *puVar26;
  undefined8 uVar27;
  undefined8 local_68;
  int local_60;
  uint *local_58;
  int local_54;
  uint local_50;
  
  iVar13 = FUN_101308d0(*(int *)(param_1 + 0xf6b8) + 0x11c0);
  if (*(char *)(iVar13 + 300) == '\0') {
    bVar10 = false;
    puVar26 = param_3;
  }
  else {
    if (*param_3 != *(uint *)(param_1 + 0xfd04)) {
      *(uint *)(param_1 + 0xfd04) = *param_3;
      puVar14 = (undefined4 *)FUN_100684c0(param_1 + 0xf734,param_3);
      if (puVar14 == (undefined4 *)0x0) {
        iVar13 = FUN_101321c0(0x254);
        if (iVar13 != 0) {
          FUN_101325a0(iVar13,param_3,0x254);
          puVar26 = (uint *)(param_1 + 0xf73c);
          uVar23 = (ulonglong)*param_3;
          uVar17 = *puVar26;
          uVar25 = 0;
          if (uVar17 == 0) {
LAB_100698dc:
            puVar1 = (uint *)(param_1 + 0xf740);
            uVar20 = *puVar1;
            local_58 = puVar26;
            if (uVar20 == uVar17) {
              local_50 = 0x10;
              if (uVar20 != 0) {
                local_50 = uVar20 << 1;
              }
              local_54 = FUN_101322b0(local_50 * 0x10 + 0x7f);
              if (local_54 != 0) {
                uVar20 = local_54 + 0x7fU & 0xffffff80;
                uVar17 = 0;
                if (*local_58 != 0) {
                  do {
                    puVar3 = (undefined8 *)(*(int *)(param_1 + 0xf738) + uVar17 * 0x10);
                    puVar4 = (undefined8 *)(uVar20 + uVar17 * 0x10);
                    uVar17 = uVar17 + 1;
                    uVar27 = *puVar3;
                    puVar4[1] = puVar3[1];
                    *puVar4 = uVar27;
                  } while (uVar17 < *(uint *)(param_1 + 0xf73c));
                }
                FUN_101322d0(*(undefined4 *)(param_1 + 0xf734));
                *(uint *)(param_1 + 0xf738) = uVar20;
                *(int *)(param_1 + 0xf734) = local_54;
                *puVar1 = local_50;
              }
            }
            piVar24 = (int *)(param_1 + 0xf738);
            uVar17 = *puVar26;
            if (*puVar1 != uVar17) {
              for (; uVar25 < uVar17; uVar17 = uVar17 - 1) {
                puVar3 = (undefined8 *)(*piVar24 + uVar17 * 0x10);
                puVar3[1] = puVar3[-1];
                *puVar3 = puVar3[-2];
              }
              *puVar26 = *puVar26 + 1;
              *(uint *)(*piVar24 + uVar25 * 0x10 + 8) = *param_3;
              *(int *)(*piVar24 + uVar25 * 0x10 + 0xc) = iVar13;
              *(ulonglong *)(*piVar24 + uVar25 * 0x10) = uVar23;
            }
          }
          else {
            uVar20 = 0;
            uVar16 = uVar17;
            do {
              uVar25 = uVar16 + uVar20 >> 1;
              uVar22 = *(ulonglong *)(*(int *)(param_1 + 0xf738) + uVar25 * 0x10);
              uVar12 = uVar25;
              if (uVar22 <= uVar23) {
                if (uVar23 <= uVar22) break;
                uVar20 = uVar25 + 1;
                uVar25 = uVar20;
                uVar12 = uVar16;
              }
              uVar16 = uVar12;
            } while (uVar16 != uVar20);
            if ((uVar25 == uVar17) ||
               (puVar2 = (ulonglong *)(*(int *)(param_1 + 0xf738) + uVar25 * 0x10),
               *puVar2 != uVar23)) goto LAB_100698dc;
            *(int *)((int)puVar2 + 0xc) = iVar13;
          }
          puVar14 = (undefined4 *)FUN_100684c0(param_1 + 0xf734,param_3);
          if (puVar14 != (undefined4 *)0x0) goto LAB_10069a38;
        }
        uVar21 = 0;
      }
      else {
LAB_10069a38:
        uVar21 = *puVar14;
      }
      *(undefined4 *)(param_1 + 0xfd08) = uVar21;
    }
    bVar10 = true;
    puVar26 = *(uint **)(param_1 + 0xfd08);
  }
  puVar1 = param_3 + 3;
  uVar17 = *puVar1;
  iVar13 = uVar17 * param_7;
  if ((bVar10) && (iVar13 + 4U < 0x3f00)) {
    iVar19 = *(int *)(param_1 + 0xf6b8);
    puVar14 = (undefined4 *)(iVar19 + 0x11c0);
    bVar10 = true;
    cVar7 = *(char *)(iVar19 + 0x12ec);
    if (cVar7 == '\0') {
LAB_10069c0c:
      if (cVar7 != '\0') goto LAB_10069c98;
    }
    else {
      if (iVar13 == -4) {
        iVar18 = 0x18;
      }
      else {
        iVar18 = (iVar13 + 7U & 0xfffffffc) + 0x1c;
      }
      puVar15 = (undefined4 *)FUN_10130778(puVar14,iVar18);
      if (puVar15 != (undefined4 *)0x0) {
        piVar24 = (int *)(iVar19 + 0x12e8);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar24),0x10);
          if (bVar9) {
            *piVar24 = *piVar24 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        DataMemoryBarrier(2,3);
        puVar15[1] = iVar18;
        iVar18 = 0xc;
        if (iVar13 == -4) {
          iVar18 = 8;
        }
        piVar24 = (int *)(iVar18 + (int)puVar15);
        *piVar24 = param_1;
        piVar24[1] = param_2;
        piVar24[2] = (int)puVar26;
        piVar24[3] = param_4;
        piVar24[4] = uVar17;
        piVar24[5] = param_7;
        puVar6 = (undefined4 *)((int)piVar24 + 0x1bU & 0xfffffffc);
        if (iVar13 != -4) {
          puVar15[2] = puVar6;
          FUN_10062e80(param_7,*puVar1,param_5,param_6,puVar6,*puVar1);
          puVar6 = (undefined4 *)((iVar13 + 7U & 0xfffffffc) + (int)puVar6);
        }
        *puVar6 = 0;
        *puVar15 = FUN_10069f30;
        puVar14[*(int *)(iVar19 + 0x12e4) * 5 + 0x1a] = puVar6;
        if (*(char *)(iVar19 + 0x12ed) != '\0') {
          *puVar14 = 0;
          (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar19 + 0x1220));
          bVar10 = false;
        }
        goto LAB_10069c0c;
      }
      *puVar14 = 0;
      (*(code *)PTR_FUN_1016c114)(100);
      FUN_101308d0(puVar14);
    }
    piVar24 = *(int **)(iVar19 + 0x12d0);
    iVar19 = 4;
    if (iVar13 == -4) {
      iVar19 = 0;
    }
    piVar5 = (int *)(iVar19 + (int)piVar24);
    *piVar5 = param_1;
    piVar5[1] = param_2;
    piVar5[2] = (int)puVar26;
    piVar5[3] = param_4;
    piVar5[4] = uVar17;
    piVar5[5] = param_7;
    if (iVar13 != -4) {
      *piVar24 = (int)(piVar5 + 6);
      FUN_10062e80(param_7,param_3[3],param_5,param_6,piVar5 + 6,param_3[3]);
    }
    FUN_10069f30(piVar24);
LAB_10069c98:
    if (!bVar10) {
      return;
    }
    *puVar14 = 0;
    return;
  }
  local_68 = 0;
  local_60 = 0;
  if (bVar10) {
    uVar23 = FUN_10120108(*(int *)(param_1 + 0xf6b8) + 0x14f0,iVar13,&local_68);
    iVar13 = (int)local_68;
    if ((uVar23 & 1) != 0) {
      FUN_10062e80(param_7,*puVar1,param_5,param_6,local_68 & 0xffffffff,*puVar1);
      param_6 = *puVar1;
      param_5 = iVar13;
    }
  }
  else {
    local_68._0_4_ = 0;
    iVar13 = (int)local_68;
  }
  iVar11 = local_60;
  iVar18 = local_68._4_4_;
  iVar19 = *(int *)(param_1 + 0xf6b8);
  puVar14 = (undefined4 *)(iVar19 + 0x11c0);
  bVar10 = true;
  cVar7 = *(char *)(iVar19 + 0x12ec);
  if (cVar7 == '\0') {
LAB_10069e60:
    if (cVar7 != '\0') goto LAB_10069ed4;
  }
  else {
    puVar15 = (undefined4 *)FUN_10130778(puVar14,0x28);
    if (puVar15 != (undefined4 *)0x0) {
      piVar24 = (int *)(iVar19 + 0x12e8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar24),0x10);
        if (bVar9) {
          *piVar24 = *piVar24 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      DataMemoryBarrier(2,3);
      puVar15[1] = 0x28;
      puVar15[2] = param_1;
      puVar15[3] = param_2;
      puVar15[4] = puVar26;
      puVar15[5] = param_4;
      puVar15[6] = param_5;
      puVar15[7] = param_6;
      puVar15[8] = param_7;
      puVar15[9] = iVar13;
      puVar15[10] = iVar18;
      puVar15[0xb] = iVar11;
      puVar6 = (undefined4 *)((int)puVar15 + 0x33U & 0xfffffffc);
      *puVar6 = 0;
      *puVar15 = FUN_10069f80;
      puVar14[*(int *)(iVar19 + 0x12e4) * 5 + 0x1a] = puVar6;
      if (*(char *)(iVar19 + 0x12ed) != '\0') {
        *puVar14 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar19 + 0x1220));
        bVar10 = false;
      }
      goto LAB_10069e60;
    }
    *puVar14 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar14);
  }
  piVar24 = *(int **)(iVar19 + 0x12d0);
  *piVar24 = param_1;
  piVar24[1] = param_2;
  piVar24[2] = (int)puVar26;
  piVar24[3] = param_4;
  piVar24[4] = param_5;
  piVar24[5] = param_6;
  piVar24[6] = param_7;
  piVar24[7] = iVar13;
  piVar24[8] = iVar18;
  piVar24[9] = iVar11;
  FUN_10069f80(piVar24);
LAB_10069ed4:
  if (bVar10) {
    *puVar14 = 0;
  }
  return;
}

