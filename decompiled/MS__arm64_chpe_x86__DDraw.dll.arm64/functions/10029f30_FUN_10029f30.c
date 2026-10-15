/*
 * FUN_10029f30 at 10029f30
 * undefined FUN_10029f30(void)
 * Address ranges: 10029f30-1002a8db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029f30(int param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int *piVar26;
  int iVar27;
  undefined4 *puVar28;
  uint uVar29;
  uint uVar30;
  int *extraout_w12;
  ulonglong uVar31;
  uint uVar32;
  int iVar33;
  undefined4 *puVar34;
  uint uVar35;
  uint uVar36;
  int *piVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  uint local_9c;
  uint *local_98;
  int *local_94;
  int local_90;
  int *local_8c;
  int local_88;
  ulonglong local_80;
  uint local_70;
  undefined4 uStack_6c;
  ulonglong uStack_68;
  int local_60;
  int local_5c;
  uint uStack_58;
  uint local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  local_8c = (int *)(param_1 + -0x80);
  iVar27 = *local_8c + *(int *)(*(int *)(param_1 + 0x24) + 8) * 0x16c0;
  local_90 = param_1;
  local_88 = iVar27;
  iVar20 = FUN_10029968(param_1 + -0xc0);
  local_d4 = param_2[5];
  local_d0 = param_2[6];
  local_cc = param_2[7];
  local_c8 = param_2[8];
  iVar21 = FUN_1008fd30(iVar27 + 0x1880);
  iVar33 = 0;
  uVar32 = 0;
  if (*(char *)(iVar21 + 300) == '\0') {
    iVar21 = 0;
  }
  else {
    local_94 = param_2 + 1;
    iVar21 = 4;
    if (*extraout_w12 != 0) {
      iVar21 = 8;
    }
    uVar12 = iVar21 * *local_94 * *param_2;
    iVar4 = iVar27 + 0x1bb0;
    iVar21 = 0;
    (*(code *)PTR_FUN_100ba0a0)(iVar4);
    puVar1 = (uint *)(iVar27 + 0x1be0);
    uVar35 = 0;
    if (*puVar1 != 0) {
      if (*puVar1 == 0) goto LAB_1002a080;
      do {
        iVar33 = *(int *)(iVar27 + 0x1bdc) + uVar35 * 0x38;
        if (((iVar33 != -8) && ((ulonglong)uVar12 <= *(ulonglong *)(iVar33 + 0x18))) &&
           (iVar22 = FUN_10083e18(iVar4,(int *)(iVar33 + 0x10),uVar12), iVar22 != -1)) {
          iVar33 = *(int *)(iVar33 + 0x10);
          iVar21 = iVar33 + *(int *)(iVar27 + 0x1bc8) * iVar22;
          uVar32 = uVar12;
          if (iVar21 == 0) goto LAB_1002a094;
          goto LAB_1002a580;
        }
LAB_1002a080:
        uVar35 = uVar35 + 1;
      } while (uVar35 < *puVar1);
      iVar33 = 0;
      uVar32 = 0;
    }
LAB_1002a094:
    local_98 = (uint *)(iVar27 + 0x1bc8);
    do {
      uVar35 = *(uint *)(iVar27 + 0x1bcc);
      if (uVar35 < uVar12 * 2) {
        iVar22 = 2;
        if (uVar12 <= uVar35 * 3) {
          iVar22 = 3;
        }
        uVar35 = iVar22 * uVar12;
      }
      uVar25 = *(uint *)(iVar27 + 0x1bc8);
      uVar35 = (uVar25 + uVar35) - 1 & -uVar25;
      if ((*(uint *)(iVar27 + 0x1bd0) == 0) ||
         (*(int *)(iVar27 + 0x1bd4) + uVar35 <= *(uint *)(iVar27 + 0x1bd0))) {
        uStack_68 = (ulonglong)uVar35;
        if (uVar25 == 0) {
                    /* WARNING: Does not return */
          uVar19 = SoftwareBreakpoint(0xf004,0x1002a158);
          (*(code *)uVar19)();
        }
        uVar15 = 0;
        if (uVar25 != 0) {
          uVar15 = uVar35 / uVar25;
        }
        iVar22 = -1 << (ulonglong)(uVar15 & 0x1f);
        if ((uVar15 & 0x1f) == 0) {
          iVar22 = 0;
        }
        uVar25 = uVar15 + 0x1f >> 3 & 0x1ffffffc;
        uVar15 = uVar15 + 0x1f >> 5;
        iVar11 = -1 << (ulonglong)(uVar15 & 0x1f);
        if ((uVar15 & 0x1f) == 0) {
          iVar11 = 0;
        }
        uVar36 = uVar15 + 0x1f >> 3 & 0x1ffffffc;
        iVar23 = FUN_100914b0(uVar25);
        local_60 = iVar23;
        iVar24 = FUN_100914b0(uVar36);
        local_50 = 0;
        local_5c = iVar24;
        uStack_58 = uVar25;
        local_54 = uVar36;
        if ((iVar23 != 0) && (iVar24 != 0)) {
          FUN_100917d0(iVar23,0,uVar25);
          FUN_100917d0(iVar24,0,uVar36);
          *(int *)(iVar23 + uVar15 * 4 + -4) = iVar22;
          *(int *)(iVar24 + (uVar15 + 0x1f >> 5) * 4 + -4) = iVar11;
          uVar25 = FUN_100914b0(uVar35);
          local_70 = uVar25;
          if (uVar25 != 0) {
            piVar26 = (int *)(iVar27 + 0x1bd8);
            puVar2 = (uint *)(iVar27 + 0x1be0);
            uVar15 = *puVar2;
            local_80 = (ulonglong)uVar25;
            uVar36 = 0;
            local_9c = uVar25;
            if (uVar15 == 0) {
LAB_1002a2e8:
              puVar3 = (uint *)(iVar27 + 0x1be4);
              uVar30 = *puVar3;
              if (uVar30 == uVar15) {
                uVar15 = 0x10;
                if (uVar30 != 0) {
                  uVar15 = uVar30 << 1;
                }
                iVar22 = FUN_100914b0(uVar15 * 0x38);
                if (iVar22 != 0) {
                  if (*puVar2 != 0) {
                    uVar30 = 0;
                    do {
                      uVar29 = uVar30 + 1;
                      puVar7 = (undefined8 *)(*(int *)(iVar27 + 0x1bdc) + uVar30 * 0x38);
                      puVar6 = (undefined8 *)(iVar22 + uVar30 * 0x38);
                      uVar39 = *puVar7;
                      uVar38 = puVar7[3];
                      uVar19 = puVar7[2];
                      puVar6[1] = puVar7[1];
                      *puVar6 = uVar39;
                      puVar6[3] = uVar38;
                      puVar6[2] = uVar19;
                      uVar19 = puVar7[4];
                      puVar6[5] = puVar7[5];
                      puVar6[4] = uVar19;
                      puVar6[6] = puVar7[6];
                      uVar30 = uVar29;
                    } while (uVar29 < *(uint *)(iVar27 + 0x1be0));
                  }
                  FUN_100914d0(*piVar26);
                  *piVar26 = iVar22;
                  *(int *)(iVar27 + 0x1bdc) = iVar22;
                  *puVar3 = uVar15;
                }
              }
              piVar37 = (int *)(iVar27 + 0x1bdc);
              uVar15 = *puVar2;
              if (*puVar3 != uVar15) {
                for (; uVar36 < uVar15; uVar15 = uVar15 - 1) {
                  puVar7 = (undefined8 *)(*piVar37 + uVar15 * 0x38);
                  puVar7[1] = puVar7[-6];
                  *puVar7 = puVar7[-7];
                  puVar7[3] = puVar7[-4];
                  puVar7[2] = puVar7[-5];
                  puVar7[5] = puVar7[-2];
                  puVar7[4] = puVar7[-3];
                  puVar7[6] = puVar7[-1];
                }
                *puVar2 = *puVar2 + 1;
                *(uint *)(*piVar37 + uVar36 * 0x38 + 8) = uVar25;
                iVar22 = *piVar37 + uVar36 * 0x38;
                *(ulonglong *)(iVar22 + 0x18) = uStack_68;
                *(ulonglong *)(iVar22 + 0x10) = CONCAT44(uStack_6c,local_70);
                *(ulonglong *)(iVar22 + 0x28) = CONCAT44(local_54,uStack_58);
                *(ulonglong *)(iVar22 + 0x20) = CONCAT44(local_5c,local_60);
                *(ulonglong *)(iVar22 + 0x30) = CONCAT44(uStack_4c,local_50);
                *(ulonglong *)(*piVar37 + uVar36 * 0x38) = local_80;
              }
            }
            else {
              uVar30 = 0;
              uVar29 = uVar15;
              do {
                uVar36 = uVar29 + uVar30 >> 1;
                uVar31 = *(ulonglong *)(*(int *)(iVar27 + 0x1bdc) + uVar36 * 0x38);
                uVar18 = uVar36;
                if (uVar31 <= local_80) {
                  if (local_80 <= uVar31) break;
                  uVar30 = uVar36 + 1;
                  uVar36 = uVar30;
                  uVar18 = uVar29;
                }
                uVar29 = uVar18;
              } while (uVar29 != uVar30);
              if ((uVar36 == uVar15) ||
                 (puVar5 = (ulonglong *)(*(int *)(iVar27 + 0x1bdc) + uVar36 * 0x38),
                 *puVar5 != local_80)) goto LAB_1002a2e8;
              puVar5[3] = uStack_68;
              puVar5[2] = CONCAT44(uStack_6c,uVar25);
              puVar5[5] = CONCAT44(local_54,uStack_58);
              puVar5[4] = CONCAT44(local_5c,local_60);
              puVar5[6] = CONCAT44(uStack_4c,local_50);
            }
            piVar26 = (int *)FUN_10083ea0(piVar26,&local_9c);
            if (piVar26 != (int *)0x0) {
              *(int *)(iVar27 + 0x1bd4) = *(int *)(iVar27 + 0x1bd4) + uVar35;
              iVar27 = FUN_10083e18(iVar4,piVar26,uVar12);
              if (iVar27 != -1) {
                iVar33 = *piVar26;
                iVar21 = iVar33 + iVar27 * *local_98;
                uVar32 = uVar12;
              }
              break;
            }
            FUN_100914d0(uVar25);
          }
        }
        FUN_100914d0(iVar23);
        FUN_100914d0(iVar24);
      }
      uVar35 = *puVar1;
      bVar16 = false;
      uVar25 = uVar35;
      if (uVar35 == 0) break;
      do {
        uVar15 = uVar25 - 1;
        if (uVar15 < uVar35) {
          puVar34 = (undefined4 *)(*(int *)(iVar27 + 0x1bdc) + uVar15 * 0x38 + 0x10);
        }
        else {
          puVar34 = (undefined4 *)&DAT_00000008;
        }
        if (puVar34[8] == 0) {
          FUN_100914d0(*puVar34);
          FUN_100914d0(puVar34[4]);
          FUN_100914d0(puVar34[5]);
          uVar35 = *puVar1;
          if (uVar25 < uVar35) {
            do {
              uVar36 = uVar25 + 1;
              puVar7 = (undefined8 *)(*(int *)(iVar27 + 0x1bdc) + uVar25 * 0x38);
              puVar7[-6] = puVar7[1];
              puVar7[-7] = *puVar7;
              puVar7[-4] = puVar7[3];
              puVar7[-5] = puVar7[2];
              puVar7[-2] = puVar7[5];
              puVar7[-3] = puVar7[4];
              puVar7[-1] = puVar7[6];
              uVar35 = *puVar1;
              uVar25 = uVar36;
            } while (uVar36 < uVar35);
          }
          uVar35 = uVar35 - 1;
          *puVar1 = uVar35;
          bVar16 = true;
        }
        uVar25 = uVar15;
      } while (uVar15 != 0);
    } while (bVar16);
