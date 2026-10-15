/*
 * FUN_1011d468 at 1011d468
 * undefined FUN_1011d468(void)
 * Address ranges: 1011d468-1011dc53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1011d468(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  code *pcVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 in_x7;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  int *piVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined4 local_f0;
  undefined4 uStack_ec;
  ulonglong uStack_e8;
  int local_e0;
  int local_dc;
  uint uStack_d8;
  uint local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  uint *local_c0;
  uint *local_bc;
  uint *local_b8;
  uint *local_b4;
  uint local_b0;
  undefined8 *local_ac;
  undefined4 *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  uint uStack_98;
  undefined8 local_94;
  undefined8 local_88;
  ulonglong local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  ulonglong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  local_a8 = param_1 + 3;
  param_3[1] = 0;
  *param_3 = 0;
  uVar21 = (ulonglong)param_2;
  param_3[2] = 0;
  (*(code *)PTR_FUN_1016c074)(local_a8);
  puVar1 = param_1 + 0xc;
  if (*puVar1 == 0) {
    fVar25 = 0.0;
  }
  else {
    fVar25 = (float)((double)(uint)param_1[0xe] / (double)*puVar1);
  }
  uVar14 = 3;
  if (0.9 <= fVar25) {
    uVar14 = 0xffffffff;
  }
  FUN_1011d018(param_1,uVar14,uVar21,param_3);
  piVar2 = (int *)((int)param_3 + 4);
  if (*piVar2 == 0) {
    puVar3 = param_1 + 0x11;
    uVar20 = 0;
    if (*puVar3 != 0) {
      if (*puVar3 == 0) goto LAB_1011d5a4;
      do {
        iVar13 = param_1[0x10] + uVar20 * 0x38;
        if ((iVar13 != -8) && (iVar15 = iVar13 + 0x10, uVar21 <= *(ulonglong *)(iVar13 + 0x18))) {
          iVar13 = FUN_1011cdb8(param_1,iVar15,uVar21);
          if (iVar13 == -1) {
            FUN_1011d018(param_1,0xffffffff,0,0);
            iVar13 = FUN_1011cdb8(param_1,iVar15,uVar21);
            if (iVar13 == -1) goto LAB_1011d5a4;
          }
          FUN_1011d3d0(param_1,param_3,iVar15,iVar13);
          break;
        }
LAB_1011d5a4:
        uVar20 = uVar20 + 1;
      } while (uVar20 < *puVar3);
    }
    if (*piVar2 == 0) {
      FUN_1011d018(param_1,0xffffffff,0,0);
      pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      local_c0 = param_1 + 0xb;
      local_b8 = param_1 + 10;
      local_bc = puVar1;
      local_b4 = puVar1;
      local_ac = param_3;
      do {
        uVar20 = *local_c0;
        if (uVar20 < param_2 << 1) {
          iVar13 = 2;
          if (param_2 <= uVar20 * 3) {
            iVar13 = 3;
          }
          uVar17 = *local_bc;
          uVar20 = iVar13 * param_2;
          if (((uVar17 != 0) && (uVar17 < param_1[0xd] + uVar20)) &&
             (param_2 <= uVar17 - param_1[0xd])) {
            uVar20 = param_2;
          }
        }
        uVar17 = *local_b8;
        uVar20 = (uVar20 + uVar17) - 1 & -uVar17;
        uVar21 = (ulonglong)uVar20;
        if ((*local_b4 == 0) || (param_1[0xd] + uVar20 <= *local_b4)) {
          uStack_e8 = uVar21;
          if (uVar17 == 0) {
                    /* WARNING: Does not return */
            uVar12 = SoftwareBreakpoint(0xf004,0x1011d6b8);
            (*(code *)uVar12)();
          }
          uVar22 = 0;
          if (uVar17 != 0) {
            uVar22 = uVar20 / uVar17;
          }
          iVar13 = -1 << (ulonglong)(uVar22 & 0x1f);
          if ((uVar22 & 0x1f) == 0) {
            iVar13 = 0;
          }
          uVar17 = uVar22 + 0x1f >> 3 & 0x1ffffffc;
          uVar22 = uVar22 + 0x1f >> 5;
          iVar15 = -1 << (ulonglong)(uVar22 & 0x1f);
          if ((uVar22 & 0x1f) == 0) {
            iVar15 = 0;
          }
          uVar18 = uVar22 + 0x1f >> 3 & 0x1ffffffc;
          local_e0 = FUN_101322b0(uVar17);
          local_dc = FUN_101322b0(uVar18);
          local_d0 = 0;
          uStack_d8 = uVar17;
          local_d4 = uVar18;
          if ((local_e0 != 0) && (local_dc != 0)) {
            FUN_101325d0(local_e0,0,uVar17);
            FUN_101325d0(local_dc,0,uVar18);
            *(int *)(local_e0 + uVar22 * 4 + -4) = iVar13;
            *(int *)(local_dc + (uVar22 + 0x1f >> 5) * 4 + -4) = iVar15;
            iVar13 = param_1[2];
            if (iVar13 == 0) {
              local_a0 = 5;
              if (*(char *)(param_1 + 0x17) == '\0') {
                local_a0 = 2;
              }
            }
            else {
              local_a0 = 4;
            }
            local_9c = 0;
            if (iVar13 != 0) {
              local_9c = 3;
            }
            local_94 = 0;
            local_48 = 0;
            uStack_98 = (uint)(iVar13 != 0);
            local_78[0] = 1;
            local_70 = 0x10000;
            local_60 = 0x1000100000001;
            uStack_58 = 0x100000000;
            local_50 = 0x100000000;
            uVar14 = 0x400;
            if (iVar13 != 1) {
              uVar14 = 0xac3;
            }
            uStack_68 = uVar21;
            uVar21 = FUN_10112948(*param_1,param_1[1],&local_a0,0,local_78,uVar14,0,in_x7,&local_f0)
            ;
            if ((uVar21 & 1) != 0) {
              local_88 = 0;
              uVar14 = (*pcVar10)();
              iVar13 = (*extraout_w11)(uVar14,0,&local_88,&uStack_ec);
              if (-1 < iVar13) {
                uVar14 = (*pcVar10)();
                uVar21 = (*extraout_w11_00)(uVar14);
                piVar4 = param_1 + 0xf;
                puVar1 = param_1 + 0x11;
                uVar17 = *puVar1;
                uVar22 = 0;
                local_80 = uVar21;
                if (uVar17 == 0) {
LAB_1011d938:
                  puVar5 = param_1 + 0x12;
                  uVar18 = *puVar5;
                  if (uVar18 == uVar17) {
                    local_b0 = 0x10;
                    if (uVar18 != 0) {
                      local_b0 = uVar18 << 1;
                    }
                    iVar13 = FUN_101322b0(local_b0 * 0x38);
                    if (iVar13 != 0) {
                      if (*puVar1 != 0) {
                        uVar17 = 0;
                        do {
                          uVar18 = uVar17 + 1;
                          puVar8 = (undefined8 *)(param_1[0x10] + uVar17 * 0x38);
                          puVar7 = (undefined8 *)(iVar13 + uVar17 * 0x38);
                          uVar26 = *puVar8;
                          uVar24 = puVar8[3];
                          uVar12 = puVar8[2];
                          puVar7[1] = puVar8[1];
                          *puVar7 = uVar26;
                          puVar7[3] = uVar24;
                          puVar7[2] = uVar12;
                          uVar12 = puVar8[4];
                          puVar7[5] = puVar8[5];
                          puVar7[4] = uVar12;
                          puVar7[6] = puVar8[6];
                          uVar17 = uVar18;
                        } while (uVar18 < (uint)param_1[0x11]);
                      }
                      FUN_101322d0(*piVar4);
                      *piVar4 = iVar13;
                      param_1[0x10] = iVar13;
                      *puVar5 = local_b0;
                    }
                  }
                  piVar23 = param_1 + 0x10;
                  uVar17 = *puVar1;
                  if (*puVar5 != uVar17) {
                    for (; uVar22 < uVar17; uVar17 = uVar17 - 1) {
                      puVar8 = (undefined8 *)(*piVar23 + uVar17 * 0x38);
                      puVar8[1] = puVar8[-6];
                      *puVar8 = puVar8[-7];
                      puVar8[3] = puVar8[-4];
                      puVar8[2] = puVar8[-5];
                      puVar8[5] = puVar8[-2];
                      puVar8[4] = puVar8[-3];
                      puVar8[6] = puVar8[-1];
                    }
                    *puVar1 = *puVar1 + 1;
                    *(ulonglong *)(*piVar23 + uVar22 * 0x38 + 8) = uVar21;
                    iVar13 = *piVar23 + uVar22 * 0x38;
                    *(ulonglong *)(iVar13 + 0x18) = uStack_e8;
                    *(ulonglong *)(iVar13 + 0x10) = CONCAT44(uStack_ec,local_f0);
                    *(ulonglong *)(iVar13 + 0x28) = CONCAT44(local_d4,uStack_d8);
                    *(ulonglong *)(iVar13 + 0x20) = CONCAT44(local_dc,local_e0);
                    *(ulonglong *)(iVar13 + 0x30) = CONCAT44(uStack_cc,local_d0);
                    *(ulonglong *)(*piVar23 + uVar22 * 0x38) = uVar21;
                  }
                }
                else {
                  uVar18 = 0;
                  uVar16 = uVar17;
                  do {
                    uVar22 = uVar16 + uVar18 >> 1;
                    uVar19 = *(ulonglong *)(param_1[0x10] + uVar22 * 0x38);
                    uVar11 = uVar22;
                    if (uVar19 <= uVar21) {
                      if (uVar21 <= uVar19) break;
                      uVar18 = uVar22 + 1;
                      uVar22 = uVar18;
                      uVar11 = uVar16;
                    }
                    uVar16 = uVar11;
                  } while (uVar16 != uVar18);
                  if ((uVar22 == uVar17) ||
                     (puVar6 = (ulonglong *)(param_1[0x10] + uVar22 * 0x38), *puVar6 != uVar21))
                  goto LAB_1011d938;
                  puVar6[3] = uStack_e8;
                  puVar6[2] = CONCAT44(uStack_ec,local_f0);
                  puVar6[5] = CONCAT44(local_d4,uStack_d8);
                  puVar6[4] = CONCAT44(local_dc,local_e0);
                  puVar6[6] = CONCAT44(uStack_cc,local_d0);
                }
                iVar13 = FUN_1011e128(piVar4,&local_80);
                puVar8 = local_ac;
                if (iVar13 != 0) {
                  param_1[0xd] = param_1[0xd] + uVar20;
                  iVar15 = FUN_1011cdb8(param_1,iVar13,param_2);
                  if (iVar15 != -1) {
                    FUN_1011d3d0(param_1,puVar8,iVar13,iVar15);
                  }
                  break;
                }
              }
              uVar14 = (*pcVar10)();
              (*extraout_w11_01)(uVar14);
            }
          }
          FUN_101322d0(local_e0);
          FUN_101322d0(local_dc);
        }
        uVar20 = *puVar3;
        bVar9 = false;
        uVar17 = uVar20;
        if (uVar20 == 0) break;
        do {
          uVar22 = uVar17 - 1;
          if (uVar22 < uVar20) {
            iVar13 = param_1[0x10] + uVar22 * 0x38 + 0x10;
          }
          else {
            iVar13 = 8;
          }
          if (*(int *)(iVar13 + 0x20) == 0) {
            FUN_1011cd28(param_1,iVar13);
            uVar20 = *puVar3;
            if (uVar17 < uVar20) {
              do {
                uVar18 = uVar17 + 1;
                puVar8 = (undefined8 *)(param_1[0x10] + uVar17 * 0x38);
                puVar8[-6] = puVar8[1];
                puVar8[-7] = *puVar8;
                puVar8[-4] = puVar8[3];
                puVar8[-5] = puVar8[2];
                puVar8[-2] = puVar8[5];
                puVar8[-3] = puVar8[4];
                puVar8[-1] = puVar8[6];
                uVar20 = *puVar3;
                uVar17 = uVar18;
              } while (uVar18 < uVar20);
            }
            uVar20 = uVar20 - 1;
            *puVar3 = uVar20;
            bVar9 = true;
          }
          uVar17 = uVar22;
        } while (uVar22 != 0);
      } while (bVar9);
    }
  }
  iVar13 = *piVar2;
  (*(code *)PTR_FUN_1016c0c0)(local_a8);
  return iVar13 != 0;
}

