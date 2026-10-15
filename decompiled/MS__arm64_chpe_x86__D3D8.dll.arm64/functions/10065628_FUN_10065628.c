/*
 * FUN_10065628 at 10065628
 * undefined FUN_10065628(void)
 * Address ranges: 10065628-10068657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10065628(int param_1,int param_2,int param_3,char param_4,undefined4 param_5,int param_6,
                 uint param_7,undefined8 param_8,uint *param_9,undefined4 param_10,uint param_11,
                 undefined4 param_12,int param_13,undefined4 param_14,char param_15,
                 undefined4 param_16,char param_17,undefined4 param_18,undefined1 param_19,
                 undefined4 param_20,undefined1 param_21)

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
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined8 *puVar31;
  undefined8 *puVar32;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  undefined8 *puVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint local_e4;
  uint local_dc;
  int local_c8;
  int local_ac;
  uint local_a8;
  uint local_94;
  uint local_84;
  
  iVar3 = param_1 + 0x20;
  FUN_10121220(iVar3,0,8);
  pcVar14 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar23 = 3;
  local_ac = 0;
  switch(param_2) {
  case 1:
  case 2:
    uVar23 = 1;
    if (param_2 == 2) {
      uVar23 = 2;
    }
  case 4:
    if (uVar23 == 0) {
                    /* WARNING: Does not return */
      uVar15 = SoftwareBreakpoint(0xf004,0x100656c4);
      (*(code *)uVar15)();
    }
    local_94 = 0;
    if (uVar23 != 0) {
      local_94 = param_11 / uVar23;
    }
    local_94 = local_94 * uVar23;
    if (local_94 != 0) {
      piVar4 = (int *)(param_1 + 0x54);
      piVar5 = (int *)(param_1 + 100);
      piVar6 = (int *)(param_1 + 0x6c);
      iVar24 = *piVar6;
      do {
        if (((uint)((0x1000 - *piVar4) - *(int *)(param_1 + 0x50)) < 0x10) ||
           (iVar24 = *(int *)(param_1 + 0x68) + iVar24, 0x1000U - iVar24 < 0x10)) {
          uVar16 = (*pcVar14)();
          (*extraout_w11)(uVar16,1);
          iVar24 = 0;
        }
        if (uVar23 == 0) {
                    /* WARNING: Does not return */
          uVar15 = SoftwareBreakpoint(0xf004,0x100657ac);
          (*(code *)uVar15)();
        }
        uVar28 = 0;
        if (uVar23 != 0) {
          uVar28 = (0x1000U - iVar24) / uVar23;
        }
        uVar28 = (0x1000 - ((0x1000U - iVar24) - uVar28 * uVar23)) - iVar24;
        if (local_94 < uVar28) {
          uVar28 = local_94;
        }
        uVar18 = (ulonglong)uVar28;
        uVar17 = (ulonglong)*(uint *)(param_3 + 0xc);
        if (param_4 == '\0') {
          (*pcVar14)();
          (*extraout_w11_01)(param_1,param_2,param_5,uVar17 & 0xffffffff,uVar18 & 0xffffffff,
                             uVar18 & 0xffffffff,param_21);
        }
        else {
          (*pcVar14)();
          (*extraout_w11_00)(param_1,param_2,param_3,param_5,uVar17 & 0xffffffff,uVar18 & 0xffffffff
                             ,uVar18 & 0xffffffff,param_19);
        }
        uVar38 = 0;
        uVar36 = 0;
        uVar39 = 0;
        iVar24 = *piVar4;
        if (param_17 == '\0') {
          if (uVar28 != 0) {
            do {
              if (param_15 == '\0') {
                uVar37 = (uint)*(ushort *)((int)param_9 + (uVar39 + local_ac) * 2) + param_13;
              }
              else {
                uVar37 = param_9[uVar39 + local_ac] + param_13;
                if (uVar37 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_10121220(iVar3,0,8);
                  *(uint *)(param_1 + 0x40) = uVar37 >> 0x10;
                }
              }
              uVar25 = uVar37 & 0xffff;
              uVar21 = uVar25 >> 0xb;
              if (*(char *)(uVar21 + iVar3) == '\0') {
                *(undefined1 *)(uVar21 + param_1 + 0x20) = 1;
                puVar33 = (undefined8 *)(*(int *)(param_1 + 0x1c) + uVar21 * 0x100);
                puVar33[1] = 0;
                *puVar33 = 0;
                puVar33[3] = 0;
                puVar33[2] = 0;
                puVar33[5] = 0;
                puVar33[4] = 0;
                puVar33[7] = 0;
                puVar33[6] = 0;
                puVar33[9] = 0;
                puVar33[8] = 0;
                puVar33[0xb] = 0;
                puVar33[10] = 0;
                puVar33[0xd] = 0;
                puVar33[0xc] = 0;
                puVar33[0xf] = 0;
                puVar33[0xe] = 0;
                puVar33[0x11] = 0;
                puVar33[0x10] = 0;
                puVar33[0x13] = 0;
                puVar33[0x12] = 0;
                puVar33[0x15] = 0;
                puVar33[0x14] = 0;
                puVar33[0x17] = 0;
                puVar33[0x16] = 0;
                puVar33[0x19] = 0;
                puVar33[0x18] = 0;
                puVar33[0x1b] = 0;
                puVar33[0x1a] = 0;
                puVar33[0x1d] = 0;
                puVar33[0x1c] = 0;
                puVar33[0x1f] = 0;
                puVar33[0x1e] = 0;
              }
              pbVar9 = (byte *)(*(int *)(param_1 + 0x1c) + (uVar25 >> 3));
              bVar11 = *pbVar9;
              bVar12 = *(byte *)((uVar37 & 7) + 0x1012baa0);
              if ((bVar11 & bVar12) == 0) {
                *pbVar9 = bVar11 | bVar12;
                *(short *)(*(int *)(param_1 + 0x18) + uVar25 * 2) = (short)iVar24;
                iVar24 = iVar24 + 1;
                if (uVar38 == uVar36) {
                  uVar36 = uVar37 + 1;
                  uVar38 = uVar37;
                }
                else if (uVar37 == uVar36) {
                  uVar36 = uVar36 + 1;
                }
                else if (uVar37 < uVar38 || uVar36 < uVar37) {
                  uVar21 = *(uint *)(param_1 + 0x6a8);
                  uVar22 = uVar36 - uVar38;
                  if (param_7 == uVar21) {
                    uVar29 = uVar22 * uVar21;
                    puVar33 = (undefined8 *)(param_6 + uVar21 * uVar38);
                    piVar7 = (int *)(param_1 + 0x4c);
                    puVar32 = (undefined8 *)*piVar7;
                    uVar36 = 0;
                    puVar31 = puVar32;
                    if (uVar29 >> 4 != 0) {
                      do {
                        puVar13 = puVar33 + 1;
                        uVar15 = *puVar33;
                        uVar36 = uVar36 + 1;
                        puVar33 = puVar33 + 2;
                        puVar32 = puVar31 + 2;
                        puVar31[1] = *puVar13;
                        *puVar31 = uVar15;
                        puVar31 = puVar32;
                      } while (uVar36 < uVar29 >> 4);
                    }
                    uVar38 = uVar29 >> 2 & 3;
                    uVar36 = 0;
                    if (uVar38 != 0) {
                      do {
                        iVar35 = uVar36 * 4;
                        iVar34 = uVar36 * 4;
                        uVar36 = uVar36 + 1;
                        *(undefined4 *)((int)puVar32 + iVar34) =
                             *(undefined4 *)((int)puVar33 + iVar35);
                      } while (uVar36 < uVar38);
                    }
                    *piVar7 = uVar29 + *piVar7;
                  }
                  else {
                    uVar36 = 0;
                    if (uVar22 != 0) {
                      piVar7 = (int *)(param_1 + 0x4c);
                      uVar29 = uVar21 >> 2 & 3;
                      do {
                        puVar32 = (undefined8 *)*piVar7;
                        puVar33 = (undefined8 *)(param_6 + uVar38 * param_7);
                        uVar26 = 0;
                        puVar31 = puVar32;
                        if (uVar21 >> 4 != 0) {
                          do {
                            puVar13 = puVar33 + 1;
                            uVar15 = *puVar33;
                            uVar26 = uVar26 + 1;
                            puVar33 = puVar33 + 2;
                            puVar32 = puVar31 + 2;
                            puVar31[1] = *puVar13;
                            *puVar31 = uVar15;
                            puVar31 = puVar32;
                          } while (uVar26 < uVar21 >> 4);
                        }
                        uVar26 = 0;
                        if (uVar29 != 0) {
                          do {
                            iVar35 = uVar26 * 4;
                            iVar34 = uVar26 * 4;
                            uVar26 = uVar26 + 1;
                            *(undefined4 *)((int)puVar32 + iVar34) =
                                 *(undefined4 *)((int)puVar33 + iVar35);
                          } while (uVar26 < uVar29);
                        }
                        uVar36 = uVar36 + 1;
                        uVar38 = uVar38 + 1;
                        *piVar7 = uVar21 + *piVar7;
                      } while (uVar36 < uVar22);
                    }
                  }
                  uVar36 = uVar37 + 1;
                  *piVar4 = uVar22 + *piVar4;
                  uVar38 = uVar37;
                }
              }
              iVar35 = uVar39 * 4;
              uVar39 = uVar39 + 1;
              *(uint *)(*piVar5 + iVar35) = (uint)*(ushort *)(*(int *)(param_1 + 0x18) + uVar25 * 2)
              ;
            } while (uVar39 < uVar28);
            if (uVar36 != uVar38) {
              uVar36 = uVar36 - uVar38;
              uVar39 = *(uint *)(param_1 + 0x6a8);
              if (param_7 == uVar39) {
                uVar37 = uVar39 * uVar36;
                puVar33 = (undefined8 *)(param_6 + uVar39 * uVar38);
                piVar7 = (int *)(param_1 + 0x4c);
                puVar32 = (undefined8 *)*piVar7;
                uVar39 = 0;
                puVar31 = puVar32;
                if (uVar37 >> 4 != 0) {
                  do {
                    puVar13 = puVar33 + 1;
                    uVar15 = *puVar33;
                    uVar39 = uVar39 + 1;
                    puVar33 = puVar33 + 2;
                    puVar32 = puVar31 + 2;
                    puVar31[1] = *puVar13;
                    *puVar31 = uVar15;
                    puVar31 = puVar32;
                  } while (uVar39 < uVar37 >> 4);
                }
                uVar38 = uVar37 >> 2 & 3;
                uVar39 = 0;
                if (uVar38 != 0) {
                  do {
                    iVar24 = uVar39 * 4;
                    iVar35 = uVar39 * 4;
                    uVar39 = uVar39 + 1;
                    *(undefined4 *)((int)puVar32 + iVar35) = *(undefined4 *)((int)puVar33 + iVar24);
                  } while (uVar39 < uVar38);
                }
                *piVar7 = *piVar7 + uVar37;
              }
              else {
                uVar37 = 0;
                if (uVar36 != 0) {
                  piVar7 = (int *)(param_1 + 0x4c);
                  uVar25 = uVar39 >> 2 & 3;
                  do {
                    puVar32 = (undefined8 *)*piVar7;
                    puVar33 = (undefined8 *)(param_6 + uVar38 * param_7);
                    uVar21 = 0;
                    puVar31 = puVar32;
                    if (uVar39 >> 4 != 0) {
                      do {
                        puVar13 = puVar33 + 1;
                        uVar15 = *puVar33;
                        uVar21 = uVar21 + 1;
                        puVar33 = puVar33 + 2;
                        puVar32 = puVar31 + 2;
                        puVar31[1] = *puVar13;
                        *puVar31 = uVar15;
                        puVar31 = puVar32;
                      } while (uVar21 < uVar39 >> 4);
                    }
                    uVar21 = 0;
                    if (uVar25 != 0) {
                      do {
                        iVar24 = uVar21 * 4;
                        iVar35 = uVar21 * 4;
                        uVar21 = uVar21 + 1;
                        *(undefined4 *)((int)puVar32 + iVar35) =
                             *(undefined4 *)((int)puVar33 + iVar24);
                      } while (uVar21 < uVar25);
                    }
                    uVar37 = uVar37 + 1;
                    uVar38 = uVar38 + 1;
                    *piVar7 = *piVar7 + uVar39;
                  } while (uVar37 < uVar36);
                }
              }
              *piVar4 = *piVar4 + uVar36;
            }
          }
        }
        else if (uVar28 != 0) {
          do {
            if (param_15 == '\0') {
              uVar37 = (uint)*(ushort *)((int)param_9 + (uVar39 + local_ac) * 2) + param_13;
            }
            else {
              uVar37 = param_9[uVar39 + local_ac] + param_13;
              if (uVar37 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_10121220(iVar3,0,8);
                *(uint *)(param_1 + 0x40) = uVar37 >> 0x10;
              }
            }
            uVar25 = uVar37 & 0xffff;
            uVar21 = uVar25 >> 0xb;
            if (*(char *)(uVar21 + iVar3) == '\0') {
              *(undefined1 *)(uVar21 + param_1 + 0x20) = 1;
              puVar33 = (undefined8 *)(*(int *)(param_1 + 0x1c) + uVar21 * 0x100);
              puVar33[1] = 0;
              *puVar33 = 0;
              puVar33[3] = 0;
              puVar33[2] = 0;
              puVar33[5] = 0;
              puVar33[4] = 0;
              puVar33[7] = 0;
              puVar33[6] = 0;
              puVar33[9] = 0;
              puVar33[8] = 0;
              puVar33[0xb] = 0;
              puVar33[10] = 0;
              puVar33[0xd] = 0;
              puVar33[0xc] = 0;
              puVar33[0xf] = 0;
              puVar33[0xe] = 0;
              puVar33[0x11] = 0;
              puVar33[0x10] = 0;
              puVar33[0x13] = 0;
              puVar33[0x12] = 0;
              puVar33[0x15] = 0;
              puVar33[0x14] = 0;
              puVar33[0x17] = 0;
              puVar33[0x16] = 0;
              puVar33[0x19] = 0;
              puVar33[0x18] = 0;
              puVar33[0x1b] = 0;
              puVar33[0x1a] = 0;
              puVar33[0x1d] = 0;
              puVar33[0x1c] = 0;
              puVar33[0x1f] = 0;
              puVar33[0x1e] = 0;
            }
            pbVar9 = (byte *)(*(int *)(param_1 + 0x1c) + (uVar25 >> 3));
            bVar11 = *pbVar9;
            bVar12 = *(byte *)((uVar37 & 7) + 0x1012baa0);
            if ((bVar11 & bVar12) == 0) {
              *pbVar9 = bVar11 | bVar12;
              *(short *)(*(int *)(param_1 + 0x18) + uVar25 * 2) = (short)iVar24;
              iVar24 = iVar24 + 1;
              if (uVar38 == uVar36) {
                uVar36 = uVar37 + 1;
                uVar38 = uVar37;
              }
              else if (uVar37 == uVar36) {
                uVar36 = uVar36 + 1;
              }
              else if (uVar37 < uVar38 || uVar36 < uVar37) {
                iVar35 = *(int *)(param_1 + 0x6a8);
                uVar21 = uVar36 - uVar38;
                uVar36 = 0;
                if (*(uint *)(param_3 + 8) != 0) {
                  do {
                    piVar7 = (int *)(param_6 + uVar36 * 8);
                    iVar34 = *piVar7;
                    if (iVar34 != 0) {
                      piVar7 = piVar7 + 1;
                      iVar34 = iVar34 + *piVar7 * uVar38;
                      iVar20 = param_3 + (uint)*(byte *)(uVar36 + param_3 + 0x9c) * 8;
                      uVar22 = 0;
                      bVar11 = *(byte *)(iVar20 + 0x16) >> 2;
                      if (uVar21 != 0) {
                        iVar20 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar20 + 0x17) * 4;
                        do {
                          uVar29 = 0;
                          if (bVar11 != 0) {
                            do {
                              iVar2 = uVar29 * 4;
                              iVar1 = uVar29 * 4;
                              uVar29 = uVar29 + 1;
                              *(undefined4 *)(iVar20 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                            } while (uVar29 < bVar11);
                          }
                          uVar22 = uVar22 + 1;
                          iVar20 = iVar35 + iVar20;
                          iVar34 = iVar34 + *piVar7;
                        } while (uVar22 < uVar21);
                      }
                    }
                    uVar36 = uVar36 + 1;
                  } while (uVar36 < *(uint *)(param_3 + 8));
                }
                uVar36 = uVar37 + 1;
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar21 * iVar35;
                *piVar4 = *piVar4 + uVar21;
                uVar38 = uVar37;
              }
            }
            iVar35 = uVar39 * 4;
            uVar39 = uVar39 + 1;
            *(uint *)(*piVar5 + iVar35) = (uint)*(ushort *)(*(int *)(param_1 + 0x18) + uVar25 * 2);
          } while (uVar39 < uVar28);
          if (uVar36 != uVar38) {
            uVar36 = uVar36 - uVar38;
            iVar24 = *(int *)(param_1 + 0x6a8);
            uVar39 = 0;
            if (*(uint *)(param_3 + 8) != 0) {
              do {
                piVar7 = (int *)(param_6 + uVar39 * 8);
                iVar35 = *piVar7;
                if (iVar35 != 0) {
                  piVar7 = piVar7 + 1;
                  iVar35 = iVar35 + *piVar7 * uVar38;
                  iVar34 = param_3 + (uint)*(byte *)(uVar39 + param_3 + 0x9c) * 8;
                  uVar37 = 0;
                  bVar11 = *(byte *)(iVar34 + 0x16) >> 2;
                  if (uVar36 != 0) {
                    iVar34 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar34 + 0x17) * 4;
                    do {
                      uVar25 = 0;
                      if (bVar11 != 0) {
                        do {
                          iVar20 = uVar25 * 4;
                          iVar2 = uVar25 * 4;
                          uVar25 = uVar25 + 1;
                          *(undefined4 *)(iVar34 + iVar2) = *(undefined4 *)(iVar35 + iVar20);
                        } while (uVar25 < bVar11);
                      }
                      uVar37 = uVar37 + 1;
                      iVar34 = iVar24 + iVar34;
                      iVar35 = iVar35 + *piVar7;
                    } while (uVar37 < uVar36);
                  }
                }
                uVar39 = uVar39 + 1;
              } while (uVar39 < *(uint *)(param_3 + 8));
            }
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar24 * uVar36;
            *piVar4 = *piVar4 + uVar36;
          }
        }
        local_ac = uVar28 + local_ac;
        local_94 = local_94 - uVar28;
        *piVar5 = *piVar5 + uVar28 * 4;
        iVar24 = *piVar6 + uVar28;
        *piVar6 = iVar24;
      } while (local_94 != 0);
    }
    break;
  case 3:
    uVar23 = 2;
  case 5:
    uVar28 = uVar23 - 1;
    if (uVar23 <= param_11) {
      local_a8 = param_11;
      piVar4 = (int *)(param_1 + 0x54);
      piVar5 = (int *)(param_1 + 100);
      piVar6 = (int *)(param_1 + 0x6c);
      iVar24 = *piVar6;
      do {
        if (((uint)((0x1000 - *(int *)(param_1 + 0x50)) - *piVar4) < 0x10) ||
           (iVar24 = *(int *)(param_1 + 0x68) + iVar24, 0x1000U - iVar24 < 0x10)) {
          uVar16 = (*pcVar14)();
          (*extraout_w11_02)(uVar16,1);
          iVar24 = 0;
        }
        uVar36 = 0x1000U - iVar24 & 0xfffffffe;
        if (local_a8 < uVar36) {
          uVar36 = local_a8;
        }
        uVar18 = (ulonglong)uVar36;
        uVar17 = (ulonglong)*(uint *)(param_3 + 0xc);
        if (param_4 == '\0') {
          (*pcVar14)();
          (*extraout_w11_04)(param_1,param_2,param_5,uVar17 & 0xffffffff,uVar18 & 0xffffffff,
                             uVar18 & 0xffffffff,0);
        }
        else {
          (*pcVar14)();
          (*extraout_w11_03)(param_1,param_2,param_3,param_5,uVar17 & 0xffffffff,uVar18 & 0xffffffff
                             ,uVar18 & 0xffffffff,param_19);
        }
        if ((*(int *)(param_1 + 0x14) == 0) ||
           (((*piVar4 == 0 && (*piVar6 == 0)) || (0xfff < uVar36 + iVar24)))) {
          uVar16 = (*pcVar14)();
          (*extraout_w11_05)(uVar16,0);
        }
        else {
          *(int *)*piVar5 = *(int *)(param_1 + 0x14);
          *piVar5 = *piVar5 + 4;
          *piVar6 = *piVar6 + 1;
        }
        uVar37 = 0;
        uVar39 = 0;
        uVar38 = 0;
        piVar7 = (int *)(param_1 + 0x1c);
        iVar24 = *piVar4;
        piVar8 = (int *)(param_1 + 0x18);
        if (param_17 == '\0') {
          do {
            if (param_15 == '\0') {
              uVar25 = (uint)*(ushort *)((int)param_9 + (uVar38 + local_ac) * 2) + param_13;
            }
            else {
              uVar25 = param_9[uVar38 + local_ac] + param_13;
              if (uVar25 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_10121220(iVar3,0,8);
                *(uint *)(param_1 + 0x40) = uVar25 >> 0x10;
              }
            }
            uVar21 = uVar25 & 0xffff;
            uVar22 = uVar21 >> 0xb;
            if (*(char *)(iVar3 + uVar22) == '\0') {
              *(undefined1 *)(uVar22 + param_1 + 0x20) = 1;
              puVar33 = (undefined8 *)(*piVar7 + uVar22 * 0x100);
              puVar33[1] = 0;
              *puVar33 = 0;
              puVar33[3] = 0;
              puVar33[2] = 0;
              puVar33[5] = 0;
              puVar33[4] = 0;
              puVar33[7] = 0;
              puVar33[6] = 0;
              puVar33[9] = 0;
              puVar33[8] = 0;
              puVar33[0xb] = 0;
              puVar33[10] = 0;
              puVar33[0xd] = 0;
              puVar33[0xc] = 0;
              puVar33[0xf] = 0;
              puVar33[0xe] = 0;
              puVar33[0x11] = 0;
              puVar33[0x10] = 0;
              puVar33[0x13] = 0;
              puVar33[0x12] = 0;
              puVar33[0x15] = 0;
              puVar33[0x14] = 0;
              puVar33[0x17] = 0;
              puVar33[0x16] = 0;
              puVar33[0x19] = 0;
              puVar33[0x18] = 0;
              puVar33[0x1b] = 0;
              puVar33[0x1a] = 0;
              puVar33[0x1d] = 0;
              puVar33[0x1c] = 0;
              puVar33[0x1f] = 0;
              puVar33[0x1e] = 0;
            }
            bVar11 = *(byte *)((uVar25 & 7) + 0x1012baa0);
            pbVar9 = (byte *)(*piVar7 + (uVar21 >> 3));
            bVar12 = *pbVar9;
            if ((bVar11 & bVar12) == 0) {
              *pbVar9 = bVar11 | bVar12;
              *(short *)(*piVar8 + uVar21 * 2) = (short)iVar24;
              iVar24 = iVar24 + 1;
              if (uVar37 == uVar39) {
                uVar39 = uVar25 + 1;
                uVar37 = uVar25;
              }
              else if (uVar25 == uVar39) {
                uVar39 = uVar39 + 1;
              }
              else if (uVar25 < uVar37 || uVar39 < uVar25) {
                uVar22 = *(uint *)(param_1 + 0x6a8);
                uVar29 = uVar39 - uVar37;
                if (param_7 == uVar22) {
                  uVar26 = uVar29 * uVar22;
                  puVar33 = (undefined8 *)(param_6 + uVar22 * uVar37);
                  piVar10 = (int *)(param_1 + 0x4c);
                  puVar32 = (undefined8 *)*piVar10;
                  uVar39 = 0;
                  puVar31 = puVar32;
                  if (uVar26 >> 4 != 0) {
                    do {
                      puVar13 = puVar33 + 1;
                      uVar15 = *puVar33;
                      uVar39 = uVar39 + 1;
                      puVar33 = puVar33 + 2;
                      puVar32 = puVar31 + 2;
                      puVar31[1] = *puVar13;
                      *puVar31 = uVar15;
                      puVar31 = puVar32;
                    } while (uVar39 < uVar26 >> 4);
                  }
                  uVar37 = uVar26 >> 2 & 3;
                  uVar39 = 0;
                  if (uVar37 != 0) {
                    do {
                      iVar35 = uVar39 * 4;
                      iVar34 = uVar39 * 4;
                      uVar39 = uVar39 + 1;
                      *(undefined4 *)((int)puVar32 + iVar34) =
                           *(undefined4 *)((int)puVar33 + iVar35);
                    } while (uVar39 < uVar37);
                  }
                  *piVar10 = *piVar10 + uVar26;
                }
                else {
                  uVar39 = 0;
                  if (uVar29 != 0) {
                    piVar10 = (int *)(param_1 + 0x4c);
                    uVar26 = uVar22 >> 2 & 3;
                    do {
                      puVar32 = (undefined8 *)*piVar10;
                      puVar33 = (undefined8 *)(param_6 + uVar37 * param_7);
                      uVar30 = 0;
                      puVar31 = puVar32;
                      if (uVar22 >> 4 != 0) {
                        do {
                          puVar13 = puVar33 + 1;
                          uVar15 = *puVar33;
                          uVar30 = uVar30 + 1;
                          puVar33 = puVar33 + 2;
                          puVar32 = puVar31 + 2;
                          puVar31[1] = *puVar13;
                          *puVar31 = uVar15;
                          puVar31 = puVar32;
                        } while (uVar30 < uVar22 >> 4);
                      }
                      uVar30 = 0;
                      if (uVar26 != 0) {
                        do {
                          iVar35 = uVar30 * 4;
                          iVar34 = uVar30 * 4;
                          uVar30 = uVar30 + 1;
                          *(undefined4 *)((int)puVar32 + iVar34) =
                               *(undefined4 *)((int)puVar33 + iVar35);
                        } while (uVar30 < uVar26);
                      }
                      uVar39 = uVar39 + 1;
                      uVar37 = uVar37 + 1;
                      *piVar10 = *piVar10 + uVar22;
                    } while (uVar39 < uVar29);
                  }
                }
                uVar39 = uVar25 + 1;
                *piVar4 = *piVar4 + uVar29;
                uVar37 = uVar25;
              }
            }
            iVar35 = uVar38 * 4;
            uVar38 = uVar38 + 1;
            *(uint *)(*piVar5 + iVar35) = (uint)*(ushort *)(*piVar8 + uVar21 * 2);
          } while (uVar38 < uVar28);
          uVar38 = 0;
          uVar25 = uVar36 - uVar28;
          if (uVar25 != 0) {
            do {
              iVar35 = local_ac + uVar28 + uVar38;
              if (param_15 == '\0') {
                uVar21 = (uint)*(ushort *)((int)param_9 + iVar35 * 2) + param_13;
              }
              else {
                uVar21 = param_9[iVar35] + param_13;
                if (uVar21 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_10121220(iVar3,0,8);
                  *(uint *)(param_1 + 0x40) = uVar21 >> 0x10;
                }
              }
              uVar22 = uVar21 & 0xffff;
              uVar29 = uVar22 >> 0xb;
              if (*(char *)(iVar3 + uVar29) == '\0') {
                *(undefined1 *)(uVar29 + param_1 + 0x20) = 1;
                puVar33 = (undefined8 *)(*piVar7 + uVar29 * 0x100);
                puVar33[1] = 0;
                *puVar33 = 0;
                puVar33[3] = 0;
                puVar33[2] = 0;
                puVar33[5] = 0;
                puVar33[4] = 0;
                puVar33[7] = 0;
                puVar33[6] = 0;
                puVar33[9] = 0;
                puVar33[8] = 0;
                puVar33[0xb] = 0;
                puVar33[10] = 0;
                puVar33[0xd] = 0;
                puVar33[0xc] = 0;
                puVar33[0xf] = 0;
                puVar33[0xe] = 0;
                puVar33[0x11] = 0;
                puVar33[0x10] = 0;
                puVar33[0x13] = 0;
                puVar33[0x12] = 0;
                puVar33[0x15] = 0;
                puVar33[0x14] = 0;
                puVar33[0x17] = 0;
                puVar33[0x16] = 0;
                puVar33[0x19] = 0;
                puVar33[0x18] = 0;
                puVar33[0x1b] = 0;
                puVar33[0x1a] = 0;
                puVar33[0x1d] = 0;
                puVar33[0x1c] = 0;
                puVar33[0x1f] = 0;
                puVar33[0x1e] = 0;
              }
              bVar11 = *(byte *)((uVar21 & 7) + 0x1012baa0);
              pbVar9 = (byte *)(*piVar7 + (uVar22 >> 3));
              bVar12 = *pbVar9;
              if ((bVar11 & bVar12) == 0) {
                *pbVar9 = bVar11 | bVar12;
                *(short *)(*piVar8 + uVar22 * 2) = (short)iVar24;
                iVar24 = iVar24 + 1;
                if (uVar37 == uVar39) {
                  uVar39 = uVar21 + 1;
                  uVar37 = uVar21;
                }
                else if (uVar21 == uVar39) {
                  uVar39 = uVar39 + 1;
                }
                else if (uVar21 < uVar37 || uVar39 < uVar21) {
                  uVar29 = *(uint *)(param_1 + 0x6a8);
                  uVar26 = uVar39 - uVar37;
                  if (param_7 == uVar29) {
                    uVar30 = uVar26 * uVar29;
                    puVar33 = (undefined8 *)(param_6 + uVar29 * uVar37);
                    piVar10 = (int *)(param_1 + 0x4c);
                    puVar32 = (undefined8 *)*piVar10;
                    uVar39 = 0;
                    puVar31 = puVar32;
                    if (uVar30 >> 4 != 0) {
                      do {
                        puVar13 = puVar33 + 1;
                        uVar15 = *puVar33;
                        uVar39 = uVar39 + 1;
                        puVar33 = puVar33 + 2;
                        puVar32 = puVar31 + 2;
                        puVar31[1] = *puVar13;
                        *puVar31 = uVar15;
                        puVar31 = puVar32;
                      } while (uVar39 < uVar30 >> 4);
                    }
                    uVar37 = uVar30 >> 2 & 3;
                    uVar39 = 0;
                    if (uVar37 != 0) {
                      do {
                        iVar35 = uVar39 * 4;
                        iVar34 = uVar39 * 4;
                        uVar39 = uVar39 + 1;
                        *(undefined4 *)((int)puVar32 + iVar34) =
                             *(undefined4 *)((int)puVar33 + iVar35);
                      } while (uVar39 < uVar37);
                    }
                    *piVar10 = uVar30 + *piVar10;
                  }
                  else {
                    uVar39 = 0;
                    if (uVar26 != 0) {
                      piVar10 = (int *)(param_1 + 0x4c);
                      uVar30 = uVar29 >> 2 & 3;
                      do {
                        puVar32 = (undefined8 *)*piVar10;
                        puVar33 = (undefined8 *)(param_6 + uVar37 * param_7);
                        uVar27 = 0;
                        puVar31 = puVar32;
                        if (uVar29 >> 4 != 0) {
                          do {
                            puVar13 = puVar33 + 1;
                            uVar15 = *puVar33;
                            uVar27 = uVar27 + 1;
                            puVar33 = puVar33 + 2;
                            puVar32 = puVar31 + 2;
                            puVar31[1] = *puVar13;
                            *puVar31 = uVar15;
                            puVar31 = puVar32;
                          } while (uVar27 < uVar29 >> 4);
                        }
                        uVar27 = 0;
                        if (uVar30 != 0) {
                          do {
                            iVar35 = uVar27 * 4;
                            iVar34 = uVar27 * 4;
                            uVar27 = uVar27 + 1;
                            *(undefined4 *)((int)puVar32 + iVar34) =
                                 *(undefined4 *)((int)puVar33 + iVar35);
                          } while (uVar27 < uVar30);
                        }
                        uVar39 = uVar39 + 1;
                        uVar37 = uVar37 + 1;
                        *piVar10 = uVar29 + *piVar10;
                      } while (uVar39 < uVar26);
                    }
                  }
                  uVar39 = uVar21 + 1;
                  *piVar4 = *piVar4 + uVar26;
                  uVar37 = uVar21;
                }
              }
              iVar35 = uVar38 * 4;
              uVar38 = uVar38 + 1;
              *(uint *)(iVar35 + uVar28 * 4 + *piVar5) = (uint)*(ushort *)(*piVar8 + uVar22 * 2);
            } while (uVar38 < uVar25);
          }
          if (uVar39 != uVar37) {
            uVar39 = uVar39 - uVar37;
            uVar38 = *(uint *)(param_1 + 0x6a8);
            if (param_7 == uVar38) {
              uVar21 = uVar38 * uVar39;
              puVar33 = (undefined8 *)(param_6 + uVar38 * uVar37);
              piVar7 = (int *)(param_1 + 0x4c);
              puVar32 = (undefined8 *)*piVar7;
              uVar38 = 0;
              puVar31 = puVar32;
              if (uVar21 >> 4 != 0) {
                do {
                  puVar13 = puVar33 + 1;
                  uVar15 = *puVar33;
                  uVar38 = uVar38 + 1;
                  puVar33 = puVar33 + 2;
                  puVar32 = puVar31 + 2;
                  puVar31[1] = *puVar13;
                  *puVar31 = uVar15;
                  puVar31 = puVar32;
                } while (uVar38 < uVar21 >> 4);
              }
              uVar37 = uVar21 >> 2 & 3;
              uVar38 = 0;
              if (uVar37 != 0) {
                do {
                  iVar24 = uVar38 * 4;
                  iVar35 = uVar38 * 4;
                  uVar38 = uVar38 + 1;
                  *(undefined4 *)((int)puVar32 + iVar35) = *(undefined4 *)((int)puVar33 + iVar24);
                } while (uVar38 < uVar37);
              }
              *piVar7 = uVar21 + *piVar7;
            }
            else {
              uVar21 = 0;
              if (uVar39 != 0) {
                piVar7 = (int *)(param_1 + 0x4c);
                uVar22 = uVar38 >> 2 & 3;
                do {
                  puVar32 = (undefined8 *)*piVar7;
                  puVar33 = (undefined8 *)(param_6 + uVar37 * param_7);
                  uVar29 = 0;
                  puVar31 = puVar32;
                  if (uVar38 >> 4 != 0) {
                    do {
                      puVar13 = puVar33 + 1;
                      uVar15 = *puVar33;
                      uVar29 = uVar29 + 1;
                      puVar33 = puVar33 + 2;
                      puVar32 = puVar31 + 2;
                      puVar31[1] = *puVar13;
                      *puVar31 = uVar15;
                      puVar31 = puVar32;
                    } while (uVar29 < uVar38 >> 4);
                  }
                  uVar29 = 0;
                  if (uVar22 != 0) {
                    do {
                      iVar24 = uVar29 * 4;
                      iVar35 = uVar29 * 4;
                      uVar29 = uVar29 + 1;
                      *(undefined4 *)((int)puVar32 + iVar35) =
                           *(undefined4 *)((int)puVar33 + iVar24);
                    } while (uVar29 < uVar22);
                  }
                  uVar21 = uVar21 + 1;
                  uVar37 = uVar37 + 1;
                  *piVar7 = uVar38 + *piVar7;
                } while (uVar21 < uVar39);
              }
            }
            *piVar4 = *piVar4 + uVar39;
          }
        }
        else {
          do {
            if (param_15 == '\0') {
              uVar25 = (uint)*(ushort *)((int)param_9 + (uVar38 + local_ac) * 2) + param_13;
            }
            else {
              uVar25 = param_9[uVar38 + local_ac] + param_13;
              if (uVar25 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_10121220(iVar3,0,8);
                *(uint *)(param_1 + 0x40) = uVar25 >> 0x10;
              }
            }
            uVar21 = uVar25 & 0xffff;
            uVar22 = uVar21 >> 0xb;
            if (*(char *)(iVar3 + uVar22) == '\0') {
              *(undefined1 *)(uVar22 + param_1 + 0x20) = 1;
              puVar33 = (undefined8 *)(*piVar7 + uVar22 * 0x100);
              puVar33[1] = 0;
              *puVar33 = 0;
              puVar33[3] = 0;
              puVar33[2] = 0;
              puVar33[5] = 0;
              puVar33[4] = 0;
              puVar33[7] = 0;
              puVar33[6] = 0;
              puVar33[9] = 0;
              puVar33[8] = 0;
              puVar33[0xb] = 0;
              puVar33[10] = 0;
              puVar33[0xd] = 0;
              puVar33[0xc] = 0;
              puVar33[0xf] = 0;
              puVar33[0xe] = 0;
              puVar33[0x11] = 0;
              puVar33[0x10] = 0;
              puVar33[0x13] = 0;
              puVar33[0x12] = 0;
              puVar33[0x15] = 0;
              puVar33[0x14] = 0;
              puVar33[0x17] = 0;
              puVar33[0x16] = 0;
              puVar33[0x19] = 0;
              puVar33[0x18] = 0;
              puVar33[0x1b] = 0;
              puVar33[0x1a] = 0;
              puVar33[0x1d] = 0;
              puVar33[0x1c] = 0;
              puVar33[0x1f] = 0;
              puVar33[0x1e] = 0;
            }
            pbVar9 = (byte *)(*piVar7 + (uVar21 >> 3));
            bVar11 = *pbVar9;
            bVar12 = *(byte *)((uVar25 & 7) + 0x1012baa0);
            if ((bVar11 & bVar12) == 0) {
              *pbVar9 = bVar11 | bVar12;
              *(short *)(*piVar8 + uVar21 * 2) = (short)iVar24;
              iVar24 = iVar24 + 1;
              if (uVar37 == uVar39) {
                uVar39 = uVar25 + 1;
                uVar37 = uVar25;
              }
              else if (uVar25 == uVar39) {
                uVar39 = uVar39 + 1;
              }
              else if (uVar25 < uVar37 || uVar39 < uVar25) {
                iVar35 = *(int *)(param_1 + 0x6a8);
                uVar22 = uVar39 - uVar37;
                uVar39 = 0;
                if (*(uint *)(param_3 + 8) != 0) {
                  do {
                    piVar10 = (int *)(param_6 + uVar39 * 8);
                    iVar34 = *piVar10;
                    if (iVar34 != 0) {
                      piVar10 = piVar10 + 1;
                      iVar34 = iVar34 + uVar37 * *piVar10;
                      iVar20 = param_3 + (uint)*(byte *)(uVar39 + param_3 + 0x9c) * 8;
                      uVar29 = 0;
                      bVar11 = *(byte *)(iVar20 + 0x16) >> 2;
                      if (uVar22 != 0) {
                        iVar20 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar20 + 0x17) * 4;
                        do {
                          uVar26 = 0;
                          if (bVar11 != 0) {
                            do {
                              iVar2 = uVar26 * 4;
                              iVar1 = uVar26 * 4;
                              uVar26 = uVar26 + 1;
                              *(undefined4 *)(iVar20 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                            } while (uVar26 < bVar11);
                          }
                          uVar29 = uVar29 + 1;
                          iVar20 = iVar20 + iVar35;
                          iVar34 = iVar34 + *piVar10;
                        } while (uVar29 < uVar22);
                      }
                    }
                    uVar39 = uVar39 + 1;
                  } while (uVar39 < *(uint *)(param_3 + 8));
                }
                uVar39 = uVar25 + 1;
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar22 * iVar35;
                *piVar4 = *piVar4 + uVar22;
                uVar37 = uVar25;
              }
            }
            iVar35 = uVar38 * 4;
            uVar38 = uVar38 + 1;
            *(uint *)(*piVar5 + iVar35) = (uint)*(ushort *)(*piVar8 + uVar21 * 2);
          } while (uVar38 < uVar28);
          uVar38 = 0;
          uVar25 = uVar36 - uVar28;
          if (uVar25 != 0) {
            do {
              iVar35 = local_ac + uVar28 + uVar38;
              if (param_15 == '\0') {
                uVar21 = (uint)*(ushort *)((int)param_9 + iVar35 * 2) + param_13;
              }
              else {
                uVar21 = param_9[iVar35] + param_13;
                if (uVar21 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_10121220(iVar3,0,8);
                  *(uint *)(param_1 + 0x40) = uVar21 >> 0x10;
                }
              }
              uVar22 = uVar21 & 0xffff;
              uVar29 = uVar22 >> 0xb;
              if (*(char *)(iVar3 + uVar29) == '\0') {
                *(undefined1 *)(uVar29 + param_1 + 0x20) = 1;
                puVar33 = (undefined8 *)(*piVar7 + uVar29 * 0x100);
                puVar33[1] = 0;
                *puVar33 = 0;
                puVar33[3] = 0;
                puVar33[2] = 0;
                puVar33[5] = 0;
                puVar33[4] = 0;
                puVar33[7] = 0;
                puVar33[6] = 0;
                puVar33[9] = 0;
                puVar33[8] = 0;
                puVar33[0xb] = 0;
                puVar33[10] = 0;
                puVar33[0xd] = 0;
                puVar33[0xc] = 0;
                puVar33[0xf] = 0;
                puVar33[0xe] = 0;
                puVar33[0x11] = 0;
                puVar33[0x10] = 0;
                puVar33[0x13] = 0;
                puVar33[0x12] = 0;
                puVar33[0x15] = 0;
                puVar33[0x14] = 0;
                puVar33[0x17] = 0;
                puVar33[0x16] = 0;
                puVar33[0x19] = 0;
                puVar33[0x18] = 0;
                puVar33[0x1b] = 0;
                puVar33[0x1a] = 0;
                puVar33[0x1d] = 0;
                puVar33[0x1c] = 0;
                puVar33[0x1f] = 0;
                puVar33[0x1e] = 0;
              }
              pbVar9 = (byte *)(*piVar7 + (uVar22 >> 3));
              bVar11 = *pbVar9;
              bVar12 = *(byte *)((uVar21 & 7) + 0x1012baa0);
              if ((bVar11 & bVar12) == 0) {
                *pbVar9 = bVar11 | bVar12;
                *(short *)(*piVar8 + uVar22 * 2) = (short)iVar24;
                iVar24 = iVar24 + 1;
                if (uVar37 == uVar39) {
                  uVar39 = uVar21 + 1;
                  uVar37 = uVar21;
                }
                else if (uVar21 == uVar39) {
                  uVar39 = uVar39 + 1;
                }
                else if (uVar21 < uVar37 || uVar39 < uVar21) {
                  iVar35 = *(int *)(param_1 + 0x6a8);
                  uVar29 = uVar39 - uVar37;
                  uVar39 = 0;
                  if (*(uint *)(param_3 + 8) != 0) {
                    do {
                      piVar10 = (int *)(param_6 + uVar39 * 8);
                      iVar34 = *piVar10;
                      if (iVar34 != 0) {
                        piVar10 = piVar10 + 1;
                        iVar34 = iVar34 + *piVar10 * uVar37;
                        iVar20 = param_3 + (uint)*(byte *)(uVar39 + param_3 + 0x9c) * 8;
                        uVar26 = 0;
                        bVar11 = *(byte *)(iVar20 + 0x16) >> 2;
                        if (uVar29 != 0) {
                          iVar20 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar20 + 0x17) * 4;
                          do {
                            uVar30 = 0;
                            if (bVar11 != 0) {
                              do {
                                iVar2 = uVar30 * 4;
                                iVar1 = uVar30 * 4;
                                uVar30 = uVar30 + 1;
                                *(undefined4 *)(iVar20 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                              } while (uVar30 < bVar11);
                            }
                            uVar26 = uVar26 + 1;
                            iVar20 = iVar20 + iVar35;
                            iVar34 = iVar34 + *piVar10;
                          } while (uVar26 < uVar29);
                        }
                      }
                      uVar39 = uVar39 + 1;
                    } while (uVar39 < *(uint *)(param_3 + 8));
                  }
                  uVar39 = uVar21 + 1;
                  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar29 * iVar35;
                  *piVar4 = *piVar4 + uVar29;
                  uVar37 = uVar21;
                }
              }
              iVar35 = uVar38 * 4;
              uVar38 = uVar38 + 1;
              *(uint *)(*piVar5 + iVar35 + uVar28 * 4) = (uint)*(ushort *)(*piVar8 + uVar22 * 2);
            } while (uVar38 < uVar25);
          }
          if (uVar39 != uVar37) {
            uVar39 = uVar39 - uVar37;
            iVar24 = *(int *)(param_1 + 0x6a8);
            uVar38 = 0;
            if (*(uint *)(param_3 + 8) != 0) {
              do {
                piVar7 = (int *)(param_6 + uVar38 * 8);
                iVar35 = *piVar7;
                if (iVar35 != 0) {
                  piVar7 = piVar7 + 1;
                  iVar35 = iVar35 + uVar37 * *piVar7;
                  iVar34 = param_3 + (uint)*(byte *)(uVar38 + param_3 + 0x9c) * 8;
                  uVar21 = 0;
                  bVar11 = *(byte *)(iVar34 + 0x16) >> 2;
                  if (uVar39 != 0) {
                    iVar34 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar34 + 0x17) * 4;
                    do {
                      uVar22 = 0;
                      if (bVar11 != 0) {
                        do {
                          iVar20 = uVar22 * 4;
                          iVar2 = uVar22 * 4;
                          uVar22 = uVar22 + 1;
                          *(undefined4 *)(iVar34 + iVar2) = *(undefined4 *)(iVar35 + iVar20);
                        } while (uVar22 < bVar11);
                      }
                      uVar21 = uVar21 + 1;
                      iVar34 = iVar24 + iVar34;
                      iVar35 = *piVar7 + iVar35;
                    } while (uVar21 < uVar39);
                  }
                }
                uVar38 = uVar38 + 1;
              } while (uVar38 < *(uint *)(param_3 + 8));
            }
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar39 * iVar24;
            *piVar4 = *piVar4 + uVar39;
          }
        }
        local_a8 = (uVar28 - uVar36) + local_a8;
        local_ac = uVar25 + local_ac;
        *piVar5 = *piVar5 + uVar36 * 4;
        iVar24 = uVar36 + *piVar6;
        *piVar6 = iVar24;
      } while (uVar23 <= local_a8);
    }
    break;
  case 6:
    if ((2 < param_11) && (local_94 = param_11 - 2, local_94 != 0)) {
      piVar4 = (int *)(param_1 + 0x54);
      piVar5 = (int *)(param_1 + 0x6c);
      iVar24 = *piVar5;
      do {
        iVar35 = *(int *)(param_1 + 0x50) + *piVar4;
        if ((0x1000U - iVar35 < 0x10) ||
           (iVar24 = *(int *)(param_1 + 0x68) + iVar24, 0x1000U - iVar24 < 0x10)) {
          uVar16 = (*pcVar14)();
          (*extraout_w11_06)(uVar16,1);
          iVar35 = 0;
          iVar24 = 0;
        }
        uVar28 = (0x1000U - iVar24) / 3;
        uVar23 = 0xffeU - iVar35;
        if (uVar28 <= 0xffeU - iVar35) {
          uVar23 = uVar28;
        }
        if (local_94 < uVar23) {
          uVar23 = local_94;
        }
        uVar19 = (ulonglong)(uVar23 * 3);
        uVar18 = (ulonglong)(uVar23 + 2);
        uVar17 = (ulonglong)*(uint *)(param_3 + 0xc);
        if (param_4 == '\0') {
          (*pcVar14)();
          (*extraout_w11_08)(param_1,4,param_5,uVar17 & 0xffffffff,uVar18 & 0xffffffff,
                             uVar19 & 0xffffffff,param_21);
        }
        else {
          (*pcVar14)();
          (*extraout_w11_07)(param_1,4,param_3,param_5,uVar17 & 0xffffffff,uVar18 & 0xffffffff,
                             uVar19 & 0xffffffff,param_19);
        }
        uVar36 = 0;
        uVar28 = 0;
        iVar24 = *piVar4;
        if (param_17 == '\0') {
          if (uVar23 != 0) {
            piVar6 = (int *)(param_1 + 0x1c);
            piVar7 = (int *)(param_1 + 0x18);
            piVar8 = (int *)(param_1 + 100);
            local_84 = 0;
            local_c8 = local_ac;
            do {
              if (param_15 == '\0') {
                local_e4 = (uint)(ushort)*param_9;
                uVar39 = (uint)*(ushort *)((int)param_9 + local_c8 * 2 + 2) + param_13;
                local_a8 = (uint)*(ushort *)((int)param_9 + local_c8 * 2 + 4);
              }
              else {
                local_e4 = *param_9;
                local_a8 = param_9[local_c8 + 2];
                uVar39 = param_9[local_c8 + 1] + param_13;
                if (uVar39 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_10121220(iVar3,0,8);
                  *(uint *)(param_1 + 0x40) = uVar39 >> 0x10;
                }
              }
              uVar38 = uVar39 & 0xffff;
              uVar37 = uVar38 >> 0xb;
              if (*(char *)(iVar3 + uVar37) == '\0') {
                *(undefined1 *)(uVar37 + param_1 + 0x20) = 1;
                puVar33 = (undefined8 *)(*piVar6 + uVar37 * 0x100);
                puVar33[1] = 0;
                *puVar33 = 0;
                puVar33[3] = 0;
                puVar33[2] = 0;
                puVar33[5] = 0;
                puVar33[4] = 0;
                puVar33[7] = 0;
                puVar33[6] = 0;
                puVar33[9] = 0;
                puVar33[8] = 0;
                puVar33[0xb] = 0;
                puVar33[10] = 0;
                puVar33[0xd] = 0;
                puVar33[0xc] = 0;
                puVar33[0xf] = 0;
                puVar33[0xe] = 0;
                puVar33[0x11] = 0;
                puVar33[0x10] = 0;
                puVar33[0x13] = 0;
                puVar33[0x12] = 0;
                puVar33[0x15] = 0;
                puVar33[0x14] = 0;
                puVar33[0x17] = 0;
                puVar33[0x16] = 0;
                puVar33[0x19] = 0;
                puVar33[0x18] = 0;
                puVar33[0x1b] = 0;
                puVar33[0x1a] = 0;
                puVar33[0x1d] = 0;
                puVar33[0x1c] = 0;
                puVar33[0x1f] = 0;
                puVar33[0x1e] = 0;
              }
              pbVar9 = (byte *)(*piVar6 + (uVar38 >> 3));
              bVar11 = *pbVar9;
              bVar12 = *(byte *)((uVar39 & 7) + 0x1012baa0);
              if ((bVar11 & bVar12) == 0) {
                *pbVar9 = bVar11 | bVar12;
                *(short *)(*piVar7 + uVar38 * 2) = (short)iVar24;
                iVar24 = iVar24 + 1;
                if (uVar36 == uVar28) {
                  uVar28 = uVar39 + 1;
                  uVar36 = uVar39;
                }
                else if (uVar39 == uVar28) {
                  uVar28 = uVar28 + 1;
                }
                else if (uVar39 < uVar36 || uVar28 < uVar39) {
                  uVar37 = *(uint *)(param_1 + 0x6a8);
                  uVar25 = uVar28 - uVar36;
                  if (param_7 == uVar37) {
                    uVar21 = uVar25 * uVar37;
                    puVar33 = (undefined8 *)(param_6 + uVar36 * uVar37);
                    piVar10 = (int *)(param_1 + 0x4c);
                    puVar32 = (undefined8 *)*piVar10;
                    uVar28 = 0;
                    puVar31 = puVar32;
                    if (uVar21 >> 4 != 0) {
                      do {
                        puVar13 = puVar33 + 1;
                        uVar15 = *puVar33;
                        uVar28 = uVar28 + 1;
                        puVar33 = puVar33 + 2;
                        puVar32 = puVar31 + 2;
                        puVar31[1] = *puVar13;
                        *puVar31 = uVar15;
                        puVar31 = puVar32;
                      } while (uVar28 < uVar21 >> 4);
                    }
                    uVar36 = uVar21 >> 2 & 3;
                    uVar28 = 0;
                    if (uVar36 != 0) {
                      do {
                        iVar35 = uVar28 * 4;
                        iVar34 = uVar28 * 4;
                        uVar28 = uVar28 + 1;
                        *(undefined4 *)((int)puVar32 + iVar34) =
                             *(undefined4 *)((int)puVar33 + iVar35);
                      } while (uVar28 < uVar36);
                    }
                    *piVar10 = *piVar10 + uVar21;
                  }
                  else {
                    uVar28 = 0;
                    if (uVar25 != 0) {
                      piVar10 = (int *)(param_1 + 0x4c);
                      uVar21 = uVar37 >> 2 & 3;
                      do {
                        puVar32 = (undefined8 *)*piVar10;
                        puVar33 = (undefined8 *)(param_6 + uVar36 * param_7);
                        uVar22 = 0;
                        puVar31 = puVar32;
                        if (uVar37 >> 4 != 0) {
                          do {
                            puVar13 = puVar33 + 1;
                            uVar15 = *puVar33;
                            uVar22 = uVar22 + 1;
                            puVar33 = puVar33 + 2;
                            puVar32 = puVar31 + 2;
                            puVar31[1] = *puVar13;
                            *puVar31 = uVar15;
                            puVar31 = puVar32;
                          } while (uVar22 < uVar37 >> 4);
                        }
                        uVar22 = 0;
                        if (uVar21 != 0) {
                          do {
                            iVar35 = uVar22 * 4;
                            iVar34 = uVar22 * 4;
                            uVar22 = uVar22 + 1;
                            *(undefined4 *)((int)puVar32 + iVar34) =
                                 *(undefined4 *)((int)puVar33 + iVar35);
                          } while (uVar22 < uVar21);
                        }
                        uVar28 = uVar28 + 1;
                        uVar36 = uVar36 + 1;
                        *piVar10 = *piVar10 + uVar37;
                      } while (uVar28 < uVar25);
                    }
                  }
                  uVar28 = uVar39 + 1;
                  *piVar4 = *piVar4 + uVar25;
                  uVar36 = uVar39;
                }
              }
              *(uint *)*piVar8 = (uint)*(ushort *)(*piVar7 + uVar38 * 2);
              local_a8 = local_a8 + param_13;
              if (param_15 != '\0') {
                if (local_a8 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_10121220(iVar3,0,8);
                  *(uint *)(param_1 + 0x40) = local_a8 >> 0x10;
                }
              }
              uVar39 = local_a8 & 0xffff;
              uVar38 = uVar39 >> 0xb;
              if (*(char *)(iVar3 + uVar38) == '\0') {
                *(undefined1 *)(uVar38 + param_1 + 0x20) = 1;
                puVar33 = (undefined8 *)(*piVar6 + uVar38 * 0x100);
                puVar33[1] = 0;
                *puVar33 = 0;
                puVar33[3] = 0;
                puVar33[2] = 0;
                puVar33[5] = 0;
                puVar33[4] = 0;
                puVar33[7] = 0;
                puVar33[6] = 0;
                puVar33[9] = 0;
                puVar33[8] = 0;
                puVar33[0xb] = 0;
                puVar33[10] = 0;
                puVar33[0xd] = 0;
                puVar33[0xc] = 0;
                puVar33[0xf] = 0;
                puVar33[0xe] = 0;
                puVar33[0x11] = 0;
                puVar33[0x10] = 0;
                puVar33[0x13] = 0;
                puVar33[0x12] = 0;
                puVar33[0x15] = 0;
                puVar33[0x14] = 0;
                puVar33[0x17] = 0;
                puVar33[0x16] = 0;
                puVar33[0x19] = 0;
                puVar33[0x18] = 0;
                puVar33[0x1b] = 0;
                puVar33[0x1a] = 0;
                puVar33[0x1d] = 0;
                puVar33[0x1c] = 0;
                puVar33[0x1f] = 0;
                puVar33[0x1e] = 0;
              }
              pbVar9 = (byte *)(*piVar6 + (uVar39 >> 3));
              bVar11 = *pbVar9;
              bVar12 = *(byte *)((local_a8 & 7) + 0x1012baa0);
              if ((bVar11 & bVar12) == 0) {
                *pbVar9 = bVar11 | bVar12;
                *(short *)(*piVar7 + uVar39 * 2) = (short)iVar24;
                iVar24 = iVar24 + 1;
                if (uVar36 == uVar28) {
LAB_100681b8:
                  uVar28 = local_a8 + 1;
                  uVar36 = local_a8;
                }
                else if (local_a8 == uVar28) {
                  uVar28 = uVar28 + 1;
                }
                else if (local_a8 < uVar36 || uVar28 < local_a8) {
                  uVar38 = *(uint *)(param_1 + 0x6a8);
                  uVar28 = uVar28 - uVar36;
                  if (param_7 == uVar38) {
                    uVar37 = uVar28 * uVar38;
                    puVar33 = (undefined8 *)(param_6 + uVar38 * uVar36);
                    piVar10 = (int *)(param_1 + 0x4c);
                    puVar32 = (undefined8 *)*piVar10;
                    uVar36 = 0;
                    puVar31 = puVar32;
                    if (uVar37 >> 4 != 0) {
                      do {
                        puVar13 = puVar33 + 1;
                        uVar15 = *puVar33;
                        uVar36 = uVar36 + 1;
                        puVar33 = puVar33 + 2;
                        puVar32 = puVar31 + 2;
                        puVar31[1] = *puVar13;
                        *puVar31 = uVar15;
                        puVar31 = puVar32;
                      } while (uVar36 < uVar37 >> 4);
                    }
                    uVar38 = uVar37 >> 2 & 3;
                    uVar36 = 0;
                    if (uVar38 != 0) {
                      do {
                        iVar35 = uVar36 * 4;
                        iVar34 = uVar36 * 4;
                        uVar36 = uVar36 + 1;
                        *(undefined4 *)((int)puVar32 + iVar34) =
                             *(undefined4 *)((int)puVar33 + iVar35);
                      } while (uVar36 < uVar38);
                    }
                    *piVar10 = uVar37 + *piVar10;
                  }
                  else {
                    uVar37 = 0;
                    if (uVar28 != 0) {
                      piVar10 = (int *)(param_1 + 0x4c);
                      uVar25 = uVar38 >> 2 & 3;
                      do {
                        puVar32 = (undefined8 *)*piVar10;
                        puVar33 = (undefined8 *)(param_6 + uVar36 * param_7);
                        uVar21 = 0;
                        puVar31 = puVar32;
                        if (uVar38 >> 4 != 0) {
                          do {
                            puVar13 = puVar33 + 1;
                            uVar15 = *puVar33;
                            uVar21 = uVar21 + 1;
                            puVar33 = puVar33 + 2;
                            puVar32 = puVar31 + 2;
                            puVar31[1] = *puVar13;
                            *puVar31 = uVar15;
                            puVar31 = puVar32;
                          } while (uVar21 < uVar38 >> 4);
                        }
                        uVar21 = 0;
                        if (uVar25 != 0) {
                          do {
                            iVar35 = uVar21 * 4;
                            iVar34 = uVar21 * 4;
                            uVar21 = uVar21 + 1;
                            *(undefined4 *)((int)puVar32 + iVar34) =
                                 *(undefined4 *)((int)puVar33 + iVar35);
                          } while (uVar21 < uVar25);
                        }
                        uVar37 = uVar37 + 1;
                        uVar36 = uVar36 + 1;
                        *piVar10 = *piVar10 + uVar38;
                      } while (uVar37 < uVar28);
                    }
                  }
                  *piVar4 = *piVar4 + uVar28;
                  goto LAB_100681b8;
                }
              }
              *(uint *)(*piVar8 + 4) = (uint)*(ushort *)(*piVar7 + uVar39 * 2);
              local_e4 = local_e4 + param_13;
              if (param_15 != '\0') {
                if (local_e4 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_10121220(iVar3,0,8);
                  *(uint *)(param_1 + 0x40) = local_e4 >> 0x10;
                }
              }
              uVar39 = local_e4 & 0xffff;
              uVar38 = uVar39 >> 0xb;
              if (*(char *)(iVar3 + uVar38) == '\0') {
                *(undefined1 *)(uVar38 + param_1 + 0x20) = 1;
                puVar33 = (undefined8 *)(*piVar6 + uVar38 * 0x100);
                puVar33[1] = 0;
                *puVar33 = 0;
                puVar33[3] = 0;
                puVar33[2] = 0;
                puVar33[5] = 0;
                puVar33[4] = 0;
                puVar33[7] = 0;
                puVar33[6] = 0;
                puVar33[9] = 0;
                puVar33[8] = 0;
                puVar33[0xb] = 0;
                puVar33[10] = 0;
                puVar33[0xd] = 0;
                puVar33[0xc] = 0;
                puVar33[0xf] = 0;
                puVar33[0xe] = 0;
                puVar33[0x11] = 0;
                puVar33[0x10] = 0;
                puVar33[0x13] = 0;
                puVar33[0x12] = 0;
                puVar33[0x15] = 0;
                puVar33[0x14] = 0;
                puVar33[0x17] = 0;
                puVar33[0x16] = 0;
                puVar33[0x19] = 0;
                puVar33[0x18] = 0;
                puVar33[0x1b] = 0;
                puVar33[0x1a] = 0;
                puVar33[0x1d] = 0;
                puVar33[0x1c] = 0;
                puVar33[0x1f] = 0;
                puVar33[0x1e] = 0;
              }
              pbVar9 = (byte *)(*piVar6 + (uVar39 >> 3));
              bVar11 = *pbVar9;
              bVar12 = *(byte *)((local_e4 & 7) + 0x1012baa0);
              if ((bVar11 & bVar12) == 0) {
                *pbVar9 = bVar11 | bVar12;
                *(short *)(*piVar7 + uVar39 * 2) = (short)iVar24;
                iVar24 = iVar24 + 1;
                if (uVar36 == uVar28) {
LAB_1006843c:
                  uVar28 = local_e4 + 1;
                  uVar36 = local_e4;
                }
                else if (local_e4 == uVar28) {
                  uVar28 = uVar28 + 1;
                }
                else if (local_e4 < uVar36 || uVar28 < local_e4) {
                  uVar38 = *(uint *)(param_1 + 0x6a8);
                  uVar28 = uVar28 - uVar36;
                  if (param_7 == uVar38) {
                    uVar37 = uVar28 * uVar38;
                    puVar33 = (undefined8 *)(param_6 + uVar38 * uVar36);
                    piVar10 = (int *)(param_1 + 0x4c);
                    puVar32 = (undefined8 *)*piVar10;
                    uVar36 = 0;
                    puVar31 = puVar32;
                    if (uVar37 >> 4 != 0) {
                      do {
                        puVar13 = puVar33 + 1;
                        uVar15 = *puVar33;
                        uVar36 = uVar36 + 1;
                        puVar33 = puVar33 + 2;
                        puVar32 = puVar31 + 2;
                        puVar31[1] = *puVar13;
                        *puVar31 = uVar15;
                        puVar31 = puVar32;
                      } while (uVar36 < uVar37 >> 4);
                    }
                    uVar38 = uVar37 >> 2 & 3;
                    uVar36 = 0;
                    if (uVar38 != 0) {
                      do {
                        iVar35 = uVar36 * 4;
                        iVar34 = uVar36 * 4;
                        uVar36 = uVar36 + 1;
                        *(undefined4 *)((int)puVar32 + iVar34) =
                             *(undefined4 *)((int)puVar33 + iVar35);
                      } while (uVar36 < uVar38);
                    }
                    *piVar10 = *piVar10 + uVar37;
                  }
                  else {
                    uVar37 = 0;
                    if (uVar28 != 0) {
                      piVar10 = (int *)(param_1 + 0x4c);
                      uVar25 = uVar38 >> 2 & 3;
                      do {
                        puVar32 = (undefined8 *)*piVar10;
                        puVar33 = (undefined8 *)(param_6 + uVar36 * param_7);
                        uVar21 = 0;
                        puVar31 = puVar32;
                        if (uVar38 >> 4 != 0) {
                          do {
                            puVar13 = puVar33 + 1;
                            uVar15 = *puVar33;
                            uVar21 = uVar21 + 1;
                            puVar33 = puVar33 + 2;
                            puVar32 = puVar31 + 2;
                            puVar31[1] = *puVar13;
                            *puVar31 = uVar15;
                            puVar31 = puVar32;
                          } while (uVar21 < uVar38 >> 4);
                        }
                        uVar21 = 0;
                        if (uVar25 != 0) {
                          do {
                            iVar35 = uVar21 * 4;
                            iVar34 = uVar21 * 4;
                            uVar21 = uVar21 + 1;
                            *(undefined4 *)((int)puVar32 + iVar34) =
                                 *(undefined4 *)((int)puVar33 + iVar35);
                          } while (uVar21 < uVar25);
                        }
                        uVar37 = uVar37 + 1;
                        uVar36 = uVar36 + 1;
                        *piVar10 = *piVar10 + uVar38;
                      } while (uVar37 < uVar28);
                    }
                  }
                  *piVar4 = *piVar4 + uVar28;
                  goto LAB_1006843c;
                }
              }
              *(uint *)(*piVar8 + 8) = (uint)*(ushort *)(*piVar7 + uVar39 * 2);
              *piVar8 = *piVar8 + 0xc;
              local_c8 = local_c8 + 1;
              local_84 = local_84 + 1;
            } while (local_84 < uVar23);
            if (uVar28 != uVar36) {
              uVar28 = uVar28 - uVar36;
              uVar39 = *(uint *)(param_1 + 0x6a8);
              if (param_7 == uVar39) {
                uVar38 = uVar39 * uVar28;
                puVar33 = (undefined8 *)(param_6 + uVar39 * uVar36);
                piVar6 = (int *)(param_1 + 0x4c);
                puVar32 = (undefined8 *)*piVar6;
                uVar36 = 0;
                puVar31 = puVar32;
                if (uVar38 >> 4 != 0) {
                  do {
                    puVar13 = puVar33 + 1;
                    uVar15 = *puVar33;
                    uVar36 = uVar36 + 1;
                    puVar33 = puVar33 + 2;
                    puVar32 = puVar31 + 2;
                    puVar31[1] = *puVar13;
                    *puVar31 = uVar15;
                    puVar31 = puVar32;
                  } while (uVar36 < uVar38 >> 4);
                }
                uVar39 = uVar38 >> 2 & 3;
                uVar36 = 0;
                if (uVar39 != 0) {
                  do {
                    iVar24 = uVar36 * 4;
                    iVar35 = uVar36 * 4;
                    uVar36 = uVar36 + 1;
                    *(undefined4 *)((int)puVar32 + iVar35) = *(undefined4 *)((int)puVar33 + iVar24);
                  } while (uVar36 < uVar39);
                }
                *piVar6 = *piVar6 + uVar38;
              }
              else {
                uVar38 = 0;
                if (uVar28 != 0) {
                  piVar6 = (int *)(param_1 + 0x4c);
                  uVar37 = uVar39 >> 2 & 3;
                  do {
                    puVar32 = (undefined8 *)*piVar6;
                    puVar33 = (undefined8 *)(param_6 + uVar36 * param_7);
                    uVar25 = 0;
                    puVar31 = puVar32;
                    if (uVar39 >> 4 != 0) {
                      do {
                        puVar13 = puVar33 + 1;
                        uVar15 = *puVar33;
                        uVar25 = uVar25 + 1;
                        puVar33 = puVar33 + 2;
                        puVar32 = puVar31 + 2;
                        puVar31[1] = *puVar13;
                        *puVar31 = uVar15;
                        puVar31 = puVar32;
                      } while (uVar25 < uVar39 >> 4);
                    }
                    uVar25 = 0;
                    if (uVar37 != 0) {
                      do {
                        iVar24 = uVar25 * 4;
                        iVar35 = uVar25 * 4;
                        uVar25 = uVar25 + 1;
                        *(undefined4 *)((int)puVar32 + iVar35) =
                             *(undefined4 *)((int)puVar33 + iVar24);
                      } while (uVar25 < uVar37);
                    }
                    uVar38 = uVar38 + 1;
                    uVar36 = uVar36 + 1;
                    *piVar6 = uVar39 + *piVar6;
                  } while (uVar38 < uVar28);
                }
              }
              *piVar4 = *piVar4 + uVar28;
            }
          }
        }
        else if (uVar23 != 0) {
          local_dc = 0;
          piVar6 = (int *)(param_1 + 0x18);
          piVar7 = (int *)(param_1 + 100);
          piVar8 = (int *)(param_1 + 0x1c);
          local_c8 = local_ac;
          do {
            if (param_15 == '\0') {
              uVar37 = (uint)(ushort)*param_9;
              uVar39 = (uint)*(ushort *)((int)param_9 + local_c8 * 2 + 2) + param_13;
              uVar38 = (uint)*(ushort *)((int)param_9 + local_c8 * 2 + 4);
            }
            else {
              uVar37 = *param_9;
              uVar38 = param_9[local_c8 + 2];
              uVar39 = param_9[local_c8 + 1] + param_13;
              if (uVar39 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_10121220(iVar3,0,8);
                *(uint *)(param_1 + 0x40) = uVar39 >> 0x10;
              }
            }
            uVar25 = uVar39 & 0xffff;
            uVar21 = uVar25 >> 0xb;
            if (*(char *)(uVar21 + iVar3) == '\0') {
              *(undefined1 *)(uVar21 + param_1 + 0x20) = 1;
              puVar33 = (undefined8 *)(*piVar8 + uVar21 * 0x100);
              puVar33[1] = 0;
              *puVar33 = 0;
              puVar33[3] = 0;
              puVar33[2] = 0;
              puVar33[5] = 0;
              puVar33[4] = 0;
              puVar33[7] = 0;
              puVar33[6] = 0;
              puVar33[9] = 0;
              puVar33[8] = 0;
              puVar33[0xb] = 0;
              puVar33[10] = 0;
              puVar33[0xd] = 0;
              puVar33[0xc] = 0;
              puVar33[0xf] = 0;
              puVar33[0xe] = 0;
              puVar33[0x11] = 0;
              puVar33[0x10] = 0;
              puVar33[0x13] = 0;
              puVar33[0x12] = 0;
              puVar33[0x15] = 0;
              puVar33[0x14] = 0;
              puVar33[0x17] = 0;
              puVar33[0x16] = 0;
              puVar33[0x19] = 0;
              puVar33[0x18] = 0;
              puVar33[0x1b] = 0;
              puVar33[0x1a] = 0;
              puVar33[0x1d] = 0;
              puVar33[0x1c] = 0;
              puVar33[0x1f] = 0;
              puVar33[0x1e] = 0;
            }
            bVar11 = *(byte *)((uVar39 & 7) + 0x1012baa0);
            pbVar9 = (byte *)(*piVar8 + (uVar25 >> 3));
            bVar12 = *pbVar9;
            if ((bVar11 & bVar12) == 0) {
              *pbVar9 = bVar11 | bVar12;
              *(short *)(*piVar6 + uVar25 * 2) = (short)iVar24;
              iVar24 = iVar24 + 1;
              if (uVar36 == uVar28) {
                uVar28 = uVar39 + 1;
                uVar36 = uVar39;
              }
              else if (uVar39 == uVar28) {
                uVar28 = uVar28 + 1;
              }
              else if (uVar39 < uVar36 || uVar28 < uVar39) {
                iVar35 = *(int *)(param_1 + 0x6a8);
                uVar21 = 0;
                uVar22 = uVar28 - uVar36;
                if (*(uint *)(param_3 + 8) != 0) {
                  do {
                    piVar10 = (int *)(param_6 + uVar21 * 8);
                    iVar34 = *piVar10;
                    if (iVar34 != 0) {
                      piVar10 = piVar10 + 1;
                      iVar34 = iVar34 + *piVar10 * uVar36;
                      iVar20 = param_3 + (uint)*(byte *)(uVar21 + param_3 + 0x9c) * 8;
                      uVar28 = 0;
                      bVar11 = *(byte *)(iVar20 + 0x16) >> 2;
                      if (uVar22 != 0) {
                        iVar20 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar20 + 0x17) * 4;
                        do {
                          uVar29 = 0;
                          if (bVar11 != 0) {
                            do {
                              iVar2 = uVar29 * 4;
                              iVar1 = uVar29 * 4;
                              uVar29 = uVar29 + 1;
                              *(undefined4 *)(iVar20 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                            } while (uVar29 < bVar11);
                          }
                          uVar28 = uVar28 + 1;
                          iVar20 = iVar35 + iVar20;
                          iVar34 = iVar34 + *piVar10;
                        } while (uVar28 < uVar22);
                      }
                    }
                    uVar21 = uVar21 + 1;
                  } while (uVar21 < *(uint *)(param_3 + 8));
                }
                uVar28 = uVar39 + 1;
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar22 * iVar35;
                *piVar4 = uVar22 + *piVar4;
                uVar36 = uVar39;
              }
            }
            *(uint *)*piVar7 = (uint)*(ushort *)(*piVar6 + uVar25 * 2);
            uVar38 = uVar38 + param_13;
            if (param_15 != '\0') {
              if (uVar38 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_10121220(iVar3,0,8);
                *(uint *)(param_1 + 0x40) = uVar38 >> 0x10;
              }
            }
            uVar39 = uVar38 & 0xffff;
            uVar25 = uVar39 >> 0xb;
            if (*(char *)(iVar3 + uVar25) == '\0') {
              *(undefined1 *)(uVar25 + param_1 + 0x20) = 1;
              puVar33 = (undefined8 *)(*piVar8 + uVar25 * 0x100);
              puVar33[1] = 0;
              *puVar33 = 0;
              puVar33[3] = 0;
              puVar33[2] = 0;
              puVar33[5] = 0;
              puVar33[4] = 0;
              puVar33[7] = 0;
              puVar33[6] = 0;
              puVar33[9] = 0;
              puVar33[8] = 0;
              puVar33[0xb] = 0;
              puVar33[10] = 0;
              puVar33[0xd] = 0;
              puVar33[0xc] = 0;
              puVar33[0xf] = 0;
              puVar33[0xe] = 0;
              puVar33[0x11] = 0;
              puVar33[0x10] = 0;
              puVar33[0x13] = 0;
              puVar33[0x12] = 0;
              puVar33[0x15] = 0;
              puVar33[0x14] = 0;
              puVar33[0x17] = 0;
              puVar33[0x16] = 0;
              puVar33[0x19] = 0;
              puVar33[0x18] = 0;
              puVar33[0x1b] = 0;
              puVar33[0x1a] = 0;
              puVar33[0x1d] = 0;
              puVar33[0x1c] = 0;
              puVar33[0x1f] = 0;
              puVar33[0x1e] = 0;
            }
            pbVar9 = (byte *)(*piVar8 + (uVar39 >> 3));
            bVar11 = *pbVar9;
            bVar12 = *(byte *)((uVar38 & 7) + 0x1012baa0);
            if ((bVar11 & bVar12) == 0) {
              *pbVar9 = bVar11 | bVar12;
              *(short *)(*piVar6 + uVar39 * 2) = (short)iVar24;
              iVar24 = iVar24 + 1;
              if (uVar36 == uVar28) {
LAB_10067874:
                uVar28 = uVar38 + 1;
                uVar36 = uVar38;
              }
              else if (uVar38 == uVar28) {
                uVar28 = uVar28 + 1;
              }
              else if (uVar38 < uVar36 || uVar28 < uVar38) {
                iVar35 = *(int *)(param_1 + 0x6a8);
                uVar25 = 0;
                uVar28 = uVar28 - uVar36;
                if (*(uint *)(param_3 + 8) != 0) {
                  do {
                    piVar10 = (int *)(param_6 + uVar25 * 8);
                    iVar34 = *piVar10;
                    if (iVar34 != 0) {
                      piVar10 = piVar10 + 1;
                      iVar34 = iVar34 + *piVar10 * uVar36;
                      iVar20 = param_3 + (uint)*(byte *)(uVar25 + param_3 + 0x9c) * 8;
                      uVar21 = 0;
                      bVar11 = *(byte *)(iVar20 + 0x16) >> 2;
                      if (uVar28 != 0) {
                        iVar20 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar20 + 0x17) * 4;
                        do {
                          uVar22 = 0;
                          if (bVar11 != 0) {
                            do {
                              iVar2 = uVar22 * 4;
                              iVar1 = uVar22 * 4;
                              uVar22 = uVar22 + 1;
                              *(undefined4 *)(iVar20 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                            } while (uVar22 < bVar11);
                          }
                          uVar21 = uVar21 + 1;
                          iVar20 = iVar35 + iVar20;
                          iVar34 = iVar34 + *piVar10;
                        } while (uVar21 < uVar28);
                      }
                    }
                    uVar25 = uVar25 + 1;
                  } while (uVar25 < *(uint *)(param_3 + 8));
                }
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar28 * iVar35;
                *piVar4 = *piVar4 + uVar28;
                goto LAB_10067874;
              }
            }
            *(uint *)(*piVar7 + 4) = (uint)*(ushort *)(*piVar6 + uVar39 * 2);
            uVar37 = uVar37 + param_13;
            if (param_15 != '\0') {
              if (uVar37 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_10121220(iVar3,0,8);
                *(uint *)(param_1 + 0x40) = uVar37 >> 0x10;
              }
            }
            uVar39 = uVar37 & 0xffff;
            uVar38 = uVar39 >> 0xb;
            if (*(char *)(iVar3 + uVar38) == '\0') {
              *(undefined1 *)(uVar38 + param_1 + 0x20) = 1;
              puVar33 = (undefined8 *)(*piVar8 + uVar38 * 0x100);
              puVar33[1] = 0;
              *puVar33 = 0;
              puVar33[3] = 0;
              puVar33[2] = 0;
              puVar33[5] = 0;
              puVar33[4] = 0;
              puVar33[7] = 0;
              puVar33[6] = 0;
              puVar33[9] = 0;
              puVar33[8] = 0;
              puVar33[0xb] = 0;
              puVar33[10] = 0;
              puVar33[0xd] = 0;
              puVar33[0xc] = 0;
              puVar33[0xf] = 0;
              puVar33[0xe] = 0;
              puVar33[0x11] = 0;
              puVar33[0x10] = 0;
              puVar33[0x13] = 0;
              puVar33[0x12] = 0;
              puVar33[0x15] = 0;
              puVar33[0x14] = 0;
              puVar33[0x17] = 0;
              puVar33[0x16] = 0;
              puVar33[0x19] = 0;
              puVar33[0x18] = 0;
              puVar33[0x1b] = 0;
              puVar33[0x1a] = 0;
              puVar33[0x1d] = 0;
              puVar33[0x1c] = 0;
              puVar33[0x1f] = 0;
              puVar33[0x1e] = 0;
            }
            pbVar9 = (byte *)(*piVar8 + (uVar39 >> 3));
            bVar11 = *pbVar9;
            bVar12 = *(byte *)((uVar37 & 7) + 0x1012baa0);
            if ((bVar11 & bVar12) == 0) {
              *pbVar9 = bVar11 | bVar12;
              *(short *)(*piVar6 + uVar39 * 2) = (short)iVar24;
              iVar24 = iVar24 + 1;
              if (uVar36 == uVar28) {
LAB_10067a98:
                uVar28 = uVar37 + 1;
                uVar36 = uVar37;
              }
              else if (uVar37 == uVar28) {
                uVar28 = uVar28 + 1;
              }
              else if (uVar37 < uVar36 || uVar28 < uVar37) {
                iVar35 = *(int *)(param_1 + 0x6a8);
                uVar38 = 0;
                uVar28 = uVar28 - uVar36;
                if (*(uint *)(param_3 + 8) != 0) {
                  do {
                    piVar10 = (int *)(param_6 + uVar38 * 8);
                    iVar34 = *piVar10;
                    if (iVar34 != 0) {
                      piVar10 = piVar10 + 1;
                      iVar34 = iVar34 + uVar36 * *piVar10;
                      iVar20 = param_3 + (uint)*(byte *)(uVar38 + param_3 + 0x9c) * 8;
                      uVar25 = 0;
                      bVar11 = *(byte *)(iVar20 + 0x16) >> 2;
                      if (uVar28 != 0) {
                        iVar20 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar20 + 0x17) * 4;
                        do {
                          uVar21 = 0;
                          if (bVar11 != 0) {
                            do {
                              iVar2 = uVar21 * 4;
                              iVar1 = uVar21 * 4;
                              uVar21 = uVar21 + 1;
                              *(undefined4 *)(iVar20 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                            } while (uVar21 < bVar11);
                          }
                          uVar25 = uVar25 + 1;
                          iVar20 = iVar35 + iVar20;
                          iVar34 = *piVar10 + iVar34;
                        } while (uVar25 < uVar28);
                      }
                    }
                    uVar38 = uVar38 + 1;
                  } while (uVar38 < *(uint *)(param_3 + 8));
                }
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar28 * iVar35;
                *piVar4 = *piVar4 + uVar28;
                goto LAB_10067a98;
              }
            }
            *(uint *)(*piVar7 + 8) = (uint)*(ushort *)(*piVar6 + uVar39 * 2);
            *piVar7 = *piVar7 + 0xc;
            local_c8 = local_c8 + 1;
            local_dc = local_dc + 1;
          } while (local_dc < uVar23);
          if (uVar28 != uVar36) {
            uVar28 = uVar28 - uVar36;
            iVar24 = *(int *)(param_1 + 0x6a8);
            uVar39 = 0;
            if (*(uint *)(param_3 + 8) != 0) {
              do {
                piVar6 = (int *)(param_6 + uVar39 * 8);
                iVar35 = *piVar6;
                if (iVar35 != 0) {
                  piVar6 = piVar6 + 1;
                  iVar35 = iVar35 + uVar36 * *piVar6;
                  iVar34 = param_3 + (uint)*(byte *)(uVar39 + param_3 + 0x9c) * 8;
                  bVar11 = *(byte *)(iVar34 + 0x16) >> 2;
                  uVar38 = 0;
                  if (uVar28 != 0) {
                    iVar34 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar34 + 0x17) * 4;
                    do {
                      uVar37 = 0;
                      if (bVar11 != 0) {
                        do {
                          iVar20 = uVar37 * 4;
                          iVar2 = uVar37 * 4;
                          uVar37 = uVar37 + 1;
                          *(undefined4 *)(iVar34 + iVar2) = *(undefined4 *)(iVar35 + iVar20);
                        } while (uVar37 < bVar11);
                      }
                      uVar38 = uVar38 + 1;
                      iVar34 = iVar24 + iVar34;
                      iVar35 = *piVar6 + iVar35;
                    } while (uVar38 < uVar28);
                  }
                }
                uVar39 = uVar39 + 1;
              } while (uVar39 < *(uint *)(param_3 + 8));
            }
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar24 * uVar28;
            *piVar4 = *piVar4 + uVar28;
          }
        }
        local_94 = local_94 - uVar23;
        iVar24 = *piVar5 + uVar23 * 3;
        *piVar5 = iVar24;
        local_ac = uVar23 + local_ac;
      } while (local_94 != 0);
    }
  }
  return;
}

