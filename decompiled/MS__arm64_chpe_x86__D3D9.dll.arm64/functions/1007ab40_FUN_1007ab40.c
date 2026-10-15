/*
 * FUN_1007ab40 at 1007ab40
 * undefined FUN_1007ab40(void)
 * Address ranges: 1007ab40-1007bcfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007ab40(int param_1,int param_2,int param_3,char param_4,undefined4 param_5,
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
  byte bVar8;
  undefined8 *puVar9;
  byte bVar10;
  code *pcVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined8 *puVar25;
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
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int *piVar30;
  int iVar31;
  
  pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar17 = 3;
  iVar31 = 0;
  switch(param_2) {
  case 1:
  case 2:
    uVar17 = 1;
    if (param_2 == 2) {
      uVar17 = 2;
    }
  case 4:
    if (uVar17 == 0) {
                    /* WARNING: Does not return */
      uVar12 = SoftwareBreakpoint(0xf004,0x1007abb8);
      (*(code *)uVar12)();
    }
    uVar21 = 0;
    if (uVar17 != 0) {
      uVar21 = param_8 / uVar17;
    }
    uVar21 = uVar21 * uVar17;
    if (uVar21 != 0) {
      piVar3 = (int *)(param_1 + 0x54);
      do {
        iVar18 = *piVar3 + *(int *)(param_1 + 0x50);
        if (0x1000U - iVar18 < 0x10) {
          (*pcVar11)();
          (*extraout_w11)(param_1,1);
          iVar18 = 0;
        }
        if (uVar17 == 0) {
                    /* WARNING: Does not return */
          uVar12 = SoftwareBreakpoint(0xf004,0x1007ac60);
          (*(code *)uVar12)();
        }
        uVar28 = 0;
        if (uVar17 != 0) {
          uVar28 = (0x1000U - iVar18) / uVar17;
        }
        uVar28 = (0x1000 - ((0x1000U - iVar18) - uVar28 * uVar17)) - iVar18;
        if (uVar21 < uVar28) {
          uVar28 = uVar21;
        }
        uVar13 = (ulonglong)*(uint *)(param_3 + 0xc);
        if (param_4 == '\0') {
          (*pcVar11)();
          (*extraout_w11_01)(param_1,param_2,param_5,uVar13 & 0xffffffff,uVar28,0,param_13);
        }
        else {
          (*pcVar11)();
          (*extraout_w11_00)(param_1,param_2,param_3,param_5,uVar13 & 0xffffffff,uVar28,0,param_11);
        }
        uVar20 = *(uint *)(param_1 + 0xfc8);
        if (param_9 == '\0') {
          if (param_7 == uVar20) {
            uVar19 = uVar28 * uVar20;
            piVar30 = (int *)(param_1 + 0x4c);
            puVar25 = (undefined8 *)((int)param_6 + uVar20 * iVar31);
            uVar20 = 0;
            puVar23 = (undefined8 *)*piVar30;
            puVar22 = puVar23;
            if (uVar19 >> 4 != 0) {
              do {
                puVar9 = puVar25 + 1;
                uVar12 = *puVar25;
                uVar20 = uVar20 + 1;
                puVar25 = puVar25 + 2;
                puVar23 = puVar22 + 2;
                puVar22[1] = *puVar9;
                *puVar22 = uVar12;
                puVar22 = puVar23;
              } while (uVar20 < uVar19 >> 4);
            }
            uVar16 = uVar19 >> 2 & 3;
            uVar20 = 0;
            if (uVar16 != 0) {
              do {
                iVar18 = uVar20 * 4;
                iVar29 = uVar20 * 4;
                uVar20 = uVar20 + 1;
                *(undefined4 *)((int)puVar23 + iVar29) = *(undefined4 *)((int)puVar25 + iVar18);
              } while (uVar20 < uVar16);
            }
            *piVar30 = uVar19 + *piVar30;
          }
          else {
            uVar19 = 0;
            if (uVar28 != 0) {
              piVar30 = (int *)(param_1 + 0x4c);
              uVar16 = uVar20 >> 2 & 3;
              iVar18 = iVar31;
              do {
                puVar23 = (undefined8 *)*piVar30;
                puVar25 = (undefined8 *)((int)param_6 + iVar18 * param_7);
                uVar24 = 0;
                puVar22 = puVar23;
                if (uVar20 >> 4 != 0) {
                  do {
                    puVar9 = puVar25 + 1;
                    uVar12 = *puVar25;
                    uVar24 = uVar24 + 1;
                    puVar25 = puVar25 + 2;
                    puVar23 = puVar22 + 2;
                    puVar22[1] = *puVar9;
                    *puVar22 = uVar12;
                    puVar22 = puVar23;
                  } while (uVar24 < uVar20 >> 4);
                }
                uVar24 = 0;
                if (uVar16 != 0) {
                  do {
                    iVar29 = uVar24 * 4;
                    iVar27 = uVar24 * 4;
                    uVar24 = uVar24 + 1;
                    *(undefined4 *)((int)puVar23 + iVar27) = *(undefined4 *)((int)puVar25 + iVar29);
                  } while (uVar24 < uVar16);
                }
                uVar19 = uVar19 + 1;
                iVar18 = iVar18 + 1;
                *piVar30 = *piVar30 + uVar20;
              } while (uVar19 < uVar28);
            }
          }
        }
        else {
          uVar19 = 0;
          if (*(uint *)(param_3 + 8) != 0) {
            do {
              piVar30 = (int *)((int)param_6 + uVar19 * 0xc);
              if (*piVar30 != 0) {
                iVar18 = 0;
                iVar27 = *piVar30 + piVar30[1] * iVar31;
                iVar29 = param_3 + (uint)*(byte *)(uVar19 + param_3 + 0x214) * 8;
                uVar16 = 0;
                bVar8 = *(byte *)(iVar29 + 0x16) >> 2;
                if (uVar28 != 0) {
                  iVar29 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar29 + 0x17) * 4;
                  do {
                    uVar24 = 0;
                    if (bVar8 != 0) {
                      do {
                        iVar1 = uVar24 * 4;
                        iVar2 = uVar24 * 4;
                        uVar24 = uVar24 + 1;
                        *(undefined4 *)(iVar29 + iVar2) = *(undefined4 *)(iVar27 + iVar1);
                      } while (uVar24 < bVar8);
                    }
                    iVar18 = iVar18 + 1;
                    iVar29 = uVar20 + iVar29;
                    if (iVar18 == piVar30[2]) {
                      iVar18 = 0;
                      iVar27 = piVar30[1] + iVar27;
                    }
                    uVar16 = uVar16 + 1;
                  } while (uVar16 < uVar28);
                }
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(uint *)(param_3 + 8));
          }
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar28 * uVar20;
        }
        uVar21 = uVar21 - uVar28;
        iVar31 = uVar28 + iVar31;
        *piVar3 = uVar28 + *piVar3;
      } while (uVar21 != 0);
    }
    break;
  case 3:
    uVar17 = 2;
  case 5:
    uVar21 = uVar17 - 1;
    if (uVar17 <= param_8) {
      piVar3 = (int *)(param_1 + 0x54);
      puVar4 = (uint *)(param_1 + 0xfc8);
      do {
        iVar18 = *(int *)(param_1 + 0x50) + *piVar3;
        if (0x1000U - iVar18 < 0x10) {
          (*pcVar11)();
          (*extraout_w11_02)(param_1,1);
          iVar18 = 0;
        }
        uVar28 = 0x1000U - iVar18 & 0xfffffffe;
        if (param_8 < uVar28) {
          uVar28 = param_8;
        }
        uVar14 = (ulonglong)uVar28;
        uVar13 = (ulonglong)*(uint *)(param_3 + 0xc);
        if (param_4 == '\0') {
          (*pcVar11)();
          (*extraout_w11_04)(param_1,param_2,param_5,uVar13 & 0xffffffff,uVar14 & 0xffffffff,0,0);
        }
        else {
          (*pcVar11)();
          (*extraout_w11_03)(param_1,param_2,param_3,param_5,uVar13 & 0xffffffff,uVar14 & 0xffffffff
                             ,0,param_11);
        }
        (*pcVar11)();
        (*extraout_w11_05)(param_1,0);
        uVar20 = *puVar4;
        if (param_9 == '\0') {
          if (param_7 == uVar20) {
            uVar19 = uVar20 * uVar21;
            piVar30 = (int *)(param_1 + 0x4c);
            puVar25 = (undefined8 *)((int)param_6 + uVar20 * iVar31);
            puVar23 = (undefined8 *)*piVar30;
            uVar20 = 0;
            puVar22 = puVar23;
            if (uVar19 >> 4 != 0) {
              do {
                puVar9 = puVar25 + 1;
                uVar12 = *puVar25;
                uVar20 = uVar20 + 1;
                puVar25 = puVar25 + 2;
                puVar23 = puVar22 + 2;
                puVar22[1] = *puVar9;
                *puVar22 = uVar12;
                puVar22 = puVar23;
              } while (uVar20 < uVar19 >> 4);
            }
            uVar16 = uVar19 >> 2 & 3;
            uVar20 = 0;
            if (uVar16 != 0) {
              do {
                iVar18 = uVar20 * 4;
                iVar29 = uVar20 * 4;
                uVar20 = uVar20 + 1;
                *(undefined4 *)((int)puVar23 + iVar29) = *(undefined4 *)((int)puVar25 + iVar18);
              } while (uVar20 < uVar16);
            }
            puVar25 = (undefined8 *)(uVar19 + *piVar30);
            *piVar30 = (int)puVar25;
          }
          else {
            piVar30 = (int *)(param_1 + 0x4c);
            uVar19 = 0;
            uVar16 = uVar20 >> 2 & 3;
            iVar18 = iVar31;
            do {
              puVar23 = (undefined8 *)*piVar30;
              puVar25 = (undefined8 *)((int)param_6 + iVar18 * param_7);
              uVar24 = 0;
              puVar22 = puVar23;
              if (uVar20 >> 4 != 0) {
                do {
                  puVar9 = puVar25 + 1;
                  uVar12 = *puVar25;
                  uVar24 = uVar24 + 1;
                  puVar25 = puVar25 + 2;
                  puVar23 = puVar22 + 2;
                  puVar22[1] = *puVar9;
                  *puVar22 = uVar12;
                  puVar22 = puVar23;
                } while (uVar24 < uVar20 >> 4);
              }
              uVar24 = 0;
              if (uVar16 != 0) {
                do {
                  iVar29 = uVar24 * 4;
                  iVar27 = uVar24 * 4;
                  uVar24 = uVar24 + 1;
                  *(undefined4 *)((int)puVar23 + iVar27) = *(undefined4 *)((int)puVar25 + iVar29);
                } while (uVar24 < uVar16);
              }
              uVar19 = uVar19 + 1;
              iVar18 = iVar18 + 1;
              puVar25 = (undefined8 *)(uVar20 + *piVar30);
              *piVar30 = (int)puVar25;
            } while (uVar19 < uVar21);
          }
          piVar30 = (int *)(param_1 + 0x4c);
          iVar18 = uVar21 + iVar31;
          *piVar3 = *piVar3 + uVar21;
          uVar20 = *puVar4;
          uVar19 = uVar28 - uVar21;
          if (param_7 == uVar20) {
            uVar16 = uVar19 * uVar20;
            puVar23 = (undefined8 *)((int)param_6 + uVar20 * iVar18);
            uVar20 = 0;
            puVar22 = puVar25;
            if (uVar16 >> 4 != 0) {
              do {
                puVar9 = puVar23 + 1;
                uVar12 = *puVar23;
                uVar20 = uVar20 + 1;
                puVar23 = puVar23 + 2;
                puVar25 = puVar22 + 2;
                puVar22[1] = *puVar9;
                *puVar22 = uVar12;
                puVar22 = puVar25;
              } while (uVar20 < uVar16 >> 4);
            }
            uVar24 = uVar16 >> 2 & 3;
            uVar20 = 0;
            if (uVar24 != 0) {
              do {
                iVar18 = uVar20 * 4;
                iVar29 = uVar20 * 4;
                uVar20 = uVar20 + 1;
                *(undefined4 *)((int)puVar25 + iVar29) = *(undefined4 *)((int)puVar23 + iVar18);
              } while (uVar20 < uVar24);
            }
            *piVar30 = uVar16 + *piVar30;
          }
          else {
            uVar16 = 0;
            if (uVar19 != 0) {
              uVar24 = uVar20 >> 2 & 3;
              do {
                puVar23 = (undefined8 *)((int)param_6 + iVar18 * param_7);
                uVar26 = 0;
                puVar22 = puVar25;
                if (uVar20 >> 4 != 0) {
                  do {
                    puVar9 = puVar23 + 1;
                    uVar12 = *puVar23;
                    uVar26 = uVar26 + 1;
                    puVar23 = puVar23 + 2;
                    puVar25 = puVar22 + 2;
                    puVar22[1] = *puVar9;
                    *puVar22 = uVar12;
                    puVar22 = puVar25;
                  } while (uVar26 < uVar20 >> 4);
                }
                uVar26 = 0;
                if (uVar24 != 0) {
                  do {
                    iVar29 = uVar26 * 4;
                    iVar27 = uVar26 * 4;
                    uVar26 = uVar26 + 1;
                    *(undefined4 *)((int)puVar25 + iVar27) = *(undefined4 *)((int)puVar23 + iVar29);
                  } while (uVar26 < uVar24);
                }
                uVar16 = uVar16 + 1;
                iVar18 = iVar18 + 1;
                puVar25 = (undefined8 *)(*piVar30 + uVar20);
                *piVar30 = (int)puVar25;
              } while (uVar16 < uVar19);
            }
          }
        }
        else {
          puVar5 = (uint *)(param_3 + 8);
          uVar19 = 0;
          if (*puVar5 != 0) {
            do {
              piVar30 = (int *)((int)param_6 + uVar19 * 0xc);
              if (*piVar30 != 0) {
                iVar18 = 0;
                uVar16 = 0;
                iVar27 = *piVar30 + piVar30[1] * iVar31;
                iVar29 = param_3 + (uint)*(byte *)(uVar19 + param_3 + 0x214) * 8;
                bVar8 = *(byte *)(iVar29 + 0x16) >> 2;
                iVar29 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar29 + 0x17) * 4;
                do {
                  uVar24 = 0;
                  if (bVar8 != 0) {
                    do {
                      iVar1 = uVar24 * 4;
                      iVar2 = uVar24 * 4;
                      uVar24 = uVar24 + 1;
                      *(undefined4 *)(iVar29 + iVar2) = *(undefined4 *)(iVar27 + iVar1);
                    } while (uVar24 < bVar8);
                  }
                  iVar18 = iVar18 + 1;
                  iVar29 = uVar20 + iVar29;
                  if (iVar18 == piVar30[2]) {
                    iVar18 = 0;
                    iVar27 = piVar30[1] + iVar27;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 < uVar21);
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *puVar5);
          }
          piVar30 = (int *)(param_1 + 0x4c);
          *piVar30 = *piVar30 + uVar20 * uVar21;
          *piVar3 = *piVar3 + uVar21;
          uVar20 = 0;
          uVar16 = *puVar4;
          uVar19 = uVar28 - uVar21;
          if (*puVar5 != 0) {
            do {
              piVar6 = (int *)((int)param_6 + uVar20 * 0xc);
              if (*piVar6 != 0) {
                iVar18 = 0;
                iVar27 = *piVar6 + (uVar21 + iVar31) * piVar6[1];
                iVar29 = param_3 + (uint)*(byte *)(uVar20 + param_3 + 0x214) * 8;
                uVar24 = 0;
                bVar8 = *(byte *)(iVar29 + 0x16) >> 2;
                if (uVar19 != 0) {
                  iVar29 = *piVar30 + (uint)*(byte *)(iVar29 + 0x17) * 4;
                  do {
                    uVar26 = 0;
                    if (bVar8 != 0) {
                      do {
                        iVar1 = uVar26 * 4;
                        iVar2 = uVar26 * 4;
                        uVar26 = uVar26 + 1;
                        *(undefined4 *)(iVar29 + iVar2) = *(undefined4 *)(iVar27 + iVar1);
                      } while (uVar26 < bVar8);
                    }
                    iVar18 = iVar18 + 1;
                    iVar29 = uVar16 + iVar29;
                    if (iVar18 == piVar6[2]) {
                      iVar18 = 0;
                      iVar27 = piVar6[1] + iVar27;
                    }
                    uVar24 = uVar24 + 1;
                  } while (uVar24 < uVar19);
                }
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 < *puVar5);
          }
          *piVar30 = *piVar30 + uVar19 * uVar16;
        }
        *piVar3 = *piVar3 + uVar19;
        iVar31 = uVar19 + iVar31;
        param_8 = (uVar21 - uVar28) + param_8;
      } while (uVar17 <= param_8);
    }
    break;
  case 6:
    if (2 < param_8) {
      param_8 = param_8 - 2;
      iVar31 = 1;
      if (param_8 != 0) {
        piVar3 = (int *)(param_1 + 0x6c);
        piVar30 = (int *)(param_1 + 0x54);
        iVar18 = *piVar3;
        puVar4 = (uint *)(param_1 + 0xfc8);
        do {
          iVar29 = *(int *)(param_1 + 0x50) + *piVar30;
          if ((0x1000U - iVar29 < 0x10) ||
             (iVar18 = *(int *)(param_1 + 0x68) + iVar18, 0x1000U - iVar18 < 0x10)) {
            (*pcVar11)();
            (*extraout_w11_06)(param_1,1);
            iVar29 = 0;
            iVar18 = 0;
          }
          uVar21 = (0x1000U - iVar18) / 3;
          uVar17 = 0xffeU - iVar29;
          if (uVar21 <= 0xffeU - iVar29) {
            uVar17 = uVar21;
          }
          if (param_8 < uVar17) {
            uVar17 = param_8;
          }
          uVar15 = (ulonglong)(uVar17 * 3);
          uVar14 = (ulonglong)(uVar17 + 2);
          uVar13 = (ulonglong)*(uint *)(param_3 + 0xc);
          if (param_4 == '\0') {
            (*pcVar11)();
            (*extraout_w11_08)(param_1,4,param_5,uVar13 & 0xffffffff,uVar14 & 0xffffffff,
                               uVar15 & 0xffffffff,0);
          }
          else {
            (*pcVar11)();
            (*extraout_w11_07)(param_1,4,param_3,param_5,uVar13 & 0xffffffff,uVar14 & 0xffffffff,
                               uVar15 & 0xffffffff,param_11);
          }
          uVar21 = *puVar4;
          if (param_9 == '\0') {
            piVar6 = (int *)(param_1 + 0x4c);
            puVar25 = (undefined8 *)*piVar6;
            uVar20 = uVar21 >> 4;
            uVar28 = 0;
            if (param_7 == uVar21) {
              puVar23 = param_6;
              puVar22 = puVar25;
              if (uVar20 != 0) {
                do {
                  puVar9 = puVar23 + 1;
                  uVar12 = *puVar23;
                  uVar28 = uVar28 + 1;
                  puVar23 = puVar23 + 2;
                  puVar25 = puVar22 + 2;
                  puVar22[1] = *puVar9;
                  *puVar22 = uVar12;
                  puVar22 = puVar25;
                } while (uVar28 < uVar20);
              }
              uVar20 = uVar21 >> 2 & 3;
              uVar28 = 0;
              if (uVar20 != 0) {
                do {
                  iVar18 = uVar28 * 4;
                  iVar29 = uVar28 * 4;
                  uVar28 = uVar28 + 1;
                  *(undefined4 *)((int)puVar25 + iVar29) = *(undefined4 *)((int)puVar23 + iVar18);
                } while (uVar28 < uVar20);
              }
            }
            else {
              puVar23 = param_6;
              puVar22 = puVar25;
              if (uVar20 != 0) {
                do {
                  puVar9 = puVar23 + 1;
                  uVar12 = *puVar23;
                  uVar28 = uVar28 + 1;
                  puVar23 = puVar23 + 2;
                  puVar25 = puVar22 + 2;
                  puVar22[1] = *puVar9;
                  *puVar22 = uVar12;
                  puVar22 = puVar25;
                } while (uVar28 < uVar20);
              }
              uVar20 = uVar21 >> 2 & 3;
              uVar28 = 0;
              if (uVar20 != 0) {
                do {
                  iVar18 = uVar28 * 4;
                  iVar29 = uVar28 * 4;
                  uVar28 = uVar28 + 1;
                  *(undefined4 *)((int)puVar25 + iVar29) = *(undefined4 *)((int)puVar23 + iVar18);
                } while (uVar28 < uVar20);
              }
            }
            puVar25 = (undefined8 *)(*piVar6 + uVar21);
            *piVar6 = (int)puVar25;
            uVar21 = 0;
            *(int *)(param_1 + 0x54) = *piVar30 + 1;
            uVar28 = *(uint *)(param_1 + 0xfc8);
            uVar20 = uVar28 >> 4;
            if (param_7 == uVar28) {
              puVar23 = (undefined8 *)((int)param_6 + uVar28 * iVar31);
              puVar22 = puVar25;
              if (uVar20 != 0) {
                do {
                  puVar9 = puVar23 + 1;
                  uVar12 = *puVar23;
                  uVar21 = uVar21 + 1;
                  puVar23 = puVar23 + 2;
                  puVar25 = puVar22 + 2;
                  puVar22[1] = *puVar9;
                  *puVar22 = uVar12;
                  puVar22 = puVar25;
                } while (uVar21 < uVar20);
              }
              uVar20 = uVar28 >> 2 & 3;
              uVar21 = 0;
              if (uVar20 != 0) {
                do {
                  iVar18 = uVar21 * 4;
                  iVar29 = uVar21 * 4;
                  uVar21 = uVar21 + 1;
                  *(undefined4 *)((int)puVar25 + iVar29) = *(undefined4 *)((int)puVar23 + iVar18);
                } while (uVar21 < uVar20);
              }
            }
            else {
              puVar23 = (undefined8 *)((int)param_6 + iVar31 * param_7);
              puVar22 = puVar25;
              if (uVar20 != 0) {
                do {
                  puVar9 = puVar23 + 1;
                  uVar12 = *puVar23;
                  uVar21 = uVar21 + 1;
                  puVar23 = puVar23 + 2;
                  puVar25 = puVar22 + 2;
                  puVar22[1] = *puVar9;
                  *puVar22 = uVar12;
                  puVar22 = puVar25;
                } while (uVar21 < uVar20);
              }
              uVar20 = uVar28 >> 2 & 3;
              uVar21 = 0;
              if (uVar20 != 0) {
                do {
                  iVar18 = uVar21 * 4;
                  iVar29 = uVar21 * 4;
                  uVar21 = uVar21 + 1;
                  *(undefined4 *)((int)puVar25 + iVar29) = *(undefined4 *)((int)puVar23 + iVar18);
                } while (uVar21 < uVar20);
              }
            }
            puVar25 = (undefined8 *)(*(int *)(param_1 + 0x4c) + uVar28);
            *(undefined8 **)(param_1 + 0x4c) = puVar25;
            *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
            uVar21 = *(uint *)(param_1 + 0xfc8);
            iVar18 = iVar31 + 1;
            if (param_7 == uVar21) {
              uVar28 = uVar17 * uVar21;
              puVar23 = (undefined8 *)((int)param_6 + uVar21 * iVar18);
              uVar21 = 0;
              puVar22 = puVar25;
              if (uVar28 >> 4 != 0) {
                do {
                  puVar9 = puVar23 + 1;
                  uVar12 = *puVar23;
                  uVar21 = uVar21 + 1;
                  puVar23 = puVar23 + 2;
                  puVar25 = puVar22 + 2;
                  puVar22[1] = *puVar9;
                  *puVar22 = uVar12;
                  puVar22 = puVar25;
                } while (uVar21 < uVar28 >> 4);
              }
              uVar20 = uVar28 >> 2 & 3;
              uVar21 = 0;
              if (uVar20 != 0) {
                do {
                  iVar18 = uVar21 * 4;
                  iVar29 = uVar21 * 4;
                  uVar21 = uVar21 + 1;
                  *(undefined4 *)((int)puVar25 + iVar29) = *(undefined4 *)((int)puVar23 + iVar18);
                } while (uVar21 < uVar20);
              }
              *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar28;
            }
            else {
              uVar28 = 0;
              if (uVar17 != 0) {
                uVar20 = uVar21 >> 2 & 3;
                do {
                  puVar23 = (undefined8 *)((int)param_6 + iVar18 * param_7);
                  uVar19 = 0;
                  puVar22 = puVar25;
                  if (uVar21 >> 4 != 0) {
                    do {
                      puVar9 = puVar23 + 1;
                      uVar12 = *puVar23;
                      uVar19 = uVar19 + 1;
                      puVar23 = puVar23 + 2;
                      puVar25 = puVar22 + 2;
                      puVar22[1] = *puVar9;
                      *puVar22 = uVar12;
                      puVar22 = puVar25;
                    } while (uVar19 < uVar21 >> 4);
                  }
                  uVar19 = 0;
                  if (uVar20 != 0) {
                    do {
                      iVar29 = uVar19 * 4;
                      iVar27 = uVar19 * 4;
                      uVar19 = uVar19 + 1;
                      *(undefined4 *)((int)puVar25 + iVar27) =
                           *(undefined4 *)((int)puVar23 + iVar29);
                    } while (uVar19 < uVar20);
                  }
                  uVar28 = uVar28 + 1;
                  iVar18 = iVar18 + 1;
                  puVar25 = (undefined8 *)(uVar21 + *(int *)(param_1 + 0x4c));
                  *(undefined8 **)(param_1 + 0x4c) = puVar25;
                } while (uVar28 < uVar17);
              }
            }
            iVar18 = *(int *)(param_1 + 0x54);
          }
          else {
            puVar5 = (uint *)(param_3 + 8);
            uVar28 = *puVar5;
            if (uVar28 != 0) {
              uVar20 = 0;
              do {
                iVar18 = *(int *)((int)param_6 + uVar20 * 0xc);
                if (iVar18 != 0) {
                  iVar27 = *(int *)(param_1 + 0x4c);
                  iVar29 = param_3 + (uint)*(byte *)(uVar20 + param_3 + 0x214) * 8;
                  bVar8 = *(byte *)(iVar29 + 0x17);
                  bVar10 = *(byte *)(iVar29 + 0x16) >> 2;
                  uVar19 = 0;
                  if (bVar10 != 0) {
                    do {
                      iVar29 = uVar19 * 4;
                      iVar1 = uVar19 * 4;
                      uVar19 = uVar19 + 1;
                      *(undefined4 *)(iVar27 + (uint)bVar8 * 4 + iVar1) =
                           *(undefined4 *)(iVar18 + iVar29);
                    } while (uVar19 < bVar10);
                    uVar28 = *puVar5;
                  }
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 < uVar28);
            }
            piVar6 = (int *)(param_1 + 0x4c);
            *piVar6 = uVar21 + *piVar6;
            *piVar30 = *piVar30 + 1;
            uVar21 = *puVar5;
            uVar28 = *puVar4;
            if (uVar21 != 0) {
              uVar20 = 0;
              do {
                piVar7 = (int *)((int)param_6 + uVar20 * 0xc);
                iVar18 = *piVar7;
                if (iVar18 != 0) {
                  iVar27 = piVar7[1];
                  iVar29 = param_3 + (uint)*(byte *)(uVar20 + param_3 + 0x214) * 8;
                  iVar1 = *piVar6;
                  bVar8 = *(byte *)(iVar29 + 0x17);
                  bVar10 = *(byte *)(iVar29 + 0x16) >> 2;
                  uVar19 = 0;
                  if (bVar10 != 0) {
                    do {
                      iVar29 = uVar19 * 4;
                      iVar2 = uVar19 * 4;
                      uVar19 = uVar19 + 1;
                      *(undefined4 *)(iVar1 + (uint)bVar8 * 4 + iVar2) =
                           *(undefined4 *)(iVar18 + iVar27 * iVar31 + iVar29);
                    } while (uVar19 < bVar10);
                    uVar21 = *puVar5;
                  }
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 < uVar21);
            }
            *piVar6 = *piVar6 + uVar28;
            *piVar30 = *piVar30 + 1;
            uVar28 = *puVar4;
            uVar21 = 0;
            if (*puVar5 != 0) {
              do {
                piVar7 = (int *)((int)param_6 + uVar21 * 0xc);
                if (*piVar7 != 0) {
                  iVar29 = piVar7[1];
                  iVar18 = 0;
                  iVar29 = iVar29 + iVar31 * iVar29 + *piVar7;
                  iVar27 = param_3 + (uint)*(byte *)(uVar21 + param_3 + 0x214) * 8;
                  uVar20 = 0;
                  bVar8 = *(byte *)(iVar27 + 0x16) >> 2;
                  if (uVar17 != 0) {
                    iVar27 = *piVar6 + (uint)*(byte *)(iVar27 + 0x17) * 4;
                    do {
                      uVar19 = 0;
                      if (bVar8 != 0) {
                        do {
                          iVar1 = uVar19 * 4;
                          iVar2 = uVar19 * 4;
                          uVar19 = uVar19 + 1;
                          *(undefined4 *)(iVar27 + iVar2) = *(undefined4 *)(iVar29 + iVar1);
                        } while (uVar19 < bVar8);
                      }
                      iVar18 = iVar18 + 1;
                      iVar27 = uVar28 + iVar27;
                      if (iVar18 == piVar7[2]) {
                        iVar18 = 0;
                        iVar29 = iVar29 + piVar7[1];
                      }
                      uVar20 = uVar20 + 1;
                    } while (uVar20 < uVar17);
                  }
                }
                uVar21 = uVar21 + 1;
              } while (uVar21 < *puVar5);
            }
            *piVar6 = *piVar6 + uVar17 * uVar28;
            iVar18 = *piVar30;
          }
          *(uint *)(param_1 + 0x54) = uVar17 + iVar18;
          iVar18 = (uVar17 + iVar18) - uVar17;
          uVar21 = 0;
          if (uVar17 != 0) {
            piVar6 = (int *)(param_1 + 100);
            do {
              *(uint *)*piVar6 = iVar18 + -1 + uVar21;
              iVar29 = iVar18 + uVar21;
              uVar21 = uVar21 + 1;
              *(int *)(*piVar6 + 4) = iVar29;
              *(int *)(*piVar6 + 8) = iVar18 + -2;
              *piVar6 = *piVar6 + 0xc;
            } while (uVar21 < uVar17);
          }
          param_8 = param_8 - uVar17;
          iVar31 = uVar17 + iVar31;
          iVar18 = *piVar3 + uVar17 * 3;
          *piVar3 = iVar18;
        } while (param_8 != 0);
      }
    }
  }
  return;
}