LAB_1002a580:
    (*(code *)PTR_FUN_100ba0f0)(iVar4);
    piVar26 = local_94;
    if (iVar21 != 0) {
      iVar27 = FUN_10029660(*local_94,*param_2 << 2,local_d4,local_d0,iVar21,*param_2 << 2);
      local_d0 = *param_2 << 2;
      local_d4 = iVar21;
      if (local_cc != 0) {
        FUN_10029660(*piVar26,local_d0,local_cc,local_c8,iVar27,local_d0);
        local_c8 = *param_2 << 2;
        local_cc = iVar27;
      }
    }
  }
  iVar17 = local_88;
  iVar27 = *param_2;
  iVar4 = param_2[4];
  iVar22 = param_2[3];
  iVar11 = param_2[2];
  bVar16 = true;
  iVar23 = param_2[1];
  iVar24 = *(int *)(local_90 + 0x20);
  iVar10 = *local_8c;
  puVar34 = (undefined4 *)(local_88 + 0x1880);
  cVar9 = *(char *)(local_88 + 0x19ac);
  if (cVar9 == '\0') {
LAB_1002a7e8:
    if (cVar9 != '\0') goto LAB_1002a898;
  }
  else {
    puVar28 = (undefined4 *)FUN_1008fbd8(puVar34,0x3c);
    if (puVar28 != (undefined4 *)0x0) {
      piVar26 = (int *)(iVar17 + 0x19a8);
      do {
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(ZEXT48(piVar26),0x10);
        if (bVar14) {
          *piVar26 = *piVar26 + 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      DataMemoryBarrier(2,3);
      puVar28[1] = 0x3c;
      puVar28[2] = iVar10;
      puVar28[3] = iVar20;
      puVar28[4] = iVar24;
      puVar28[5] = iVar27;
      puVar28[6] = iVar23;
      puVar28[7] = iVar11;
      puVar28[8] = iVar22;
      puVar28[9] = iVar4;
      puVar28[10] = local_d4;
      puVar28[0xb] = local_d0;
      puVar28[0xc] = local_cc;
      puVar28[0xd] = local_c8;
      puVar28[0xe] = iVar21;
      puVar28[0xf] = iVar33;
      puVar28[0x10] = uVar32;
      puVar8 = (undefined4 *)((int)puVar28 + 0x47U & 0xfffffffc);
      *puVar8 = 0;
      *puVar28 = FUN_1002a8e0;
      puVar34[*(int *)(iVar17 + 0x19a4) * 5 + 0x1a] = puVar8;
      if (*(char *)(iVar17 + 0x19ad) != '\0') {
        *puVar34 = 0;
        (*(code *)PTR_FUN_100ba12c)(*(undefined4 *)(iVar17 + 0x18e0));
        bVar16 = false;
      }
      goto LAB_1002a7e8;
    }
    *puVar34 = 0;
    (*(code *)PTR_FUN_100ba144)(100);
    FUN_1008fd30(puVar34);
  }
  piVar26 = *(int **)(iVar17 + 0x1990);
  *piVar26 = iVar10;
  piVar26[1] = iVar20;
  piVar26[2] = iVar24;
  piVar26[3] = iVar27;
  piVar26[4] = iVar23;
  piVar26[5] = iVar11;
  piVar26[6] = iVar22;
  piVar26[7] = iVar4;
  piVar26[8] = local_d4;
  piVar26[9] = local_d0;
  piVar26[10] = local_cc;
  piVar26[0xb] = local_c8;
  piVar26[0xc] = iVar21;
  piVar26[0xd] = iVar33;
  piVar26[0xe] = uVar32;
  FUN_1002a8e0(piVar26);
LAB_1002a898:
  if (bVar16) {
    *puVar34 = 0;
  }
  return;
}

