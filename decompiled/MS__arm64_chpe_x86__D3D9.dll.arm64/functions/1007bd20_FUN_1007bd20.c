/*
 * FUN_1007bd20 at 1007bd20
 * undefined FUN_1007bd20(void)
 * Address ranges: 1007bd20-1007efab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007bd20(int param_1,int param_2,int param_3,char param_4,undefined4 param_5,int param_6,
                 uint param_7,undefined8 param_8,uint *param_9,undefined4 param_10,uint param_11,
                 undefined4 param_12,int param_13,undefined4 param_14,char param_15,
                 undefined4 param_16,char param_17,undefined4 param_18,undefined1 param_19,
                 undefined4 param_20,undefined1 param_21)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  byte *pbVar7;
  int *piVar8;
  byte bVar9;
  byte bVar10;
  undefined8 *puVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
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
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int local_c4;
  uint local_c0;
  int local_b0;
  uint local_a0;
  uint local_88;
  
  iVar28 = param_1 + 0x20;
  FUN_10157c90(iVar28,0,8);
  pcVar12 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar24 = 3;
  iVar25 = 0;
  switch(param_2) {
  case 1:
  case 2:
    uVar24 = 1;
    if (param_2 == 2) {
      uVar24 = 2;
    }
  case 4:
    if (uVar24 == 0) {
                    /* WARNING: Does not return */
      uVar13 = SoftwareBreakpoint(0xf004,0x1007bdb8);
      (*(code *)uVar13)();
    }
    local_a0 = 0;
    if (uVar24 != 0) {
      local_a0 = param_11 / uVar24;
    }
    local_a0 = local_a0 * uVar24;
    if (local_a0 != 0) {
      local_b0 = 0;
      piVar3 = (int *)(param_1 + 0x54);
      piVar4 = (int *)(param_1 + 100);
      piVar5 = (int *)(param_1 + 0x6c);
      iVar25 = *piVar5;
      do {
        if (((uint)((0x1000 - *piVar3) - *(int *)(param_1 + 0x50)) < 0x10) ||
           (iVar25 = *(int *)(param_1 + 0x68) + iVar25, 0x1000U - iVar25 < 0x10)) {
          uVar14 = (*pcVar12)();
          (*extraout_w11)(uVar14,1);
          iVar25 = 0;
        }
        if (uVar24 == 0) {
                    /* WARNING: Does not return */
          uVar13 = SoftwareBreakpoint(0xf004,0x1007bea8);
          (*(code *)uVar13)();
        }
        uVar29 = 0;
        if (uVar24 != 0) {
          uVar29 = (0x1000U - iVar25) / uVar24;
        }
        uVar29 = (0x1000 - ((0x1000U - iVar25) - uVar29 * uVar24)) - iVar25;
        if (local_a0 < uVar29) {
          uVar29 = local_a0;
        }
        uVar17 = (ulonglong)uVar29;
        uVar15 = (ulonglong)*(uint *)(param_3 + 0xc);
        if (param_4 == '\0') {
          (*pcVar12)();
          (*extraout_w11_01)(param_1,param_2,param_5,uVar15 & 0xffffffff,uVar17 & 0xffffffff,
                             uVar17 & 0xffffffff,param_21);
        }
        else {
          (*pcVar12)();
          (*extraout_w11_00)(param_1,param_2,param_3,param_5,uVar15 & 0xffffffff,uVar17 & 0xffffffff
                             ,uVar17 & 0xffffffff,param_19);
        }
        uVar38 = 0;
        uVar35 = 0;
        uVar37 = 0;
        iVar25 = *piVar3;
        if (param_17 == '\0') {
          if (uVar29 != 0) {
            do {
              if (param_15 == '\0') {
                uVar36 = (uint)*(ushort *)((int)param_9 + (uVar37 + local_b0) * 2) + param_13;
              }
              else {
                uVar36 = param_9[uVar37 + local_b0] + param_13;
                if (uVar36 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_10157c90(iVar28,0,8);
                  *(uint *)(param_1 + 0x40) = uVar36 >> 0x10;
                }
              }
              uVar26 = uVar36 & 0xffff;
              uVar21 = uVar26 >> 0xb;
              if (*(char *)(uVar21 + iVar28) == '\0') {
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
              pbVar7 = (byte *)(*(int *)(param_1 + 0x1c) + (uVar26 >> 3));
              bVar9 = *pbVar7;
              bVar10 = *(byte *)((uVar36 & 7) + 0x1016e3a8);
              if ((bVar9 & bVar10) == 0) {
                *pbVar7 = bVar9 | bVar10;
                *(short *)(*(int *)(param_1 + 0x18) + uVar26 * 2) = (short)iVar25;
                iVar25 = iVar25 + 1;
                if (uVar38 == uVar35) {
                  uVar35 = uVar36 + 1;
                  uVar38 = uVar36;
                }
                else if (uVar36 == uVar35) {
                  uVar35 = uVar35 + 1;
                }
                else if (uVar36 < uVar38 || uVar35 < uVar36) {
                  uVar21 = *(uint *)(param_1 + 0xfc8);
                  uVar16 = uVar35 - uVar38;
                  if (param_7 == uVar21) {
                    uVar30 = uVar16 * uVar21;
                    puVar33 = (undefined8 *)(param_6 + uVar21 * uVar38);
                    piVar8 = (int *)(param_1 + 0x4c);
                    puVar32 = (undefined8 *)*piVar8;
                    uVar35 = 0;
                    puVar31 = puVar32;
                    if (uVar30 >> 4 != 0) {
                      do {
                        puVar11 = puVar33 + 1;
                        uVar13 = *puVar33;
                        uVar35 = uVar35 + 1;
                        puVar33 = puVar33 + 2;
                        puVar32 = puVar31 + 2;
                        puVar31[1] = *puVar11;
                        *puVar31 = uVar13;
                        puVar31 = puVar32;
                      } while (uVar35 < uVar30 >> 4);
                    }
                    uVar38 = uVar30 >> 2 & 3;
                    uVar35 = 0;
                    if (uVar38 != 0) {
                      do {
                        iVar23 = uVar35 * 4;
                        iVar22 = uVar35 * 4;
                        uVar35 = uVar35 + 1;
                        *(undefined4 *)((int)puVar32 + iVar22) =
                             *(undefined4 *)((int)puVar33 + iVar23);
                      } while (uVar35 < uVar38);
                    }
                    *piVar8 = uVar30 + *piVar8;
                  }
                  else {
                    uVar35 = 0;
                    if (uVar16 != 0) {
                      piVar8 = (int *)(param_1 + 0x4c);
                      uVar30 = uVar21 >> 2 & 3;
                      do {
                        puVar32 = (undefined8 *)*piVar8;
                        puVar33 = (undefined8 *)(param_6 + uVar38 * param_7);
                        uVar27 = 0;
                        puVar31 = puVar32;
                        if (uVar21 >> 4 != 0) {
                          do {
                            puVar11 = puVar33 + 1;
                            uVar13 = *puVar33;
                            uVar27 = uVar27 + 1;
                            puVar33 = puVar33 + 2;
                            puVar32 = puVar31 + 2;
                            puVar31[1] = *puVar11;
                            *puVar31 = uVar13;
                            puVar31 = puVar32;
                          } while (uVar27 < uVar21 >> 4);
                        }
                        uVar27 = 0;
                        if (uVar30 != 0) {
                          do {
                            iVar23 = uVar27 * 4;
                            iVar22 = uVar27 * 4;
                            uVar27 = uVar27 + 1;
                            *(undefined4 *)((int)puVar32 + iVar22) =
                                 *(undefined4 *)((int)puVar33 + iVar23);
                          } while (uVar27 < uVar30);
                        }
                        uVar35 = uVar35 + 1;
                        uVar38 = uVar38 + 1;
                        *piVar8 = uVar21 + *piVar8;
                      } while (uVar35 < uVar16);
                    }
                  }
                  uVar35 = uVar36 + 1;
                  *piVar3 = uVar16 + *piVar3;
                  uVar38 = uVar36;
                }
              }
              iVar23 = uVar37 * 4;
              uVar37 = uVar37 + 1;
              *(uint *)(*piVar4 + iVar23) = (uint)*(ushort *)(*(int *)(param_1 + 0x18) + uVar26 * 2)
              ;
            } while (uVar37 < uVar29);
            if (uVar35 != uVar38) {
              uVar35 = uVar35 - uVar38;
              uVar37 = *(uint *)(param_1 + 0xfc8);
              if (param_7 == uVar37) {
                uVar36 = uVar37 * uVar35;
                puVar33 = (undefined8 *)(param_6 + uVar37 * uVar38);
                piVar8 = (int *)(param_1 + 0x4c);
                puVar32 = (undefined8 *)*piVar8;
                uVar37 = 0;
                puVar31 = puVar32;
                if (uVar36 >> 4 != 0) {
                  do {
                    puVar11 = puVar33 + 1;
                    uVar13 = *puVar33;
                    uVar37 = uVar37 + 1;
                    puVar33 = puVar33 + 2;
                    puVar32 = puVar31 + 2;
                    puVar31[1] = *puVar11;
                    *puVar31 = uVar13;
                    puVar31 = puVar32;
                  } while (uVar37 < uVar36 >> 4);
                }
                uVar38 = uVar36 >> 2 & 3;
                uVar37 = 0;
                if (uVar38 != 0) {
                  do {
                    iVar25 = uVar37 * 4;
                    iVar23 = uVar37 * 4;
                    uVar37 = uVar37 + 1;
                    *(undefined4 *)((int)puVar32 + iVar23) = *(undefined4 *)((int)puVar33 + iVar25);
                  } while (uVar37 < uVar38);
                }
                *piVar8 = uVar36 + *piVar8;
              }
              else {
                uVar36 = 0;
                if (uVar35 != 0) {
                  piVar8 = (int *)(param_1 + 0x4c);
                  uVar26 = uVar37 >> 2 & 3;
                  do {
                    puVar32 = (undefined8 *)*piVar8;
                    puVar33 = (undefined8 *)(param_6 + uVar38 * param_7);
                    uVar21 = 0;
                    puVar31 = puVar32;
                    if (uVar37 >> 4 != 0) {
                      do {
                        puVar11 = puVar33 + 1;
                        uVar13 = *puVar33;
                        uVar21 = uVar21 + 1;
                        puVar33 = puVar33 + 2;
                        puVar32 = puVar31 + 2;
                        puVar31[1] = *puVar11;
                        *puVar31 = uVar13;
                        puVar31 = puVar32;
                      } while (uVar21 < uVar37 >> 4);
                    }
                    uVar21 = 0;
                    if (uVar26 != 0) {
                      do {
                        iVar25 = uVar21 * 4;
                        iVar23 = uVar21 * 4;
                        uVar21 = uVar21 + 1;
                        *(undefined4 *)((int)puVar32 + iVar23) =
                             *(undefined4 *)((int)puVar33 + iVar25);
                      } while (uVar21 < uVar26);
                    }
                    uVar36 = uVar36 + 1;
                    uVar38 = uVar38 + 1;
                    *piVar8 = uVar37 + *piVar8;
                  } while (uVar36 < uVar35);
                }
              }
              *piVar3 = *piVar3 + uVar35;
            }
          }
        }
        else if (uVar29 != 0) {
          do {
            if (param_15 == '\0') {
              uVar36 = (uint)*(ushort *)((int)param_9 + (uVar37 + local_b0) * 2) + param_13;
            }
            else {
              uVar36 = param_9[uVar37 + local_b0] + param_13;
              if (uVar36 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_10157c90(iVar28,0,8);
                *(uint *)(param_1 + 0x40) = uVar36 >> 0x10;
              }
            }
            uVar26 = uVar36 & 0xffff;
            uVar21 = uVar26 >> 0xb;
            if (*(char *)(uVar21 + iVar28) == '\0') {
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
            pbVar7 = (byte *)(*(int *)(param_1 + 0x1c) + (uVar26 >> 3));
            bVar9 = *pbVar7;
            bVar10 = *(byte *)((uVar36 & 7) + 0x1016e3a0);
            if ((bVar9 & bVar10) == 0) {
              *pbVar7 = bVar9 | bVar10;
              *(short *)(*(int *)(param_1 + 0x18) + uVar26 * 2) = (short)iVar25;
              iVar25 = iVar25 + 1;
              if (uVar38 == uVar35) {
                uVar35 = uVar36 + 1;
                uVar38 = uVar36;
              }
              else if (uVar36 == uVar35) {
                uVar35 = uVar35 + 1;
              }
              else if (uVar36 < uVar38 || uVar35 < uVar36) {
                iVar23 = *(int *)(param_1 + 0xfc8);
                uVar21 = uVar35 - uVar38;
                uVar35 = 0;
                if (*(uint *)(param_3 + 8) != 0) {
                  do {
                    piVar8 = (int *)(param_6 + uVar35 * 0xc);
                    if (*piVar8 != 0) {
                      iVar22 = 0;
                      iVar34 = *piVar8 + piVar8[1] * uVar38;
                      iVar20 = param_3 + (uint)*(byte *)(uVar35 + param_3 + 0x214) * 8;
                      uVar16 = 0;
                      bVar9 = *(byte *)(iVar20 + 0x16) >> 2;
                      if (uVar21 != 0) {
                        iVar20 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar20 + 0x17) * 4;
                        do {
                          uVar30 = 0;
                          if (bVar9 != 0) {
                            do {
                              iVar2 = uVar30 * 4;
                              iVar1 = uVar30 * 4;
                              uVar30 = uVar30 + 1;
                              *(undefined4 *)(iVar20 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                            } while (uVar30 < bVar9);
                          }
                          iVar22 = iVar22 + 1;
                          iVar20 = iVar20 + iVar23;
                          if (iVar22 == piVar8[2]) {
                            iVar22 = 0;
                            iVar34 = iVar34 + piVar8[1];
                          }
                          uVar16 = uVar16 + 1;
                        } while (uVar16 < uVar21);
                      }
                    }
                    uVar35 = uVar35 + 1;
                  } while (uVar35 < *(uint *)(param_3 + 8));
                }
                uVar35 = uVar36 + 1;
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar21 * iVar23;
                *piVar3 = uVar21 + *piVar3;
                uVar38 = uVar36;
              }
            }
            iVar23 = uVar37 * 4;
            uVar37 = uVar37 + 1;
            *(uint *)(*piVar4 + iVar23) = (uint)*(ushort *)(*(int *)(param_1 + 0x18) + uVar26 * 2);
          } while (uVar37 < uVar29);
          if (uVar35 != uVar38) {
            uVar35 = uVar35 - uVar38;
            iVar25 = *(int *)(param_1 + 0xfc8);
            uVar37 = 0;
            if (*(uint *)(param_3 + 8) != 0) {
              do {
                piVar8 = (int *)(param_6 + uVar37 * 0xc);
                if (*piVar8 != 0) {
                  iVar23 = 0;
                  iVar20 = *piVar8 + piVar8[1] * uVar38;
                  iVar22 = param_3 + (uint)*(byte *)(uVar37 + param_3 + 0x214) * 8;
                  uVar36 = 0;
                  bVar9 = *(byte *)(iVar22 + 0x16) >> 2;
                  if (uVar35 != 0) {
                    iVar22 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar22 + 0x17) * 4;
                    do {
                      uVar26 = 0;
                      if (bVar9 != 0) {
                        do {
                          iVar34 = uVar26 * 4;
                          iVar2 = uVar26 * 4;
                          uVar26 = uVar26 + 1;
                          *(undefined4 *)(iVar22 + iVar2) = *(undefined4 *)(iVar20 + iVar34);
                        } while (uVar26 < bVar9);
                      }
                      iVar23 = iVar23 + 1;
                      iVar22 = iVar25 + iVar22;
                      if (iVar23 == piVar8[2]) {
                        iVar23 = 0;
                        iVar20 = iVar20 + piVar8[1];
                      }
                      uVar36 = uVar36 + 1;
                    } while (uVar36 < uVar35);
                  }
                }
                uVar37 = uVar37 + 1;
              } while (uVar37 < *(uint *)(param_3 + 8));
            }
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar25 * uVar35;
            *piVar3 = *piVar3 + uVar35;
          }
        }
        local_b0 = uVar29 + local_b0;
        local_a0 = local_a0 - uVar29;
        *piVar4 = *piVar4 + uVar29 * 4;
        iVar25 = *piVar5 + uVar29;
        *piVar5 = iVar25;
      } while (local_a0 != 0);
    }
    break;
  case 3:
    uVar24 = 2;
  case 5:
    uVar29 = uVar24 - 1;
    if (uVar24 <= param_11) {
      local_a0 = param_11;
      local_b0 = 0;
      piVar3 = (int *)(param_1 + 0x54);
      piVar4 = (int *)(param_1 + 100);
      piVar5 = (int *)(param_1 + 0x6c);
      iVar25 = *piVar5;
      do {
        if (((uint)((0x1000 - *(int *)(param_1 + 0x50)) - *piVar3) < 0x10) ||
           (iVar25 = *(int *)(param_1 + 0x68) + iVar25, 0x1000U - iVar25 < 0x10)) {
          uVar14 = (*pcVar12)();
          (*extraout_w11_02)(uVar14,1);
          iVar25 = 0;
        }
        uVar35 = 0x1000U - iVar25 & 0xfffffffe;
        if (local_a0 < uVar35) {
          uVar35 = local_a0;
        }
        uVar17 = (ulonglong)uVar35;
        uVar15 = (ulonglong)*(uint *)(param_3 + 0xc);
        if (param_4 == '\0') {
          (*pcVar12)();
          (*extraout_w11_04)(param_1,param_2,param_5,uVar15 & 0xffffffff,uVar17 & 0xffffffff,
                             uVar17 & 0xffffffff,0);
        }
        else {
          (*pcVar12)();
          (*extraout_w11_03)(param_1,param_2,param_3,param_5,uVar15 & 0xffffffff,uVar17 & 0xffffffff
                             ,uVar17 & 0xffffffff,param_19);
        }
        if ((*(int *)(param_1 + 0x14) == 0) ||
           (((*piVar3 == 0 && (*piVar5 == 0)) || (0xfff < uVar35 + iVar25)))) {
          uVar14 = (*pcVar12)();
          (*extraout_w11_05)(uVar14,0);
        }
        else {
          *(int *)*piVar4 = *(int *)(param_1 + 0x14);
          *piVar4 = *piVar4 + 4;
          *piVar5 = *piVar5 + 1;
        }
        uVar36 = 0;
        uVar37 = 0;
        uVar38 = 0;
        iVar25 = *piVar3;
        piVar8 = (int *)(param_1 + 0x18);
        if (param_17 == '\0') {
          do {
            if (param_15 == '\0') {
              uVar26 = (uint)*(ushort *)((int)param_9 + (uVar38 + local_b0) * 2) + param_13;
            }
            else {
              uVar26 = param_9[uVar38 + local_b0] + param_13;
              if (uVar26 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_10157c90(param_1 + 0x20,0,8);
                *(uint *)(param_1 + 0x40) = uVar26 >> 0x10;
              }
            }
            uVar21 = uVar26 & 0xffff;
            uVar16 = uVar21 >> 0xb;
            if (*(char *)(uVar16 + param_1 + 0x20) == '\0') {
              *(undefined1 *)(uVar16 + param_1 + 0x20) = 1;
              puVar33 = (undefined8 *)(*(int *)(param_1 + 0x1c) + uVar16 * 0x100);
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
            bVar9 = *(byte *)((uVar26 & 7) + 0x1016e3a8);
            pbVar7 = (byte *)(*(int *)(param_1 + 0x1c) + (uVar21 >> 3));
            bVar10 = *pbVar7;
            if ((bVar9 & bVar10) == 0) {
              *pbVar7 = bVar9 | bVar10;
              *(short *)(*(int *)(param_1 + 0x18) + uVar21 * 2) = (short)iVar25;
              iVar25 = iVar25 + 1;
              if (uVar36 == uVar37) {
                uVar37 = uVar26 + 1;
                uVar36 = uVar26;
              }
              else if (uVar26 == uVar37) {
                uVar37 = uVar37 + 1;
              }
              else if (uVar26 < uVar36 || uVar37 < uVar26) {
                uVar16 = *(uint *)(param_1 + 0xfc8);
                uVar30 = uVar37 - uVar36;
                if (param_7 == uVar16) {
                  puVar32 = *(undefined8 **)(param_1 + 0x4c);
                  uVar27 = uVar30 * uVar16 >> 4;
                  puVar33 = (undefined8 *)(param_6 + uVar16 * uVar36);
                  uVar37 = 0;
                  puVar31 = puVar32;
                  if (uVar27 != 0) {
                    do {
                      puVar11 = puVar33 + 1;
                      uVar13 = *puVar33;
                      uVar37 = uVar37 + 1;
                      puVar33 = puVar33 + 2;
                      puVar32 = puVar31 + 2;
                      puVar31[1] = *puVar11;
                      *puVar31 = uVar13;
                      puVar31 = puVar32;
                    } while (uVar37 < uVar27);
                  }
                  uVar36 = uVar30 * uVar16 >> 2 & 3;
                  uVar37 = 0;
                  if (uVar36 != 0) {
                    do {
                      iVar23 = uVar37 * 4;
                      iVar22 = uVar37 * 4;
                      uVar37 = uVar37 + 1;
                      *(undefined4 *)((int)puVar32 + iVar22) =
                           *(undefined4 *)((int)puVar33 + iVar23);
                    } while (uVar37 < uVar36);
                  }
                  *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar30 * uVar16;
                }
                else {
                  uVar37 = 0;
                  if (uVar30 != 0) {
                    piVar6 = (int *)(param_1 + 0x4c);
                    uVar27 = uVar16 >> 2 & 3;
                    do {
                      puVar32 = (undefined8 *)*piVar6;
                      puVar33 = (undefined8 *)(param_6 + uVar36 * param_7);
                      uVar18 = 0;
                      puVar31 = puVar32;
                      if (uVar16 >> 4 != 0) {
                        do {
                          puVar11 = puVar33 + 1;
                          uVar13 = *puVar33;
                          uVar18 = uVar18 + 1;
                          puVar33 = puVar33 + 2;
                          puVar32 = puVar31 + 2;
                          puVar31[1] = *puVar11;
                          *puVar31 = uVar13;
                          puVar31 = puVar32;
                        } while (uVar18 < uVar16 >> 4);
                      }
                      uVar18 = 0;
                      if (uVar27 != 0) {
                        do {
                          iVar23 = uVar18 * 4;
                          iVar22 = uVar18 * 4;
                          uVar18 = uVar18 + 1;
                          *(undefined4 *)((int)puVar32 + iVar22) =
                               *(undefined4 *)((int)puVar33 + iVar23);
                        } while (uVar18 < uVar27);
                      }
                      uVar37 = uVar37 + 1;
                      uVar36 = uVar36 + 1;
                      *piVar6 = uVar16 + *piVar6;
                    } while (uVar37 < uVar30);
                  }
                }
                uVar37 = uVar26 + 1;
                *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar30;
                uVar36 = uVar26;
              }
            }
            iVar23 = uVar38 * 4;
            uVar38 = uVar38 + 1;
            *(uint *)(*(int *)(param_1 + 100) + iVar23) = (uint)*(ushort *)(*piVar8 + uVar21 * 2);
          } while (uVar38 < uVar29);
          uVar38 = 0;
          if (uVar35 != uVar29) {
            do {
              iVar23 = local_b0 + uVar29 + uVar38;
              if (param_15 == '\0') {
                uVar26 = (uint)*(ushort *)((int)param_9 + iVar23 * 2) + param_13;
              }
              else {
                uVar26 = param_9[iVar23] + param_13;
                if (uVar26 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_10157c90(param_1 + 0x20,0,8);
                  *(uint *)(param_1 + 0x40) = uVar26 >> 0x10;
                }
              }
              uVar21 = uVar26 & 0xffff;
              uVar16 = uVar21 >> 0xb;
              if (*(char *)(param_1 + 0x20 + uVar16) == '\0') {
                *(undefined1 *)(uVar16 + param_1 + 0x20) = 1;
                puVar33 = (undefined8 *)(*(int *)(param_1 + 0x1c) + uVar16 * 0x100);
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
              bVar9 = *(byte *)((uVar26 & 7) + 0x1016e3a8);
              pbVar7 = (byte *)(*(int *)(param_1 + 0x1c) + (uVar21 >> 3));
              bVar10 = *pbVar7;
              if ((bVar9 & bVar10) == 0) {
                *pbVar7 = bVar9 | bVar10;
                *(short *)(*(int *)(param_1 + 0x18) + uVar21 * 2) = (short)iVar25;
                iVar25 = iVar25 + 1;
                if (uVar36 == uVar37) {
                  uVar37 = uVar26 + 1;
                  uVar36 = uVar26;
                }
                else if (uVar26 == uVar37) {
                  uVar37 = uVar37 + 1;
                }
                else if (uVar26 < uVar36 || uVar37 < uVar26) {
                  uVar16 = *(uint *)(param_1 + 0xfc8);
                  uVar30 = uVar37 - uVar36;
                  if (param_7 == uVar16) {
                    puVar32 = *(undefined8 **)(param_1 + 0x4c);
                    uVar27 = uVar30 * uVar16 >> 4;
                    puVar33 = (undefined8 *)(param_6 + uVar16 * uVar36);
                    uVar37 = 0;
                    puVar31 = puVar32;
                    if (uVar27 != 0) {
                      do {
                        puVar11 = puVar33 + 1;
                        uVar13 = *puVar33;
                        uVar37 = uVar37 + 1;
                        puVar33 = puVar33 + 2;
                        puVar32 = puVar31 + 2;
                        puVar31[1] = *puVar11;
                        *puVar31 = uVar13;
                        puVar31 = puVar32;
                      } while (uVar37 < uVar27);
                    }
                    uVar36 = uVar30 * uVar16 >> 2 & 3;
                    uVar37 = 0;
                    if (uVar36 != 0) {
                      do {
                        iVar23 = uVar37 * 4;
                        iVar22 = uVar37 * 4;
                        uVar37 = uVar37 + 1;
                        *(undefined4 *)((int)puVar32 + iVar22) =
                             *(undefined4 *)((int)puVar33 + iVar23);
                      } while (uVar37 < uVar36);
                    }
                    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar30 * uVar16;
                  }
                  else {
                    uVar37 = 0;
                    if (uVar30 != 0) {
                      piVar8 = (int *)(param_1 + 0x4c);
                      uVar27 = uVar16 >> 2 & 3;
                      do {
                        puVar32 = (undefined8 *)*piVar8;
                        puVar33 = (undefined8 *)(param_6 + uVar36 * param_7);
                        uVar18 = 0;
                        puVar31 = puVar32;
                        if (uVar16 >> 4 != 0) {
                          do {
                            puVar11 = puVar33 + 1;
                            uVar13 = *puVar33;
                            uVar18 = uVar18 + 1;
                            puVar33 = puVar33 + 2;
                            puVar32 = puVar31 + 2;
                            puVar31[1] = *puVar11;
                            *puVar31 = uVar13;
                            puVar31 = puVar32;
                          } while (uVar18 < uVar16 >> 4);
                        }
                        uVar18 = 0;
                        if (uVar27 != 0) {
                          do {
                            iVar23 = uVar18 * 4;
                            iVar22 = uVar18 * 4;
                            uVar18 = uVar18 + 1;
                            *(undefined4 *)((int)puVar32 + iVar22) =
                                 *(undefined4 *)((int)puVar33 + iVar23);
                          } while (uVar18 < uVar27);
                        }
                        uVar37 = uVar37 + 1;
                        uVar36 = uVar36 + 1;
                        *piVar8 = *piVar8 + uVar16;
                      } while (uVar37 < uVar30);
                    }
                  }
                  uVar37 = uVar26 + 1;
                  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar30;
                  uVar36 = uVar26;
                }
              }
              iVar23 = uVar38 * 4;
              uVar38 = uVar38 + 1;
              *(uint *)(iVar23 + uVar29 * 4 + *(int *)(param_1 + 100)) =
                   (uint)*(ushort *)(*(int *)(param_1 + 0x18) + uVar21 * 2);
            } while (uVar38 < uVar35 - uVar29);
          }
          if (uVar37 != uVar36) {
            uVar37 = uVar37 - uVar36;
            uVar38 = *(uint *)(param_1 + 0xfc8);
            if (param_7 == uVar38) {
              puVar32 = *(undefined8 **)(param_1 + 0x4c);
              uVar26 = uVar38 * uVar37 >> 4;
              puVar33 = (undefined8 *)(param_6 + uVar38 * uVar36);
              uVar36 = 0;
              puVar31 = puVar32;
              if (uVar26 != 0) {
                do {
                  puVar11 = puVar33 + 1;
                  uVar13 = *puVar33;
                  uVar36 = uVar36 + 1;
                  puVar33 = puVar33 + 2;
                  puVar32 = puVar31 + 2;
                  puVar31[1] = *puVar11;
                  *puVar31 = uVar13;
                  puVar31 = puVar32;
                } while (uVar36 < uVar26);
              }
              uVar26 = uVar38 * uVar37 >> 2 & 3;
              uVar36 = 0;
              if (uVar26 != 0) {
                do {
                  iVar25 = uVar36 * 4;
                  iVar23 = uVar36 * 4;
                  uVar36 = uVar36 + 1;
                  *(undefined4 *)((int)puVar32 + iVar23) = *(undefined4 *)((int)puVar33 + iVar25);
                } while (uVar36 < uVar26);
              }
              *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar38 * uVar37;
            }
            else {
              uVar26 = 0;
              if (uVar37 != 0) {
                piVar8 = (int *)(param_1 + 0x4c);
                uVar21 = uVar38 >> 2 & 3;
                do {
                  puVar32 = (undefined8 *)*piVar8;
                  puVar33 = (undefined8 *)(param_6 + uVar36 * param_7);
                  uVar16 = 0;
                  puVar31 = puVar32;
                  if (uVar38 >> 4 != 0) {
                    do {
                      puVar11 = puVar33 + 1;
                      uVar13 = *puVar33;
                      uVar16 = uVar16 + 1;
                      puVar33 = puVar33 + 2;
                      puVar32 = puVar31 + 2;
                      puVar31[1] = *puVar11;
                      *puVar31 = uVar13;
                      puVar31 = puVar32;
                    } while (uVar16 < uVar38 >> 4);
                  }
                  uVar16 = 0;
                  if (uVar21 != 0) {
                    do {
                      iVar25 = uVar16 * 4;
                      iVar23 = uVar16 * 4;
                      uVar16 = uVar16 + 1;
                      *(undefined4 *)((int)puVar32 + iVar23) =
                           *(undefined4 *)((int)puVar33 + iVar25);
                    } while (uVar16 < uVar21);
                  }
                  uVar26 = uVar26 + 1;
                  uVar36 = uVar36 + 1;
                  *piVar8 = *piVar8 + uVar38;
                } while (uVar26 < uVar37);
              }
            }
            iVar25 = *(int *)(param_1 + 0x54) + uVar37;
            goto LAB_1007d984;
          }
        }
        else {
          do {
            if (param_15 == '\0') {
              uVar26 = (uint)*(ushort *)((int)param_9 + (uVar38 + local_b0) * 2) + param_13;
            }
            else {
              uVar26 = param_9[uVar38 + local_b0] + param_13;
              if (uVar26 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_10157c90(iVar28,0,8);
                *(uint *)(param_1 + 0x40) = uVar26 >> 0x10;
              }
            }
            uVar21 = uVar26 & 0xffff;
            uVar16 = uVar21 >> 0xb;
            if (*(char *)(iVar28 + uVar16) == '\0') {
              *(undefined1 *)(uVar16 + param_1 + 0x20) = 1;
              puVar33 = (undefined8 *)(*(int *)(param_1 + 0x1c) + uVar16 * 0x100);
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
            bVar9 = *(byte *)((uVar26 & 7) + 0x1016e3a0);
            pbVar7 = (byte *)(*(int *)(param_1 + 0x1c) + (uVar21 >> 3));
            bVar10 = *pbVar7;
            if ((bVar9 & bVar10) == 0) {
              *pbVar7 = bVar9 | bVar10;
              *(short *)(*piVar8 + uVar21 * 2) = (short)iVar25;
              iVar25 = iVar25 + 1;
              if (uVar36 == uVar37) {
                uVar37 = uVar26 + 1;
                uVar36 = uVar26;
              }
              else if (uVar26 == uVar37) {
                uVar37 = uVar37 + 1;
              }
              else if (uVar26 < uVar36 || uVar37 < uVar26) {
                iVar23 = *(int *)(param_1 + 0xfc8);
                uVar16 = uVar37 - uVar36;
                uVar37 = 0;
                if (*(uint *)(param_3 + 8) != 0) {
                  do {
                    piVar6 = (int *)(param_6 + uVar37 * 0xc);
                    if (*piVar6 != 0) {
                      iVar22 = 0;
                      iVar34 = *piVar6 + piVar6[1] * uVar36;
                      iVar20 = param_3 + (uint)*(byte *)(uVar37 + param_3 + 0x214) * 8;
                      uVar30 = 0;
                      bVar9 = *(byte *)(iVar20 + 0x16) >> 2;
                      if (uVar16 != 0) {
                        iVar20 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar20 + 0x17) * 4;
                        do {
                          uVar27 = 0;
                          if (bVar9 != 0) {
                            do {
                              iVar2 = uVar27 * 4;
                              iVar1 = uVar27 * 4;
                              uVar27 = uVar27 + 1;
                              *(undefined4 *)(iVar20 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                            } while (uVar27 < bVar9);
                          }
                          iVar22 = iVar22 + 1;
                          iVar20 = iVar20 + iVar23;
                          if (iVar22 == piVar6[2]) {
                            iVar22 = 0;
                            iVar34 = *(int *)(param_6 + uVar37 * 0xc + 4) + iVar34;
                          }
                          uVar30 = uVar30 + 1;
                        } while (uVar30 < uVar16);
                      }
                    }
                    uVar37 = uVar37 + 1;
                  } while (uVar37 < *(uint *)(param_3 + 8));
                }
                uVar37 = uVar26 + 1;
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar16 * iVar23;
                *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar16;
                uVar36 = uVar26;
              }
            }
            iVar23 = uVar38 * 4;
            uVar38 = uVar38 + 1;
            *(uint *)(*piVar4 + iVar23) = (uint)*(ushort *)(*piVar8 + uVar21 * 2);
          } while (uVar38 < uVar29);
          uVar38 = 0;
          if (uVar35 != uVar29) {
            do {
              iVar23 = local_b0 + uVar29 + uVar38;
              if (param_15 == '\0') {
                uVar26 = (uint)*(ushort *)((int)param_9 + iVar23 * 2) + param_13;
              }
              else {
                uVar26 = param_9[iVar23] + param_13;
                if (uVar26 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_10157c90(param_1 + 0x20,0,8);
                  *(uint *)(param_1 + 0x40) = uVar26 >> 0x10;
                }
              }
              uVar21 = uVar26 & 0xffff;
              uVar16 = uVar21 >> 0xb;
              if (*(char *)(uVar16 + param_1 + 0x20) == '\0') {
                *(undefined1 *)(uVar16 + param_1 + 0x20) = 1;
                puVar33 = (undefined8 *)(*(int *)(param_1 + 0x1c) + uVar16 * 0x100);
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
              bVar9 = *(byte *)((uVar26 & 7) + 0x1016e3a0);
              pbVar7 = (byte *)(*(int *)(param_1 + 0x1c) + (uVar21 >> 3));
              bVar10 = *pbVar7;
              if ((bVar9 & bVar10) == 0) {
                *pbVar7 = bVar9 | bVar10;
                *(short *)(*(int *)(param_1 + 0x18) + uVar21 * 2) = (short)iVar25;
                iVar25 = iVar25 + 1;
                if (uVar36 == uVar37) {
                  uVar37 = uVar26 + 1;
                  uVar36 = uVar26;
                }
                else if (uVar26 == uVar37) {
                  uVar37 = uVar37 + 1;
                }
                else if (uVar26 < uVar36 || uVar37 < uVar26) {
                  iVar23 = *(int *)(param_1 + 0xfc8);
                  uVar16 = uVar37 - uVar36;
                  uVar37 = 0;
                  if (*(uint *)(param_3 + 8) != 0) {
                    do {
                      piVar8 = (int *)(param_6 + uVar37 * 0xc);
                      if (*piVar8 != 0) {
                        iVar22 = 0;
                        iVar34 = *piVar8 + piVar8[1] * uVar36;
                        iVar20 = param_3 + (uint)*(byte *)(uVar37 + param_3 + 0x214) * 8;
                        uVar30 = 0;
                        bVar9 = *(byte *)(iVar20 + 0x16) >> 2;
                        if (uVar16 != 0) {
                          iVar20 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar20 + 0x17) * 4;
                          do {
                            uVar27 = 0;
                            if (bVar9 != 0) {
                              do {
                                iVar2 = uVar27 * 4;
                                iVar1 = uVar27 * 4;
                                uVar27 = uVar27 + 1;
                                *(undefined4 *)(iVar20 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                              } while (uVar27 < bVar9);
                            }
                            iVar22 = iVar22 + 1;
                            iVar20 = iVar23 + iVar20;
                            if (iVar22 == piVar8[2]) {
                              iVar22 = 0;
                              iVar34 = *(int *)(param_6 + uVar37 * 0xc + 4) + iVar34;
                            }
                            uVar30 = uVar30 + 1;
                          } while (uVar30 < uVar16);
                        }
                      }
                      uVar37 = uVar37 + 1;
                    } while (uVar37 < *(uint *)(param_3 + 8));
                  }
                  uVar37 = uVar26 + 1;
                  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar16 * iVar23;
                  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar16;
                  uVar36 = uVar26;
                }
              }
              iVar23 = uVar38 * 4;
              uVar38 = uVar38 + 1;
              *(uint *)(iVar23 + uVar29 * 4 + *(int *)(param_1 + 100)) =
                   (uint)*(ushort *)(*(int *)(param_1 + 0x18) + uVar21 * 2);
            } while (uVar38 < uVar35 - uVar29);
          }
          if (uVar37 != uVar36) {
            uVar37 = uVar37 - uVar36;
            iVar25 = *(int *)(param_1 + 0xfc8);
            uVar38 = 0;
            if (*(uint *)(param_3 + 8) != 0) {
              do {
                piVar8 = (int *)(param_6 + uVar38 * 0xc);
                if (*piVar8 != 0) {
                  iVar23 = 0;
                  iVar20 = *piVar8 + piVar8[1] * uVar36;
                  iVar22 = param_3 + (uint)*(byte *)(uVar38 + param_3 + 0x214) * 8;
                  uVar26 = 0;
                  bVar9 = *(byte *)(iVar22 + 0x16) >> 2;
                  if (uVar37 != 0) {
                    iVar22 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar22 + 0x17) * 4;
                    do {
                      uVar21 = 0;
                      if (bVar9 != 0) {
                        do {
                          iVar34 = uVar21 * 4;
                          iVar2 = uVar21 * 4;
                          uVar21 = uVar21 + 1;
                          *(undefined4 *)(iVar22 + iVar2) = *(undefined4 *)(iVar20 + iVar34);
                        } while (uVar21 < bVar9);
                      }
                      iVar23 = iVar23 + 1;
                      iVar22 = iVar25 + iVar22;
                      if (iVar23 == piVar8[2]) {
                        iVar23 = 0;
                        iVar20 = *(int *)(param_6 + uVar38 * 0xc + 4) + iVar20;
                      }
                      uVar26 = uVar26 + 1;
                    } while (uVar26 < uVar37);
                  }
                }
                uVar38 = uVar38 + 1;
              } while (uVar38 < *(uint *)(param_3 + 8));
            }
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar37 * iVar25;
            iVar25 = *(int *)(param_1 + 0x54) + uVar37;
LAB_1007d984:
            *(int *)(param_1 + 0x54) = iVar25;
          }
        }
        local_a0 = (uVar29 - uVar35) + local_a0;
        local_b0 = (uVar35 - uVar29) + local_b0;
        *piVar4 = *piVar4 + uVar35 * 4;
        iVar25 = uVar35 + *piVar5;
        *piVar5 = iVar25;
      } while (uVar24 <= local_a0);
    }
    break;
  case 6:
    if ((2 < param_11) && (local_c0 = param_11 - 2, local_c0 != 0)) {
      iVar28 = *(int *)(param_1 + 0x6c);
      do {
        iVar23 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x54);
        if ((0x1000U - iVar23 < 0x10) ||
           (iVar28 = *(int *)(param_1 + 0x68) + iVar28, 0x1000U - iVar28 < 0x10)) {
          uVar14 = (*pcVar12)();
          (*extraout_w11_06)(uVar14,1);
          iVar23 = 0;
          iVar28 = 0;
        }
        uVar29 = (0x1000U - iVar28) / 3;
        uVar24 = 0xffeU - iVar23;
        if (uVar29 <= 0xffeU - iVar23) {
          uVar24 = uVar29;
        }
        if (local_c0 < uVar24) {
          uVar24 = local_c0;
        }
        uVar19 = (ulonglong)(uVar24 * 3);
        uVar17 = (ulonglong)(uVar24 + 2);
        uVar15 = (ulonglong)*(uint *)(param_3 + 0xc);
        if (param_4 == '\0') {
          (*pcVar12)();
          (*extraout_w11_08)(param_1,4,param_5,uVar15 & 0xffffffff,uVar17 & 0xffffffff,
                             uVar19 & 0xffffffff,param_21);
        }
        else {
          (*pcVar12)();
          (*extraout_w11_07)(param_1,4,param_3,param_5,uVar15 & 0xffffffff,uVar17 & 0xffffffff,
                             uVar19 & 0xffffffff,param_19);
        }
        uVar35 = 0;
        uVar29 = 0;
        iVar28 = *(int *)(param_1 + 0x54);
        local_c4 = iVar25;
        if (param_17 == '\0') {
          if (uVar24 != 0) {
            piVar3 = (int *)(param_1 + 100);
            piVar4 = (int *)(param_1 + 0x1c);
            piVar5 = (int *)(param_1 + 0x18);
            local_88 = 0;
            do {
              if (param_15 == '\0') {
                uVar36 = (uint)(ushort)*param_9;
                uVar37 = (uint)*(ushort *)((int)param_9 + local_c4 * 2 + 2) + param_13;
                uVar38 = (uint)*(ushort *)((int)param_9 + local_c4 * 2 + 4);
              }
              else {
                uVar36 = *param_9;
                uVar38 = param_9[local_c4 + 2];
                uVar37 = param_9[local_c4 + 1] + param_13;
                if (uVar37 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_10157c90(param_1 + 0x20,0,8);
                  *(uint *)(param_1 + 0x40) = uVar37 >> 0x10;
                }
              }
              uVar26 = uVar37 & 0xffff;
              uVar21 = uVar26 >> 0xb;
              if (*(char *)(param_1 + 0x20 + uVar21) == '\0') {
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
              pbVar7 = (byte *)(*piVar4 + (uVar26 >> 3));
              bVar9 = *pbVar7;
              bVar10 = *(byte *)((uVar37 & 7) + 0x1016e3a8);
              if ((bVar9 & bVar10) == 0) {
                *pbVar7 = bVar9 | bVar10;
                *(short *)(*(int *)(param_1 + 0x18) + uVar26 * 2) = (short)iVar28;
                iVar28 = iVar28 + 1;
                if (uVar35 == uVar29) {
                  uVar29 = uVar37 + 1;
                  uVar35 = uVar37;
                }
                else if (uVar37 == uVar29) {
                  uVar29 = uVar29 + 1;
                }
                else if (uVar37 < uVar35 || uVar29 < uVar37) {
                  uVar21 = *(uint *)(param_1 + 0xfc8);
                  uVar16 = uVar29 - uVar35;
                  if (param_7 == uVar21) {
                    puVar32 = *(undefined8 **)(param_1 + 0x4c);
                    uVar30 = uVar16 * uVar21 >> 4;
                    puVar33 = (undefined8 *)(param_6 + uVar35 * uVar21);
                    uVar29 = 0;
                    puVar31 = puVar32;
                    if (uVar30 != 0) {
                      do {
                        puVar11 = puVar33 + 1;
                        uVar13 = *puVar33;
                        uVar29 = uVar29 + 1;
                        puVar33 = puVar33 + 2;
                        puVar32 = puVar31 + 2;
                        puVar31[1] = *puVar11;
                        *puVar31 = uVar13;
                        puVar31 = puVar32;
                      } while (uVar29 < uVar30);
                    }
                    uVar35 = uVar16 * uVar21 >> 2 & 3;
                    uVar29 = 0;
                    if (uVar35 != 0) {
                      do {
                        iVar23 = uVar29 * 4;
                        iVar22 = uVar29 * 4;
                        uVar29 = uVar29 + 1;
                        *(undefined4 *)((int)puVar32 + iVar22) =
                             *(undefined4 *)((int)puVar33 + iVar23);
                      } while (uVar29 < uVar35);
                    }
                    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar16 * uVar21;
                  }
                  else {
                    uVar29 = 0;
                    if (uVar16 != 0) {
                      piVar8 = (int *)(param_1 + 0x4c);
                      uVar30 = uVar21 >> 2 & 3;
                      do {
                        puVar32 = (undefined8 *)*piVar8;
                        puVar33 = (undefined8 *)(param_6 + uVar35 * param_7);
                        uVar27 = 0;
                        puVar31 = puVar32;
                        if (uVar21 >> 4 != 0) {
                          do {
                            puVar11 = puVar33 + 1;
                            uVar13 = *puVar33;
                            uVar27 = uVar27 + 1;
                            puVar33 = puVar33 + 2;
                            puVar32 = puVar31 + 2;
                            puVar31[1] = *puVar11;
                            *puVar31 = uVar13;
                            puVar31 = puVar32;
                          } while (uVar27 < uVar21 >> 4);
                        }
                        uVar27 = 0;
                        if (uVar30 != 0) {
                          do {
                            iVar23 = uVar27 * 4;
                            iVar22 = uVar27 * 4;
                            uVar27 = uVar27 + 1;
                            *(undefined4 *)((int)puVar32 + iVar22) =
                                 *(undefined4 *)((int)puVar33 + iVar23);
                          } while (uVar27 < uVar30);
                        }
                        uVar29 = uVar29 + 1;
                        uVar35 = uVar35 + 1;
                        *piVar8 = *piVar8 + uVar21;
                      } while (uVar29 < uVar16);
                    }
                  }
                  uVar29 = uVar37 + 1;
                  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar16;
                  uVar35 = uVar37;
                }
              }
              *(uint *)*piVar3 = (uint)*(ushort *)(*piVar5 + uVar26 * 2);
              uVar38 = uVar38 + param_13;
              if (param_15 != '\0') {
                if (uVar38 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_10157c90(param_1 + 0x20,0,8);
                  *(uint *)(param_1 + 0x40) = uVar38 >> 0x10;
                }
              }
              uVar37 = uVar38 & 0xffff;
              uVar26 = uVar37 >> 0xb;
              if (*(char *)(param_1 + 0x20 + uVar26) == '\0') {
                *(undefined1 *)(uVar26 + param_1 + 0x20) = 1;
                puVar33 = (undefined8 *)(*(int *)(param_1 + 0x1c) + uVar26 * 0x100);
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
              pbVar7 = (byte *)(*piVar4 + (uVar37 >> 3));
              bVar9 = *pbVar7;
              bVar10 = *(byte *)((uVar38 & 7) + 0x1016e3a8);
              if ((bVar9 & bVar10) == 0) {
                *pbVar7 = bVar9 | bVar10;
                *(short *)(*(int *)(param_1 + 0x18) + uVar37 * 2) = (short)iVar28;
                iVar28 = iVar28 + 1;
                if (uVar35 == uVar29) {
LAB_1007eae4:
                  uVar29 = uVar38 + 1;
                  uVar35 = uVar38;
                }
                else if (uVar38 == uVar29) {
                  uVar29 = uVar29 + 1;
                }
                else if (uVar38 < uVar35 || uVar29 < uVar38) {
                  uVar26 = *(uint *)(param_1 + 0xfc8);
                  uVar29 = uVar29 - uVar35;
                  if (param_7 == uVar26) {
                    puVar32 = *(undefined8 **)(param_1 + 0x4c);
                    uVar21 = uVar29 * uVar26 >> 4;
                    puVar33 = (undefined8 *)(param_6 + uVar26 * uVar35);
                    uVar35 = 0;
                    puVar31 = puVar32;
                    if (uVar21 != 0) {
                      do {
                        puVar11 = puVar33 + 1;
                        uVar13 = *puVar33;
                        uVar35 = uVar35 + 1;
                        puVar33 = puVar33 + 2;
                        puVar32 = puVar31 + 2;
                        puVar31[1] = *puVar11;
                        *puVar31 = uVar13;
                        puVar31 = puVar32;
                      } while (uVar35 < uVar21);
                    }
                    uVar21 = uVar29 * uVar26 >> 2 & 3;
                    uVar35 = 0;
                    if (uVar21 != 0) {
                      do {
                        iVar23 = uVar35 * 4;
                        iVar22 = uVar35 * 4;
                        uVar35 = uVar35 + 1;
                        *(undefined4 *)((int)puVar32 + iVar22) =
                             *(undefined4 *)((int)puVar33 + iVar23);
                      } while (uVar35 < uVar21);
                    }
                    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar29 * uVar26;
                  }
                  else {
                    uVar21 = 0;
                    if (uVar29 != 0) {
                      piVar8 = (int *)(param_1 + 0x4c);
                      uVar16 = uVar26 >> 2 & 3;
                      do {
                        puVar32 = (undefined8 *)*piVar8;
                        puVar33 = (undefined8 *)(param_6 + uVar35 * param_7);
                        uVar30 = 0;
                        puVar31 = puVar32;
                        if (uVar26 >> 4 != 0) {
                          do {
                            puVar11 = puVar33 + 1;
                            uVar13 = *puVar33;
                            uVar30 = uVar30 + 1;
                            puVar33 = puVar33 + 2;
                            puVar32 = puVar31 + 2;
                            puVar31[1] = *puVar11;
                            *puVar31 = uVar13;
                            puVar31 = puVar32;
                          } while (uVar30 < uVar26 >> 4);
                        }
                        uVar30 = 0;
                        if (uVar16 != 0) {
                          do {
                            iVar23 = uVar30 * 4;
                            iVar22 = uVar30 * 4;
                            uVar30 = uVar30 + 1;
                            *(undefined4 *)((int)puVar32 + iVar22) =
                                 *(undefined4 *)((int)puVar33 + iVar23);
                          } while (uVar30 < uVar16);
                        }
                        uVar21 = uVar21 + 1;
                        uVar35 = uVar35 + 1;
                        *piVar8 = *piVar8 + uVar26;
                      } while (uVar21 < uVar29);
                    }
                  }
                  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar29;
                  goto LAB_1007eae4;
                }
              }
              *(uint *)(*piVar3 + 4) = (uint)*(ushort *)(*piVar5 + uVar37 * 2);
              uVar36 = uVar36 + param_13;
              if (param_15 != '\0') {
                if (uVar36 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                  FUN_10157c90(param_1 + 0x20,0,8);
                  *(uint *)(param_1 + 0x40) = uVar36 >> 0x10;
                }
              }
              uVar37 = uVar36 & 0xffff;
              uVar38 = uVar37 >> 0xb;
              if (*(char *)(param_1 + 0x20 + uVar38) == '\0') {
                *(undefined1 *)(uVar38 + param_1 + 0x20) = 1;
                puVar33 = (undefined8 *)(*(int *)(param_1 + 0x1c) + uVar38 * 0x100);
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
              pbVar7 = (byte *)(*piVar4 + (uVar37 >> 3));
              bVar9 = *pbVar7;
              bVar10 = *(byte *)((uVar36 & 7) + 0x1016e3a8);
              if ((bVar9 & bVar10) == 0) {
                *pbVar7 = bVar9 | bVar10;
                *(short *)(*(int *)(param_1 + 0x18) + uVar37 * 2) = (short)iVar28;
                iVar28 = iVar28 + 1;
                if (uVar35 == uVar29) {
LAB_1007ed78:
                  uVar29 = uVar36 + 1;
                  uVar35 = uVar36;
                }
                else if (uVar36 == uVar29) {
                  uVar29 = uVar29 + 1;
                }
                else if (uVar36 < uVar35 || uVar29 < uVar36) {
                  uVar38 = *(uint *)(param_1 + 0xfc8);
                  uVar29 = uVar29 - uVar35;
                  if (param_7 == uVar38) {
                    puVar32 = *(undefined8 **)(param_1 + 0x4c);
                    uVar26 = uVar29 * uVar38 >> 4;
                    puVar33 = (undefined8 *)(param_6 + uVar38 * uVar35);
                    uVar35 = 0;
                    puVar31 = puVar32;
                    if (uVar26 != 0) {
                      do {
                        puVar11 = puVar33 + 1;
                        uVar13 = *puVar33;
                        uVar35 = uVar35 + 1;
                        puVar33 = puVar33 + 2;
                        puVar32 = puVar31 + 2;
                        puVar31[1] = *puVar11;
                        *puVar31 = uVar13;
                        puVar31 = puVar32;
                      } while (uVar35 < uVar26);
                    }
                    uVar26 = uVar29 * uVar38 >> 2 & 3;
                    uVar35 = 0;
                    if (uVar26 != 0) {
                      do {
                        iVar23 = uVar35 * 4;
                        iVar22 = uVar35 * 4;
                        uVar35 = uVar35 + 1;
                        *(undefined4 *)((int)puVar32 + iVar22) =
                             *(undefined4 *)((int)puVar33 + iVar23);
                      } while (uVar35 < uVar26);
                    }
                    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar29 * uVar38;
                  }
                  else {
                    uVar26 = 0;
                    if (uVar29 != 0) {
                      piVar8 = (int *)(param_1 + 0x4c);
                      uVar21 = uVar38 >> 2 & 3;
                      do {
                        puVar32 = (undefined8 *)*piVar8;
                        puVar33 = (undefined8 *)(param_6 + uVar35 * param_7);
                        uVar16 = 0;
                        puVar31 = puVar32;
                        if (uVar38 >> 4 != 0) {
                          do {
                            puVar11 = puVar33 + 1;
                            uVar13 = *puVar33;
                            uVar16 = uVar16 + 1;
                            puVar33 = puVar33 + 2;
                            puVar32 = puVar31 + 2;
                            puVar31[1] = *puVar11;
                            *puVar31 = uVar13;
                            puVar31 = puVar32;
                          } while (uVar16 < uVar38 >> 4);
                        }
                        uVar16 = 0;
                        if (uVar21 != 0) {
                          do {
                            iVar23 = uVar16 * 4;
                            iVar22 = uVar16 * 4;
                            uVar16 = uVar16 + 1;
                            *(undefined4 *)((int)puVar32 + iVar22) =
                                 *(undefined4 *)((int)puVar33 + iVar23);
                          } while (uVar16 < uVar21);
                        }
                        uVar26 = uVar26 + 1;
                        uVar35 = uVar35 + 1;
                        *piVar8 = *piVar8 + uVar38;
                      } while (uVar26 < uVar29);
                    }
                  }
                  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar29;
                  goto LAB_1007ed78;
                }
              }
              *(uint *)(*piVar3 + 8) = (uint)*(ushort *)(*piVar5 + uVar37 * 2);
              *piVar3 = *piVar3 + 0xc;
              local_c4 = local_c4 + 1;
              local_88 = local_88 + 1;
            } while (local_88 < uVar24);
            if (uVar29 != uVar35) {
              uVar29 = uVar29 - uVar35;
              uVar37 = *(uint *)(param_1 + 0xfc8);
              if (param_7 == uVar37) {
                puVar32 = *(undefined8 **)(param_1 + 0x4c);
                uVar38 = uVar37 * uVar29 >> 4;
                puVar33 = (undefined8 *)(param_6 + uVar37 * uVar35);
                uVar35 = 0;
                puVar31 = puVar32;
                if (uVar38 != 0) {
                  do {
                    puVar11 = puVar33 + 1;
                    uVar13 = *puVar33;
                    uVar35 = uVar35 + 1;
                    puVar33 = puVar33 + 2;
                    puVar32 = puVar31 + 2;
                    puVar31[1] = *puVar11;
                    *puVar31 = uVar13;
                    puVar31 = puVar32;
                  } while (uVar35 < uVar38);
                }
                uVar38 = uVar37 * uVar29 >> 2 & 3;
                uVar35 = 0;
                if (uVar38 != 0) {
                  do {
                    iVar28 = uVar35 * 4;
                    iVar23 = uVar35 * 4;
                    uVar35 = uVar35 + 1;
                    *(undefined4 *)((int)puVar32 + iVar23) = *(undefined4 *)((int)puVar33 + iVar28);
                  } while (uVar35 < uVar38);
                }
                *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar37 * uVar29;
              }
              else {
                uVar38 = 0;
                if (uVar29 != 0) {
                  piVar3 = (int *)(param_1 + 0x4c);
                  uVar36 = uVar37 >> 2 & 3;
                  do {
                    puVar32 = (undefined8 *)*piVar3;
                    puVar33 = (undefined8 *)(param_6 + uVar35 * param_7);
                    uVar26 = 0;
                    puVar31 = puVar32;
                    if (uVar37 >> 4 != 0) {
                      do {
                        puVar11 = puVar33 + 1;
                        uVar13 = *puVar33;
                        uVar26 = uVar26 + 1;
                        puVar33 = puVar33 + 2;
                        puVar32 = puVar31 + 2;
                        puVar31[1] = *puVar11;
                        *puVar31 = uVar13;
                        puVar31 = puVar32;
                      } while (uVar26 < uVar37 >> 4);
                    }
                    uVar26 = 0;
                    if (uVar36 != 0) {
                      do {
                        iVar28 = uVar26 * 4;
                        iVar23 = uVar26 * 4;
                        uVar26 = uVar26 + 1;
                        *(undefined4 *)((int)puVar32 + iVar23) =
                             *(undefined4 *)((int)puVar33 + iVar28);
                      } while (uVar26 < uVar36);
                    }
                    uVar38 = uVar38 + 1;
                    uVar35 = uVar35 + 1;
                    *piVar3 = uVar37 + *piVar3;
                  } while (uVar38 < uVar29);
                }
              }
              iVar28 = *(int *)(param_1 + 0x54) + uVar29;
              goto LAB_1007ef58;
            }
          }
        }
        else if (uVar24 != 0) {
          piVar3 = (int *)(param_1 + 100);
          piVar4 = (int *)(param_1 + 0x18);
          piVar5 = (int *)(param_1 + 0x1c);
          local_88 = 0;
          do {
            if (param_15 == '\0') {
              uVar36 = (uint)(ushort)*param_9;
              uVar37 = (uint)*(ushort *)((int)param_9 + local_c4 * 2 + 2) + param_13;
              uVar38 = (uint)*(ushort *)((int)param_9 + local_c4 * 2 + 4);
            }
            else {
              uVar36 = *param_9;
              uVar38 = param_9[local_c4 + 2];
              uVar37 = param_9[local_c4 + 1] + param_13;
              if (uVar37 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_10157c90(param_1 + 0x20,0,8);
                *(uint *)(param_1 + 0x40) = uVar37 >> 0x10;
              }
            }
            uVar26 = uVar37 & 0xffff;
            uVar21 = uVar26 >> 0xb;
            if (*(char *)(param_1 + 0x20 + uVar21) == '\0') {
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
            pbVar7 = (byte *)(*piVar5 + (uVar26 >> 3));
            bVar9 = *pbVar7;
            bVar10 = *(byte *)((uVar37 & 7) + 0x1016e3a0);
            if ((bVar9 & bVar10) == 0) {
              *pbVar7 = bVar9 | bVar10;
              *(short *)(*(int *)(param_1 + 0x18) + uVar26 * 2) = (short)iVar28;
              iVar28 = iVar28 + 1;
              if (uVar35 == uVar29) {
                uVar29 = uVar37 + 1;
                uVar35 = uVar37;
              }
              else if (uVar37 == uVar29) {
                uVar29 = uVar29 + 1;
              }
              else if (uVar37 < uVar35 || uVar29 < uVar37) {
                iVar23 = *(int *)(param_1 + 0xfc8);
                uVar21 = 0;
                uVar16 = uVar29 - uVar35;
                if (*(uint *)(param_3 + 8) != 0) {
                  do {
                    piVar8 = (int *)(param_6 + uVar21 * 0xc);
                    if (*piVar8 != 0) {
                      iVar22 = 0;
                      iVar34 = *piVar8 + piVar8[1] * uVar35;
                      iVar20 = param_3 + (uint)*(byte *)(uVar21 + param_3 + 0x214) * 8;
                      uVar29 = 0;
                      bVar9 = *(byte *)(iVar20 + 0x16) >> 2;
                      if (uVar16 != 0) {
                        iVar20 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar20 + 0x17) * 4;
                        do {
                          uVar30 = 0;
                          if (bVar9 != 0) {
                            do {
                              iVar2 = uVar30 * 4;
                              iVar1 = uVar30 * 4;
                              uVar30 = uVar30 + 1;
                              *(undefined4 *)(iVar20 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                            } while (uVar30 < bVar9);
                          }
                          iVar22 = iVar22 + 1;
                          iVar20 = iVar23 + iVar20;
                          if (iVar22 == piVar8[2]) {
                            iVar22 = 0;
                            iVar34 = *(int *)(param_6 + uVar21 * 0xc + 4) + iVar34;
                          }
                          uVar29 = uVar29 + 1;
                        } while (uVar29 < uVar16);
                      }
                    }
                    uVar21 = uVar21 + 1;
                  } while (uVar21 < *(uint *)(param_3 + 8));
                }
                uVar29 = uVar37 + 1;
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar16 * iVar23;
                *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar16;
                uVar35 = uVar37;
              }
            }
            *(uint *)*piVar3 = (uint)*(ushort *)(*piVar4 + uVar26 * 2);
            uVar38 = uVar38 + param_13;
            if (param_15 != '\0') {
              if (uVar38 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_10157c90(param_1 + 0x20,0,8);
                *(uint *)(param_1 + 0x40) = uVar38 >> 0x10;
              }
            }
            uVar37 = uVar38 & 0xffff;
            uVar26 = uVar37 >> 0xb;
            if (*(char *)(param_1 + 0x20 + uVar26) == '\0') {
              *(undefined1 *)(uVar26 + param_1 + 0x20) = 1;
              puVar33 = (undefined8 *)(*(int *)(param_1 + 0x1c) + uVar26 * 0x100);
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
            pbVar7 = (byte *)(*piVar5 + (uVar37 >> 3));
            bVar9 = *pbVar7;
            bVar10 = *(byte *)((uVar38 & 7) + 0x1016e3a0);
            if ((bVar9 & bVar10) == 0) {
              *pbVar7 = bVar9 | bVar10;
              *(short *)(*(int *)(param_1 + 0x18) + uVar37 * 2) = (short)iVar28;
              iVar28 = iVar28 + 1;
              if (uVar35 == uVar29) {
LAB_1007e10c:
                uVar29 = uVar38 + 1;
                uVar35 = uVar38;
              }
              else if (uVar38 == uVar29) {
                uVar29 = uVar29 + 1;
              }
              else if (uVar38 < uVar35 || uVar29 < uVar38) {
                iVar23 = *(int *)(param_1 + 0xfc8);
                uVar26 = 0;
                uVar29 = uVar29 - uVar35;
                if (*(uint *)(param_3 + 8) != 0) {
                  do {
                    piVar8 = (int *)(param_6 + uVar26 * 0xc);
                    if (*piVar8 != 0) {
                      iVar22 = 0;
                      iVar34 = *piVar8 + piVar8[1] * uVar35;
                      iVar20 = param_3 + (uint)*(byte *)(uVar26 + param_3 + 0x214) * 8;
                      uVar21 = 0;
                      bVar9 = *(byte *)(iVar20 + 0x16) >> 2;
                      if (uVar29 != 0) {
                        iVar20 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar20 + 0x17) * 4;
                        do {
                          uVar16 = 0;
                          if (bVar9 != 0) {
                            do {
                              iVar2 = uVar16 * 4;
                              iVar1 = uVar16 * 4;
                              uVar16 = uVar16 + 1;
                              *(undefined4 *)(iVar20 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                            } while (uVar16 < bVar9);
                          }
                          iVar22 = iVar22 + 1;
                          iVar20 = iVar23 + iVar20;
                          if (iVar22 == piVar8[2]) {
                            iVar22 = 0;
                            iVar34 = *(int *)(param_6 + uVar26 * 0xc + 4) + iVar34;
                          }
                          uVar21 = uVar21 + 1;
                        } while (uVar21 < uVar29);
                      }
                    }
                    uVar26 = uVar26 + 1;
                  } while (uVar26 < *(uint *)(param_3 + 8));
                }
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar29 * iVar23;
                *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar29;
                goto LAB_1007e10c;
              }
            }
            *(uint *)(*piVar3 + 4) = (uint)*(ushort *)(*piVar4 + uVar37 * 2);
            uVar36 = uVar36 + param_13;
            if (param_15 != '\0') {
              if (uVar36 >> 0x10 != *(uint *)(param_1 + 0x40)) {
                FUN_10157c90(param_1 + 0x20,0,8);
                *(uint *)(param_1 + 0x40) = uVar36 >> 0x10;
              }
            }
            uVar37 = uVar36 & 0xffff;
            uVar38 = uVar37 >> 0xb;
            if (*(char *)(param_1 + 0x20 + uVar38) == '\0') {
              *(undefined1 *)(uVar38 + param_1 + 0x20) = 1;
              puVar33 = (undefined8 *)(*(int *)(param_1 + 0x1c) + uVar38 * 0x100);
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
            pbVar7 = (byte *)(*piVar5 + (uVar37 >> 3));
            bVar9 = *pbVar7;
            bVar10 = *(byte *)((uVar36 & 7) + 0x1016e3a0);
            if ((bVar9 & bVar10) == 0) {
              *pbVar7 = bVar9 | bVar10;
              *(short *)(*(int *)(param_1 + 0x18) + uVar37 * 2) = (short)iVar28;
              iVar28 = iVar28 + 1;
              if (uVar35 == uVar29) {
LAB_1007e35c:
                uVar29 = uVar36 + 1;
                uVar35 = uVar36;
              }
              else if (uVar36 == uVar29) {
                uVar29 = uVar29 + 1;
              }
              else if (uVar36 < uVar35 || uVar29 < uVar36) {
                iVar23 = *(int *)(param_1 + 0xfc8);
                uVar38 = 0;
                uVar29 = uVar29 - uVar35;
                if (*(uint *)(param_3 + 8) != 0) {
                  do {
                    piVar8 = (int *)(param_6 + uVar38 * 0xc);
                    if (*piVar8 != 0) {
                      iVar22 = 0;
                      iVar34 = *piVar8 + piVar8[1] * uVar35;
                      iVar20 = param_3 + (uint)*(byte *)(uVar38 + param_3 + 0x214) * 8;
                      uVar26 = 0;
                      bVar9 = *(byte *)(iVar20 + 0x16) >> 2;
                      if (uVar29 != 0) {
                        iVar20 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar20 + 0x17) * 4;
                        do {
                          uVar21 = 0;
                          if (bVar9 != 0) {
                            do {
                              iVar2 = uVar21 * 4;
                              iVar1 = uVar21 * 4;
                              uVar21 = uVar21 + 1;
                              *(undefined4 *)(iVar20 + iVar1) = *(undefined4 *)(iVar34 + iVar2);
                            } while (uVar21 < bVar9);
                          }
                          iVar22 = iVar22 + 1;
                          iVar20 = iVar23 + iVar20;
                          if (iVar22 == piVar8[2]) {
                            iVar22 = 0;
                            iVar34 = *(int *)(param_6 + uVar38 * 0xc + 4) + iVar34;
                          }
                          uVar26 = uVar26 + 1;
                        } while (uVar26 < uVar29);
                      }
                    }
                    uVar38 = uVar38 + 1;
                  } while (uVar38 < *(uint *)(param_3 + 8));
                }
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar29 * iVar23;
                *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar29;
                goto LAB_1007e35c;
              }
            }
            *(uint *)(*piVar3 + 8) = (uint)*(ushort *)(*piVar4 + uVar37 * 2);
            *piVar3 = *piVar3 + 0xc;
            local_c4 = local_c4 + 1;
            local_88 = local_88 + 1;
          } while (local_88 < uVar24);
          if (uVar29 != uVar35) {
            uVar29 = uVar29 - uVar35;
            iVar28 = *(int *)(param_1 + 0xfc8);
            uVar37 = 0;
            if (*(uint *)(param_3 + 8) != 0) {
              do {
                piVar3 = (int *)(param_6 + uVar37 * 0xc);
                if (*piVar3 != 0) {
                  iVar23 = 0;
                  iVar20 = *piVar3 + piVar3[1] * uVar35;
                  iVar22 = param_3 + (uint)*(byte *)(uVar37 + param_3 + 0x214) * 8;
                  bVar9 = *(byte *)(iVar22 + 0x16) >> 2;
                  uVar38 = 0;
                  if (uVar29 != 0) {
                    iVar22 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar22 + 0x17) * 4;
                    do {
                      uVar36 = 0;
                      if (bVar9 != 0) {
                        do {
                          iVar34 = uVar36 * 4;
                          iVar2 = uVar36 * 4;
                          uVar36 = uVar36 + 1;
                          *(undefined4 *)(iVar22 + iVar2) = *(undefined4 *)(iVar20 + iVar34);
                        } while (uVar36 < bVar9);
                      }
                      iVar23 = iVar23 + 1;
                      iVar22 = iVar28 + iVar22;
                      if (iVar23 == piVar3[2]) {
                        iVar23 = 0;
                        iVar20 = *(int *)(param_6 + uVar37 * 0xc + 4) + iVar20;
                      }
                      uVar38 = uVar38 + 1;
                    } while (uVar38 < uVar29);
                  }
                }
                uVar37 = uVar37 + 1;
              } while (uVar37 < *(uint *)(param_3 + 8));
            }
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar28 * uVar29;
            iVar28 = *(int *)(param_1 + 0x54) + uVar29;
LAB_1007ef58:
            *(int *)(param_1 + 0x54) = iVar28;
          }
        }
        iVar25 = uVar24 + iVar25;
        iVar28 = uVar24 * 3 + *(int *)(param_1 + 0x6c);
        *(int *)(param_1 + 0x6c) = iVar28;
        local_c0 = local_c0 - uVar24;
      } while (local_c0 != 0);
    }
  }
  return;
}

