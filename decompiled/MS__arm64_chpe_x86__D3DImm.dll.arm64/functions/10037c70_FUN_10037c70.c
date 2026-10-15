/*
 * FUN_10037c70 at 10037c70
 * undefined FUN_10037c70(void)
 * Address ranges: 10037c70-10038c6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037c70(int param_1,int param_2,int param_3,char param_4,undefined4 param_5,
                 undefined8 *param_6,uint param_7,uint param_8,char param_9,undefined4 param_10,
                 undefined1 param_11)

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
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *extraout_w8;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int *piVar25;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar26;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint local_58;
  
  pcVar12 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar16 = 3;
  iVar29 = 0;
  switch(param_2) {
  case 1:
  case 2:
    uVar16 = 1;
    if (param_2 == 2) {
      uVar16 = 2;
    }
  case 4:
    if (uVar16 == 0) {
                    /* WARNING: Does not return */
      uVar13 = SoftwareBreakpoint(0xf004,0x10037ce8);
      (*(code *)uVar13)();
    }
    uVar19 = 0;
    if (uVar16 != 0) {
      uVar19 = param_8 / uVar16;
    }
    uVar19 = uVar19 * uVar16;
    if (uVar19 != 0) {
      piVar3 = (int *)(param_1 + 0x54);
      do {
        iVar17 = *piVar3 + *(int *)(param_1 + 0x50);
        if (0x1000U - iVar17 < 0x10) {
          (*pcVar12)();
          (*extraout_w11)(param_1,1);
          iVar17 = 0;
        }
        if (uVar16 == 0) {
                    /* WARNING: Does not return */
          uVar13 = SoftwareBreakpoint(0xf004,0x10037d88);
          (*(code *)uVar13)();
        }
        uVar20 = 0;
        if (uVar16 != 0) {
          uVar20 = (0x1000U - iVar17) / uVar16;
        }
        uVar20 = (0x1000 - ((0x1000U - iVar17) - uVar20 * uVar16)) - iVar17;
        if (uVar19 < uVar20) {
          uVar20 = uVar19;
        }
        if (param_4 != '\0') {
          puVar14 = (undefined4 *)(param_3 + 0xc);
          (*pcVar12)();
          (*extraout_w11_00)(param_1,param_2,param_3,param_5,*puVar14,uVar20,0,param_11);
        }
        uVar18 = *(uint *)(param_1 + 0x4b0);
        if (param_9 == '\0') {
          if (param_7 == uVar18) {
            uVar21 = uVar20 * uVar18;
            piVar25 = (int *)(param_1 + 0x4c);
            puVar24 = (undefined8 *)((int)param_6 + uVar18 * iVar29);
            puVar23 = (undefined8 *)*piVar25;
            uVar18 = 0;
            puVar22 = puVar23;
            if (uVar21 >> 4 != 0) {
              do {
                puVar10 = puVar24 + 1;
                uVar13 = *puVar24;
                uVar18 = uVar18 + 1;
                puVar24 = puVar24 + 2;
                puVar23 = puVar22 + 2;
                puVar22[1] = *puVar10;
                *puVar22 = uVar13;
                puVar22 = puVar23;
              } while (uVar18 < uVar21 >> 4);
            }
            uVar15 = uVar21 >> 2 & 3;
            uVar18 = 0;
            if (uVar15 != 0) {
              do {
                iVar17 = uVar18 * 4;
                iVar28 = uVar18 * 4;
                uVar18 = uVar18 + 1;
                *(undefined4 *)((int)puVar23 + iVar28) = *(undefined4 *)((int)puVar24 + iVar17);
              } while (uVar18 < uVar15);
            }
            *piVar25 = *piVar25 + uVar21;
          }
          else {
            uVar21 = 0;
            if (uVar20 != 0) {
              piVar25 = (int *)(param_1 + 0x4c);
              uVar15 = uVar18 >> 2 & 3;
              iVar17 = iVar29;
              do {
                puVar23 = (undefined8 *)*piVar25;
                puVar24 = (undefined8 *)((int)param_6 + iVar17 * param_7);
                uVar26 = 0;
                puVar22 = puVar23;
                if (uVar18 >> 4 != 0) {
                  do {
                    puVar10 = puVar24 + 1;
                    uVar13 = *puVar24;
                    uVar26 = uVar26 + 1;
                    puVar24 = puVar24 + 2;
                    puVar23 = puVar22 + 2;
                    puVar22[1] = *puVar10;
                    *puVar22 = uVar13;
                    puVar22 = puVar23;
                  } while (uVar26 < uVar18 >> 4);
                }
                uVar26 = 0;
                if (uVar15 != 0) {
                  do {
                    iVar28 = uVar26 * 4;
                    iVar8 = uVar26 * 4;
                    uVar26 = uVar26 + 1;
                    *(undefined4 *)((int)puVar23 + iVar8) = *(undefined4 *)((int)puVar24 + iVar28);
                  } while (uVar26 < uVar15);
                }
                uVar21 = uVar21 + 1;
                iVar17 = iVar17 + 1;
                *piVar25 = uVar18 + *piVar25;
              } while (uVar21 < uVar20);
            }
          }
        }
        else {
          uVar21 = 0;
          if (*(uint *)(param_3 + 8) != 0) {
            do {
              piVar25 = (int *)(param_6 + uVar21);
              if (*piVar25 != 0) {
                iVar28 = *piVar25 + piVar25[1] * iVar29;
                iVar17 = param_3 + (uint)*(byte *)(uVar21 + param_3 + 0x9c) * 8;
                uVar15 = 0;
                bVar9 = *(byte *)(iVar17 + 0x16) >> 2;
                if (uVar20 != 0) {
                  iVar17 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar17 + 0x17) * 4;
                  do {
                    uVar26 = 0;
                    if (bVar9 != 0) {
                      do {
                        iVar8 = uVar26 * 4;
                        iVar1 = uVar26 * 4;
                        uVar26 = uVar26 + 1;
                        *(undefined4 *)(iVar17 + iVar1) = *(undefined4 *)(iVar28 + iVar8);
                      } while (uVar26 < bVar9);
                    }
                    uVar15 = uVar15 + 1;
                    iVar17 = uVar18 + iVar17;
                    iVar28 = piVar25[1] + iVar28;
                  } while (uVar15 < uVar20);
                }
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 < *(uint *)(param_3 + 8));
          }
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar20 * uVar18;
        }
        uVar19 = uVar19 - uVar20;
        iVar29 = uVar20 + iVar29;
        *piVar3 = *piVar3 + uVar20;
      } while (uVar19 != 0);
    }
    break;
  case 3:
    uVar16 = 2;
  case 5:
    uVar19 = uVar16 - 1;
    if (uVar16 <= param_8) {
      piVar3 = (int *)(param_1 + 0x54);
      puVar4 = (uint *)(param_1 + 0x4b0);
      do {
        iVar17 = *piVar3 + *(int *)(param_1 + 0x50);
        if (0x1000U - iVar17 < 0x10) {
          (*pcVar12)();
          (*extraout_w11_01)(param_1,1);
          iVar17 = 0;
        }
        uVar20 = 0x1000U - iVar17 & 0xfffffffe;
        if (param_8 < uVar20) {
          uVar20 = param_8;
        }
        if (param_4 != '\0') {
          puVar14 = (undefined4 *)(param_3 + 0xc);
          (*pcVar12)();
          (*extraout_w11_02)(param_1,param_2,param_3,param_5,*puVar14,uVar20,0,param_11);
        }
        (*pcVar12)();
        (*extraout_w11_03)(param_1,0);
        uVar18 = *puVar4;
        if (param_9 == '\0') {
          if (param_7 == uVar18) {
            uVar21 = uVar18 * uVar19;
            piVar25 = (int *)(param_1 + 0x4c);
            puVar24 = (undefined8 *)((int)param_6 + uVar18 * iVar29);
            puVar23 = (undefined8 *)*piVar25;
            uVar18 = 0;
            puVar22 = puVar23;
            if (uVar21 >> 4 != 0) {
              do {
                puVar10 = puVar24 + 1;
                uVar13 = *puVar24;
                uVar18 = uVar18 + 1;
                puVar24 = puVar24 + 2;
                puVar23 = puVar22 + 2;
                puVar22[1] = *puVar10;
                *puVar22 = uVar13;
                puVar22 = puVar23;
              } while (uVar18 < uVar21 >> 4);
            }
            uVar15 = uVar21 >> 2 & 3;
            uVar18 = 0;
            if (uVar15 != 0) {
              do {
                iVar17 = uVar18 * 4;
                iVar28 = uVar18 * 4;
                uVar18 = uVar18 + 1;
                *(undefined4 *)((int)puVar23 + iVar28) = *(undefined4 *)((int)puVar24 + iVar17);
              } while (uVar18 < uVar15);
            }
            puVar24 = (undefined8 *)(uVar21 + *piVar25);
            *piVar25 = (int)puVar24;
          }
          else {
            piVar25 = (int *)(param_1 + 0x4c);
            uVar21 = 0;
            uVar15 = uVar18 >> 2 & 3;
            iVar17 = iVar29;
            do {
              puVar23 = (undefined8 *)*piVar25;
              puVar24 = (undefined8 *)((int)param_6 + iVar17 * param_7);
              uVar26 = 0;
              puVar22 = puVar23;
              if (uVar18 >> 4 != 0) {
                do {
                  puVar10 = puVar24 + 1;
                  uVar13 = *puVar24;
                  uVar26 = uVar26 + 1;
                  puVar24 = puVar24 + 2;
                  puVar23 = puVar22 + 2;
                  puVar22[1] = *puVar10;
                  *puVar22 = uVar13;
                  puVar22 = puVar23;
                } while (uVar26 < uVar18 >> 4);
              }
              uVar26 = 0;
              if (uVar15 != 0) {
                do {
                  iVar28 = uVar26 * 4;
                  iVar8 = uVar26 * 4;
                  uVar26 = uVar26 + 1;
                  *(undefined4 *)((int)puVar23 + iVar8) = *(undefined4 *)((int)puVar24 + iVar28);
                } while (uVar26 < uVar15);
              }
              uVar21 = uVar21 + 1;
              iVar17 = iVar17 + 1;
              puVar24 = (undefined8 *)(*piVar25 + uVar18);
              *piVar25 = (int)puVar24;
            } while (uVar21 < uVar19);
          }
          piVar25 = (int *)(param_1 + 0x4c);
          iVar17 = uVar19 + iVar29;
          *piVar3 = *piVar3 + uVar19;
          uVar18 = *puVar4;
          uVar21 = uVar20 - uVar19;
          if (param_7 == uVar18) {
            uVar15 = uVar21 * uVar18;
            puVar23 = (undefined8 *)((int)param_6 + uVar18 * iVar17);
            uVar18 = 0;
            puVar22 = puVar24;
            if (uVar15 >> 4 != 0) {
              do {
                puVar10 = puVar23 + 1;
                uVar13 = *puVar23;
                uVar18 = uVar18 + 1;
                puVar23 = puVar23 + 2;
                puVar24 = puVar22 + 2;
                puVar22[1] = *puVar10;
                *puVar22 = uVar13;
                puVar22 = puVar24;
              } while (uVar18 < uVar15 >> 4);
            }
            uVar26 = uVar15 >> 2 & 3;
            uVar18 = 0;
            if (uVar26 != 0) {
              do {
                iVar17 = uVar18 * 4;
                iVar28 = uVar18 * 4;
                uVar18 = uVar18 + 1;
                *(undefined4 *)((int)puVar24 + iVar28) = *(undefined4 *)((int)puVar23 + iVar17);
              } while (uVar18 < uVar26);
            }
            *piVar25 = uVar15 + *piVar25;
          }
          else {
            uVar15 = 0;
            if (uVar21 != 0) {
              uVar26 = uVar18 >> 2 & 3;
              do {
                puVar23 = (undefined8 *)((int)param_6 + iVar17 * param_7);
                uVar27 = 0;
                puVar22 = puVar24;
                if (uVar18 >> 4 != 0) {
                  do {
                    puVar10 = puVar23 + 1;
                    uVar13 = *puVar23;
                    uVar27 = uVar27 + 1;
                    puVar23 = puVar23 + 2;
                    puVar24 = puVar22 + 2;
                    puVar22[1] = *puVar10;
                    *puVar22 = uVar13;
                    puVar22 = puVar24;
                  } while (uVar27 < uVar18 >> 4);
                }
                uVar27 = 0;
                if (uVar26 != 0) {
                  do {
                    iVar28 = uVar27 * 4;
                    iVar8 = uVar27 * 4;
                    uVar27 = uVar27 + 1;
                    *(undefined4 *)((int)puVar24 + iVar8) = *(undefined4 *)((int)puVar23 + iVar28);
                  } while (uVar27 < uVar26);
                }
                uVar15 = uVar15 + 1;
                iVar17 = iVar17 + 1;
                puVar24 = (undefined8 *)(uVar18 + *piVar25);
                *piVar25 = (int)puVar24;
              } while (uVar15 < uVar21);
            }
          }
        }
        else {
          puVar5 = (uint *)(param_3 + 8);
          uVar21 = 0;
          if (*puVar5 != 0) {
            do {
              piVar25 = (int *)(param_6 + uVar21);
              if (*piVar25 != 0) {
                uVar15 = 0;
                iVar28 = *piVar25 + piVar25[1] * iVar29;
                iVar17 = param_3 + (uint)*(byte *)(uVar21 + param_3 + 0x9c) * 8;
                bVar9 = *(byte *)(iVar17 + 0x16) >> 2;
                iVar17 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar17 + 0x17) * 4;
                do {
                  uVar26 = 0;
                  if (bVar9 != 0) {
                    do {
                      iVar8 = uVar26 * 4;
                      iVar1 = uVar26 * 4;
                      uVar26 = uVar26 + 1;
                      *(undefined4 *)(iVar17 + iVar1) = *(undefined4 *)(iVar28 + iVar8);
                    } while (uVar26 < bVar9);
                  }
                  uVar15 = uVar15 + 1;
                  iVar17 = iVar17 + uVar18;
                  iVar28 = piVar25[1] + iVar28;
                } while (uVar15 < uVar19);
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 < *puVar5);
          }
          piVar25 = (int *)(param_1 + 0x4c);
          *piVar25 = *piVar25 + uVar18 * uVar19;
          *piVar3 = *piVar3 + uVar19;
          uVar18 = 0;
          uVar15 = *puVar4;
          uVar21 = uVar20 - uVar19;
          if (*puVar5 != 0) {
            do {
              piVar6 = (int *)(param_6 + uVar18);
              if (*piVar6 != 0) {
                uVar26 = 0;
                iVar28 = *piVar6 + (uVar19 + iVar29) * piVar6[1];
                iVar17 = param_3 + (uint)*(byte *)(uVar18 + param_3 + 0x9c) * 8;
                bVar9 = *(byte *)(iVar17 + 0x16) >> 2;
                if (uVar21 != 0) {
                  iVar17 = *piVar25 + (uint)*(byte *)(iVar17 + 0x17) * 4;
                  do {
                    uVar27 = 0;
                    if (bVar9 != 0) {
                      do {
                        iVar8 = uVar27 * 4;
                        iVar1 = uVar27 * 4;
                        uVar27 = uVar27 + 1;
                        *(undefined4 *)(iVar17 + iVar1) = *(undefined4 *)(iVar28 + iVar8);
                      } while (uVar27 < bVar9);
                    }
                    uVar26 = uVar26 + 1;
                    iVar17 = iVar17 + uVar15;
                    iVar28 = piVar6[1] + iVar28;
                  } while (uVar26 < uVar21);
                }
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 < *puVar5);
          }
          *piVar25 = *piVar25 + uVar21 * uVar15;
        }
        *piVar3 = *piVar3 + uVar21;
        iVar29 = uVar21 + iVar29;
        param_8 = (uVar19 - uVar20) + param_8;
      } while (uVar16 <= param_8);
    }
    break;
  case 6:
    if (2 < param_8) {
      local_58 = param_8 - 2;
      iVar29 = 1;
      if (local_58 != 0) {
        piVar3 = (int *)(param_1 + 0x6c);
        piVar25 = (int *)(param_1 + 0x54);
        iVar17 = *piVar3;
        puVar4 = (uint *)(param_1 + 0x4b0);
        do {
          iVar28 = *piVar25 + *(int *)(param_1 + 0x50);
          if ((0x1000U - iVar28 < 0x10) ||
             (iVar17 = *(int *)(param_1 + 0x68) + iVar17, 0x1000U - iVar17 < 0x10)) {
            (*pcVar12)();
            (*extraout_w11_04)(param_1,1);
            iVar28 = 0;
            iVar17 = 0;
          }
          uVar19 = (0x1000U - iVar17) / 3;
          uVar16 = 0xffeU - iVar28;
          if (uVar19 <= 0xffeU - iVar28) {
            uVar16 = uVar19;
          }
          if (local_58 < uVar16) {
            uVar16 = local_58;
          }
          if (param_4 != '\0') {
            (*pcVar12)();
            (*extraout_w11_05)(param_1,4,param_3,param_5,*extraout_w8);
          }
          uVar19 = *puVar4;
          if (param_9 == '\0') {
            piVar6 = (int *)(param_1 + 0x4c);
            puVar24 = (undefined8 *)*piVar6;
            uVar18 = uVar19 >> 4;
            uVar20 = 0;
            if (param_7 == uVar19) {
              puVar23 = param_6;
              puVar22 = puVar24;
              if (uVar18 != 0) {
                do {
                  puVar10 = puVar23 + 1;
                  uVar13 = *puVar23;
                  uVar20 = uVar20 + 1;
                  puVar23 = puVar23 + 2;
                  puVar24 = puVar22 + 2;
                  puVar22[1] = *puVar10;
                  *puVar22 = uVar13;
                  puVar22 = puVar24;
                } while (uVar20 < uVar18);
              }
              uVar18 = uVar19 >> 2 & 3;
              uVar20 = 0;
              if (uVar18 != 0) {
                do {
                  iVar17 = uVar20 * 4;
                  iVar28 = uVar20 * 4;
                  uVar20 = uVar20 + 1;
                  *(undefined4 *)((int)puVar24 + iVar28) = *(undefined4 *)((int)puVar23 + iVar17);
                } while (uVar20 < uVar18);
              }
            }
            else {
              puVar23 = param_6;
              puVar22 = puVar24;
              if (uVar18 != 0) {
                do {
                  puVar10 = puVar23 + 1;
                  uVar13 = *puVar23;
                  uVar20 = uVar20 + 1;
                  puVar23 = puVar23 + 2;
                  puVar24 = puVar22 + 2;
                  puVar22[1] = *puVar10;
                  *puVar22 = uVar13;
                  puVar22 = puVar24;
                } while (uVar20 < uVar18);
              }
              uVar18 = uVar19 >> 2 & 3;
              uVar20 = 0;
              if (uVar18 != 0) {
                do {
                  iVar17 = uVar20 * 4;
                  iVar28 = uVar20 * 4;
                  uVar20 = uVar20 + 1;
                  *(undefined4 *)((int)puVar24 + iVar28) = *(undefined4 *)((int)puVar23 + iVar17);
                } while (uVar20 < uVar18);
              }
            }
            uVar20 = 0;
            puVar24 = (undefined8 *)(uVar19 + *piVar6);
            *piVar6 = (int)puVar24;
            *piVar25 = *piVar25 + 1;
            uVar19 = *puVar4;
            uVar18 = uVar19 >> 4;
            if (param_7 == uVar19) {
              puVar23 = (undefined8 *)((int)param_6 + uVar19 * iVar29);
              puVar22 = puVar24;
              if (uVar18 != 0) {
                do {
                  puVar10 = puVar23 + 1;
                  uVar13 = *puVar23;
                  uVar20 = uVar20 + 1;
                  puVar23 = puVar23 + 2;
                  puVar24 = puVar22 + 2;
                  puVar22[1] = *puVar10;
                  *puVar22 = uVar13;
                  puVar22 = puVar24;
                } while (uVar20 < uVar18);
              }
              uVar18 = uVar19 >> 2 & 3;
              uVar20 = 0;
              if (uVar18 != 0) {
                do {
                  iVar17 = uVar20 * 4;
                  iVar28 = uVar20 * 4;
                  uVar20 = uVar20 + 1;
                  *(undefined4 *)((int)puVar24 + iVar28) = *(undefined4 *)((int)puVar23 + iVar17);
                } while (uVar20 < uVar18);
              }
            }
            else {
              puVar23 = (undefined8 *)((int)param_6 + iVar29 * param_7);
              puVar22 = puVar24;
              if (uVar18 != 0) {
                do {
                  puVar10 = puVar23 + 1;
                  uVar13 = *puVar23;
                  uVar20 = uVar20 + 1;
                  puVar23 = puVar23 + 2;
                  puVar24 = puVar22 + 2;
                  puVar22[1] = *puVar10;
                  *puVar22 = uVar13;
                  puVar22 = puVar24;
                } while (uVar20 < uVar18);
              }
              uVar18 = uVar19 >> 2 & 3;
              uVar20 = 0;
              if (uVar18 != 0) {
                do {
                  iVar17 = uVar20 * 4;
                  iVar28 = uVar20 * 4;
                  uVar20 = uVar20 + 1;
                  *(undefined4 *)((int)puVar24 + iVar28) = *(undefined4 *)((int)puVar23 + iVar17);
                } while (uVar20 < uVar18);
              }
            }
            iVar17 = iVar29 + 1;
            puVar24 = (undefined8 *)(uVar19 + *piVar6);
            *piVar6 = (int)puVar24;
            *piVar25 = *piVar25 + 1;
            uVar19 = *puVar4;
            if (param_7 == uVar19) {
              uVar20 = uVar16 * uVar19;
              puVar23 = (undefined8 *)((int)param_6 + uVar19 * iVar17);
              uVar19 = 0;
              puVar22 = puVar24;
              if (uVar20 >> 4 != 0) {
                do {
                  puVar10 = puVar23 + 1;
                  uVar13 = *puVar23;
                  uVar19 = uVar19 + 1;
                  puVar23 = puVar23 + 2;
                  puVar24 = puVar22 + 2;
                  puVar22[1] = *puVar10;
                  *puVar22 = uVar13;
                  puVar22 = puVar24;
                } while (uVar19 < uVar20 >> 4);
              }
              uVar18 = uVar20 >> 2 & 3;
              uVar19 = 0;
              if (uVar18 != 0) {
                do {
                  iVar17 = uVar19 * 4;
                  iVar28 = uVar19 * 4;
                  uVar19 = uVar19 + 1;
                  *(undefined4 *)((int)puVar24 + iVar28) = *(undefined4 *)((int)puVar23 + iVar17);
                } while (uVar19 < uVar18);
              }
              iVar17 = uVar20 + *piVar6;
              goto LAB_10038b00;
            }
            uVar20 = 0;
            if (uVar16 != 0) {
              uVar18 = uVar19 >> 2 & 3;
              do {
                puVar23 = (undefined8 *)((int)param_6 + iVar17 * param_7);
                uVar21 = 0;
                puVar22 = puVar24;
                if (uVar19 >> 4 != 0) {
                  do {
                    puVar10 = puVar23 + 1;
                    uVar13 = *puVar23;
                    uVar21 = uVar21 + 1;
                    puVar23 = puVar23 + 2;
                    puVar24 = puVar22 + 2;
                    puVar22[1] = *puVar10;
                    *puVar22 = uVar13;
                    puVar22 = puVar24;
                  } while (uVar21 < uVar19 >> 4);
                }
                uVar21 = 0;
                if (uVar18 != 0) {
                  do {
                    iVar28 = uVar21 * 4;
                    iVar8 = uVar21 * 4;
                    uVar21 = uVar21 + 1;
                    *(undefined4 *)((int)puVar24 + iVar8) = *(undefined4 *)((int)puVar23 + iVar28);
                  } while (uVar21 < uVar18);
                }
                uVar20 = uVar20 + 1;
                iVar17 = iVar17 + 1;
                puVar24 = (undefined8 *)(uVar19 + *piVar6);
                *piVar6 = (int)puVar24;
              } while (uVar20 < uVar16);
            }
          }
          else {
            puVar5 = (uint *)(param_3 + 8);
            uVar20 = 0;
            if (*puVar5 != 0) {
              do {
                iVar17 = *(int *)(param_6 + uVar20);
                if (iVar17 != 0) {
                  iVar8 = *(int *)(param_1 + 0x4c);
                  iVar28 = param_3 + (uint)*(byte *)(uVar20 + param_3 + 0x9c) * 8;
                  bVar9 = *(byte *)(iVar28 + 0x17);
                  bVar11 = *(byte *)(iVar28 + 0x16) >> 2;
                  uVar18 = 0;
                  if (bVar11 != 0) {
                    do {
                      iVar28 = uVar18 * 4;
                      iVar1 = uVar18 * 4;
                      uVar18 = uVar18 + 1;
                      *(undefined4 *)(iVar8 + (uint)bVar9 * 4 + iVar1) =
                           *(undefined4 *)(iVar17 + iVar28);
                    } while (uVar18 < bVar11);
                  }
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 < *puVar5);
            }
            piVar6 = (int *)(param_1 + 0x4c);
            *piVar6 = *piVar6 + uVar19;
            *piVar25 = *piVar25 + 1;
            uVar20 = *puVar4;
            uVar19 = 0;
            if (*puVar5 != 0) {
              do {
                iVar17 = *(int *)(param_6 + uVar19);
                if (iVar17 != 0) {
                  iVar8 = *(int *)((int)(param_6 + uVar19) + 4);
                  iVar28 = param_3 + (uint)*(byte *)(uVar19 + param_3 + 0x9c) * 8;
                  iVar1 = *piVar6;
                  bVar9 = *(byte *)(iVar28 + 0x17);
                  bVar11 = *(byte *)(iVar28 + 0x16) >> 2;
                  uVar18 = 0;
                  if (bVar11 != 0) {
                    do {
                      iVar28 = uVar18 * 4;
                      iVar2 = uVar18 * 4;
                      uVar18 = uVar18 + 1;
                      *(undefined4 *)(iVar1 + (uint)bVar9 * 4 + iVar2) =
                           *(undefined4 *)(iVar17 + iVar8 * iVar29 + iVar28);
                    } while (uVar18 < bVar11);
                  }
                }
                uVar19 = uVar19 + 1;
              } while (uVar19 < *puVar5);
            }
            *piVar6 = uVar20 + *piVar6;
            *piVar25 = *piVar25 + 1;
            uVar20 = *puVar4;
            uVar19 = 0;
            if (*puVar5 != 0) {
              do {
                piVar7 = (int *)(param_6 + uVar19);
                if (*piVar7 != 0) {
                  iVar17 = piVar7[1];
                  iVar17 = iVar17 + iVar29 * iVar17 + *piVar7;
                  iVar28 = param_3 + (uint)*(byte *)(uVar19 + param_3 + 0x9c) * 8;
                  uVar18 = 0;
                  bVar9 = *(byte *)(iVar28 + 0x16) >> 2;
                  if (uVar16 != 0) {
                    iVar28 = *piVar6 + (uint)*(byte *)(iVar28 + 0x17) * 4;
                    do {
                      uVar21 = 0;
                      if (bVar9 != 0) {
                        do {
                          iVar8 = uVar21 * 4;
                          iVar1 = uVar21 * 4;
                          uVar21 = uVar21 + 1;
                          *(undefined4 *)(iVar28 + iVar1) = *(undefined4 *)(iVar17 + iVar8);
                        } while (uVar21 < bVar9);
                      }
                      uVar18 = uVar18 + 1;
                      iVar28 = iVar28 + uVar20;
                      iVar17 = piVar7[1] + iVar17;
                    } while (uVar18 < uVar16);
                  }
                }
                uVar19 = uVar19 + 1;
              } while (uVar19 < *puVar5);
            }
            iVar17 = *piVar6 + uVar16 * uVar20;
LAB_10038b00:
            *(int *)(param_1 + 0x4c) = iVar17;
          }
          iVar17 = *piVar25;
          *piVar25 = iVar17 + uVar16;
          iVar17 = (iVar17 + uVar16) - uVar16;
          uVar19 = 0;
          if (uVar16 != 0) {
            piVar6 = (int *)(param_1 + 100);
            do {
              *(uint *)*piVar6 = iVar17 + -1 + uVar19;
              iVar28 = iVar17 + uVar19;
              uVar19 = uVar19 + 1;
              *(int *)(*piVar6 + 4) = iVar28;
              *(int *)(*piVar6 + 8) = iVar17 + -2;
              *piVar6 = *piVar6 + 0xc;
            } while (uVar19 < uVar16);
          }
          iVar29 = uVar16 + iVar29;
          iVar17 = uVar16 * 3 + *piVar3;
          *piVar3 = iVar17;
          local_58 = local_58 - uVar16;
        } while (local_58 != 0);
      }
    }
  }
  return;
}

