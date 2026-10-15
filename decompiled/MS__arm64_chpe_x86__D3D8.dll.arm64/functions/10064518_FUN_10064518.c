/*
 * FUN_10064518 at 10064518
 * undefined FUN_10064518(void)
 * Address ranges: 10064518-10065607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10064518(int param_1,int param_2,int param_3,char param_4,undefined4 param_5,
                 undefined8 *param_6,uint param_7,uint param_8,char param_9,undefined4 param_10,
                 undefined1 param_11,undefined4 param_12,undefined1 param_13)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  undefined8 *puVar10;
  byte bVar11;
  code *pcVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  uint uVar26;
  undefined8 *puVar27;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  uint uVar28;
  int iVar29;
  int *piVar30;
  int iVar31;
  uint local_74;
  
  pcVar12 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar18 = 3;
  iVar31 = 0;
  switch(param_2) {
  case 1:
  case 2:
    uVar18 = 1;
    if (param_2 == 2) {
      uVar18 = 2;
    }
  case 4:
    if (uVar18 == 0) {
                    /* WARNING: Does not return */
      uVar13 = SoftwareBreakpoint(0xf004,0x1006458c);
      (*(code *)uVar13)();
    }
    uVar21 = 0;
    if (uVar18 != 0) {
      uVar21 = param_8 / uVar18;
    }
    uVar21 = uVar21 * uVar18;
    if (uVar21 != 0) {
      piVar3 = (int *)(param_1 + 0x54);
      do {
        iVar19 = *(int *)(param_1 + 0x50) + *piVar3;
        if (0x1000U - iVar19 < 0x10) {
          (*pcVar12)();
          (*extraout_w11)(param_1,1);
          iVar19 = 0;
        }
        if (uVar18 == 0) {
                    /* WARNING: Does not return */
          uVar13 = SoftwareBreakpoint(0xf004,0x10064634);
          (*(code *)uVar13)();
        }
        uVar22 = 0;
        if (uVar18 != 0) {
          uVar22 = (0x1000U - iVar19) / uVar18;
        }
        uVar22 = (0x1000 - ((0x1000U - iVar19) - uVar22 * uVar18)) - iVar19;
        if (uVar21 < uVar22) {
          uVar22 = uVar21;
        }
        uVar14 = (ulonglong)*(uint *)(param_3 + 0xc);
        if (param_4 == '\0') {
          (*pcVar12)();
          (*extraout_w11_01)(param_1,param_2,param_5,uVar14 & 0xffffffff,uVar22,0,param_13);
        }
        else {
          (*pcVar12)();
          (*extraout_w11_00)(param_1,param_2,param_3,param_5,uVar14 & 0xffffffff,uVar22,0,param_11);
        }
        uVar20 = *(uint *)(param_1 + 0x6a8);
        if (param_9 == '\0') {
          if (param_7 == uVar20) {
            uVar23 = uVar22 * uVar20;
            piVar30 = (int *)(param_1 + 0x4c);
            puVar27 = (undefined8 *)((int)param_6 + uVar20 * iVar31);
            puVar25 = (undefined8 *)*piVar30;
            uVar20 = 0;
            puVar24 = puVar25;
            if (uVar23 >> 4 != 0) {
              do {
                puVar10 = puVar27 + 1;
                uVar13 = *puVar27;
                uVar20 = uVar20 + 1;
                puVar27 = puVar27 + 2;
                puVar25 = puVar24 + 2;
                puVar24[1] = *puVar10;
                *puVar24 = uVar13;
                puVar24 = puVar25;
              } while (uVar20 < uVar23 >> 4);
            }
            uVar17 = uVar23 >> 2 & 3;
            uVar20 = 0;
            if (uVar17 != 0) {
              do {
                iVar19 = uVar20 * 4;
                iVar29 = uVar20 * 4;
                uVar20 = uVar20 + 1;
                *(undefined4 *)((int)puVar25 + iVar29) = *(undefined4 *)((int)puVar27 + iVar19);
              } while (uVar20 < uVar17);
            }
            *piVar30 = uVar23 + *piVar30;
          }
          else {
            uVar23 = 0;
            if (uVar22 != 0) {
              piVar30 = (int *)(param_1 + 0x4c);
              uVar17 = uVar20 >> 2 & 3;
              iVar19 = iVar31;
              do {
                puVar25 = (undefined8 *)*piVar30;
                puVar27 = (undefined8 *)((int)param_6 + iVar19 * param_7);
                uVar26 = 0;
                puVar24 = puVar25;
                if (uVar20 >> 4 != 0) {
                  do {
                    puVar10 = puVar27 + 1;
                    uVar13 = *puVar27;
                    uVar26 = uVar26 + 1;
                    puVar27 = puVar27 + 2;
                    puVar25 = puVar24 + 2;
                    puVar24[1] = *puVar10;
                    *puVar24 = uVar13;
                    puVar24 = puVar25;
                  } while (uVar26 < uVar20 >> 4);
                }
                uVar26 = 0;
                if (uVar17 != 0) {
                  do {
                    iVar29 = uVar26 * 4;
                    iVar8 = uVar26 * 4;
                    uVar26 = uVar26 + 1;
                    *(undefined4 *)((int)puVar25 + iVar8) = *(undefined4 *)((int)puVar27 + iVar29);
                  } while (uVar26 < uVar17);
                }
                uVar23 = uVar23 + 1;
                iVar19 = iVar19 + 1;
                *piVar30 = *piVar30 + uVar20;
              } while (uVar23 < uVar22);
            }
          }
        }
        else {
          uVar23 = 0;
          if (*(uint *)(param_3 + 8) != 0) {
            do {
              piVar30 = (int *)(param_6 + uVar23);
              if (*piVar30 != 0) {
                uVar17 = 0;
                iVar29 = *piVar30 + piVar30[1] * iVar31;
                iVar19 = param_3 + (uint)*(byte *)(uVar23 + param_3 + 0x9c) * 8;
                bVar9 = *(byte *)(iVar19 + 0x16) >> 2;
                if (uVar22 != 0) {
                  iVar19 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar19 + 0x17) * 4;
                  do {
                    uVar26 = 0;
                    if (bVar9 != 0) {
                      do {
                        iVar8 = uVar26 * 4;
                        iVar1 = uVar26 * 4;
                        uVar26 = uVar26 + 1;
                        *(undefined4 *)(iVar19 + iVar1) = *(undefined4 *)(iVar29 + iVar8);
                      } while (uVar26 < bVar9);
                    }
                    uVar17 = uVar17 + 1;
                    iVar19 = iVar19 + uVar20;
                    iVar29 = piVar30[1] + iVar29;
                  } while (uVar17 < uVar22);
                }
              }
              uVar23 = uVar23 + 1;
            } while (uVar23 < *(uint *)(param_3 + 8));
          }
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar22 * uVar20;
        }
        uVar21 = uVar21 - uVar22;
        iVar31 = uVar22 + iVar31;
        *piVar3 = *piVar3 + uVar22;
      } while (uVar21 != 0);
    }
    break;
  case 3:
    uVar18 = 2;
  case 5:
    uVar21 = uVar18 - 1;
    if (uVar18 <= param_8) {
      piVar3 = (int *)(param_1 + 0x54);
      puVar4 = (uint *)(param_1 + 0x6a8);
      local_74 = param_8;
      do {
        iVar19 = *piVar3 + *(int *)(param_1 + 0x50);
        if (0x1000U - iVar19 < 0x10) {
          (*pcVar12)();
          (*extraout_w11_02)(param_1,1);
          iVar19 = 0;
        }
        uVar22 = 0x1000U - iVar19 & 0xfffffffe;
        if (local_74 < uVar22) {
          uVar22 = local_74;
        }
        uVar14 = (ulonglong)*(uint *)(param_3 + 0xc);
        if (param_4 == '\0') {
          (*pcVar12)();
          (*extraout_w11_04)(param_1,param_2,param_5,uVar14 & 0xffffffff,uVar22,0,0);
        }
        else {
          (*pcVar12)();
          (*extraout_w11_03)(param_1,param_2,param_3,param_5,uVar14 & 0xffffffff,uVar22,0,param_11);
        }
        (*pcVar12)();
        (*extraout_w11_05)(param_1,0);
        uVar20 = *puVar4;
        if (param_9 == '\0') {
          if (param_7 == uVar20) {
            uVar23 = uVar20 * uVar21;
            piVar30 = (int *)(param_1 + 0x4c);
            puVar27 = (undefined8 *)((int)param_6 + uVar20 * iVar31);
            puVar25 = (undefined8 *)*piVar30;
            uVar20 = 0;
            puVar24 = puVar25;
            if (uVar23 >> 4 != 0) {
              do {
                puVar10 = puVar27 + 1;
                uVar13 = *puVar27;
                uVar20 = uVar20 + 1;
                puVar27 = puVar27 + 2;
                puVar25 = puVar24 + 2;
                puVar24[1] = *puVar10;
                *puVar24 = uVar13;
                puVar24 = puVar25;
              } while (uVar20 < uVar23 >> 4);
            }
            uVar17 = uVar23 >> 2 & 3;
            uVar20 = 0;
            if (uVar17 != 0) {
              do {
                iVar19 = uVar20 * 4;
                iVar29 = uVar20 * 4;
                uVar20 = uVar20 + 1;
                *(undefined4 *)((int)puVar25 + iVar29) = *(undefined4 *)((int)puVar27 + iVar19);
              } while (uVar20 < uVar17);
            }
            puVar27 = (undefined8 *)(*piVar30 + uVar23);
            *piVar30 = (int)puVar27;
          }
          else {
            piVar30 = (int *)(param_1 + 0x4c);
            uVar23 = 0;
            uVar17 = uVar20 >> 2 & 3;
            iVar19 = iVar31;
            do {
              puVar25 = (undefined8 *)*piVar30;
              puVar27 = (undefined8 *)((int)param_6 + iVar19 * param_7);
              uVar26 = 0;
              puVar24 = puVar25;
              if (uVar20 >> 4 != 0) {
                do {
                  puVar10 = puVar27 + 1;
                  uVar13 = *puVar27;
                  uVar26 = uVar26 + 1;
                  puVar27 = puVar27 + 2;
                  puVar25 = puVar24 + 2;
                  puVar24[1] = *puVar10;
                  *puVar24 = uVar13;
                  puVar24 = puVar25;
                } while (uVar26 < uVar20 >> 4);
              }
              uVar26 = 0;
              if (uVar17 != 0) {
                do {
                  iVar29 = uVar26 * 4;
                  iVar8 = uVar26 * 4;
                  uVar26 = uVar26 + 1;
                  *(undefined4 *)((int)puVar25 + iVar8) = *(undefined4 *)((int)puVar27 + iVar29);
                } while (uVar26 < uVar17);
              }
              uVar23 = uVar23 + 1;
              iVar19 = iVar19 + 1;
              puVar27 = (undefined8 *)(*piVar30 + uVar20);
              *piVar30 = (int)puVar27;
            } while (uVar23 < uVar21);
          }
          piVar30 = (int *)(param_1 + 0x4c);
          iVar19 = uVar21 + iVar31;
          *piVar3 = uVar21 + *piVar3;
          uVar20 = *puVar4;
          uVar23 = uVar22 - uVar21;
          if (param_7 == uVar20) {
            uVar17 = uVar23 * uVar20;
            puVar25 = (undefined8 *)((int)param_6 + uVar20 * iVar19);
            uVar20 = 0;
            puVar24 = puVar27;
            if (uVar17 >> 4 != 0) {
              do {
                puVar10 = puVar25 + 1;
                uVar13 = *puVar25;
                uVar20 = uVar20 + 1;
                puVar25 = puVar25 + 2;
                puVar27 = puVar24 + 2;
                puVar24[1] = *puVar10;
                *puVar24 = uVar13;
                puVar24 = puVar27;
              } while (uVar20 < uVar17 >> 4);
            }
            uVar26 = uVar17 >> 2 & 3;
            uVar20 = 0;
            if (uVar26 != 0) {
              do {
                iVar19 = uVar20 * 4;
                iVar29 = uVar20 * 4;
                uVar20 = uVar20 + 1;
                *(undefined4 *)((int)puVar27 + iVar29) = *(undefined4 *)((int)puVar25 + iVar19);
              } while (uVar20 < uVar26);
            }
            *piVar30 = uVar17 + *piVar30;
          }
          else {
            uVar17 = 0;
            if (uVar23 != 0) {
              uVar26 = uVar20 >> 2 & 3;
              do {
                puVar25 = (undefined8 *)((int)param_6 + iVar19 * param_7);
                uVar28 = 0;
                puVar24 = puVar27;
                if (uVar20 >> 4 != 0) {
                  do {
                    puVar10 = puVar25 + 1;
                    uVar13 = *puVar25;
                    uVar28 = uVar28 + 1;
                    puVar25 = puVar25 + 2;
                    puVar27 = puVar24 + 2;
                    puVar24[1] = *puVar10;
                    *puVar24 = uVar13;
                    puVar24 = puVar27;
                  } while (uVar28 < uVar20 >> 4);
                }
                uVar28 = 0;
                if (uVar26 != 0) {
                  do {
                    iVar29 = uVar28 * 4;
                    iVar8 = uVar28 * 4;
                    uVar28 = uVar28 + 1;
                    *(undefined4 *)((int)puVar27 + iVar8) = *(undefined4 *)((int)puVar25 + iVar29);
                  } while (uVar28 < uVar26);
                }
                uVar17 = uVar17 + 1;
                iVar19 = iVar19 + 1;
                puVar27 = (undefined8 *)(uVar20 + *piVar30);
                *piVar30 = (int)puVar27;
              } while (uVar17 < uVar23);
            }
          }
        }
        else {
          puVar5 = (uint *)(param_3 + 8);
          uVar23 = 0;
          if (*puVar5 != 0) {
            do {
              piVar30 = (int *)(param_6 + uVar23);
              if (*piVar30 != 0) {
                uVar17 = 0;
                iVar29 = *piVar30 + iVar31 * piVar30[1];
                iVar19 = param_3 + (uint)*(byte *)(uVar23 + param_3 + 0x9c) * 8;
                bVar9 = *(byte *)(iVar19 + 0x16) >> 2;
                iVar19 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar19 + 0x17) * 4;
                do {
                  uVar26 = 0;
                  if (bVar9 != 0) {
                    do {
                      iVar8 = uVar26 * 4;
                      iVar1 = uVar26 * 4;
                      uVar26 = uVar26 + 1;
                      *(undefined4 *)(iVar19 + iVar1) = *(undefined4 *)(iVar29 + iVar8);
                    } while (uVar26 < bVar9);
                  }
                  uVar17 = uVar17 + 1;
                  iVar19 = iVar19 + uVar20;
                  iVar29 = iVar29 + piVar30[1];
                } while (uVar17 < uVar21);
              }
              uVar23 = uVar23 + 1;
            } while (uVar23 < *puVar5);
          }
          piVar30 = (int *)(param_1 + 0x4c);
          *piVar30 = *piVar30 + uVar20 * uVar21;
          *piVar3 = uVar21 + *piVar3;
          uVar20 = 0;
          uVar17 = *puVar4;
          uVar23 = uVar22 - uVar21;
          if (*puVar5 != 0) {
            do {
              piVar6 = (int *)(param_6 + uVar20);
              if (*piVar6 != 0) {
                uVar26 = 0;
                iVar29 = *piVar6 + (uVar21 + iVar31) * piVar6[1];
                iVar19 = param_3 + (uint)*(byte *)(uVar20 + param_3 + 0x9c) * 8;
                bVar9 = *(byte *)(iVar19 + 0x16) >> 2;
                if (uVar23 != 0) {
                  iVar19 = *piVar30 + (uint)*(byte *)(iVar19 + 0x17) * 4;
                  do {
                    uVar28 = 0;
                    if (bVar9 != 0) {
                      do {
                        iVar8 = uVar28 * 4;
                        iVar1 = uVar28 * 4;
                        uVar28 = uVar28 + 1;
                        *(undefined4 *)(iVar19 + iVar1) = *(undefined4 *)(iVar29 + iVar8);
                      } while (uVar28 < bVar9);
                    }
                    uVar26 = uVar26 + 1;
                    iVar19 = uVar17 + iVar19;
                    iVar29 = iVar29 + piVar6[1];
                  } while (uVar26 < uVar23);
                }
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 < *puVar5);
          }
          *piVar30 = *piVar30 + uVar23 * uVar17;
        }
        *piVar3 = uVar23 + *piVar3;
        iVar31 = uVar23 + iVar31;
        local_74 = (uVar21 - uVar22) + local_74;
      } while (uVar18 <= local_74);
    }
    break;
  case 6:
    if (2 < param_8) {
      local_74 = param_8 - 2;
      iVar31 = 1;
      if (local_74 != 0) {
        piVar3 = (int *)(param_1 + 0x6c);
        piVar30 = (int *)(param_1 + 0x54);
        iVar19 = *piVar3;
        puVar4 = (uint *)(param_1 + 0x6a8);
        do {
          iVar29 = *piVar30 + *(int *)(param_1 + 0x50);
          if ((0x1000U - iVar29 < 0x10) ||
             (iVar19 = *(int *)(param_1 + 0x68) + iVar19, 0x1000U - iVar19 < 0x10)) {
            (*pcVar12)();
            (*extraout_w11_06)(param_1,1);
            iVar29 = 0;
            iVar19 = 0;
          }
          uVar21 = (0x1000U - iVar19) / 3;
          uVar18 = 0xffeU - iVar29;
          if (uVar21 <= 0xffeU - iVar29) {
            uVar18 = uVar21;
          }
          if (local_74 < uVar18) {
            uVar18 = local_74;
          }
          uVar16 = (ulonglong)(uVar18 * 3);
          uVar15 = (ulonglong)(uVar18 + 2);
          uVar14 = (ulonglong)*(uint *)(param_3 + 0xc);
          if (param_4 == '\0') {
            (*pcVar12)();
            (*extraout_w11_08)(param_1,4,param_5,uVar14 & 0xffffffff,uVar15 & 0xffffffff,
                               uVar16 & 0xffffffff,0);
          }
          else {
            (*pcVar12)();
            (*extraout_w11_07)(param_1,4,param_3,param_5,uVar14 & 0xffffffff,uVar15 & 0xffffffff,
                               uVar16 & 0xffffffff,param_11);
          }
          uVar21 = *puVar4;
          if (param_9 == '\0') {
            piVar6 = (int *)(param_1 + 0x4c);
            puVar27 = (undefined8 *)*piVar6;
            uVar20 = uVar21 >> 4;
            uVar22 = 0;
            if (param_7 == uVar21) {
              puVar25 = param_6;
              puVar24 = puVar27;
              if (uVar20 != 0) {
                do {
                  puVar10 = puVar25 + 1;
                  uVar13 = *puVar25;
                  uVar22 = uVar22 + 1;
                  puVar25 = puVar25 + 2;
                  puVar27 = puVar24 + 2;
                  puVar24[1] = *puVar10;
                  *puVar24 = uVar13;
                  puVar24 = puVar27;
                } while (uVar22 < uVar20);
              }
              uVar20 = uVar21 >> 2 & 3;
              uVar22 = 0;
              if (uVar20 != 0) {
                do {
                  iVar19 = uVar22 * 4;
                  iVar29 = uVar22 * 4;
                  uVar22 = uVar22 + 1;
                  *(undefined4 *)((int)puVar27 + iVar29) = *(undefined4 *)((int)puVar25 + iVar19);
                } while (uVar22 < uVar20);
              }
            }
            else {
              puVar25 = param_6;
              puVar24 = puVar27;
              if (uVar20 != 0) {
                do {
                  puVar10 = puVar25 + 1;
                  uVar13 = *puVar25;
                  uVar22 = uVar22 + 1;
                  puVar25 = puVar25 + 2;
                  puVar27 = puVar24 + 2;
                  puVar24[1] = *puVar10;
                  *puVar24 = uVar13;
                  puVar24 = puVar27;
                } while (uVar22 < uVar20);
              }
              uVar20 = uVar21 >> 2 & 3;
              uVar22 = 0;
              if (uVar20 != 0) {
                do {
                  iVar19 = uVar22 * 4;
                  iVar29 = uVar22 * 4;
                  uVar22 = uVar22 + 1;
                  *(undefined4 *)((int)puVar27 + iVar29) = *(undefined4 *)((int)puVar25 + iVar19);
                } while (uVar22 < uVar20);
              }
            }
            uVar22 = 0;
            puVar27 = (undefined8 *)(*piVar6 + uVar21);
            *piVar6 = (int)puVar27;
            *piVar30 = *piVar30 + 1;
            uVar21 = *puVar4;
            uVar20 = uVar21 >> 4;
            if (param_7 == uVar21) {
              puVar25 = (undefined8 *)((int)param_6 + uVar21 * iVar31);
              puVar24 = puVar27;
              if (uVar20 != 0) {
                do {
                  puVar10 = puVar25 + 1;
                  uVar13 = *puVar25;
                  uVar22 = uVar22 + 1;
                  puVar25 = puVar25 + 2;
                  puVar27 = puVar24 + 2;
                  puVar24[1] = *puVar10;
                  *puVar24 = uVar13;
                  puVar24 = puVar27;
                } while (uVar22 < uVar20);
              }
              uVar20 = uVar21 >> 2 & 3;
              uVar22 = 0;
              if (uVar20 != 0) {
                do {
                  iVar19 = uVar22 * 4;
                  iVar29 = uVar22 * 4;
                  uVar22 = uVar22 + 1;
                  *(undefined4 *)((int)puVar27 + iVar29) = *(undefined4 *)((int)puVar25 + iVar19);
                } while (uVar22 < uVar20);
              }
            }
            else {
              puVar25 = (undefined8 *)((int)param_6 + iVar31 * param_7);
              puVar24 = puVar27;
              if (uVar20 != 0) {
                do {
                  puVar10 = puVar25 + 1;
                  uVar13 = *puVar25;
                  uVar22 = uVar22 + 1;
                  puVar25 = puVar25 + 2;
                  puVar27 = puVar24 + 2;
                  puVar24[1] = *puVar10;
                  *puVar24 = uVar13;
                  puVar24 = puVar27;
                } while (uVar22 < uVar20);
              }
              uVar20 = uVar21 >> 2 & 3;
              uVar22 = 0;
              if (uVar20 != 0) {
                do {
                  iVar19 = uVar22 * 4;
                  iVar29 = uVar22 * 4;
                  uVar22 = uVar22 + 1;
                  *(undefined4 *)((int)puVar27 + iVar29) = *(undefined4 *)((int)puVar25 + iVar19);
                } while (uVar22 < uVar20);
              }
            }
            iVar19 = iVar31 + 1;
            puVar27 = (undefined8 *)(*piVar6 + uVar21);
            *piVar6 = (int)puVar27;
            *piVar30 = *piVar30 + 1;
            uVar21 = *puVar4;
            if (param_7 == uVar21) {
              uVar22 = uVar18 * uVar21;
              puVar25 = (undefined8 *)((int)param_6 + uVar21 * iVar19);
              uVar21 = 0;
              puVar24 = puVar27;
              if (uVar22 >> 4 != 0) {
                do {
                  puVar10 = puVar25 + 1;
                  uVar13 = *puVar25;
                  uVar21 = uVar21 + 1;
                  puVar25 = puVar25 + 2;
                  puVar27 = puVar24 + 2;
                  puVar24[1] = *puVar10;
                  *puVar24 = uVar13;
                  puVar24 = puVar27;
                } while (uVar21 < uVar22 >> 4);
              }
              uVar20 = uVar22 >> 2 & 3;
              uVar21 = 0;
              if (uVar20 != 0) {
                do {
                  iVar19 = uVar21 * 4;
                  iVar29 = uVar21 * 4;
                  uVar21 = uVar21 + 1;
                  *(undefined4 *)((int)puVar27 + iVar29) = *(undefined4 *)((int)puVar25 + iVar19);
                } while (uVar21 < uVar20);
              }
              iVar19 = *piVar6 + uVar22;
              goto LAB_100654a0;
            }
            uVar22 = 0;
            if (uVar18 != 0) {
              uVar20 = uVar21 >> 2 & 3;
              do {
                puVar25 = (undefined8 *)((int)param_6 + iVar19 * param_7);
                uVar23 = 0;
                puVar24 = puVar27;
                if (uVar21 >> 4 != 0) {
                  do {
                    puVar10 = puVar25 + 1;
                    uVar13 = *puVar25;
                    uVar23 = uVar23 + 1;
                    puVar25 = puVar25 + 2;
                    puVar27 = puVar24 + 2;
                    puVar24[1] = *puVar10;
                    *puVar24 = uVar13;
                    puVar24 = puVar27;
                  } while (uVar23 < uVar21 >> 4);
                }
                uVar23 = 0;
                if (uVar20 != 0) {
                  do {
                    iVar29 = uVar23 * 4;
                    iVar8 = uVar23 * 4;
                    uVar23 = uVar23 + 1;
                    *(undefined4 *)((int)puVar27 + iVar8) = *(undefined4 *)((int)puVar25 + iVar29);
                  } while (uVar23 < uVar20);
                }
                uVar22 = uVar22 + 1;
                iVar19 = iVar19 + 1;
                puVar27 = (undefined8 *)(*piVar6 + uVar21);
                *piVar6 = (int)puVar27;
              } while (uVar22 < uVar18);
            }
          }
          else {
            puVar5 = (uint *)(param_3 + 8);
            uVar22 = 0;
            if (*puVar5 != 0) {
              do {
                iVar19 = *(int *)(param_6 + uVar22);
                if (iVar19 != 0) {
                  iVar8 = *(int *)(param_1 + 0x4c);
                  iVar29 = param_3 + (uint)*(byte *)(uVar22 + param_3 + 0x9c) * 8;
                  bVar9 = *(byte *)(iVar29 + 0x17);
                  bVar11 = *(byte *)(iVar29 + 0x16) >> 2;
                  uVar20 = 0;
                  if (bVar11 != 0) {
                    do {
                      iVar29 = uVar20 * 4;
                      iVar1 = uVar20 * 4;
                      uVar20 = uVar20 + 1;
                      *(undefined4 *)(iVar8 + (uint)bVar9 * 4 + iVar1) =
                           *(undefined4 *)(iVar19 + iVar29);
                    } while (uVar20 < bVar11);
                  }
                }
                uVar22 = uVar22 + 1;
              } while (uVar22 < *puVar5);
            }
            piVar6 = (int *)(param_1 + 0x4c);
            *piVar6 = uVar21 + *piVar6;
            *piVar30 = *piVar30 + 1;
            uVar22 = *puVar4;
            uVar21 = 0;
            if (*puVar5 != 0) {
              do {
                iVar19 = *(int *)(param_6 + uVar21);
                if (iVar19 != 0) {
                  iVar8 = *(int *)((int)(param_6 + uVar21) + 4);
                  iVar29 = param_3 + (uint)*(byte *)(uVar21 + param_3 + 0x9c) * 8;
                  iVar1 = *piVar6;
                  bVar9 = *(byte *)(iVar29 + 0x17);
                  bVar11 = *(byte *)(iVar29 + 0x16) >> 2;
                  uVar20 = 0;
                  if (bVar11 != 0) {
                    do {
                      iVar29 = uVar20 * 4;
                      iVar2 = uVar20 * 4;
                      uVar20 = uVar20 + 1;
                      *(undefined4 *)(iVar1 + (uint)bVar9 * 4 + iVar2) =
                           *(undefined4 *)(iVar19 + iVar8 * iVar31 + iVar29);
                    } while (uVar20 < bVar11);
                  }
                }
                uVar21 = uVar21 + 1;
              } while (uVar21 < *puVar5);
            }
            *piVar6 = uVar22 + *piVar6;
            *piVar30 = *piVar30 + 1;
            uVar22 = *puVar4;
            uVar21 = 0;
            if (*puVar5 != 0) {
              do {
                piVar7 = (int *)(param_6 + uVar21);
                if (*piVar7 != 0) {
                  iVar19 = piVar7[1];
                  uVar20 = 0;
                  iVar19 = iVar19 + iVar31 * iVar19 + *piVar7;
                  iVar29 = param_3 + (uint)*(byte *)(uVar21 + param_3 + 0x9c) * 8;
                  bVar9 = *(byte *)(iVar29 + 0x16) >> 2;
                  if (uVar18 != 0) {
                    iVar29 = *piVar6 + (uint)*(byte *)(iVar29 + 0x17) * 4;
                    do {
                      uVar23 = 0;
                      if (bVar9 != 0) {
                        do {
                          iVar8 = uVar23 * 4;
                          iVar1 = uVar23 * 4;
                          uVar23 = uVar23 + 1;
                          *(undefined4 *)(iVar29 + iVar1) = *(undefined4 *)(iVar19 + iVar8);
                        } while (uVar23 < bVar9);
                      }
                      uVar20 = uVar20 + 1;
                      iVar29 = uVar22 + iVar29;
                      iVar19 = iVar19 + piVar7[1];
                    } while (uVar20 < uVar18);
                  }
                }
                uVar21 = uVar21 + 1;
              } while (uVar21 < *puVar5);
            }
            iVar19 = *piVar6 + uVar18 * uVar22;
LAB_100654a0:
            *(int *)(param_1 + 0x4c) = iVar19;
          }
          iVar19 = *piVar30;
          *piVar30 = uVar18 + iVar19;
          iVar19 = (uVar18 + iVar19) - uVar18;
          uVar21 = 0;
          if (uVar18 != 0) {
            piVar6 = (int *)(param_1 + 100);
            do {
              *(uint *)*piVar6 = iVar19 + -1 + uVar21;
              iVar29 = iVar19 + uVar21;
              uVar21 = uVar21 + 1;
              *(int *)(*piVar6 + 4) = iVar29;
              *(int *)(*piVar6 + 8) = iVar19 + -2;
              *piVar6 = *piVar6 + 0xc;
            } while (uVar21 < uVar18);
          }
          iVar31 = uVar18 + iVar31;
          iVar19 = uVar18 * 3 + *piVar3;
          *piVar3 = iVar19;
          local_74 = local_74 - uVar18;
        } while (local_74 != 0);
      }
    }
  }
  return;
}

