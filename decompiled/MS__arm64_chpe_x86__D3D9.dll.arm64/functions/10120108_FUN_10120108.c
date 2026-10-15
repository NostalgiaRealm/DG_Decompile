/*
 * FUN_10120108 at 10120108
 * undefined FUN_10120108(void)
 * Address ranges: 10120108-10120733
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10120108(int param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined4 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint local_7c;
  uint *local_78;
  uint local_70;
  undefined4 uStack_6c;
  ulonglong uStack_68;
  int local_60;
  int local_5c;
  uint uStack_58;
  uint local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  (*(code *)PTR_FUN_1016c074)(param_1);
  puVar1 = (uint *)(param_1 + 0x30);
  uVar21 = 0;
  if (*puVar1 != 0) {
    if (*puVar1 == 0) goto LAB_101201a8;
    do {
      iVar12 = *(int *)(param_1 + 0x2c) + uVar21 * 0x38;
      if (((iVar12 != -8) &&
          (piVar16 = (int *)(iVar12 + 0x10), (ulonglong)param_2 <= *(ulonglong *)(iVar12 + 0x18)))
         && (iVar12 = FUN_10120080(param_1,piVar16,(ulonglong)param_2), iVar12 != -1)) {
        *param_3 = *piVar16 + *(int *)(param_1 + 0x18) * iVar12;
        param_3[1] = *piVar16;
        param_3[2] = param_2;
        break;
      }
LAB_101201a8:
      uVar21 = uVar21 + 1;
    } while (uVar21 < *puVar1);
  }
  if (*param_3 == 0) {
    local_78 = (uint *)(param_1 + 0x18);
    do {
      uVar21 = *(uint *)(param_1 + 0x1c);
      if (uVar21 < param_2 << 1) {
        iVar12 = 2;
        if (param_2 <= uVar21 * 3) {
          iVar12 = 3;
        }
        uVar21 = iVar12 * param_2;
      }
      uVar15 = *(uint *)(param_1 + 0x18);
      uVar21 = (uVar15 + uVar21) - 1 & -uVar15;
      uVar22 = (ulonglong)uVar21;
      if ((*(uint *)(param_1 + 0x20) == 0) ||
         (*(int *)(param_1 + 0x24) + uVar21 <= *(uint *)(param_1 + 0x20))) {
        uStack_68 = uVar22;
        if (uVar15 == 0) {
                    /* WARNING: Does not return */
          uVar11 = SoftwareBreakpoint(0xf004,0x10120278);
          (*(code *)uVar11)();
        }
        uVar8 = 0;
        if (uVar15 != 0) {
          uVar8 = uVar21 / uVar15;
        }
        iVar12 = -1 << (ulonglong)(uVar8 & 0x1f);
        if ((uVar8 & 0x1f) == 0) {
          iVar12 = 0;
        }
        uVar15 = uVar8 + 0x1f >> 3 & 0x1ffffffc;
        uVar8 = uVar8 + 0x1f >> 5;
        iVar7 = -1 << (ulonglong)(uVar8 & 0x1f);
        if ((uVar8 & 0x1f) == 0) {
          iVar7 = 0;
        }
        uVar23 = uVar8 + 0x1f >> 3 & 0x1ffffffc;
        iVar13 = FUN_101322b0(uVar15);
        local_60 = iVar13;
        iVar14 = FUN_101322b0(uVar23);
        local_50 = 0;
        local_5c = iVar14;
        uStack_58 = uVar15;
        local_54 = uVar23;
        if ((iVar13 != 0) && (iVar14 != 0)) {
          FUN_101325d0(iVar13,0,uVar15);
          FUN_101325d0(iVar14,0,uVar23);
          *(int *)(iVar13 + uVar8 * 4 + -4) = iVar12;
          *(int *)(iVar14 + (uVar8 + 0x1f >> 5) * 4 + -4) = iVar7;
          uVar15 = FUN_101322b0(uVar22);
          local_70 = uVar15;
          if (uVar15 != 0) {
            piVar16 = (int *)(param_1 + 0x28);
            puVar2 = (uint *)(param_1 + 0x30);
            uVar8 = *puVar2;
            uVar22 = (ulonglong)uVar15;
            uVar23 = 0;
            local_7c = uVar15;
            if (uVar8 == 0) {
LAB_101203f8:
              puVar3 = (uint *)(param_1 + 0x34);
              uVar18 = *puVar3;
              if (uVar18 == uVar8) {
                uVar8 = 0x10;
                if (uVar18 != 0) {
                  uVar8 = uVar18 << 1;
                }
                iVar12 = FUN_101322b0(uVar8 * 0x38);
                if (iVar12 != 0) {
                  if (*puVar2 != 0) {
                    uVar18 = 0;
                    do {
                      uVar17 = uVar18 + 1;
                      puVar6 = (undefined8 *)(*(int *)(param_1 + 0x2c) + uVar18 * 0x38);
                      puVar5 = (undefined8 *)(iVar12 + uVar18 * 0x38);
                      uVar26 = *puVar6;
                      uVar25 = puVar6[3];
                      uVar11 = puVar6[2];
                      puVar5[1] = puVar6[1];
                      *puVar5 = uVar26;
                      puVar5[3] = uVar25;
                      puVar5[2] = uVar11;
                      uVar11 = puVar6[4];
                      puVar5[5] = puVar6[5];
                      puVar5[4] = uVar11;
                      puVar5[6] = puVar6[6];
                      uVar18 = uVar17;
                    } while (uVar17 < *(uint *)(param_1 + 0x30));
                  }
                  FUN_101322d0(*piVar16);
                  *(int *)(param_1 + 0x2c) = iVar12;
                  *piVar16 = iVar12;
                  *puVar3 = uVar8;
                }
              }
              piVar19 = (int *)(param_1 + 0x2c);
              uVar8 = *puVar2;
              if (*puVar3 != uVar8) {
                for (; uVar23 < uVar8; uVar8 = uVar8 - 1) {
                  puVar6 = (undefined8 *)(*piVar19 + uVar8 * 0x38);
                  puVar6[1] = puVar6[-6];
                  *puVar6 = puVar6[-7];
                  puVar6[3] = puVar6[-4];
                  puVar6[2] = puVar6[-5];
                  puVar6[5] = puVar6[-2];
                  puVar6[4] = puVar6[-3];
                  puVar6[6] = puVar6[-1];
                }
                *puVar2 = *puVar2 + 1;
                *(uint *)(*piVar19 + uVar23 * 0x38 + 8) = uVar15;
                iVar12 = *piVar19 + uVar23 * 0x38;
                *(ulonglong *)(iVar12 + 0x18) = uStack_68;
                *(ulonglong *)(iVar12 + 0x10) = CONCAT44(uStack_6c,local_70);
                *(ulonglong *)(iVar12 + 0x28) = CONCAT44(local_54,uStack_58);
                *(ulonglong *)(iVar12 + 0x20) = CONCAT44(local_5c,local_60);
                *(ulonglong *)(iVar12 + 0x30) = CONCAT44(uStack_4c,local_50);
                *(ulonglong *)(*piVar19 + uVar23 * 0x38) = uVar22;
              }
            }
            else {
              uVar18 = 0;
              uVar17 = uVar8;
              do {
                uVar23 = uVar17 + uVar18 >> 1;
                uVar20 = *(ulonglong *)(*(int *)(param_1 + 0x2c) + uVar23 * 0x38);
                uVar10 = uVar23;
                if (uVar20 <= uVar22) {
                  if (uVar22 <= uVar20) break;
                  uVar18 = uVar23 + 1;
                  uVar23 = uVar18;
                  uVar10 = uVar17;
                }
                uVar17 = uVar10;
              } while (uVar17 != uVar18);
              if ((uVar23 == uVar8) ||
                 (puVar4 = (ulonglong *)(*(int *)(param_1 + 0x2c) + uVar23 * 0x38),
                 *puVar4 != uVar22)) goto LAB_101203f8;
              puVar4[3] = uStack_68;
              puVar4[2] = CONCAT44(uStack_6c,uVar15);
              puVar4[5] = CONCAT44(local_54,uStack_58);
              puVar4[4] = CONCAT44(local_5c,local_60);
              puVar4[6] = CONCAT44(uStack_4c,local_50);
            }
            piVar16 = (int *)FUN_10120948(piVar16,&local_7c);
            if (piVar16 != (int *)0x0) {
              *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + uVar21;
              iVar12 = FUN_10120080(param_1,piVar16,param_2);
              if (iVar12 != -1) {
                *param_3 = *piVar16 + *local_78 * iVar12;
                param_3[1] = *piVar16;
                param_3[2] = param_2;
              }
              break;
            }
            FUN_101322d0(uVar15);
          }
        }
        FUN_101322d0(iVar13);
        FUN_101322d0(iVar14);
      }
      uVar21 = *puVar1;
      bVar9 = false;
      uVar15 = uVar21;
      if (uVar21 == 0) break;
      do {
        uVar8 = uVar15 - 1;
        if (uVar8 < uVar21) {
          puVar24 = (undefined4 *)(*(int *)(param_1 + 0x2c) + uVar8 * 0x38 + 0x10);
        }
        else {
          puVar24 = (undefined4 *)&DAT_00000008;
        }
        if (puVar24[8] == 0) {
          FUN_101322d0(*puVar24);
          FUN_101322d0(puVar24[4]);
          FUN_101322d0(puVar24[5]);
          uVar21 = *puVar1;
          if (uVar15 < uVar21) {
            do {
              uVar23 = uVar15 + 1;
              puVar6 = (undefined8 *)(*(int *)(param_1 + 0x2c) + uVar15 * 0x38);
              puVar6[-6] = puVar6[1];
              puVar6[-7] = *puVar6;
              puVar6[-4] = puVar6[3];
              puVar6[-5] = puVar6[2];
              puVar6[-2] = puVar6[5];
              puVar6[-3] = puVar6[4];
              puVar6[-1] = puVar6[6];
              uVar21 = *puVar1;
              uVar15 = uVar23;
            } while (uVar23 < uVar21);
          }
          uVar21 = uVar21 - 1;
          *puVar1 = uVar21;
          bVar9 = true;
        }
        uVar15 = uVar8;
      } while (uVar8 != 0);
    } while (bVar9);
  }
  iVar12 = *param_3;
  (*(code *)PTR_FUN_1016c0c0)(param_1);
  return iVar12 != 0;
}

