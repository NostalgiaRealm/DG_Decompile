/*
 * FUN_1006be70 at 1006be70
 * undefined FUN_1006be70(void)
 * Address ranges: 1006be70-1006c2d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006be70(int param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
                 undefined1 param_7)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  char cVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  uint uVar22;
  int *piVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  
  FUN_100690d0(param_1,param_3,0);
  iVar14 = FUN_101308d0(*(int *)(param_1 + 0xf6b8) + 0x11c0);
  if (*(char *)(iVar14 + 300) != '\0') {
    if (*param_3 != *(uint *)(param_1 + 0xfd04)) {
      *(uint *)(param_1 + 0xfd04) = *param_3;
      puVar15 = (undefined4 *)FUN_100684c0(param_1 + 0xf734,param_3);
      if (puVar15 == (undefined4 *)0x0) {
        iVar14 = FUN_101321c0(0x254);
        if (iVar14 != 0) {
          FUN_101325a0(iVar14,param_3,0x254);
          puVar1 = (uint *)(param_1 + 0xf73c);
          uVar24 = (ulonglong)*param_3;
          uVar8 = *puVar1;
          uVar22 = 0;
          if (uVar8 == 0) {
LAB_1006bfb0:
            puVar2 = (uint *)(param_1 + 0xf740);
            uVar19 = *puVar2;
            if (uVar19 == uVar8) {
              uVar8 = 0x10;
              if (uVar19 != 0) {
                uVar8 = uVar19 << 1;
              }
              iVar16 = FUN_101322b0(uVar8 * 0x10 + 0x7f);
              if (iVar16 != 0) {
                uVar18 = iVar16 + 0x7fU & 0xffffff80;
                uVar19 = 0;
                if (*puVar1 != 0) {
                  do {
                    puVar4 = (undefined8 *)(*(int *)(param_1 + 0xf738) + uVar19 * 0x10);
                    puVar5 = (undefined8 *)(uVar18 + uVar19 * 0x10);
                    uVar19 = uVar19 + 1;
                    uVar25 = *puVar4;
                    puVar5[1] = puVar4[1];
                    *puVar5 = uVar25;
                  } while (uVar19 < *(uint *)(param_1 + 0xf73c));
                }
                FUN_101322d0(*(undefined4 *)(param_1 + 0xf734));
                *(uint *)(param_1 + 0xf738) = uVar18;
                *(int *)(param_1 + 0xf734) = iVar16;
                *puVar2 = uVar8;
              }
            }
            piVar23 = (int *)(param_1 + 0xf738);
            uVar8 = *puVar1;
            if (*puVar2 != uVar8) {
              for (; uVar22 < uVar8; uVar8 = uVar8 - 1) {
                puVar4 = (undefined8 *)(*piVar23 + uVar8 * 0x10);
                puVar4[1] = puVar4[-1];
                *puVar4 = puVar4[-2];
              }
              *puVar1 = *puVar1 + 1;
              *(uint *)(*piVar23 + uVar22 * 0x10 + 8) = *param_3;
              *(int *)(*piVar23 + uVar22 * 0x10 + 0xc) = iVar14;
              *(ulonglong *)(*piVar23 + uVar22 * 0x10) = uVar24;
            }
          }
          else {
            uVar19 = 0;
            uVar18 = uVar8;
            do {
              uVar22 = uVar18 + uVar19 >> 1;
              uVar21 = *(ulonglong *)(*(int *)(param_1 + 0xf738) + uVar22 * 0x10);
              uVar12 = uVar22;
              if (uVar21 <= uVar24) {
                if (uVar24 <= uVar21) break;
                uVar19 = uVar22 + 1;
                uVar22 = uVar19;
                uVar12 = uVar18;
              }
              uVar18 = uVar12;
            } while (uVar18 != uVar19);
            if ((uVar22 == uVar8) ||
               (puVar3 = (ulonglong *)(*(int *)(param_1 + 0xf738) + uVar22 * 0x10),
               *puVar3 != uVar24)) goto LAB_1006bfb0;
            *(int *)((int)puVar3 + 0xc) = iVar14;
          }
          puVar15 = (undefined4 *)FUN_100684c0(param_1 + 0xf734,param_3);
          if (puVar15 != (undefined4 *)0x0) goto LAB_1006c104;
        }
        uVar20 = 0;
      }
      else {
LAB_1006c104:
        uVar20 = *puVar15;
      }
      *(undefined4 *)(param_1 + 0xfd08) = uVar20;
    }
    param_3 = *(uint **)(param_1 + 0xfd08);
  }
  iVar14 = *(int *)(param_1 + 0xf6b8);
  bVar11 = true;
  bVar13 = (*(uint *)(param_1 + 0xfd0c) & 0x7fffffff) != 0;
  puVar15 = (undefined4 *)(iVar14 + 0x11c0);
  cVar7 = *(char *)(iVar14 + 0x12ec);
  if (cVar7 == '\0') {
LAB_1006c230:
    if (cVar7 != '\0') goto LAB_1006c290;
  }
  else {
    puVar17 = (undefined4 *)FUN_10130778(puVar15,0x20);
    if (puVar17 != (undefined4 *)0x0) {
      piVar23 = (int *)(iVar14 + 0x12e8);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar23),0x10);
        if (bVar10) {
          *piVar23 = *piVar23 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      DataMemoryBarrier(2,3);
      puVar17[1] = 0x20;
      puVar17[2] = param_1;
      puVar17[3] = param_2;
      puVar17[4] = param_3;
      puVar17[5] = param_4;
      puVar17[6] = param_5;
      puVar17[7] = param_6;
      *(undefined1 *)(puVar17 + 8) = param_7;
      *(bool *)(puVar17 + 9) = bVar13;
      puVar6 = (undefined4 *)((int)puVar17 + 0x2bU & 0xfffffffc);
      *puVar6 = 0;
      *puVar17 = FUN_1006c2e0;
      puVar15[*(int *)(iVar14 + 0x12e4) * 5 + 0x1a] = puVar6;
      if (*(char *)(iVar14 + 0x12ed) != '\0') {
        *puVar15 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar14 + 0x1220));
        bVar11 = false;
      }
      goto LAB_1006c230;
    }
    *puVar15 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar15);
  }
  piVar23 = *(int **)(iVar14 + 0x12d0);
  *piVar23 = param_1;
  piVar23[1] = param_2;
  piVar23[2] = (int)param_3;
  piVar23[3] = param_4;
  piVar23[4] = param_5;
  piVar23[5] = param_6;
  *(undefined1 *)(piVar23 + 6) = param_7;
  *(bool *)(piVar23 + 7) = bVar13;
  FUN_1006c2e0(piVar23);
LAB_1006c290:
  if (bVar11) {
    *puVar15 = 0;
  }
  return;
}

