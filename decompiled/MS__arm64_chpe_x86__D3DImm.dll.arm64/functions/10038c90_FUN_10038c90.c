/*
 * FUN_10038c90 at 10038c90
 * undefined FUN_10038c90(void)
 * Address ranges: 10038c90-1003bbd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10038c90(int param_1,int param_2,uint param_3,char param_4,undefined4 param_5,int param_6,
                 uint param_7,undefined8 param_8,uint *param_9,undefined4 param_10,uint param_11,
                 undefined4 param_12,int param_13,undefined4 param_14,char param_15,
                 undefined4 param_16,char param_17,undefined4 param_18,undefined1 param_19)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  byte *pbVar9;
  int *piVar10;
  byte bVar11;
  byte bVar12;
  undefined8 *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined8 *puVar30;
  undefined8 *puVar31;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  undefined8 *puVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint local_c0;
  uint local_b4;
  uint local_a8;
  int local_98;
  uint local_94;
  uint local_74;
  uint local_68;
  
  iVar3 = param_1 + 0x20;
  FUN_100968f0(iVar3,0,8);
  pcVar14 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar22 = 3;
  local_98 = 0;
  switch(param_2) {
  case 1:
  case 2:
    uVar22 = 1;
    if (param_2 == 2) {
      uVar22 = 2;
    }
  case 4:
    if (uVar22 == 0) {
                    /* WARNING: Does not return */
      uVar15 = SoftwareBreakpoint(0xf004,0x10038d28);
      (*(code *)uVar15)();
    }
    local_c0 = 0;
    if (uVar22 != 0) {
      local_c0 = param_11 / uVar22;
    }
    local_c0 = local_c0 * uVar22;
    if (local_c0 != 0) {
      piVar4 = (int *)(param_1 + 0x6c);
      piVar5 = (int *)(param_1 + 0x54);
      piVar6 = (int *)(param_1 + 100);
      iVar23 = *piVar4;
      do {
        if (((uint)((0x1000 - *piVar5) - *(int *)(param_1 + 0x50)) < 0x10) ||
           (iVar23 = *(int *)(param_1 + 0x68) + iVar23, 0x1000U - iVar23 < 0x10)) {
          uVar16 = (*pcVar14)();
          (*extraout_w11)(uVar16,1);
          iVar23 = 0;
        }
        if (uVar22 == 0) {
                    /* WARNING: Does not return */
          uVar15 = SoftwareBreakpoint(0xf004,0x10038e04);
          (*(code *)uVar15)();
        }
        uVar27 = 0;
        if (uVar22 != 0) {
          uVar27 = (0x1000U - iVar23) / uVar22;
        }
        uVar27 = (0x1000 - ((0x1000U - iVar23) - uVar27 * uVar22)) - iVar23;
        if (local_c0 < uVar27) {
          uVar27 = local_c0;
        }
        uVar18 = (ulonglong)uVar27;
        if (param_4 != '\0') {
          uVar17 = (ulonglong)param_3;
          puVar19 = (undefined4 *)(param_3 + 0xc);
          uVar16 = (*pcVar14)();
          (*extraout_w11_00)(uVar16,param_2,uVar17 & 0xffffffff,param_5,*puVar19,uVar18 & 0xffffffff
                             ,uVar18 & 0xffffffff,param_19);
        }
        uVar36 = 0;
        uVar37 = 0;
        uVar39 = 0;
        iVar23 = *piVar5;
        if (param_17 == '\0') {
          if (uVar27 != 0) {
            do {
              if (param_15 == '\0') {
                uVar38 = (uint)*(ushort *)((int)param_9 + (uVar39 + local_98) * 2) + param_13;
              }
              else {
                uVar38 = param_9[uVar39 + local_98] + param_13;
                if (uVar38 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_100968f0(iVar3,0,8);
                  *(uint *)(param_1 + 0x40) = uVar38 >> 0x10;
                }
              }
              uVar24 = uVar38 & 0xffff;
              uVar21 = uVar24 >> 0xb;
              if (*(char *)(iVar3 + uVar21) == '\0') {
                *(undefined1 *)(uVar21 + param_1 + 0x20) = 1;
                puVar32 = (undefined8 *)(*(int *)(param_1 + 0x1c) + uVar21 * 0x100);
                puVar32[1] = 0;
                *puVar32 = 0;
                puVar32[3] = 0;
                puVar32[2] = 0;
                puVar32[5] = 0;
                puVar32[4] = 0;
                puVar32[7] = 0;
                puVar32[6] = 0;
                puVar32[9] = 0;
                puVar32[8] = 0;
                puVar32[0xb] = 0;
                puVar32[10] = 0;
                puVar32[0xd] = 0;
                puVar32[0xc] = 0;
                puVar32[0xf] = 0;
                puVar32[0xe] = 0;
                puVar32[0x11] = 0;
                puVar32[0x10] = 0;
                puVar32[0x13] = 0;
                puVar32[0x12] = 0;
                puVar32[0x15] = 0;
                puVar32[0x14] = 0;
                puVar32[0x17] = 0;
                puVar32[0x16] = 0;
                puVar32[0x19] = 0;
                puVar32[0x18] = 0;
                puVar32[0x1b] = 0;
                puVar32[0x1a] = 0;
                puVar32[0x1d] = 0;
                puVar32[0x1c] = 0;
                puVar32[0x1f] = 0;
                puVar32[0x1e] = 0;
              }
              pbVar9 = (byte *)(*(int *)(param_1 + 0x1c) + (uVar24 >> 3));
              bVar11 = *pbVar9;
              bVar12 = *(byte *)((uVar38 & 7) + 0x100a2340);
              if ((bVar11 & bVar12) == 0) {
                *pbVar9 = bVar11 | bVar12;
                *(short *)(*(int *)(param_1 + 0x18) + uVar24 * 2) = (short)iVar23;
                iVar23 = iVar23 + 1;
                if (uVar36 == uVar37) {
                  uVar37 = uVar38 + 1;
                  uVar36 = uVar38;
                }
                else if (uVar38 == uVar37) {
                  uVar37 = uVar37 + 1;
                }
                else if (uVar38 < uVar36 || uVar37 < uVar38) {
                  uVar21 = *(uint *)(param_1 + 0x4b0);
                  uVar20 = uVar37 - uVar36;
                  if (param_7 == uVar21) {
                    uVar28 = uVar20 * uVar21;
                    puVar32 = (undefined8 *)(param_6 + uVar21 * uVar36);
                    piVar7 = (int *)(param_1 + 0x4c);
                    puVar31 = (undefined8 *)*piVar7;
                    uVar37 = 0;
                    puVar30 = puVar31;
                    if (uVar28 >> 4 != 0) {
                      do {
                        puVar13 = puVar32 + 1;
                        uVar15 = *puVar32;
                        uVar37 = uVar37 + 1;
                        puVar32 = puVar32 + 2;
                        puVar31 = puVar30 + 2;
                        puVar30[1] = *puVar13;
                        *puVar30 = uVar15;
                        puVar30 = puVar31;
                      } while (uVar37 < uVar28 >> 4);
                    }
                    uVar36 = uVar28 >> 2 & 3;
                    uVar37 = 0;
                    if (uVar36 != 0) {
                      do {
                        iVar35 = uVar37 * 4;
                        iVar34 = uVar37 * 4;
                        uVar37 = uVar37 + 1;
                        *(undefined4 *)((int)puVar31 + iVar34) =
                             *(undefined4 *)((int)puVar32 + iVar35);
                      } while (uVar37 < uVar36);
                    }
                    *piVar7 = *piVar7 + uVar28;
                  }
                  else {
                    uVar37 = 0;
                    if (uVar20 != 0) {
                      piVar7 = (int *)(param_1 + 0x4c);
                      uVar28 = uVar21 >> 2 & 3;
                      do {
                        puVar31 = (undefined8 *)*piVar7;
                        puVar32 = (undefined8 *)(param_6 + uVar36 * param_7);
                        uVar25 = 0;
                        puVar30 = puVar31;
                        if (uVar21 >> 4 != 0) {
                          do {
                            puVar13 = puVar32 + 1;
                            uVar15 = *puVar32;
                            uVar25 = uVar25 + 1;
                            puVar32 = puVar32 + 2;
                            puVar31 = puVar30 + 2;
                            puVar30[1] = *puVar13;
                            *puVar30 = uVar15;
                            puVar30 = puVar31;
                          } while (uVar25 < uVar21 >> 4);
                        }
                        uVar25 = 0;
                        if (uVar28 != 0) {
                          do {
                            iVar35 = uVar25 * 4;
                            iVar34 = uVar25 * 4;
                            uVar25 = uVar25 + 1;
                            *(undefined4 *)((int)puVar31 + iVar34) =
                                 *(undefined4 *)((int)puVar32 + iVar35);
                          } while (uVar25 < uVar28);
                        }
                        uVar37 = uVar37 + 1;
                        uVar36 = uVar36 + 1;
                        *piVar7 = uVar21 + *piVar7;
                      } while (uVar37 < uVar20);
                    }
                  }
                  uVar37 = uVar38 + 1;
                  *piVar5 = uVar20 + *piVar5;
                  uVar36 = uVar38;
                }
              }
              iVar35 = uVar39 * 4;
              uVar39 = uVar39 + 1;
              *(uint *)(*piVar6 + iVar35) = (uint)*(ushort *)(*(int *)(param_1 + 0x18) + uVar24 * 2)
              ;
            } while (uVar39 < uVar27);
            if (uVar37 != uVar36) {
              uVar37 = uVar37 - uVar36;
              uVar39 = *(uint *)(param_1 + 0x4b0);
              if (param_7 == uVar39) {
                uVar38 = uVar39 * uVar37;
                puVar32 = (undefined8 *)(param_6 + uVar39 * uVar36);
                piVar7 = (int *)(param_1 + 0x4c);
                puVar31 = (undefined8 *)*piVar7;
                uVar39 = 0;
                puVar30 = puVar31;
                if (uVar38 >> 4 != 0) {
                  do {
                    puVar13 = puVar32 + 1;
                    uVar15 = *puVar32;
                    uVar39 = uVar39 + 1;
                    puVar32 = puVar32 + 2;
                    puVar31 = puVar30 + 2;
                    puVar30[1] = *puVar13;
                    *puVar30 = uVar15;
                    puVar30 = puVar31;
                  } while (uVar39 < uVar38 >> 4);
                }
                uVar36 = uVar38 >> 2 & 3;
                uVar39 = 0;
                if (uVar36 != 0) {
                  do {
                    iVar23 = uVar39 * 4;
                    iVar35 = uVar39 * 4;
                    uVar39 = uVar39 + 1;
                    *(undefined4 *)((int)puVar31 + iVar35) = *(undefined4 *)((int)puVar32 + iVar23);
                  } while (uVar39 < uVar36);
                }
                *piVar7 = *piVar7 + uVar38;
              }
              else {
                uVar38 = 0;
                if (uVar37 != 0) {
                  piVar7 = (int *)(param_1 + 0x4c);
                  uVar24 = uVar39 >> 2 & 3;
                  do {
                    puVar31 = (undefined8 *)*piVar7;
                    puVar32 = (undefined8 *)(param_6 + uVar36 * param_7);
                    uVar21 = 0;
                    puVar30 = puVar31;
                    if (uVar39 >> 4 != 0) {
                      do {
                        puVar13 = puVar32 + 1;
                        uVar15 = *puVar32;
                        uVar21 = uVar21 + 1;
                        puVar32 = puVar32 + 2;
                        puVar31 = puVar30 + 2;
                        puVar30[1] = *puVar13;
                        *puVar30 = uVar15;
                        puVar30 = puVar31;
                      } while (uVar21 < uVar39 >> 4);
                    }
                    uVar21 = 0;
                    if (uVar24 != 0) {
                      do {
                        iVar23 = uVar21 * 4;
                        iVar35 = uVar21 * 4;
                        uVar21 = uVar21 + 1;
                        *(undefined4 *)((int)puVar31 + iVar35) =
                             *(undefined4 *)((int)puVar32 + iVar23);
                      } while (uVar21 < uVar24);
                    }
                    uVar38 = uVar38 + 1;
                    uVar36 = uVar36 + 1;
                    *piVar7 = uVar39 + *piVar7;
                  } while (uVar38 < uVar37);
                }
              }
              *piVar5 = uVar37 + *piVar5;
            }
          }
        }
        else if (uVar27 != 0) {
          do {
            if (param_15 == '\0') {
              uVar38 = (uint)*(ushort *)((int)param_9 + (uVar39 + local_98) * 2) + param_13;
            }
            else {
              uVar38 = param_9[uVar39 + local_98] + param_13;
              if (uVar38 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_100968f0(iVar3,0,8);
                *(uint *)(param_1 + 0x40) = uVar38 >> 0x10;
              }
            }
            uVar24 = uVar38 & 0xffff;
            uVar21 = uVar24 >> 0xb;
            if (*(char *)(iVar3 + uVar21) == '\0') {
              *(undefined1 *)(uVar21 + param_1 + 0x20) = 1;
              puVar32 = (undefined8 *)(*(int *)(param_1 + 0x1c) + uVar21 * 0x100);
              puVar32[1] = 0;
              *puVar32 = 0;
              puVar32[3] = 0;
              puVar32[2] = 0;
              puVar32[5] = 0;
              puVar32[4] = 0;
              puVar32[7] = 0;
              puVar32[6] = 0;
              puVar32[9] = 0;
              puVar32[8] = 0;
              puVar32[0xb] = 0;
              puVar32[10] = 0;
              puVar32[0xd] = 0;
              puVar32[0xc] = 0;
              puVar32[0xf] = 0;
              puVar32[0xe] = 0;
              puVar32[0x11] = 0;
              puVar32[0x10] = 0;
              puVar32[0x13] = 0;
              puVar32[0x12] = 0;
              puVar32[0x15] = 0;
              puVar32[0x14] = 0;
              puVar32[0x17] = 0;
              puVar32[0x16] = 0;
              puVar32[0x19] = 0;
              puVar32[0x18] = 0;
              puVar32[0x1b] = 0;
              puVar32[0x1a] = 0;
              puVar32[0x1d] = 0;
              puVar32[0x1c] = 0;
              puVar32[0x1f] = 0;
              puVar32[0x1e] = 0;
            }
            pbVar9 = (byte *)(*(int *)(param_1 + 0x1c) + (uVar24 >> 3));
            bVar11 = *pbVar9;
            bVar12 = *(byte *)((uVar38 & 7) + 0x100a2338);
            if ((bVar11 & bVar12) == 0) {
              *pbVar9 = bVar11 | bVar12;
              *(short *)(*(int *)(param_1 + 0x18) + uVar24 * 2) = (short)iVar23;
              iVar23 = iVar23 + 1;
              if (uVar36 == uVar37) {
                uVar37 = uVar38 + 1;
                uVar36 = uVar38;
              }
              else if (uVar38 == uVar37) {
                uVar37 = uVar37 + 1;
              }
              else if (uVar38 < uVar36 || uVar37 < uVar38) {
                iVar35 = *(int *)(param_1 + 0x4b0);
                uVar21 = uVar37 - uVar36;
                uVar37 = 0;
                if (*(uint *)(param_3 + 8) != 0) {
                  do {
                    piVar7 = (int *)(param_6 + uVar37 * 8);
                    iVar34 = *piVar7;
                    if (iVar34 != 0) {
                      piVar7 = piVar7 + 1;
                      uVar20 = 0;
                      iVar34 = iVar34 + *piVar7 * uVar36;
                      iVar33 = param_3 + (uint)*(byte *)(uVar37 + param_3 + 0x9c) * 8;
                      bVar11 = *(byte *)(iVar33 + 0x16) >> 2;
                      if (uVar21 != 0) {
                        iVar33 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar33 + 0x17) * 4;
                        do {
                          uVar28 = 0;
                          if (bVar11 != 0) {
                            do {
                              iVar2 = uVar28 * 4;
                              iVar1 = uVar28 * 4;
                              uVar28 = uVar28 + 1;
                              *(undefined4 *)(iVar33 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                            } while (uVar28 < bVar11);
                          }
                          uVar20 = uVar20 + 1;
                          iVar33 = iVar35 + iVar33;
                          iVar34 = iVar34 + *piVar7;
                        } while (uVar20 < uVar21);
                      }
                    }
                    uVar37 = uVar37 + 1;
                  } while (uVar37 < *(uint *)(param_3 + 8));
                }
                uVar37 = uVar38 + 1;
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar21 * iVar35;
                *piVar5 = uVar21 + *piVar5;
                uVar36 = uVar38;
              }
            }
            iVar35 = uVar39 * 4;
            uVar39 = uVar39 + 1;
            *(uint *)(*piVar6 + iVar35) = (uint)*(ushort *)(*(int *)(param_1 + 0x18) + uVar24 * 2);
          } while (uVar39 < uVar27);
          if (uVar37 != uVar36) {
            uVar37 = uVar37 - uVar36;
            iVar23 = *(int *)(param_1 + 0x4b0);
            uVar39 = 0;
            if (*(uint *)(param_3 + 8) != 0) {
              do {
                piVar7 = (int *)(param_6 + uVar39 * 8);
                iVar35 = *piVar7;
                if (iVar35 != 0) {
                  piVar7 = piVar7 + 1;
                  iVar35 = iVar35 + *piVar7 * uVar36;
                  iVar34 = param_3 + (uint)*(byte *)(uVar39 + param_3 + 0x9c) * 8;
                  uVar38 = 0;
                  bVar11 = *(byte *)(iVar34 + 0x16) >> 2;
                  if (uVar37 != 0) {
                    iVar34 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar34 + 0x17) * 4;
                    do {
                      uVar24 = 0;
                      if (bVar11 != 0) {
                        do {
                          iVar33 = uVar24 * 4;
                          iVar2 = uVar24 * 4;
                          uVar24 = uVar24 + 1;
                          *(undefined4 *)(iVar34 + iVar2) = *(undefined4 *)(iVar35 + iVar33);
                        } while (uVar24 < bVar11);
                      }
                      uVar38 = uVar38 + 1;
                      iVar34 = iVar34 + iVar23;
                      iVar35 = iVar35 + *piVar7;
                    } while (uVar38 < uVar37);
                  }
                }
                uVar39 = uVar39 + 1;
              } while (uVar39 < *(uint *)(param_3 + 8));
            }
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar23 * uVar37;
            *piVar5 = *piVar5 + uVar37;
          }
        }
        local_98 = uVar27 + local_98;
        local_c0 = local_c0 - uVar27;
        *piVar6 = *piVar6 + uVar27 * 4;
        iVar23 = uVar27 + *piVar4;
        *piVar4 = iVar23;
      } while (local_c0 != 0);
    }
    break;
  case 3:
    uVar22 = 2;
  case 5:
    uVar27 = uVar22 - 1;
    if (uVar22 <= param_11) {
      local_94 = param_11;
      piVar4 = (int *)(param_1 + 0x6c);
      piVar5 = (int *)(param_1 + 0x54);
      piVar6 = (int *)(param_1 + 100);
      iVar23 = *piVar4;
      do {
        if (((uint)((0x1000 - *(int *)(param_1 + 0x50)) - *piVar5) < 0x10) ||
           (iVar23 = *(int *)(param_1 + 0x68) + iVar23, 0x1000U - iVar23 < 0x10)) {
          uVar16 = (*pcVar14)();
          (*extraout_w11_01)(uVar16,1);
          iVar23 = 0;
        }
        uVar37 = 0x1000U - iVar23 & 0xfffffffe;
        if (local_94 < uVar37) {
          uVar37 = local_94;
        }
        uVar18 = (ulonglong)uVar37;
        if (param_4 != '\0') {
          uVar17 = (ulonglong)param_3;
          puVar19 = (undefined4 *)(param_3 + 0xc);
          uVar16 = (*pcVar14)();
          (*extraout_w11_02)(uVar16,param_2,uVar17 & 0xffffffff,param_5,*puVar19,uVar18 & 0xffffffff
                             ,uVar18 & 0xffffffff,param_19);
        }
        if ((*(int *)(param_1 + 0x14) == 0) ||
           (((*piVar5 == 0 && (*piVar4 == 0)) || (0xfff < uVar37 + iVar23)))) {
          uVar16 = (*pcVar14)();
          (*extraout_w11_03)(uVar16,0);
        }
        else {
          *(int *)*piVar6 = *(int *)(param_1 + 0x14);
          *piVar6 = *piVar6 + 4;
          *piVar4 = *piVar4 + 1;
        }
        uVar38 = 0;
        uVar39 = 0;
        uVar36 = 0;
        piVar7 = (int *)(param_1 + 0x1c);
        iVar23 = *piVar5;
        piVar8 = (int *)(param_1 + 0x18);
        if (param_17 == '\0') {
          do {
            if (param_15 == '\0') {
              uVar24 = (uint)*(ushort *)((int)param_9 + (uVar36 + local_98) * 2) + param_13;
            }
            else {
              uVar24 = param_9[uVar36 + local_98] + param_13;
              if (uVar24 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_100968f0(iVar3,0,8);
                *(uint *)(param_1 + 0x40) = uVar24 >> 0x10;
              }
            }
            uVar21 = uVar24 & 0xffff;
            uVar20 = uVar21 >> 0xb;
            if (*(char *)(uVar20 + iVar3) == '\0') {
              *(undefined1 *)(uVar20 + param_1 + 0x20) = 1;
              puVar32 = (undefined8 *)(*piVar7 + uVar20 * 0x100);
              puVar32[1] = 0;
              *puVar32 = 0;
              puVar32[3] = 0;
              puVar32[2] = 0;
              puVar32[5] = 0;
              puVar32[4] = 0;
              puVar32[7] = 0;
              puVar32[6] = 0;
              puVar32[9] = 0;
              puVar32[8] = 0;
              puVar32[0xb] = 0;
              puVar32[10] = 0;
              puVar32[0xd] = 0;
              puVar32[0xc] = 0;
              puVar32[0xf] = 0;
              puVar32[0xe] = 0;
              puVar32[0x11] = 0;
              puVar32[0x10] = 0;
              puVar32[0x13] = 0;
              puVar32[0x12] = 0;
              puVar32[0x15] = 0;
              puVar32[0x14] = 0;
              puVar32[0x17] = 0;
              puVar32[0x16] = 0;
              puVar32[0x19] = 0;
              puVar32[0x18] = 0;
              puVar32[0x1b] = 0;
              puVar32[0x1a] = 0;
              puVar32[0x1d] = 0;
              puVar32[0x1c] = 0;
              puVar32[0x1f] = 0;
              puVar32[0x1e] = 0;
            }
            bVar11 = *(byte *)((uVar24 & 7) + 0x100a2340);
            pbVar9 = (byte *)(*piVar7 + (uVar21 >> 3));
            bVar12 = *pbVar9;
            if ((bVar11 & bVar12) == 0) {
              *pbVar9 = bVar11 | bVar12;
              *(short *)(*piVar8 + uVar21 * 2) = (short)iVar23;
              iVar23 = iVar23 + 1;
              if (uVar38 == uVar39) {
                uVar39 = uVar24 + 1;
                uVar38 = uVar24;
              }
              else if (uVar24 == uVar39) {
                uVar39 = uVar39 + 1;
              }
              else if (uVar24 < uVar38 || uVar39 < uVar24) {
                uVar20 = *(uint *)(param_1 + 0x4b0);
                uVar28 = uVar39 - uVar38;
                if (param_7 == uVar20) {
                  uVar25 = uVar28 * uVar20;
                  puVar32 = (undefined8 *)(param_6 + uVar20 * uVar38);
                  piVar10 = (int *)(param_1 + 0x4c);
                  puVar31 = (undefined8 *)*piVar10;
                  uVar39 = 0;
                  puVar30 = puVar31;
                  if (uVar25 >> 4 != 0) {
                    do {
                      puVar13 = puVar32 + 1;
                      uVar15 = *puVar32;
                      uVar39 = uVar39 + 1;
                      puVar32 = puVar32 + 2;
                      puVar31 = puVar30 + 2;
                      puVar30[1] = *puVar13;
                      *puVar30 = uVar15;
                      puVar30 = puVar31;
                    } while (uVar39 < uVar25 >> 4);
                  }
                  uVar38 = uVar25 >> 2 & 3;
                  uVar39 = 0;
                  if (uVar38 != 0) {
                    do {
                      iVar35 = uVar39 * 4;
                      iVar34 = uVar39 * 4;
                      uVar39 = uVar39 + 1;
                      *(undefined4 *)((int)puVar31 + iVar34) =
                           *(undefined4 *)((int)puVar32 + iVar35);
                    } while (uVar39 < uVar38);
                  }
                  *piVar10 = uVar25 + *piVar10;
                }
                else {
                  uVar39 = 0;
                  if (uVar28 != 0) {
                    piVar10 = (int *)(param_1 + 0x4c);
                    uVar25 = uVar20 >> 2 & 3;
                    do {
                      puVar31 = (undefined8 *)*piVar10;
                      puVar32 = (undefined8 *)(param_6 + uVar38 * param_7);
                      uVar29 = 0;
                      puVar30 = puVar31;
                      if (uVar20 >> 4 != 0) {
                        do {
                          puVar13 = puVar32 + 1;
                          uVar15 = *puVar32;
                          uVar29 = uVar29 + 1;
                          puVar32 = puVar32 + 2;
                          puVar31 = puVar30 + 2;
                          puVar30[1] = *puVar13;
                          *puVar30 = uVar15;
                          puVar30 = puVar31;
                        } while (uVar29 < uVar20 >> 4);
                      }
                      uVar29 = 0;
                      if (uVar25 != 0) {
                        do {
                          iVar35 = uVar29 * 4;
                          iVar34 = uVar29 * 4;
                          uVar29 = uVar29 + 1;
                          *(undefined4 *)((int)puVar31 + iVar34) =
                               *(undefined4 *)((int)puVar32 + iVar35);
                        } while (uVar29 < uVar25);
                      }
                      uVar39 = uVar39 + 1;
                      uVar38 = uVar38 + 1;
                      *piVar10 = uVar20 + *piVar10;
                    } while (uVar39 < uVar28);
                  }
                }
                uVar39 = uVar24 + 1;
                *piVar5 = *piVar5 + uVar28;
                uVar38 = uVar24;
              }
            }
            iVar35 = uVar36 * 4;
            uVar36 = uVar36 + 1;
            *(uint *)(*piVar6 + iVar35) = (uint)*(ushort *)(*piVar8 + uVar21 * 2);
          } while (uVar36 < uVar27);
          uVar36 = 0;
          uVar24 = uVar37 - uVar27;
          if (uVar24 != 0) {
            do {
              iVar35 = local_98 + uVar27 + uVar36;
              if (param_15 == '\0') {
                uVar21 = (uint)*(ushort *)((int)param_9 + iVar35 * 2) + param_13;
              }
              else {
                uVar21 = param_9[iVar35] + param_13;
                if (uVar21 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_100968f0(iVar3,0,8);
                  *(uint *)(param_1 + 0x40) = uVar21 >> 0x10;
                }
              }
              uVar20 = uVar21 & 0xffff;
              uVar28 = uVar20 >> 0xb;
              if (*(char *)(iVar3 + uVar28) == '\0') {
                *(undefined1 *)(uVar28 + param_1 + 0x20) = 1;
                puVar32 = (undefined8 *)(*piVar7 + uVar28 * 0x100);
                puVar32[1] = 0;
                *puVar32 = 0;
                puVar32[3] = 0;
                puVar32[2] = 0;
                puVar32[5] = 0;
                puVar32[4] = 0;
                puVar32[7] = 0;
                puVar32[6] = 0;
                puVar32[9] = 0;
                puVar32[8] = 0;
                puVar32[0xb] = 0;
                puVar32[10] = 0;
                puVar32[0xd] = 0;
                puVar32[0xc] = 0;
                puVar32[0xf] = 0;
                puVar32[0xe] = 0;
                puVar32[0x11] = 0;
                puVar32[0x10] = 0;
                puVar32[0x13] = 0;
                puVar32[0x12] = 0;
                puVar32[0x15] = 0;
                puVar32[0x14] = 0;
                puVar32[0x17] = 0;
                puVar32[0x16] = 0;
                puVar32[0x19] = 0;
                puVar32[0x18] = 0;
                puVar32[0x1b] = 0;
                puVar32[0x1a] = 0;
                puVar32[0x1d] = 0;
                puVar32[0x1c] = 0;
                puVar32[0x1f] = 0;
                puVar32[0x1e] = 0;
              }
              bVar11 = *(byte *)((uVar21 & 7) + 0x100a2340);
              pbVar9 = (byte *)(*piVar7 + (uVar20 >> 3));
              bVar12 = *pbVar9;
              if ((bVar11 & bVar12) == 0) {
                *pbVar9 = bVar11 | bVar12;
                *(short *)(*piVar8 + uVar20 * 2) = (short)iVar23;
                iVar23 = iVar23 + 1;
                if (uVar38 == uVar39) {
                  uVar39 = uVar21 + 1;
                  uVar38 = uVar21;
                }
                else if (uVar21 == uVar39) {
                  uVar39 = uVar39 + 1;
                }
                else if (uVar21 < uVar38 || uVar39 < uVar21) {
                  uVar28 = *(uint *)(param_1 + 0x4b0);
                  uVar25 = uVar39 - uVar38;
                  if (param_7 == uVar28) {
                    uVar29 = uVar25 * uVar28;
                    puVar32 = (undefined8 *)(param_6 + uVar28 * uVar38);
                    piVar10 = (int *)(param_1 + 0x4c);
                    puVar31 = (undefined8 *)*piVar10;
                    uVar39 = 0;
                    puVar30 = puVar31;
                    if (uVar29 >> 4 != 0) {
                      do {
                        puVar13 = puVar32 + 1;
                        uVar15 = *puVar32;
                        uVar39 = uVar39 + 1;
                        puVar32 = puVar32 + 2;
                        puVar31 = puVar30 + 2;
                        puVar30[1] = *puVar13;
                        *puVar30 = uVar15;
                        puVar30 = puVar31;
                      } while (uVar39 < uVar29 >> 4);
                    }
                    uVar38 = uVar29 >> 2 & 3;
                    uVar39 = 0;
                    if (uVar38 != 0) {
                      do {
                        iVar35 = uVar39 * 4;
                        iVar34 = uVar39 * 4;
                        uVar39 = uVar39 + 1;
                        *(undefined4 *)((int)puVar31 + iVar34) =
                             *(undefined4 *)((int)puVar32 + iVar35);
                      } while (uVar39 < uVar38);
                    }
                    *piVar10 = *piVar10 + uVar29;
                  }
                  else {
                    uVar39 = 0;
                    if (uVar25 != 0) {
                      piVar10 = (int *)(param_1 + 0x4c);
                      uVar29 = uVar28 >> 2 & 3;
                      do {
                        puVar31 = (undefined8 *)*piVar10;
                        puVar32 = (undefined8 *)(param_6 + uVar38 * param_7);
                        uVar26 = 0;
                        puVar30 = puVar31;
                        if (uVar28 >> 4 != 0) {
                          do {
                            puVar13 = puVar32 + 1;
                            uVar15 = *puVar32;
                            uVar26 = uVar26 + 1;
                            puVar32 = puVar32 + 2;
                            puVar31 = puVar30 + 2;
                            puVar30[1] = *puVar13;
                            *puVar30 = uVar15;
                            puVar30 = puVar31;
                          } while (uVar26 < uVar28 >> 4);
                        }
                        uVar26 = 0;
                        if (uVar29 != 0) {
                          do {
                            iVar35 = uVar26 * 4;
                            iVar34 = uVar26 * 4;
                            uVar26 = uVar26 + 1;
                            *(undefined4 *)((int)puVar31 + iVar34) =
                                 *(undefined4 *)((int)puVar32 + iVar35);
                          } while (uVar26 < uVar29);
                        }
                        uVar39 = uVar39 + 1;
                        uVar38 = uVar38 + 1;
                        *piVar10 = *piVar10 + uVar28;
                      } while (uVar39 < uVar25);
                    }
                  }
                  uVar39 = uVar21 + 1;
                  *piVar5 = *piVar5 + uVar25;
                  uVar38 = uVar21;
                }
              }
              iVar35 = uVar36 * 4;
              uVar36 = uVar36 + 1;
              *(uint *)(*piVar6 + iVar35 + uVar27 * 4) = (uint)*(ushort *)(*piVar8 + uVar20 * 2);
            } while (uVar36 < uVar24);
          }
          if (uVar39 != uVar38) {
            uVar39 = uVar39 - uVar38;
            uVar36 = *(uint *)(param_1 + 0x4b0);
            if (param_7 == uVar36) {
              uVar21 = uVar36 * uVar39;
              puVar32 = (undefined8 *)(param_6 + uVar36 * uVar38);
              piVar7 = (int *)(param_1 + 0x4c);
              puVar31 = (undefined8 *)*piVar7;
              uVar36 = 0;
              puVar30 = puVar31;
              if (uVar21 >> 4 != 0) {
                do {
                  puVar13 = puVar32 + 1;
                  uVar15 = *puVar32;
                  uVar36 = uVar36 + 1;
                  puVar32 = puVar32 + 2;
                  puVar31 = puVar30 + 2;
                  puVar30[1] = *puVar13;
                  *puVar30 = uVar15;
                  puVar30 = puVar31;
                } while (uVar36 < uVar21 >> 4);
              }
              uVar38 = uVar21 >> 2 & 3;
              uVar36 = 0;
              if (uVar38 != 0) {
                do {
                  iVar23 = uVar36 * 4;
                  iVar35 = uVar36 * 4;
                  uVar36 = uVar36 + 1;
                  *(undefined4 *)((int)puVar31 + iVar35) = *(undefined4 *)((int)puVar32 + iVar23);
                } while (uVar36 < uVar38);
              }
              *piVar7 = uVar21 + *piVar7;
            }
            else {
              uVar21 = 0;
              if (uVar39 != 0) {
                piVar7 = (int *)(param_1 + 0x4c);
                uVar20 = uVar36 >> 2 & 3;
                do {
                  puVar31 = (undefined8 *)*piVar7;
                  puVar32 = (undefined8 *)(param_6 + uVar38 * param_7);
                  uVar28 = 0;
                  puVar30 = puVar31;
                  if (uVar36 >> 4 != 0) {
                    do {
                      puVar13 = puVar32 + 1;
                      uVar15 = *puVar32;
                      uVar28 = uVar28 + 1;
                      puVar32 = puVar32 + 2;
                      puVar31 = puVar30 + 2;
                      puVar30[1] = *puVar13;
                      *puVar30 = uVar15;
                      puVar30 = puVar31;
                    } while (uVar28 < uVar36 >> 4);
                  }
                  uVar28 = 0;
                  if (uVar20 != 0) {
                    do {
                      iVar23 = uVar28 * 4;
                      iVar35 = uVar28 * 4;
                      uVar28 = uVar28 + 1;
                      *(undefined4 *)((int)puVar31 + iVar35) =
                           *(undefined4 *)((int)puVar32 + iVar23);
                    } while (uVar28 < uVar20);
                  }
                  uVar21 = uVar21 + 1;
                  uVar38 = uVar38 + 1;
                  *piVar7 = *piVar7 + uVar36;
                } while (uVar21 < uVar39);
              }
            }
            *piVar5 = *piVar5 + uVar39;
          }
        }
        else {
          do {
            if (param_15 == '\0') {
              uVar24 = (uint)*(ushort *)((int)param_9 + (uVar36 + local_98) * 2) + param_13;
            }
            else {
              uVar24 = param_9[uVar36 + local_98] + param_13;
              if (uVar24 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_100968f0(iVar3,0,8);
                *(uint *)(param_1 + 0x40) = uVar24 >> 0x10;
              }
            }
            uVar21 = uVar24 & 0xffff;
            uVar20 = uVar21 >> 0xb;
            if (*(char *)(uVar20 + iVar3) == '\0') {
              *(undefined1 *)(uVar20 + param_1 + 0x20) = 1;
              puVar32 = (undefined8 *)(*piVar7 + uVar20 * 0x100);
              puVar32[1] = 0;
              *puVar32 = 0;
              puVar32[3] = 0;
              puVar32[2] = 0;
              puVar32[5] = 0;
              puVar32[4] = 0;
              puVar32[7] = 0;
              puVar32[6] = 0;
              puVar32[9] = 0;
              puVar32[8] = 0;
              puVar32[0xb] = 0;
              puVar32[10] = 0;
              puVar32[0xd] = 0;
              puVar32[0xc] = 0;
              puVar32[0xf] = 0;
              puVar32[0xe] = 0;
              puVar32[0x11] = 0;
              puVar32[0x10] = 0;
              puVar32[0x13] = 0;
              puVar32[0x12] = 0;
              puVar32[0x15] = 0;
              puVar32[0x14] = 0;
              puVar32[0x17] = 0;
              puVar32[0x16] = 0;
              puVar32[0x19] = 0;
              puVar32[0x18] = 0;
              puVar32[0x1b] = 0;
              puVar32[0x1a] = 0;
              puVar32[0x1d] = 0;
              puVar32[0x1c] = 0;
              puVar32[0x1f] = 0;
              puVar32[0x1e] = 0;
            }
            pbVar9 = (byte *)(*piVar7 + (uVar21 >> 3));
            bVar11 = *pbVar9;
            bVar12 = *(byte *)((uVar24 & 7) + 0x100a2338);
            if ((bVar11 & bVar12) == 0) {
              *pbVar9 = bVar11 | bVar12;
              *(short *)(*piVar8 + uVar21 * 2) = (short)iVar23;
              iVar23 = iVar23 + 1;
              if (uVar38 == uVar39) {
                uVar39 = uVar24 + 1;
                uVar38 = uVar24;
              }
              else if (uVar24 == uVar39) {
                uVar39 = uVar39 + 1;
              }
              else if (uVar24 < uVar38 || uVar39 < uVar24) {
                iVar35 = *(int *)(param_1 + 0x4b0);
                uVar20 = uVar39 - uVar38;
                uVar39 = 0;
                if (*(uint *)(param_3 + 8) != 0) {
                  do {
                    piVar10 = (int *)(param_6 + uVar39 * 8);
                    iVar34 = *piVar10;
                    if (iVar34 != 0) {
                      piVar10 = piVar10 + 1;
                      uVar28 = 0;
                      iVar34 = iVar34 + *piVar10 * uVar38;
                      iVar33 = param_3 + (uint)*(byte *)(uVar39 + param_3 + 0x9c) * 8;
                      bVar11 = *(byte *)(iVar33 + 0x16) >> 2;
                      if (uVar20 != 0) {
                        iVar33 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar33 + 0x17) * 4;
                        do {
                          uVar25 = 0;
                          if (bVar11 != 0) {
                            do {
                              iVar2 = uVar25 * 4;
                              iVar1 = uVar25 * 4;
                              uVar25 = uVar25 + 1;
                              *(undefined4 *)(iVar33 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                            } while (uVar25 < bVar11);
                          }
                          uVar28 = uVar28 + 1;
                          iVar33 = iVar35 + iVar33;
                          iVar34 = iVar34 + *piVar10;
                        } while (uVar28 < uVar20);
                      }
                    }
                    uVar39 = uVar39 + 1;
                  } while (uVar39 < *(uint *)(param_3 + 8));
                }
                uVar39 = uVar24 + 1;
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar20 * iVar35;
                *piVar5 = *piVar5 + uVar20;
                uVar38 = uVar24;
              }
            }
            iVar35 = uVar36 * 4;
            uVar36 = uVar36 + 1;
            *(uint *)(*piVar6 + iVar35) = (uint)*(ushort *)(*piVar8 + uVar21 * 2);
          } while (uVar36 < uVar27);
          uVar36 = 0;
          uVar24 = uVar37 - uVar27;
          if (uVar24 != 0) {
            do {
              iVar35 = uVar27 + local_98 + uVar36;
              if (param_15 == '\0') {
                uVar21 = (uint)*(ushort *)((int)param_9 + iVar35 * 2) + param_13;
              }
              else {
                uVar21 = param_9[iVar35] + param_13;
                if (uVar21 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_100968f0(iVar3,0,8);
                  *(uint *)(param_1 + 0x40) = uVar21 >> 0x10;
                }
              }
              uVar20 = uVar21 & 0xffff;
              uVar28 = uVar20 >> 0xb;
              if (*(char *)(iVar3 + uVar28) == '\0') {
                *(undefined1 *)(uVar28 + param_1 + 0x20) = 1;
                puVar32 = (undefined8 *)(*piVar7 + uVar28 * 0x100);
                puVar32[1] = 0;
                *puVar32 = 0;
                puVar32[3] = 0;
                puVar32[2] = 0;
                puVar32[5] = 0;
                puVar32[4] = 0;
                puVar32[7] = 0;
                puVar32[6] = 0;
                puVar32[9] = 0;
                puVar32[8] = 0;
                puVar32[0xb] = 0;
                puVar32[10] = 0;
                puVar32[0xd] = 0;
                puVar32[0xc] = 0;
                puVar32[0xf] = 0;
                puVar32[0xe] = 0;
                puVar32[0x11] = 0;
                puVar32[0x10] = 0;
                puVar32[0x13] = 0;
                puVar32[0x12] = 0;
                puVar32[0x15] = 0;
                puVar32[0x14] = 0;
                puVar32[0x17] = 0;
                puVar32[0x16] = 0;
                puVar32[0x19] = 0;
                puVar32[0x18] = 0;
                puVar32[0x1b] = 0;
                puVar32[0x1a] = 0;
                puVar32[0x1d] = 0;
                puVar32[0x1c] = 0;
                puVar32[0x1f] = 0;
                puVar32[0x1e] = 0;
              }
              pbVar9 = (byte *)(*piVar7 + (uVar20 >> 3));
              bVar11 = *pbVar9;
              bVar12 = *(byte *)((uVar21 & 7) + 0x100a2338);
              if ((bVar11 & bVar12) == 0) {
                *pbVar9 = bVar11 | bVar12;
                *(short *)(*piVar8 + uVar20 * 2) = (short)iVar23;
                iVar23 = iVar23 + 1;
                if (uVar38 == uVar39) {
                  uVar39 = uVar21 + 1;
                  uVar38 = uVar21;
                }
                else if (uVar21 == uVar39) {
                  uVar39 = uVar39 + 1;
                }
                else if (uVar21 < uVar38 || uVar39 < uVar21) {
                  iVar35 = *(int *)(param_1 + 0x4b0);
                  uVar28 = uVar39 - uVar38;
                  uVar39 = 0;
                  if (*(uint *)(param_3 + 8) != 0) {
                    do {
                      piVar10 = (int *)(param_6 + uVar39 * 8);
                      iVar34 = *piVar10;
                      if (iVar34 != 0) {
                        piVar10 = piVar10 + 1;
                        iVar34 = iVar34 + *piVar10 * uVar38;
                        iVar33 = param_3 + (uint)*(byte *)(uVar39 + param_3 + 0x9c) * 8;
                        uVar25 = 0;
                        bVar11 = *(byte *)(iVar33 + 0x16) >> 2;
                        if (uVar28 != 0) {
                          iVar33 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar33 + 0x17) * 4;
                          do {
                            uVar29 = 0;
                            if (bVar11 != 0) {
                              do {
                                iVar2 = uVar29 * 4;
                                iVar1 = uVar29 * 4;
                                uVar29 = uVar29 + 1;
                                *(undefined4 *)(iVar33 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                              } while (uVar29 < bVar11);
                            }
                            uVar25 = uVar25 + 1;
                            iVar33 = iVar35 + iVar33;
                            iVar34 = *piVar10 + iVar34;
                          } while (uVar25 < uVar28);
                        }
                      }
                      uVar39 = uVar39 + 1;
                    } while (uVar39 < *(uint *)(param_3 + 8));
                  }
                  uVar39 = uVar21 + 1;
                  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar28 * iVar35;
                  *piVar5 = *piVar5 + uVar28;
                  uVar38 = uVar21;
                }
              }
              iVar35 = uVar36 * 4;
              uVar36 = uVar36 + 1;
              *(uint *)(iVar35 + uVar27 * 4 + *piVar6) = (uint)*(ushort *)(*piVar8 + uVar20 * 2);
            } while (uVar36 < uVar24);
          }
          if (uVar39 != uVar38) {
            uVar39 = uVar39 - uVar38;
            iVar23 = *(int *)(param_1 + 0x4b0);
            uVar36 = 0;
            if (*(uint *)(param_3 + 8) != 0) {
              do {
                piVar7 = (int *)(param_6 + uVar36 * 8);
                iVar35 = *piVar7;
                if (iVar35 != 0) {
                  piVar7 = piVar7 + 1;
                  iVar35 = iVar35 + *piVar7 * uVar38;
                  iVar34 = param_3 + (uint)*(byte *)(uVar36 + param_3 + 0x9c) * 8;
                  uVar21 = 0;
                  bVar11 = *(byte *)(iVar34 + 0x16) >> 2;
                  if (uVar39 != 0) {
                    iVar34 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar34 + 0x17) * 4;
                    do {
                      uVar20 = 0;
                      if (bVar11 != 0) {
                        do {
                          iVar33 = uVar20 * 4;
                          iVar2 = uVar20 * 4;
                          uVar20 = uVar20 + 1;
                          *(undefined4 *)(iVar34 + iVar2) = *(undefined4 *)(iVar35 + iVar33);
                        } while (uVar20 < bVar11);
                      }
                      uVar21 = uVar21 + 1;
                      iVar34 = iVar23 + iVar34;
                      iVar35 = iVar35 + *piVar7;
                    } while (uVar21 < uVar39);
                  }
                }
                uVar36 = uVar36 + 1;
              } while (uVar36 < *(uint *)(param_3 + 8));
            }
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar39 * iVar23;
            *piVar5 = *piVar5 + uVar39;
          }
        }
        local_94 = (uVar27 - uVar37) + local_94;
        local_98 = uVar24 + local_98;
        *piVar6 = *piVar6 + uVar37 * 4;
        iVar23 = uVar37 + *piVar4;
        *piVar4 = iVar23;
      } while (uVar22 <= local_94);
    }
    break;
  case 6:
    if ((2 < param_11) && (local_a8 = param_11 - 2, local_a8 != 0)) {
      piVar4 = (int *)(param_1 + 0x54);
      piVar5 = (int *)(param_1 + 0x6c);
      iVar23 = *piVar5;
      do {
        iVar35 = *piVar4 + *(int *)(param_1 + 0x50);
        if ((0x1000U - iVar35 < 0x10) ||
           (iVar23 = *(int *)(param_1 + 0x68) + iVar23, 0x1000U - iVar23 < 0x10)) {
          uVar16 = (*pcVar14)();
          (*extraout_w11_04)(uVar16,1);
          iVar35 = 0;
          iVar23 = 0;
        }
        uVar27 = (0x1000U - iVar23) / 3;
        uVar22 = 0xffeU - iVar35;
        if (uVar27 <= 0xffeU - iVar35) {
          uVar22 = uVar27;
        }
        if (local_a8 < uVar22) {
          uVar22 = local_a8;
        }
        if (param_4 != '\0') {
          uVar18 = (ulonglong)param_3;
          puVar19 = (undefined4 *)(param_3 + 0xc);
          uVar16 = (*pcVar14)();
          (*extraout_w11_05)(uVar16,4,uVar18 & 0xffffffff,param_5,*puVar19);
        }
        uVar37 = 0;
        uVar27 = 0;
        iVar23 = *piVar4;
        if (param_17 == '\0') {
          if (uVar22 != 0) {
            piVar6 = (int *)(param_1 + 0x1c);
            piVar7 = (int *)(param_1 + 0x18);
            piVar8 = (int *)(param_1 + 100);
            local_68 = 0;
            local_c0 = local_98;
            do {
              if (param_15 == '\0') {
                local_94 = (uint)(ushort)*param_9;
                uVar39 = (uint)*(ushort *)((int)param_9 + local_c0 * 2 + 2) + param_13;
                local_74 = (uint)*(ushort *)((int)param_9 + local_c0 * 2 + 4);
              }
              else {
                local_94 = *param_9;
                local_74 = param_9[local_c0 + 2];
                uVar39 = param_9[local_c0 + 1] + param_13;
                if (uVar39 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_100968f0(iVar3,0,8);
                  *(uint *)(param_1 + 0x40) = uVar39 >> 0x10;
                }
              }
              uVar36 = uVar39 & 0xffff;
              uVar38 = uVar36 >> 0xb;
              if (*(char *)(iVar3 + uVar38) == '\0') {
                *(undefined1 *)(uVar38 + param_1 + 0x20) = 1;
                puVar32 = (undefined8 *)(*piVar6 + uVar38 * 0x100);
                puVar32[1] = 0;
                *puVar32 = 0;
                puVar32[3] = 0;
                puVar32[2] = 0;
                puVar32[5] = 0;
                puVar32[4] = 0;
                puVar32[7] = 0;
                puVar32[6] = 0;
                puVar32[9] = 0;
                puVar32[8] = 0;
                puVar32[0xb] = 0;
                puVar32[10] = 0;
                puVar32[0xd] = 0;
                puVar32[0xc] = 0;
                puVar32[0xf] = 0;
                puVar32[0xe] = 0;
                puVar32[0x11] = 0;
                puVar32[0x10] = 0;
                puVar32[0x13] = 0;
                puVar32[0x12] = 0;
                puVar32[0x15] = 0;
                puVar32[0x14] = 0;
                puVar32[0x17] = 0;
                puVar32[0x16] = 0;
                puVar32[0x19] = 0;
                puVar32[0x18] = 0;
                puVar32[0x1b] = 0;
                puVar32[0x1a] = 0;
                puVar32[0x1d] = 0;
                puVar32[0x1c] = 0;
                puVar32[0x1f] = 0;
                puVar32[0x1e] = 0;
              }
              pbVar9 = (byte *)(*piVar6 + (uVar36 >> 3));
              bVar11 = *pbVar9;
              bVar12 = *(byte *)((uVar39 & 7) + 0x100a2340);
              if ((bVar11 & bVar12) == 0) {
                *pbVar9 = bVar11 | bVar12;
                *(short *)(*piVar7 + uVar36 * 2) = (short)iVar23;
                iVar23 = iVar23 + 1;
                if (uVar37 == uVar27) {
                  uVar27 = uVar39 + 1;
                  uVar37 = uVar39;
                }
                else if (uVar39 == uVar27) {
                  uVar27 = uVar27 + 1;
                }
                else if (uVar39 < uVar37 || uVar27 < uVar39) {
                  uVar38 = *(uint *)(param_1 + 0x4b0);
                  uVar24 = uVar27 - uVar37;
                  if (param_7 == uVar38) {
                    uVar21 = uVar24 * uVar38;
                    puVar32 = (undefined8 *)(param_6 + uVar37 * uVar38);
                    piVar10 = (int *)(param_1 + 0x4c);
                    puVar31 = (undefined8 *)*piVar10;
                    uVar27 = 0;
                    puVar30 = puVar31;
                    if (uVar21 >> 4 != 0) {
                      do {
                        puVar13 = puVar32 + 1;
                        uVar15 = *puVar32;
                        uVar27 = uVar27 + 1;
                        puVar32 = puVar32 + 2;
                        puVar31 = puVar30 + 2;
                        puVar30[1] = *puVar13;
                        *puVar30 = uVar15;
                        puVar30 = puVar31;
                      } while (uVar27 < uVar21 >> 4);
                    }
                    uVar37 = uVar21 >> 2 & 3;
                    uVar27 = 0;
                    if (uVar37 != 0) {
                      do {
                        iVar35 = uVar27 * 4;
                        iVar34 = uVar27 * 4;
                        uVar27 = uVar27 + 1;
                        *(undefined4 *)((int)puVar31 + iVar34) =
                             *(undefined4 *)((int)puVar32 + iVar35);
                      } while (uVar27 < uVar37);
                    }
                    *piVar10 = uVar21 + *piVar10;
                  }
                  else {
                    uVar27 = 0;
                    if (uVar24 != 0) {
                      piVar10 = (int *)(param_1 + 0x4c);
                      uVar21 = uVar38 >> 2 & 3;
                      do {
                        puVar31 = (undefined8 *)*piVar10;
                        puVar32 = (undefined8 *)(param_6 + uVar37 * param_7);
                        uVar20 = 0;
                        puVar30 = puVar31;
                        if (uVar38 >> 4 != 0) {
                          do {
                            puVar13 = puVar32 + 1;
                            uVar15 = *puVar32;
                            uVar20 = uVar20 + 1;
                            puVar32 = puVar32 + 2;
                            puVar31 = puVar30 + 2;
                            puVar30[1] = *puVar13;
                            *puVar30 = uVar15;
                            puVar30 = puVar31;
                          } while (uVar20 < uVar38 >> 4);
                        }
                        uVar20 = 0;
                        if (uVar21 != 0) {
                          do {
                            iVar35 = uVar20 * 4;
                            iVar34 = uVar20 * 4;
                            uVar20 = uVar20 + 1;
                            *(undefined4 *)((int)puVar31 + iVar34) =
                                 *(undefined4 *)((int)puVar32 + iVar35);
                          } while (uVar20 < uVar21);
                        }
                        uVar27 = uVar27 + 1;
                        uVar37 = uVar37 + 1;
                        *piVar10 = uVar38 + *piVar10;
                      } while (uVar27 < uVar24);
                    }
                  }
                  uVar27 = uVar39 + 1;
                  *piVar4 = uVar24 + *piVar4;
                  uVar37 = uVar39;
                }
              }
              *(uint *)*piVar8 = (uint)*(ushort *)(*piVar7 + uVar36 * 2);
              local_74 = local_74 + param_13;
              if (param_15 != '\0') {
                if (local_74 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_100968f0(iVar3,0,8);
                  *(uint *)(param_1 + 0x40) = local_74 >> 0x10;
                }
              }
              uVar39 = local_74 & 0xffff;
              uVar36 = uVar39 >> 0xb;
              if (*(char *)(iVar3 + uVar36) == '\0') {
                *(undefined1 *)(uVar36 + param_1 + 0x20) = 1;
                puVar32 = (undefined8 *)(*piVar6 + uVar36 * 0x100);
                puVar32[1] = 0;
                *puVar32 = 0;
                puVar32[3] = 0;
                puVar32[2] = 0;
                puVar32[5] = 0;
                puVar32[4] = 0;
                puVar32[7] = 0;
                puVar32[6] = 0;
                puVar32[9] = 0;
                puVar32[8] = 0;
                puVar32[0xb] = 0;
                puVar32[10] = 0;
                puVar32[0xd] = 0;
                puVar32[0xc] = 0;
                puVar32[0xf] = 0;
                puVar32[0xe] = 0;
                puVar32[0x11] = 0;
                puVar32[0x10] = 0;
                puVar32[0x13] = 0;
                puVar32[0x12] = 0;
                puVar32[0x15] = 0;
                puVar32[0x14] = 0;
                puVar32[0x17] = 0;
                puVar32[0x16] = 0;
                puVar32[0x19] = 0;
                puVar32[0x18] = 0;
                puVar32[0x1b] = 0;
                puVar32[0x1a] = 0;
                puVar32[0x1d] = 0;
                puVar32[0x1c] = 0;
                puVar32[0x1f] = 0;
                puVar32[0x1e] = 0;
              }
              pbVar9 = (byte *)(*piVar6 + (uVar39 >> 3));
              bVar11 = *pbVar9;
              bVar12 = *(byte *)((local_74 & 7) + 0x100a2340);
              if ((bVar11 & bVar12) == 0) {
                *pbVar9 = bVar11 | bVar12;
                *(short *)(*piVar7 + uVar39 * 2) = (short)iVar23;
                iVar23 = iVar23 + 1;
                if (uVar37 == uVar27) {
LAB_1003b74c:
                  uVar27 = local_74 + 1;
                  uVar37 = local_74;
                }
                else if (local_74 == uVar27) {
                  uVar27 = uVar27 + 1;
                }
                else if (local_74 < uVar37 || uVar27 < local_74) {
                  uVar36 = *(uint *)(param_1 + 0x4b0);
                  uVar27 = uVar27 - uVar37;
                  if (param_7 == uVar36) {
                    uVar38 = uVar27 * uVar36;
                    puVar32 = (undefined8 *)(param_6 + uVar36 * uVar37);
                    piVar10 = (int *)(param_1 + 0x4c);
                    puVar31 = (undefined8 *)*piVar10;
                    uVar37 = 0;
                    puVar30 = puVar31;
                    if (uVar38 >> 4 != 0) {
                      do {
                        puVar13 = puVar32 + 1;
                        uVar15 = *puVar32;
                        uVar37 = uVar37 + 1;
                        puVar32 = puVar32 + 2;
                        puVar31 = puVar30 + 2;
                        puVar30[1] = *puVar13;
                        *puVar30 = uVar15;
                        puVar30 = puVar31;
                      } while (uVar37 < uVar38 >> 4);
                    }
                    uVar36 = uVar38 >> 2 & 3;
                    uVar37 = 0;
                    if (uVar36 != 0) {
                      do {
                        iVar35 = uVar37 * 4;
                        iVar34 = uVar37 * 4;
                        uVar37 = uVar37 + 1;
                        *(undefined4 *)((int)puVar31 + iVar34) =
                             *(undefined4 *)((int)puVar32 + iVar35);
                      } while (uVar37 < uVar36);
                    }
                    *piVar10 = uVar38 + *piVar10;
                  }
                  else {
                    uVar38 = 0;
                    if (uVar27 != 0) {
                      piVar10 = (int *)(param_1 + 0x4c);
                      uVar24 = uVar36 >> 2 & 3;
                      do {
                        puVar31 = (undefined8 *)*piVar10;
                        puVar32 = (undefined8 *)(param_6 + uVar37 * param_7);
                        uVar21 = 0;
                        puVar30 = puVar31;
                        if (uVar36 >> 4 != 0) {
                          do {
                            puVar13 = puVar32 + 1;
                            uVar15 = *puVar32;
                            uVar21 = uVar21 + 1;
                            puVar32 = puVar32 + 2;
                            puVar31 = puVar30 + 2;
                            puVar30[1] = *puVar13;
                            *puVar30 = uVar15;
                            puVar30 = puVar31;
                          } while (uVar21 < uVar36 >> 4);
                        }
                        uVar21 = 0;
                        if (uVar24 != 0) {
                          do {
                            iVar35 = uVar21 * 4;
                            iVar34 = uVar21 * 4;
                            uVar21 = uVar21 + 1;
                            *(undefined4 *)((int)puVar31 + iVar34) =
                                 *(undefined4 *)((int)puVar32 + iVar35);
                          } while (uVar21 < uVar24);
                        }
                        uVar38 = uVar38 + 1;
                        uVar37 = uVar37 + 1;
                        *piVar10 = *piVar10 + uVar36;
                      } while (uVar38 < uVar27);
                    }
                  }
                  *piVar4 = uVar27 + *piVar4;
                  goto LAB_1003b74c;
                }
              }
              *(uint *)(*piVar8 + 4) = (uint)*(ushort *)(*piVar7 + uVar39 * 2);
              local_94 = local_94 + param_13;
              if (param_15 != '\0') {
                if (local_94 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_100968f0(iVar3,0,8);
                  *(uint *)(param_1 + 0x40) = local_94 >> 0x10;
                }
              }
              uVar39 = local_94 & 0xffff;
              uVar36 = uVar39 >> 0xb;
              if (*(char *)(iVar3 + uVar36) == '\0') {
                *(undefined1 *)(uVar36 + param_1 + 0x20) = 1;
                puVar32 = (undefined8 *)(*piVar6 + uVar36 * 0x100);
                puVar32[1] = 0;
                *puVar32 = 0;
                puVar32[3] = 0;
                puVar32[2] = 0;
                puVar32[5] = 0;
                puVar32[4] = 0;
                puVar32[7] = 0;
                puVar32[6] = 0;
                puVar32[9] = 0;
                puVar32[8] = 0;
                puVar32[0xb] = 0;
                puVar32[10] = 0;
                puVar32[0xd] = 0;
                puVar32[0xc] = 0;
                puVar32[0xf] = 0;
                puVar32[0xe] = 0;
                puVar32[0x11] = 0;
                puVar32[0x10] = 0;
                puVar32[0x13] = 0;
                puVar32[0x12] = 0;
                puVar32[0x15] = 0;
                puVar32[0x14] = 0;
                puVar32[0x17] = 0;
                puVar32[0x16] = 0;
                puVar32[0x19] = 0;
                puVar32[0x18] = 0;
                puVar32[0x1b] = 0;
                puVar32[0x1a] = 0;
                puVar32[0x1d] = 0;
                puVar32[0x1c] = 0;
                puVar32[0x1f] = 0;
                puVar32[0x1e] = 0;
              }
              pbVar9 = (byte *)(*piVar6 + (uVar39 >> 3));
              bVar11 = *pbVar9;
              bVar12 = *(byte *)((local_94 & 7) + 0x100a2340);
              if ((bVar11 & bVar12) == 0) {
                *pbVar9 = bVar11 | bVar12;
                *(short *)(*piVar7 + uVar39 * 2) = (short)iVar23;
                iVar23 = iVar23 + 1;
                if (uVar37 == uVar27) {
LAB_1003b9c8:
                  uVar27 = local_94 + 1;
                  uVar37 = local_94;
                }
                else if (local_94 == uVar27) {
                  uVar27 = uVar27 + 1;
                }
                else if (local_94 < uVar37 || uVar27 < local_94) {
                  uVar36 = *(uint *)(param_1 + 0x4b0);
                  uVar27 = uVar27 - uVar37;
                  if (param_7 == uVar36) {
                    uVar38 = uVar27 * uVar36;
                    puVar32 = (undefined8 *)(param_6 + uVar36 * uVar37);
                    piVar10 = (int *)(param_1 + 0x4c);
                    puVar31 = (undefined8 *)*piVar10;
                    uVar37 = 0;
                    puVar30 = puVar31;
                    if (uVar38 >> 4 != 0) {
                      do {
                        puVar13 = puVar32 + 1;
                        uVar15 = *puVar32;
                        uVar37 = uVar37 + 1;
                        puVar32 = puVar32 + 2;
                        puVar31 = puVar30 + 2;
                        puVar30[1] = *puVar13;
                        *puVar30 = uVar15;
                        puVar30 = puVar31;
                      } while (uVar37 < uVar38 >> 4);
                    }
                    uVar36 = uVar38 >> 2 & 3;
                    uVar37 = 0;
                    if (uVar36 != 0) {
                      do {
                        iVar35 = uVar37 * 4;
                        iVar34 = uVar37 * 4;
                        uVar37 = uVar37 + 1;
                        *(undefined4 *)((int)puVar31 + iVar34) =
                             *(undefined4 *)((int)puVar32 + iVar35);
                      } while (uVar37 < uVar36);
                    }
                    *piVar10 = *piVar10 + uVar38;
                  }
                  else {
                    uVar38 = 0;
                    if (uVar27 != 0) {
                      piVar10 = (int *)(param_1 + 0x4c);
                      uVar24 = uVar36 >> 2 & 3;
                      do {
                        puVar31 = (undefined8 *)*piVar10;
                        puVar32 = (undefined8 *)(param_6 + uVar37 * param_7);
                        uVar21 = 0;
                        puVar30 = puVar31;
                        if (uVar36 >> 4 != 0) {
                          do {
                            puVar13 = puVar32 + 1;
                            uVar15 = *puVar32;
                            uVar21 = uVar21 + 1;
                            puVar32 = puVar32 + 2;
                            puVar31 = puVar30 + 2;
                            puVar30[1] = *puVar13;
                            *puVar30 = uVar15;
                            puVar30 = puVar31;
                          } while (uVar21 < uVar36 >> 4);
                        }
                        uVar21 = 0;
                        if (uVar24 != 0) {
                          do {
                            iVar35 = uVar21 * 4;
                            iVar34 = uVar21 * 4;
                            uVar21 = uVar21 + 1;
                            *(undefined4 *)((int)puVar31 + iVar34) =
                                 *(undefined4 *)((int)puVar32 + iVar35);
                          } while (uVar21 < uVar24);
                        }
                        uVar38 = uVar38 + 1;
                        uVar37 = uVar37 + 1;
                        *piVar10 = *piVar10 + uVar36;
                      } while (uVar38 < uVar27);
                    }
                  }
                  *piVar4 = uVar27 + *piVar4;
                  goto LAB_1003b9c8;
                }
              }
              *(uint *)(*piVar8 + 8) = (uint)*(ushort *)(*piVar7 + uVar39 * 2);
              *piVar8 = *piVar8 + 0xc;
              local_c0 = local_c0 + 1;
              local_68 = local_68 + 1;
            } while (local_68 < uVar22);
            if (uVar27 != uVar37) {
              uVar27 = uVar27 - uVar37;
              uVar39 = *(uint *)(param_1 + 0x4b0);
              if (param_7 == uVar39) {
                uVar36 = uVar39 * uVar27;
                puVar32 = (undefined8 *)(param_6 + uVar39 * uVar37);
                piVar6 = (int *)(param_1 + 0x4c);
                puVar31 = (undefined8 *)*piVar6;
                uVar37 = 0;
                puVar30 = puVar31;
                if (uVar36 >> 4 != 0) {
                  do {
                    puVar13 = puVar32 + 1;
                    uVar15 = *puVar32;
                    uVar37 = uVar37 + 1;
                    puVar32 = puVar32 + 2;
                    puVar31 = puVar30 + 2;
                    puVar30[1] = *puVar13;
                    *puVar30 = uVar15;
                    puVar30 = puVar31;
                  } while (uVar37 < uVar36 >> 4);
                }
                uVar39 = uVar36 >> 2 & 3;
                uVar37 = 0;
                if (uVar39 != 0) {
                  do {
                    iVar23 = uVar37 * 4;
                    iVar35 = uVar37 * 4;
                    uVar37 = uVar37 + 1;
                    *(undefined4 *)((int)puVar31 + iVar35) = *(undefined4 *)((int)puVar32 + iVar23);
                  } while (uVar37 < uVar39);
                }
                *piVar6 = uVar36 + *piVar6;
              }
              else {
                uVar36 = 0;
                if (uVar27 != 0) {
                  piVar6 = (int *)(param_1 + 0x4c);
                  uVar38 = uVar39 >> 2 & 3;
                  do {
                    puVar31 = (undefined8 *)*piVar6;
                    puVar32 = (undefined8 *)(param_6 + uVar37 * param_7);
                    uVar24 = 0;
                    puVar30 = puVar31;
                    if (uVar39 >> 4 != 0) {
                      do {
                        puVar13 = puVar32 + 1;
                        uVar15 = *puVar32;
                        uVar24 = uVar24 + 1;
                        puVar32 = puVar32 + 2;
                        puVar31 = puVar30 + 2;
                        puVar30[1] = *puVar13;
                        *puVar30 = uVar15;
                        puVar30 = puVar31;
                      } while (uVar24 < uVar39 >> 4);
                    }
                    uVar24 = 0;
                    if (uVar38 != 0) {
                      do {
                        iVar23 = uVar24 * 4;
                        iVar35 = uVar24 * 4;
                        uVar24 = uVar24 + 1;
                        *(undefined4 *)((int)puVar31 + iVar35) =
                             *(undefined4 *)((int)puVar32 + iVar23);
                      } while (uVar24 < uVar38);
                    }
                    uVar36 = uVar36 + 1;
                    uVar37 = uVar37 + 1;
                    *piVar6 = uVar39 + *piVar6;
                  } while (uVar36 < uVar27);
                }
              }
              *piVar4 = uVar27 + *piVar4;
            }
          }
        }
        else if (uVar22 != 0) {
          piVar6 = (int *)(param_1 + 0x1c);
          piVar7 = (int *)(param_1 + 0x18);
          piVar8 = (int *)(param_1 + 100);
          local_b4 = 0;
          local_c0 = local_98;
          do {
            if (param_15 == '\0') {
              uVar38 = (uint)(ushort)*param_9;
              uVar39 = (uint)*(ushort *)((int)param_9 + local_c0 * 2 + 2) + param_13;
              uVar36 = (uint)*(ushort *)((int)param_9 + local_c0 * 2 + 4);
            }
            else {
              uVar38 = *param_9;
              uVar36 = param_9[local_c0 + 2];
              uVar39 = param_9[local_c0 + 1] + param_13;
              if (uVar39 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_100968f0(iVar3,0,8);
                *(uint *)(param_1 + 0x40) = uVar39 >> 0x10;
              }
            }
            uVar24 = uVar39 & 0xffff;
            uVar21 = uVar24 >> 0xb;
            if (*(char *)(uVar21 + iVar3) == '\0') {
              *(undefined1 *)(uVar21 + param_1 + 0x20) = 1;
              puVar32 = (undefined8 *)(*piVar6 + uVar21 * 0x100);
              puVar32[1] = 0;
              *puVar32 = 0;
              puVar32[3] = 0;
              puVar32[2] = 0;
              puVar32[5] = 0;
              puVar32[4] = 0;
              puVar32[7] = 0;
              puVar32[6] = 0;
              puVar32[9] = 0;
              puVar32[8] = 0;
              puVar32[0xb] = 0;
              puVar32[10] = 0;
              puVar32[0xd] = 0;
              puVar32[0xc] = 0;
              puVar32[0xf] = 0;
              puVar32[0xe] = 0;
              puVar32[0x11] = 0;
              puVar32[0x10] = 0;
              puVar32[0x13] = 0;
              puVar32[0x12] = 0;
              puVar32[0x15] = 0;
              puVar32[0x14] = 0;
              puVar32[0x17] = 0;
              puVar32[0x16] = 0;
              puVar32[0x19] = 0;
              puVar32[0x18] = 0;
              puVar32[0x1b] = 0;
              puVar32[0x1a] = 0;
              puVar32[0x1d] = 0;
              puVar32[0x1c] = 0;
              puVar32[0x1f] = 0;
              puVar32[0x1e] = 0;
            }
            bVar11 = *(byte *)((uVar39 & 7) + 0x100a2338);
            pbVar9 = (byte *)(*piVar6 + (uVar24 >> 3));
            bVar12 = *pbVar9;
            if ((bVar11 & bVar12) == 0) {
              *pbVar9 = bVar11 | bVar12;
              *(short *)(*piVar7 + uVar24 * 2) = (short)iVar23;
              iVar23 = iVar23 + 1;
              if (uVar37 == uVar27) {
                uVar27 = uVar39 + 1;
                uVar37 = uVar39;
              }
              else if (uVar39 == uVar27) {
                uVar27 = uVar27 + 1;
              }
              else if (uVar39 < uVar37 || uVar27 < uVar39) {
                iVar35 = *(int *)(param_1 + 0x4b0);
                uVar21 = 0;
                uVar20 = uVar27 - uVar37;
                if (*(uint *)(param_3 + 8) != 0) {
                  do {
                    piVar10 = (int *)(param_6 + uVar21 * 8);
                    iVar34 = *piVar10;
                    if (iVar34 != 0) {
                      piVar10 = piVar10 + 1;
                      iVar34 = iVar34 + uVar37 * *piVar10;
                      iVar33 = param_3 + (uint)*(byte *)(uVar21 + param_3 + 0x9c) * 8;
                      uVar27 = 0;
                      bVar11 = *(byte *)(iVar33 + 0x16) >> 2;
                      if (uVar20 != 0) {
                        iVar33 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar33 + 0x17) * 4;
                        do {
                          uVar28 = 0;
                          if (bVar11 != 0) {
                            do {
                              iVar2 = uVar28 * 4;
                              iVar1 = uVar28 * 4;
                              uVar28 = uVar28 + 1;
                              *(undefined4 *)(iVar33 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                            } while (uVar28 < bVar11);
                          }
                          uVar27 = uVar27 + 1;
                          iVar33 = iVar33 + iVar35;
                          iVar34 = iVar34 + *piVar10;
                        } while (uVar27 < uVar20);
                      }
                    }
                    uVar21 = uVar21 + 1;
                  } while (uVar21 < *(uint *)(param_3 + 8));
                }
                uVar27 = uVar39 + 1;
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar20 * iVar35;
                *piVar4 = uVar20 + *piVar4;
                uVar37 = uVar39;
              }
            }
            *(uint *)*piVar8 = (uint)*(ushort *)(*piVar7 + uVar24 * 2);
            uVar36 = uVar36 + param_13;
            if (param_15 != '\0') {
              if (uVar36 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_100968f0(iVar3,0,8);
                *(uint *)(param_1 + 0x40) = uVar36 >> 0x10;
              }
            }
            uVar39 = uVar36 & 0xffff;
            uVar24 = uVar39 >> 0xb;
            if (*(char *)(uVar24 + iVar3) == '\0') {
              *(undefined1 *)(uVar24 + param_1 + 0x20) = 1;
              puVar32 = (undefined8 *)(*piVar6 + uVar24 * 0x100);
              puVar32[1] = 0;
              *puVar32 = 0;
              puVar32[3] = 0;
              puVar32[2] = 0;
              puVar32[5] = 0;
              puVar32[4] = 0;
              puVar32[7] = 0;
              puVar32[6] = 0;
              puVar32[9] = 0;
              puVar32[8] = 0;
              puVar32[0xb] = 0;
              puVar32[10] = 0;
              puVar32[0xd] = 0;
              puVar32[0xc] = 0;
              puVar32[0xf] = 0;
              puVar32[0xe] = 0;
              puVar32[0x11] = 0;
              puVar32[0x10] = 0;
              puVar32[0x13] = 0;
              puVar32[0x12] = 0;
              puVar32[0x15] = 0;
              puVar32[0x14] = 0;
              puVar32[0x17] = 0;
              puVar32[0x16] = 0;
              puVar32[0x19] = 0;
              puVar32[0x18] = 0;
              puVar32[0x1b] = 0;
              puVar32[0x1a] = 0;
              puVar32[0x1d] = 0;
              puVar32[0x1c] = 0;
              puVar32[0x1f] = 0;
              puVar32[0x1e] = 0;
            }
            bVar11 = *(byte *)((uVar36 & 7) + 0x100a2338);
            pbVar9 = (byte *)(*piVar6 + (uVar39 >> 3));
            bVar12 = *pbVar9;
            if ((bVar11 & bVar12) == 0) {
              *pbVar9 = bVar11 | bVar12;
              *(short *)(*piVar7 + uVar39 * 2) = (short)iVar23;
              iVar23 = iVar23 + 1;
              if (uVar37 == uVar27) {
LAB_1003ae1c:
                uVar27 = uVar36 + 1;
                uVar37 = uVar36;
              }
              else if (uVar36 == uVar27) {
                uVar27 = uVar27 + 1;
              }
              else if (uVar36 < uVar37 || uVar27 < uVar36) {
                iVar35 = *(int *)(param_1 + 0x4b0);
                uVar24 = 0;
                uVar27 = uVar27 - uVar37;
                if (*(uint *)(param_3 + 8) != 0) {
                  do {
                    piVar10 = (int *)(param_6 + uVar24 * 8);
                    iVar34 = *piVar10;
                    if (iVar34 != 0) {
                      piVar10 = piVar10 + 1;
                      iVar34 = iVar34 + *piVar10 * uVar37;
                      iVar33 = param_3 + (uint)*(byte *)(param_3 + uVar24 + 0x9c) * 8;
                      uVar21 = 0;
                      bVar11 = *(byte *)(iVar33 + 0x16) >> 2;
                      if (uVar27 != 0) {
                        iVar33 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar33 + 0x17) * 4;
                        do {
                          uVar20 = 0;
                          if (bVar11 != 0) {
                            do {
                              iVar2 = uVar20 * 4;
                              iVar1 = uVar20 * 4;
                              uVar20 = uVar20 + 1;
                              *(undefined4 *)(iVar33 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                            } while (uVar20 < bVar11);
                          }
                          uVar21 = uVar21 + 1;
                          iVar33 = iVar35 + iVar33;
                          iVar34 = *piVar10 + iVar34;
                        } while (uVar21 < uVar27);
                      }
                    }
                    uVar24 = uVar24 + 1;
                  } while (uVar24 < *(uint *)(param_3 + 8));
                }
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar27 * iVar35;
                *piVar4 = uVar27 + *piVar4;
                goto LAB_1003ae1c;
              }
            }
            *(uint *)(*piVar8 + 4) = (uint)*(ushort *)(*piVar7 + uVar39 * 2);
            uVar38 = uVar38 + param_13;
            if (param_15 != '\0') {
              if (uVar38 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_100968f0(iVar3,0,8);
                *(uint *)(param_1 + 0x40) = uVar38 >> 0x10;
              }
            }
            uVar39 = uVar38 & 0xffff;
            uVar36 = uVar39 >> 0xb;
            if (*(char *)(iVar3 + uVar36) == '\0') {
              *(undefined1 *)(uVar36 + param_1 + 0x20) = 1;
              puVar32 = (undefined8 *)(*piVar6 + uVar36 * 0x100);
              puVar32[1] = 0;
              *puVar32 = 0;
              puVar32[3] = 0;
              puVar32[2] = 0;
              puVar32[5] = 0;
              puVar32[4] = 0;
              puVar32[7] = 0;
              puVar32[6] = 0;
              puVar32[9] = 0;
              puVar32[8] = 0;
              puVar32[0xb] = 0;
              puVar32[10] = 0;
              puVar32[0xd] = 0;
              puVar32[0xc] = 0;
              puVar32[0xf] = 0;
              puVar32[0xe] = 0;
              puVar32[0x11] = 0;
              puVar32[0x10] = 0;
              puVar32[0x13] = 0;
              puVar32[0x12] = 0;
              puVar32[0x15] = 0;
              puVar32[0x14] = 0;
              puVar32[0x17] = 0;
              puVar32[0x16] = 0;
              puVar32[0x19] = 0;
              puVar32[0x18] = 0;
              puVar32[0x1b] = 0;
              puVar32[0x1a] = 0;
              puVar32[0x1d] = 0;
              puVar32[0x1c] = 0;
              puVar32[0x1f] = 0;
              puVar32[0x1e] = 0;
            }
            pbVar9 = (byte *)(*piVar6 + (uVar39 >> 3));
            bVar11 = *pbVar9;
            bVar12 = *(byte *)((uVar38 & 7) + 0x100a2338);
            if ((bVar11 & bVar12) == 0) {
              *pbVar9 = bVar11 | bVar12;
              *(short *)(*piVar7 + uVar39 * 2) = (short)iVar23;
              iVar23 = iVar23 + 1;
              if (uVar37 == uVar27) {
LAB_1003b040:
                uVar27 = uVar38 + 1;
                uVar37 = uVar38;
              }
              else if (uVar38 == uVar27) {
                uVar27 = uVar27 + 1;
              }
              else if (uVar38 < uVar37 || uVar27 < uVar38) {
                iVar35 = *(int *)(param_1 + 0x4b0);
                uVar36 = 0;
                uVar27 = uVar27 - uVar37;
                if (*(uint *)(param_3 + 8) != 0) {
                  do {
                    piVar10 = (int *)(param_6 + uVar36 * 8);
                    iVar34 = *piVar10;
                    if (iVar34 != 0) {
                      piVar10 = piVar10 + 1;
                      iVar34 = iVar34 + *piVar10 * uVar37;
                      iVar33 = param_3 + (uint)*(byte *)(uVar36 + param_3 + 0x9c) * 8;
                      uVar24 = 0;
                      bVar11 = *(byte *)(iVar33 + 0x16) >> 2;
                      if (uVar27 != 0) {
                        iVar33 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar33 + 0x17) * 4;
                        do {
                          uVar21 = 0;
                          if (bVar11 != 0) {
                            do {
                              iVar2 = uVar21 * 4;
                              iVar1 = uVar21 * 4;
                              uVar21 = uVar21 + 1;
                              *(undefined4 *)(iVar33 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                            } while (uVar21 < bVar11);
                          }
                          uVar24 = uVar24 + 1;
                          iVar33 = iVar35 + iVar33;
                          iVar34 = *piVar10 + iVar34;
                        } while (uVar24 < uVar27);
                      }
                    }
                    uVar36 = uVar36 + 1;
                  } while (uVar36 < *(uint *)(param_3 + 8));
                }
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar27 * iVar35;
                *piVar4 = uVar27 + *piVar4;
                goto LAB_1003b040;
              }
            }
            *(uint *)(*piVar8 + 8) = (uint)*(ushort *)(*piVar7 + uVar39 * 2);
            *piVar8 = *piVar8 + 0xc;
            local_c0 = local_c0 + 1;
            local_b4 = local_b4 + 1;
          } while (local_b4 < uVar22);
          if (uVar27 != uVar37) {
            uVar27 = uVar27 - uVar37;
            iVar23 = *(int *)(param_1 + 0x4b0);
            uVar39 = 0;
            if (*(uint *)(param_3 + 8) != 0) {
              do {
                piVar6 = (int *)(param_6 + uVar39 * 8);
                iVar35 = *piVar6;
                if (iVar35 != 0) {
                  piVar6 = piVar6 + 1;
                  iVar35 = iVar35 + *piVar6 * uVar37;
                  iVar34 = param_3 + (uint)*(byte *)(uVar39 + param_3 + 0x9c) * 8;
                  bVar11 = *(byte *)(iVar34 + 0x16) >> 2;
                  uVar36 = 0;
                  if (uVar27 != 0) {
                    iVar34 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar34 + 0x17) * 4;
                    do {
                      uVar38 = 0;
                      if (bVar11 != 0) {
                        do {
                          iVar33 = uVar38 * 4;
                          iVar2 = uVar38 * 4;
                          uVar38 = uVar38 + 1;
                          *(undefined4 *)(iVar34 + iVar2) = *(undefined4 *)(iVar35 + iVar33);
                        } while (uVar38 < bVar11);
                      }
                      uVar36 = uVar36 + 1;
                      iVar34 = iVar34 + iVar23;
                      iVar35 = *piVar6 + iVar35;
                    } while (uVar36 < uVar27);
                  }
                }
                uVar39 = uVar39 + 1;
              } while (uVar39 < *(uint *)(param_3 + 8));
            }
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar23 * uVar27;
            *piVar4 = uVar27 + *piVar4;
          }
        }
        local_a8 = local_a8 - uVar22;
        iVar23 = uVar22 * 3 + *piVar5;
        *piVar5 = iVar23;
        local_98 = uVar22 + local_98;
      } while (local_a8 != 0);
    }
  }
  return;
}

