/*
 * FUN_180169b60 at 180169b60
 * undefined FUN_180169b60(void)
 * Address ranges: 180169b60-18016c25f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180169b60(longlong param_1,int param_2,longlong param_3,char param_4,undefined8 param_5,
                  longlong param_6,uint param_7,undefined8 param_8,uint *param_9,uint param_10,
                  int param_11,char param_12,char param_13,undefined1 param_14)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  code *pcVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined4 *puVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  int extraout_w8;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  uint uVar28;
  int iVar29;
  int iVar30;
  undefined8 uVar31;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  
  puVar4 = (undefined4 *)(param_1 + 0x30);
  iVar30 = 0;
  lVar22 = 8;
  puVar17 = puVar4;
  do {
    lVar22 = lVar22 + -1;
    *puVar17 = 0;
    puVar10 = __hybrid_os_arm64x_dispatch_icall;
    puVar17 = puVar17 + 1;
  } while (lVar22 != 0);
  if (param_2 - 1U < 2) {
    uVar21 = 1;
    if (param_2 == 2) {
      uVar21 = 2;
    }
LAB_18016ba1c:
    if (uVar21 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(0xf004,0x18016ba28);
      (*pcVar11)();
    }
    uVar20 = 0;
    if (uVar21 != 0) {
      uVar20 = param_10 / uVar21;
    }
    for (uVar20 = uVar20 * uVar21; uVar20 != 0; uVar20 = uVar20 - uVar24) {
      if (((uint)((0x1000 - *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x70)) < 0x10) ||
         (iVar19 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90), 0x1000U - iVar19 < 0x10)) {
        (*(code *)puVar10)();
        (*extraout_x11_06)(param_1,1);
        iVar19 = 0;
      }
      if (uVar21 == 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(0xf004,0x18016bab4);
        (*pcVar11)();
      }
      uVar24 = 0;
      if (uVar21 != 0) {
        uVar24 = (0x1000U - iVar19) / uVar21;
      }
      uVar12 = (ulonglong)*(uint *)(param_3 + 0xc);
      uVar24 = (0x1000 - ((0x1000U - iVar19) - uVar24 * uVar21)) - iVar19;
      if (uVar20 < uVar24) {
        uVar24 = uVar20;
      }
      if (param_4 == '\0') {
        (*(code *)puVar10)();
        (*extraout_x11_08)(param_1,param_2,param_5);
      }
      else {
        (*(code *)puVar10)();
        (*extraout_x11_07)(param_1,param_2,param_3,param_5,uVar12 & 0xffffffff,uVar24,uVar24,
                           param_14);
      }
      iVar19 = *(int *)(param_1 + 0x74);
      uVar26 = 0;
      uVar28 = 0;
      if (param_13 == '\0') {
        uVar16 = 0;
        if (uVar24 != 0) {
          do {
            if (param_12 == '\0') {
              uVar13 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)(uVar16 + iVar30) * 2);
            }
            else {
              uVar13 = param_9[uVar16 + iVar30];
            }
            uVar14 = uVar13 + param_11;
            if ((param_12 != '\0') && (uVar14 >> 0x10 != *(uint *)(param_1 + 0x50))) {
              lVar22 = 8;
              puVar17 = puVar4;
              do {
                lVar22 = lVar22 + -1;
                *puVar17 = 0;
                puVar17 = puVar17 + 1;
              } while (lVar22 != 0);
              *(uint *)(param_1 + 0x50) = uVar14 >> 0x10;
            }
            uVar2 = uVar14 & 0xffff;
            uVar6 = uVar2 >> 0xb;
            if (*(char *)((longlong)puVar4 + (ulonglong)uVar6) == '\0') {
              *(undefined1 *)((longlong)puVar4 + (ulonglong)uVar6) = 1;
              puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar6 << 8));
              puVar1[1] = 0;
              *puVar1 = 0;
              puVar1[3] = 0;
              puVar1[2] = 0;
              puVar1[5] = 0;
              puVar1[4] = 0;
              puVar1[7] = 0;
              puVar1[6] = 0;
              puVar1[9] = 0;
              puVar1[8] = 0;
              puVar1[0xb] = 0;
              puVar1[10] = 0;
              puVar1[0xd] = 0;
              puVar1[0xc] = 0;
              puVar1[0xf] = 0;
              puVar1[0xe] = 0;
              puVar1[0x11] = 0;
              puVar1[0x10] = 0;
              puVar1[0x13] = 0;
              puVar1[0x12] = 0;
              puVar1[0x15] = 0;
              puVar1[0x14] = 0;
              puVar1[0x17] = 0;
              puVar1[0x16] = 0;
              puVar1[0x19] = 0;
              puVar1[0x18] = 0;
              puVar1[0x1b] = 0;
              puVar1[0x1a] = 0;
              puVar1[0x1d] = 0;
              puVar1[0x1c] = 0;
              puVar1[0x1f] = 0;
              puVar1[0x1e] = 0;
            }
            bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar2 >> 3));
            if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar2 & 7]) == 0) {
              *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar2 >> 3)) =
                   bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar2 & 7];
              *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 2) = (short)iVar19;
              iVar19 = iVar19 + 1;
              if (uVar26 == uVar28) {
LAB_18016c0d4:
                uVar28 = uVar13 + param_11 + 1;
                uVar26 = uVar14;
              }
              else if (uVar14 == uVar28) {
                uVar28 = uVar28 + 1;
              }
              else if (uVar14 < uVar26 || uVar28 < uVar14) {
                uVar6 = *(uint *)(param_1 + 0xfe8);
                iVar23 = uVar28 - uVar26;
                if (param_7 == uVar6) {
                  uVar3 = iVar23 * uVar6;
                  puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar26 * uVar6));
                  puVar9 = *(undefined8 **)(param_1 + 0x68);
                  for (uVar28 = uVar3 >> 4; uVar28 != 0; uVar28 = uVar28 - 1) {
                    puVar8 = puVar1 + 1;
                    uVar31 = *puVar1;
                    puVar1 = puVar1 + 2;
                    puVar9[1] = *puVar8;
                    *puVar9 = uVar31;
                    puVar9 = puVar9 + 2;
                  }
                  uVar28 = uVar3 >> 2 & 3;
                  uVar12 = 0;
                  if (uVar28 != 0) {
                    do {
                      *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                           *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                      uVar26 = (int)uVar12 + 1;
                      uVar12 = (ulonglong)uVar26;
                    } while (uVar26 < uVar28);
                  }
                  *(ulonglong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + (ulonglong)uVar3;
                }
                else if (iVar23 != 0) {
                  uVar28 = uVar6 >> 2 & 3;
                  iVar27 = iVar23;
                  do {
                    puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar26 * param_7));
                    puVar9 = *(undefined8 **)(param_1 + 0x68);
                    for (uVar3 = uVar6 >> 4; uVar3 != 0; uVar3 = uVar3 - 1) {
                      puVar8 = puVar1 + 1;
                      uVar31 = *puVar1;
                      puVar1 = puVar1 + 2;
                      puVar9[1] = *puVar8;
                      *puVar9 = uVar31;
                      puVar9 = puVar9 + 2;
                    }
                    uVar12 = 0;
                    if (uVar28 != 0) {
                      do {
                        *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                             *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                        uVar3 = (int)uVar12 + 1;
                        uVar12 = (ulonglong)uVar3;
                      } while (uVar3 < uVar28);
                    }
                    uVar26 = uVar26 + 1;
                    iVar27 = iVar27 + -1;
                    *(ulonglong *)(param_1 + 0x68) =
                         *(longlong *)(param_1 + 0x68) + (ulonglong)uVar6;
                  } while (iVar27 != 0);
                }
                *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar23;
                goto LAB_18016c0d4;
              }
            }
            *(uint *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar16 * 4) =
                 (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 2);
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar24);
          if (uVar28 != uVar26) {
            uVar16 = *(uint *)(param_1 + 0xfe8);
            iVar19 = uVar28 - uVar26;
            if (param_7 == uVar16) {
              uVar13 = uVar16 * iVar19;
              puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar26 * uVar16));
              puVar9 = *(undefined8 **)(param_1 + 0x68);
              for (uVar28 = uVar13 >> 4; uVar28 != 0; uVar28 = uVar28 - 1) {
                puVar8 = puVar1 + 1;
                uVar31 = *puVar1;
                puVar1 = puVar1 + 2;
                puVar9[1] = *puVar8;
                *puVar9 = uVar31;
                puVar9 = puVar9 + 2;
              }
              uVar28 = uVar13 >> 2 & 3;
              uVar12 = 0;
              if (uVar28 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                       *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                  uVar26 = (int)uVar12 + 1;
                  uVar12 = (ulonglong)uVar26;
                } while (uVar26 < uVar28);
              }
              *(ulonglong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + (ulonglong)uVar13;
            }
            else if (iVar19 != 0) {
              uVar28 = uVar16 >> 2 & 3;
              iVar23 = iVar19;
              do {
                puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar26 * param_7));
                puVar9 = *(undefined8 **)(param_1 + 0x68);
                for (uVar13 = uVar16 >> 4; uVar13 != 0; uVar13 = uVar13 - 1) {
                  puVar8 = puVar1 + 1;
                  uVar31 = *puVar1;
                  puVar1 = puVar1 + 2;
                  puVar9[1] = *puVar8;
                  *puVar9 = uVar31;
                  puVar9 = puVar9 + 2;
                }
                uVar12 = 0;
                if (uVar28 != 0) {
                  do {
                    *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                         *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                    uVar13 = (int)uVar12 + 1;
                    uVar12 = (ulonglong)uVar13;
                  } while (uVar13 < uVar28);
                }
                uVar26 = uVar26 + 1;
                iVar23 = iVar23 + -1;
                *(ulonglong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + (ulonglong)uVar16;
              } while (iVar23 != 0);
            }
            iVar19 = *(int *)(param_1 + 0x74) + iVar19;
            goto LAB_18016c218;
          }
        }
      }
      else {
        uVar16 = 0;
        if (uVar24 != 0) {
          do {
            if (param_12 == '\0') {
              uVar13 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)(uVar16 + iVar30) * 2);
            }
            else {
              uVar13 = param_9[uVar16 + iVar30];
            }
            uVar14 = uVar13 + param_11;
            if ((param_12 != '\0') && (uVar14 >> 0x10 != *(uint *)(param_1 + 0x50))) {
              lVar22 = 8;
              puVar17 = puVar4;
              do {
                lVar22 = lVar22 + -1;
                *puVar17 = 0;
                puVar17 = puVar17 + 1;
              } while (lVar22 != 0);
              *(uint *)(param_1 + 0x50) = uVar14 >> 0x10;
            }
            uVar2 = uVar14 & 0xffff;
            uVar6 = uVar2 >> 0xb;
            if (*(char *)((longlong)puVar4 + (ulonglong)uVar6) == '\0') {
              *(undefined1 *)((longlong)puVar4 + (ulonglong)uVar6) = 1;
              puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar6 << 8));
              puVar1[1] = 0;
              *puVar1 = 0;
              puVar1[3] = 0;
              puVar1[2] = 0;
              puVar1[5] = 0;
              puVar1[4] = 0;
              puVar1[7] = 0;
              puVar1[6] = 0;
              puVar1[9] = 0;
              puVar1[8] = 0;
              puVar1[0xb] = 0;
              puVar1[10] = 0;
              puVar1[0xd] = 0;
              puVar1[0xc] = 0;
              puVar1[0xf] = 0;
              puVar1[0xe] = 0;
              puVar1[0x11] = 0;
              puVar1[0x10] = 0;
              puVar1[0x13] = 0;
              puVar1[0x12] = 0;
              puVar1[0x15] = 0;
              puVar1[0x14] = 0;
              puVar1[0x17] = 0;
              puVar1[0x16] = 0;
              puVar1[0x19] = 0;
              puVar1[0x18] = 0;
              puVar1[0x1b] = 0;
              puVar1[0x1a] = 0;
              puVar1[0x1d] = 0;
              puVar1[0x1c] = 0;
              puVar1[0x1f] = 0;
              puVar1[0x1e] = 0;
            }
            bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar2 >> 3));
            if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar2 & 7]) == 0) {
              *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar2 >> 3)) =
                   bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar2 & 7];
              *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 2) = (short)iVar19;
              iVar19 = iVar19 + 1;
              if (uVar26 == uVar28) {
LAB_18016bd74:
                uVar28 = uVar13 + param_11 + 1;
                uVar26 = uVar14;
              }
              else if (uVar14 == uVar28) {
                uVar28 = uVar28 + 1;
              }
              else if (uVar14 < uVar26 || uVar28 < uVar14) {
                iVar23 = uVar28 - uVar26;
                uVar28 = *(uint *)(param_1 + 0xfe8);
                uVar12 = 0;
                if (*(int *)(param_3 + 8) != 0) {
                  do {
                    lVar22 = uVar12 * 0x10;
                    if (*(longlong *)(lVar22 + param_6) != 0) {
                      lVar25 = *(longlong *)(lVar22 + param_6) +
                               (ulonglong)(*(int *)(param_6 + 8 + lVar22) * uVar26);
                      lVar18 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar12) * 8;
                      bVar5 = *(byte *)(param_3 + 0x16 + lVar18) >> 2;
                      iVar27 = 0;
                      if (iVar23 != 0) {
                        lVar18 = *(longlong *)(param_1 + 0x68) +
                                 (ulonglong)*(byte *)(param_3 + 0x17 + lVar18) * 4;
                        iVar29 = iVar23;
                        do {
                          uVar15 = 0;
                          if (bVar5 != 0) {
                            do {
                              *(undefined4 *)(lVar18 + uVar15 * 4) =
                                   *(undefined4 *)(lVar25 + uVar15 * 4);
                              uVar6 = (int)uVar15 + 1;
                              uVar15 = (ulonglong)uVar6;
                            } while (uVar6 < bVar5);
                          }
                          iVar27 = iVar27 + 1;
                          lVar18 = lVar18 + (ulonglong)uVar28;
                          if (iVar27 == *(int *)(lVar22 + param_6 + 0xc)) {
                            iVar27 = 0;
                            lVar25 = lVar25 + (ulonglong)*(uint *)(lVar22 + param_6 + 8);
                          }
                          iVar29 = iVar29 + -1;
                        } while (iVar29 != 0);
                      }
                    }
                    uVar6 = (int)uVar12 + 1;
                    uVar12 = (ulonglong)uVar6;
                  } while (uVar6 < *(uint *)(param_3 + 8));
                }
                *(ulonglong *)(param_1 + 0x68) =
                     *(longlong *)(param_1 + 0x68) + (ulonglong)(iVar23 * uVar28);
                *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar23;
                goto LAB_18016bd74;
              }
            }
            *(uint *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar16 * 4) =
                 (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 2);
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar24);
          if (uVar28 != uVar26) {
            iVar19 = uVar28 - uVar26;
            uVar28 = *(uint *)(param_1 + 0xfe8);
            uVar12 = 0;
            if (*(int *)(param_3 + 8) != 0) {
              do {
                lVar22 = uVar12 * 0x10;
                if (*(longlong *)(lVar22 + param_6) != 0) {
                  lVar25 = *(longlong *)(lVar22 + param_6) +
                           (ulonglong)(*(int *)(param_6 + 8 + lVar22) * uVar26);
                  lVar18 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar12) * 8;
                  bVar5 = *(byte *)(param_3 + 0x16 + lVar18) >> 2;
                  iVar23 = 0;
                  if (iVar19 != 0) {
                    lVar18 = *(longlong *)(param_1 + 0x68) +
                             (ulonglong)*(byte *)(param_3 + 0x17 + lVar18) * 4;
                    iVar27 = iVar19;
                    do {
                      uVar15 = 0;
                      if (bVar5 != 0) {
                        do {
                          *(undefined4 *)(lVar18 + uVar15 * 4) =
                               *(undefined4 *)(lVar25 + uVar15 * 4);
                          uVar16 = (int)uVar15 + 1;
                          uVar15 = (ulonglong)uVar16;
                        } while (uVar16 < bVar5);
                      }
                      iVar23 = iVar23 + 1;
                      lVar18 = lVar18 + (ulonglong)uVar28;
                      if (iVar23 == *(int *)(lVar22 + param_6 + 0xc)) {
                        iVar23 = 0;
                        lVar25 = lVar25 + (ulonglong)*(uint *)(lVar22 + param_6 + 8);
                      }
                      iVar27 = iVar27 + -1;
                    } while (iVar27 != 0);
                  }
                }
                uVar16 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar16;
              } while (uVar16 < *(uint *)(param_3 + 8));
            }
            *(ulonglong *)(param_1 + 0x68) =
                 *(longlong *)(param_1 + 0x68) + (ulonglong)(uVar28 * iVar19);
            iVar19 = *(int *)(param_1 + 0x74) + iVar19;
LAB_18016c218:
            *(int *)(param_1 + 0x74) = iVar19;
          }
        }
      }
      iVar30 = uVar24 + iVar30;
      *(ulonglong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + (ulonglong)uVar24 * 4;
      *(uint *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + uVar24;
    }
  }
  else {
    if (param_2 == 3) {
      uVar21 = 2;
    }
    else {
      uVar21 = 3;
      if (param_2 == 4) goto LAB_18016ba1c;
      if (param_2 != 5) {
        if (param_2 != 6 || param_10 < 3) {
          return;
        }
        local_78 = param_10 - 2;
        if (local_78 == 0) {
          return;
        }
        iVar19 = *(int *)(param_1 + 0x94);
        do {
          iVar23 = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x70);
          if ((0x1000U - iVar23 < 0x10) ||
             (iVar19 = iVar19 + *(int *)(param_1 + 0x90), 0x1000U - iVar19 < 0x10)) {
            (*(code *)puVar10)();
            (*extraout_x11)(param_1,1);
            iVar23 = 0;
            iVar19 = 0;
          }
          uVar12 = (ulonglong)*(uint *)(param_3 + 0xc);
          uVar20 = (0x1000U - iVar19) / 3;
          uVar21 = 0xffeU - iVar23;
          if (uVar20 <= 0xffeU - iVar23) {
            uVar21 = uVar20;
          }
          if (local_78 < uVar21) {
            uVar21 = local_78;
          }
          uVar15 = (ulonglong)(uVar21 * 3);
          if (param_4 == '\0') {
            (*(code *)puVar10)();
            (*extraout_x11_01)(param_1,4,param_5);
          }
          else {
            (*(code *)puVar10)();
            (*extraout_x11_00)(param_1,4,param_3,param_5,uVar12 & 0xffffffff,extraout_w8 + 2,
                               uVar15 & 0xffffffff,param_14);
          }
          iVar19 = *(int *)(param_1 + 0x74);
          uVar24 = 0;
          uVar20 = 0;
          if (uVar21 != 0) {
            if (param_13 == '\0') {
              local_84 = 0;
              do {
                uVar28 = local_84 + iVar30 + 1;
                if (param_12 == '\0') {
                  uVar28 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)uVar28 * 2);
                }
                else {
                  uVar28 = param_9[uVar28];
                }
                uVar26 = local_84 + iVar30 + 2;
                if (param_12 == '\0') {
                  uVar16 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)uVar26 * 2);
                  uVar26 = (uint)(ushort)*param_9;
                }
                else {
                  uVar16 = param_9[uVar26];
                  uVar26 = *param_9;
                }
                uVar13 = uVar28 + param_11;
                if ((param_12 != '\0') && (uVar13 >> 0x10 != *(uint *)(param_1 + 0x50))) {
                  lVar22 = 8;
                  puVar17 = puVar4;
                  do {
                    lVar22 = lVar22 + -1;
                    *puVar17 = 0;
                    puVar17 = puVar17 + 1;
                  } while (lVar22 != 0);
                  *(uint *)(param_1 + 0x50) = uVar13 >> 0x10;
                }
                uVar14 = uVar13 & 0xffff;
                uVar2 = uVar14 >> 0xb;
                if (*(char *)((longlong)puVar4 + (ulonglong)uVar2) == '\0') {
                  *(undefined1 *)((longlong)puVar4 + (ulonglong)uVar2) = 1;
                  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar2 << 8));
                  puVar1[1] = 0;
                  *puVar1 = 0;
                  puVar1[3] = 0;
                  puVar1[2] = 0;
                  puVar1[5] = 0;
                  puVar1[4] = 0;
                  puVar1[7] = 0;
                  puVar1[6] = 0;
                  puVar1[9] = 0;
                  puVar1[8] = 0;
                  puVar1[0xb] = 0;
                  puVar1[10] = 0;
                  puVar1[0xd] = 0;
                  puVar1[0xc] = 0;
                  puVar1[0xf] = 0;
                  puVar1[0xe] = 0;
                  puVar1[0x11] = 0;
                  puVar1[0x10] = 0;
                  puVar1[0x13] = 0;
                  puVar1[0x12] = 0;
                  puVar1[0x15] = 0;
                  puVar1[0x14] = 0;
                  puVar1[0x17] = 0;
                  puVar1[0x16] = 0;
                  puVar1[0x19] = 0;
                  puVar1[0x18] = 0;
                  puVar1[0x1b] = 0;
                  puVar1[0x1a] = 0;
                  puVar1[0x1d] = 0;
                  puVar1[0x1c] = 0;
                  puVar1[0x1f] = 0;
                  puVar1[0x1e] = 0;
                }
                bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar14 >> 3));
                if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar14 & 7]) == 0) {
                  *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar14 >> 3)) =
                       bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar14 & 7];
                  *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar14 * 2) = (short)iVar19;
                  iVar19 = iVar19 + 1;
                  if (uVar24 == uVar20) {
LAB_18016a6e0:
                    uVar20 = uVar28 + param_11 + 1;
                    uVar24 = uVar13;
                  }
                  else if (uVar13 == uVar20) {
                    uVar20 = uVar20 + 1;
                  }
                  else if (uVar13 < uVar24 || uVar20 < uVar13) {
                    uVar2 = *(uint *)(param_1 + 0xfe8);
                    iVar23 = uVar20 - uVar24;
                    if (param_7 == uVar2) {
                      uVar6 = iVar23 * uVar2;
                      puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * uVar2));
                      puVar9 = *(undefined8 **)(param_1 + 0x68);
                      for (uVar20 = uVar6 >> 4; uVar20 != 0; uVar20 = uVar20 - 1) {
                        puVar8 = puVar1 + 1;
                        uVar31 = *puVar1;
                        puVar1 = puVar1 + 2;
                        puVar9[1] = *puVar8;
                        *puVar9 = uVar31;
                        puVar9 = puVar9 + 2;
                      }
                      uVar20 = uVar6 >> 2 & 3;
                      uVar12 = 0;
                      if (uVar20 != 0) {
                        do {
                          *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                               *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                          uVar24 = (int)uVar12 + 1;
                          uVar12 = (ulonglong)uVar24;
                        } while (uVar24 < uVar20);
                      }
                      *(ulonglong *)(param_1 + 0x68) =
                           *(longlong *)(param_1 + 0x68) + (ulonglong)uVar6;
                    }
                    else if (iVar23 != 0) {
                      uVar20 = uVar2 >> 2 & 3;
                      iVar27 = iVar23;
                      do {
                        puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * param_7));
                        puVar9 = *(undefined8 **)(param_1 + 0x68);
                        for (uVar6 = uVar2 >> 4; uVar6 != 0; uVar6 = uVar6 - 1) {
                          puVar8 = puVar1 + 1;
                          uVar31 = *puVar1;
                          puVar1 = puVar1 + 2;
                          puVar9[1] = *puVar8;
                          *puVar9 = uVar31;
                          puVar9 = puVar9 + 2;
                        }
                        uVar12 = 0;
                        if (uVar20 != 0) {
                          do {
                            *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                                 *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                            uVar6 = (int)uVar12 + 1;
                            uVar12 = (ulonglong)uVar6;
                          } while (uVar6 < uVar20);
                        }
                        uVar24 = uVar24 + 1;
                        iVar27 = iVar27 + -1;
                        *(ulonglong *)(param_1 + 0x68) =
                             *(longlong *)(param_1 + 0x68) + (ulonglong)uVar2;
                      } while (iVar27 != 0);
                    }
                    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar23;
                    goto LAB_18016a6e0;
                  }
                }
                **(uint **)(param_1 + 0x88) =
                     (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar14 * 2);
                uVar28 = uVar16 + param_11;
                if ((param_12 != '\0') && (uVar28 >> 0x10 != *(uint *)(param_1 + 0x50))) {
                  lVar22 = 8;
                  puVar17 = puVar4;
                  do {
                    lVar22 = lVar22 + -1;
                    *puVar17 = 0;
                    puVar17 = puVar17 + 1;
                  } while (lVar22 != 0);
                  *(uint *)(param_1 + 0x50) = uVar28 >> 0x10;
                }
                uVar13 = uVar28 & 0xffff;
                uVar14 = uVar13 >> 0xb;
                if (*(char *)((longlong)puVar4 + (ulonglong)uVar14) == '\0') {
                  *(undefined1 *)((longlong)puVar4 + (ulonglong)uVar14) = 1;
                  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar14 << 8));
                  puVar1[1] = 0;
                  *puVar1 = 0;
                  puVar1[3] = 0;
                  puVar1[2] = 0;
                  puVar1[5] = 0;
                  puVar1[4] = 0;
                  puVar1[7] = 0;
                  puVar1[6] = 0;
                  puVar1[9] = 0;
                  puVar1[8] = 0;
                  puVar1[0xb] = 0;
                  puVar1[10] = 0;
                  puVar1[0xd] = 0;
                  puVar1[0xc] = 0;
                  puVar1[0xf] = 0;
                  puVar1[0xe] = 0;
                  puVar1[0x11] = 0;
                  puVar1[0x10] = 0;
                  puVar1[0x13] = 0;
                  puVar1[0x12] = 0;
                  puVar1[0x15] = 0;
                  puVar1[0x14] = 0;
                  puVar1[0x17] = 0;
                  puVar1[0x16] = 0;
                  puVar1[0x19] = 0;
                  puVar1[0x18] = 0;
                  puVar1[0x1b] = 0;
                  puVar1[0x1a] = 0;
                  puVar1[0x1d] = 0;
                  puVar1[0x1c] = 0;
                  puVar1[0x1f] = 0;
                  puVar1[0x1e] = 0;
                }
                bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar13 >> 3));
                if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar13 & 7]) == 0) {
                  *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar13 >> 3)) =
                       bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar13 & 7];
                  *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar13 * 2) = (short)iVar19;
                  iVar19 = iVar19 + 1;
                  if (uVar24 == uVar20) {
LAB_18016a8f8:
                    uVar20 = uVar16 + param_11 + 1;
                    uVar24 = uVar28;
                  }
                  else if (uVar28 == uVar20) {
                    uVar20 = uVar20 + 1;
                  }
                  else if (uVar28 < uVar24 || uVar20 < uVar28) {
                    uVar14 = *(uint *)(param_1 + 0xfe8);
                    iVar23 = uVar20 - uVar24;
                    if (param_7 == uVar14) {
                      uVar2 = iVar23 * uVar14;
                      puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * uVar14));
                      puVar9 = *(undefined8 **)(param_1 + 0x68);
                      for (uVar20 = uVar2 >> 4; uVar20 != 0; uVar20 = uVar20 - 1) {
                        puVar8 = puVar1 + 1;
                        uVar31 = *puVar1;
                        puVar1 = puVar1 + 2;
                        puVar9[1] = *puVar8;
                        *puVar9 = uVar31;
                        puVar9 = puVar9 + 2;
                      }
                      uVar20 = uVar2 >> 2 & 3;
                      uVar12 = 0;
                      if (uVar20 != 0) {
                        do {
                          *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                               *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                          uVar24 = (int)uVar12 + 1;
                          uVar12 = (ulonglong)uVar24;
                        } while (uVar24 < uVar20);
                      }
                      *(ulonglong *)(param_1 + 0x68) =
                           *(longlong *)(param_1 + 0x68) + (ulonglong)uVar2;
                    }
                    else if (iVar23 != 0) {
                      uVar20 = uVar14 >> 2 & 3;
                      iVar27 = iVar23;
                      do {
                        puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * param_7));
                        puVar9 = *(undefined8 **)(param_1 + 0x68);
                        for (uVar2 = uVar14 >> 4; uVar2 != 0; uVar2 = uVar2 - 1) {
                          puVar8 = puVar1 + 1;
                          uVar31 = *puVar1;
                          puVar1 = puVar1 + 2;
                          puVar9[1] = *puVar8;
                          *puVar9 = uVar31;
                          puVar9 = puVar9 + 2;
                        }
                        uVar12 = 0;
                        if (uVar20 != 0) {
                          do {
                            *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                                 *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                            uVar2 = (int)uVar12 + 1;
                            uVar12 = (ulonglong)uVar2;
                          } while (uVar2 < uVar20);
                        }
                        uVar24 = uVar24 + 1;
                        iVar27 = iVar27 + -1;
                        *(ulonglong *)(param_1 + 0x68) =
                             *(longlong *)(param_1 + 0x68) + (ulonglong)uVar14;
                      } while (iVar27 != 0);
                    }
                    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar23;
                    goto LAB_18016a8f8;
                  }
                }
                *(uint *)(*(longlong *)(param_1 + 0x88) + 4) =
                     (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar13 * 2);
                uVar28 = uVar26 + param_11;
                if ((param_12 != '\0') && (uVar28 >> 0x10 != *(uint *)(param_1 + 0x50))) {
                  lVar22 = 8;
                  puVar17 = puVar4;
                  do {
                    lVar22 = lVar22 + -1;
                    *puVar17 = 0;
                    puVar17 = puVar17 + 1;
                  } while (lVar22 != 0);
                  *(uint *)(param_1 + 0x50) = uVar28 >> 0x10;
                }
                uVar16 = uVar28 & 0xffff;
                uVar13 = uVar16 >> 0xb;
                if (*(char *)((longlong)puVar4 + (ulonglong)uVar13) == '\0') {
                  *(undefined1 *)((longlong)puVar4 + (ulonglong)uVar13) = 1;
                  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar13 << 8));
                  puVar1[1] = 0;
                  *puVar1 = 0;
                  puVar1[3] = 0;
                  puVar1[2] = 0;
                  puVar1[5] = 0;
                  puVar1[4] = 0;
                  puVar1[7] = 0;
                  puVar1[6] = 0;
                  puVar1[9] = 0;
                  puVar1[8] = 0;
                  puVar1[0xb] = 0;
                  puVar1[10] = 0;
                  puVar1[0xd] = 0;
                  puVar1[0xc] = 0;
                  puVar1[0xf] = 0;
                  puVar1[0xe] = 0;
                  puVar1[0x11] = 0;
                  puVar1[0x10] = 0;
                  puVar1[0x13] = 0;
                  puVar1[0x12] = 0;
                  puVar1[0x15] = 0;
                  puVar1[0x14] = 0;
                  puVar1[0x17] = 0;
                  puVar1[0x16] = 0;
                  puVar1[0x19] = 0;
                  puVar1[0x18] = 0;
                  puVar1[0x1b] = 0;
                  puVar1[0x1a] = 0;
                  puVar1[0x1d] = 0;
                  puVar1[0x1c] = 0;
                  puVar1[0x1f] = 0;
                  puVar1[0x1e] = 0;
                }
                bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar16 >> 3));
                if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar16 & 7]) == 0) {
                  *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar16 >> 3)) =
                       bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar16 & 7];
                  *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar16 * 2) = (short)iVar19;
                  iVar19 = iVar19 + 1;
                  if (uVar24 == uVar20) {
LAB_18016ab08:
                    uVar20 = uVar26 + param_11 + 1;
                    uVar24 = uVar28;
                  }
                  else if (uVar28 == uVar20) {
                    uVar20 = uVar20 + 1;
                  }
                  else if (uVar28 < uVar24 || uVar20 < uVar28) {
                    uVar13 = *(uint *)(param_1 + 0xfe8);
                    iVar23 = uVar20 - uVar24;
                    if (param_7 == uVar13) {
                      uVar14 = iVar23 * uVar13;
                      puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * uVar13));
                      puVar9 = *(undefined8 **)(param_1 + 0x68);
                      for (uVar20 = uVar14 >> 4; uVar20 != 0; uVar20 = uVar20 - 1) {
                        puVar8 = puVar1 + 1;
                        uVar31 = *puVar1;
                        puVar1 = puVar1 + 2;
                        puVar9[1] = *puVar8;
                        *puVar9 = uVar31;
                        puVar9 = puVar9 + 2;
                      }
                      uVar20 = uVar14 >> 2 & 3;
                      uVar12 = 0;
                      if (uVar20 != 0) {
                        do {
                          *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                               *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                          uVar24 = (int)uVar12 + 1;
                          uVar12 = (ulonglong)uVar24;
                        } while (uVar24 < uVar20);
                      }
                      *(ulonglong *)(param_1 + 0x68) =
                           *(longlong *)(param_1 + 0x68) + (ulonglong)uVar14;
                    }
                    else if (iVar23 != 0) {
                      uVar20 = uVar13 >> 2 & 3;
                      iVar27 = iVar23;
                      do {
                        puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * param_7));
                        puVar9 = *(undefined8 **)(param_1 + 0x68);
                        for (uVar14 = uVar13 >> 4; uVar14 != 0; uVar14 = uVar14 - 1) {
                          puVar8 = puVar1 + 1;
                          uVar31 = *puVar1;
                          puVar1 = puVar1 + 2;
                          puVar9[1] = *puVar8;
                          *puVar9 = uVar31;
                          puVar9 = puVar9 + 2;
                        }
                        uVar12 = 0;
                        if (uVar20 != 0) {
                          do {
                            *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                                 *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                            uVar14 = (int)uVar12 + 1;
                            uVar12 = (ulonglong)uVar14;
                          } while (uVar14 < uVar20);
                        }
                        uVar24 = uVar24 + 1;
                        iVar27 = iVar27 + -1;
                        *(ulonglong *)(param_1 + 0x68) =
                             *(longlong *)(param_1 + 0x68) + (ulonglong)uVar13;
                      } while (iVar27 != 0);
                    }
                    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar23;
                    goto LAB_18016ab08;
                  }
                }
                *(uint *)(*(longlong *)(param_1 + 0x88) + 8) =
                     (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar16 * 2);
                *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 0xc;
                local_84 = local_84 + 1;
              } while (local_84 < uVar21);
              if (uVar20 != uVar24) {
                uVar28 = *(uint *)(param_1 + 0xfe8);
                iVar19 = uVar20 - uVar24;
                if (param_7 == uVar28) {
                  uVar26 = uVar28 * iVar19;
                  puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * uVar28));
                  puVar9 = *(undefined8 **)(param_1 + 0x68);
                  for (uVar20 = uVar26 >> 4; uVar20 != 0; uVar20 = uVar20 - 1) {
                    puVar8 = puVar1 + 1;
                    uVar31 = *puVar1;
                    puVar1 = puVar1 + 2;
                    puVar9[1] = *puVar8;
                    *puVar9 = uVar31;
                    puVar9 = puVar9 + 2;
                  }
                  uVar20 = uVar26 >> 2 & 3;
                  uVar12 = 0;
                  if (uVar20 != 0) {
                    do {
                      *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                           *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                      uVar24 = (int)uVar12 + 1;
                      uVar12 = (ulonglong)uVar24;
                    } while (uVar24 < uVar20);
                  }
                  lVar22 = *(longlong *)(param_1 + 0x68) + (ulonglong)uVar26;
                  goto LAB_18016abd4;
                }
                if (iVar19 != 0) {
                  uVar20 = uVar28 >> 2 & 3;
                  iVar23 = iVar19;
                  do {
                    puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * param_7));
                    puVar9 = *(undefined8 **)(param_1 + 0x68);
                    for (uVar26 = uVar28 >> 4; uVar26 != 0; uVar26 = uVar26 - 1) {
                      puVar8 = puVar1 + 1;
                      uVar31 = *puVar1;
                      puVar1 = puVar1 + 2;
                      puVar9[1] = *puVar8;
                      *puVar9 = uVar31;
                      puVar9 = puVar9 + 2;
                    }
                    uVar12 = 0;
                    if (uVar20 != 0) {
                      do {
                        *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                             *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                        uVar26 = (int)uVar12 + 1;
                        uVar12 = (ulonglong)uVar26;
                      } while (uVar26 < uVar20);
                    }
                    uVar24 = uVar24 + 1;
                    iVar23 = iVar23 + -1;
                    *(ulonglong *)(param_1 + 0x68) =
                         *(longlong *)(param_1 + 0x68) + (ulonglong)uVar28;
                  } while (iVar23 != 0);
                }
                goto LAB_18016ac5c;
              }
            }
            else {
              local_7c = 0;
              do {
                uVar28 = local_7c + iVar30 + 1;
                if (param_12 == '\0') {
                  uVar28 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)uVar28 * 2);
                }
                else {
                  uVar28 = param_9[uVar28];
                }
                uVar26 = local_7c + iVar30 + 2;
                if (param_12 == '\0') {
                  uVar16 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)uVar26 * 2);
                  uVar26 = (uint)(ushort)*param_9;
                }
                else {
                  uVar16 = param_9[uVar26];
                  uVar26 = *param_9;
                }
                uVar13 = uVar28 + param_11;
                if ((param_12 != '\0') && (uVar13 >> 0x10 != *(uint *)(param_1 + 0x50))) {
                  lVar22 = 8;
                  puVar17 = puVar4;
                  do {
                    lVar22 = lVar22 + -1;
                    *puVar17 = 0;
                    puVar17 = puVar17 + 1;
                  } while (lVar22 != 0);
                  *(uint *)(param_1 + 0x50) = uVar13 >> 0x10;
                }
                uVar14 = uVar13 & 0xffff;
                uVar2 = uVar14 >> 0xb;
                if (*(char *)((longlong)puVar4 + (ulonglong)uVar2) == '\0') {
                  *(undefined1 *)((longlong)puVar4 + (ulonglong)uVar2) = 1;
                  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar2 << 8));
                  puVar1[1] = 0;
                  *puVar1 = 0;
                  puVar1[3] = 0;
                  puVar1[2] = 0;
                  puVar1[5] = 0;
                  puVar1[4] = 0;
                  puVar1[7] = 0;
                  puVar1[6] = 0;
                  puVar1[9] = 0;
                  puVar1[8] = 0;
                  puVar1[0xb] = 0;
                  puVar1[10] = 0;
                  puVar1[0xd] = 0;
                  puVar1[0xc] = 0;
                  puVar1[0xf] = 0;
                  puVar1[0xe] = 0;
                  puVar1[0x11] = 0;
                  puVar1[0x10] = 0;
                  puVar1[0x13] = 0;
                  puVar1[0x12] = 0;
                  puVar1[0x15] = 0;
                  puVar1[0x14] = 0;
                  puVar1[0x17] = 0;
                  puVar1[0x16] = 0;
                  puVar1[0x19] = 0;
                  puVar1[0x18] = 0;
                  puVar1[0x1b] = 0;
                  puVar1[0x1a] = 0;
                  puVar1[0x1d] = 0;
                  puVar1[0x1c] = 0;
                  puVar1[0x1f] = 0;
                  puVar1[0x1e] = 0;
                }
                bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar14 >> 3));
                if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar14 & 7]) == 0) {
                  *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar14 >> 3)) =
                       bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar14 & 7];
                  *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar14 * 2) = (short)iVar19;
                  iVar19 = iVar19 + 1;
                  if (uVar24 == uVar20) {
LAB_180169f7c:
                    uVar20 = uVar28 + param_11 + 1;
                    uVar24 = uVar13;
                  }
                  else if (uVar13 == uVar20) {
                    uVar20 = uVar20 + 1;
                  }
                  else if (uVar13 < uVar24 || uVar20 < uVar13) {
                    iVar23 = uVar20 - uVar24;
                    uVar20 = *(uint *)(param_1 + 0xfe8);
                    uVar12 = 0;
                    if (*(int *)(param_3 + 8) != 0) {
                      do {
                        lVar22 = uVar12 * 0x10;
                        if (*(longlong *)(param_6 + lVar22) != 0) {
                          lVar25 = *(longlong *)(param_6 + lVar22) +
                                   (ulonglong)(*(int *)(param_6 + 8 + lVar22) * uVar24);
                          lVar18 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar12) * 8;
                          bVar5 = *(byte *)(param_3 + 0x16 + lVar18) >> 2;
                          iVar27 = 0;
                          if (iVar23 != 0) {
                            lVar18 = *(longlong *)(param_1 + 0x68) +
                                     (ulonglong)*(byte *)(param_3 + 0x17 + lVar18) * 4;
                            iVar29 = iVar23;
                            do {
                              uVar15 = 0;
                              if (bVar5 != 0) {
                                do {
                                  *(undefined4 *)(lVar18 + uVar15 * 4) =
                                       *(undefined4 *)(lVar25 + uVar15 * 4);
                                  uVar2 = (int)uVar15 + 1;
                                  uVar15 = (ulonglong)uVar2;
                                } while (uVar2 < bVar5);
                              }
                              iVar27 = iVar27 + 1;
                              lVar18 = lVar18 + (ulonglong)uVar20;
                              if (iVar27 == *(int *)(param_6 + lVar22 + 0xc)) {
                                iVar27 = 0;
                                lVar25 = lVar25 + (ulonglong)*(uint *)(param_6 + lVar22 + 8);
                              }
                              iVar29 = iVar29 + -1;
                            } while (iVar29 != 0);
                          }
                        }
                        uVar2 = (int)uVar12 + 1;
                        uVar12 = (ulonglong)uVar2;
                      } while (uVar2 < *(uint *)(param_3 + 8));
                    }
                    *(ulonglong *)(param_1 + 0x68) =
                         *(longlong *)(param_1 + 0x68) + (ulonglong)(iVar23 * uVar20);
                    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar23;
                    goto LAB_180169f7c;
                  }
                }
                **(uint **)(param_1 + 0x88) =
                     (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar14 * 2);
                uVar28 = uVar16 + param_11;
                if ((param_12 != '\0') && (uVar28 >> 0x10 != *(uint *)(param_1 + 0x50))) {
                  lVar22 = 8;
                  puVar17 = puVar4;
                  do {
                    lVar22 = lVar22 + -1;
                    *puVar17 = 0;
                    puVar17 = puVar17 + 1;
                  } while (lVar22 != 0);
                  *(uint *)(param_1 + 0x50) = uVar28 >> 0x10;
                }
                uVar13 = uVar28 & 0xffff;
                uVar14 = uVar13 >> 0xb;
                if (*(char *)((longlong)puVar4 + (ulonglong)uVar14) == '\0') {
                  *(undefined1 *)((longlong)puVar4 + (ulonglong)uVar14) = 1;
                  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar14 << 8));
                  puVar1[1] = 0;
                  *puVar1 = 0;
                  puVar1[3] = 0;
                  puVar1[2] = 0;
                  puVar1[5] = 0;
                  puVar1[4] = 0;
                  puVar1[7] = 0;
                  puVar1[6] = 0;
                  puVar1[9] = 0;
                  puVar1[8] = 0;
                  puVar1[0xb] = 0;
                  puVar1[10] = 0;
                  puVar1[0xd] = 0;
                  puVar1[0xc] = 0;
                  puVar1[0xf] = 0;
                  puVar1[0xe] = 0;
                  puVar1[0x11] = 0;
                  puVar1[0x10] = 0;
                  puVar1[0x13] = 0;
                  puVar1[0x12] = 0;
                  puVar1[0x15] = 0;
                  puVar1[0x14] = 0;
                  puVar1[0x17] = 0;
                  puVar1[0x16] = 0;
                  puVar1[0x19] = 0;
                  puVar1[0x18] = 0;
                  puVar1[0x1b] = 0;
                  puVar1[0x1a] = 0;
                  puVar1[0x1d] = 0;
                  puVar1[0x1c] = 0;
                  puVar1[0x1f] = 0;
                  puVar1[0x1e] = 0;
                }
                bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar13 >> 3));
                if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar13 & 7]) == 0) {
                  *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar13 >> 3)) =
                       bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar13 & 7];
                  *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar13 * 2) = (short)iVar19;
                  iVar19 = iVar19 + 1;
                  if (uVar24 == uVar20) {
LAB_18016a168:
                    uVar20 = uVar16 + param_11 + 1;
                    uVar24 = uVar28;
                  }
                  else if (uVar28 == uVar20) {
                    uVar20 = uVar20 + 1;
                  }
                  else if (uVar28 < uVar24 || uVar20 < uVar28) {
                    iVar23 = uVar20 - uVar24;
                    uVar20 = *(uint *)(param_1 + 0xfe8);
                    uVar12 = 0;
                    if (*(int *)(param_3 + 8) != 0) {
                      do {
                        lVar22 = uVar12 * 0x10;
                        if (*(longlong *)(param_6 + lVar22) != 0) {
                          lVar25 = *(longlong *)(param_6 + lVar22) +
                                   (ulonglong)(*(int *)(param_6 + 8 + lVar22) * uVar24);
                          lVar18 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar12) * 8;
                          bVar5 = *(byte *)(param_3 + 0x16 + lVar18) >> 2;
                          iVar27 = 0;
                          if (iVar23 != 0) {
                            lVar18 = *(longlong *)(param_1 + 0x68) +
                                     (ulonglong)*(byte *)(param_3 + 0x17 + lVar18) * 4;
                            iVar29 = iVar23;
                            do {
                              uVar15 = 0;
                              if (bVar5 != 0) {
                                do {
                                  *(undefined4 *)(lVar18 + uVar15 * 4) =
                                       *(undefined4 *)(lVar25 + uVar15 * 4);
                                  uVar14 = (int)uVar15 + 1;
                                  uVar15 = (ulonglong)uVar14;
                                } while (uVar14 < bVar5);
                              }
                              iVar27 = iVar27 + 1;
                              lVar18 = lVar18 + (ulonglong)uVar20;
                              if (iVar27 == *(int *)(param_6 + lVar22 + 0xc)) {
                                iVar27 = 0;
                                lVar25 = lVar25 + (ulonglong)*(uint *)(param_6 + lVar22 + 8);
                              }
                              iVar29 = iVar29 + -1;
                            } while (iVar29 != 0);
                          }
                        }
                        uVar14 = (int)uVar12 + 1;
                        uVar12 = (ulonglong)uVar14;
                      } while (uVar14 < *(uint *)(param_3 + 8));
                    }
                    *(ulonglong *)(param_1 + 0x68) =
                         *(longlong *)(param_1 + 0x68) + (ulonglong)(iVar23 * uVar20);
                    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar23;
                    goto LAB_18016a168;
                  }
                }
                *(uint *)(*(longlong *)(param_1 + 0x88) + 4) =
                     (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar13 * 2);
                uVar28 = uVar26 + param_11;
                if ((param_12 != '\0') && (uVar28 >> 0x10 != *(uint *)(param_1 + 0x50))) {
                  lVar22 = 8;
                  puVar17 = puVar4;
                  do {
                    lVar22 = lVar22 + -1;
                    *puVar17 = 0;
                    puVar17 = puVar17 + 1;
                  } while (lVar22 != 0);
                  *(uint *)(param_1 + 0x50) = uVar28 >> 0x10;
                }
                uVar16 = uVar28 & 0xffff;
                uVar13 = uVar16 >> 0xb;
                if (*(char *)((longlong)puVar4 + (ulonglong)uVar13) == '\0') {
                  *(undefined1 *)((longlong)puVar4 + (ulonglong)uVar13) = 1;
                  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar13 << 8));
                  puVar1[1] = 0;
                  *puVar1 = 0;
                  puVar1[3] = 0;
                  puVar1[2] = 0;
                  puVar1[5] = 0;
                  puVar1[4] = 0;
                  puVar1[7] = 0;
                  puVar1[6] = 0;
                  puVar1[9] = 0;
                  puVar1[8] = 0;
                  puVar1[0xb] = 0;
                  puVar1[10] = 0;
                  puVar1[0xd] = 0;
                  puVar1[0xc] = 0;
                  puVar1[0xf] = 0;
                  puVar1[0xe] = 0;
                  puVar1[0x11] = 0;
                  puVar1[0x10] = 0;
                  puVar1[0x13] = 0;
                  puVar1[0x12] = 0;
                  puVar1[0x15] = 0;
                  puVar1[0x14] = 0;
                  puVar1[0x17] = 0;
                  puVar1[0x16] = 0;
                  puVar1[0x19] = 0;
                  puVar1[0x18] = 0;
                  puVar1[0x1b] = 0;
                  puVar1[0x1a] = 0;
                  puVar1[0x1d] = 0;
                  puVar1[0x1c] = 0;
                  puVar1[0x1f] = 0;
                  puVar1[0x1e] = 0;
                }
                bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar16 >> 3));
                if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar16 & 7]) == 0) {
                  *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar16 >> 3)) =
                       bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar16 & 7];
                  *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar16 * 2) = (short)iVar19;
                  iVar19 = iVar19 + 1;
                  if (uVar24 == uVar20) {
LAB_18016a350:
                    uVar20 = uVar26 + param_11 + 1;
                    uVar24 = uVar28;
                  }
                  else if (uVar28 == uVar20) {
                    uVar20 = uVar20 + 1;
                  }
                  else if (uVar28 < uVar24 || uVar20 < uVar28) {
                    iVar23 = uVar20 - uVar24;
                    uVar20 = *(uint *)(param_1 + 0xfe8);
                    uVar12 = 0;
                    if (*(int *)(param_3 + 8) != 0) {
                      do {
                        lVar22 = uVar12 * 0x10;
                        if (*(longlong *)(param_6 + lVar22) != 0) {
                          lVar25 = *(longlong *)(param_6 + lVar22) +
                                   (ulonglong)(*(int *)(param_6 + 8 + lVar22) * uVar24);
                          lVar18 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar12) * 8;
                          bVar5 = *(byte *)(param_3 + 0x16 + lVar18) >> 2;
                          iVar27 = 0;
                          if (iVar23 != 0) {
                            lVar18 = *(longlong *)(param_1 + 0x68) +
                                     (ulonglong)*(byte *)(param_3 + 0x17 + lVar18) * 4;
                            iVar29 = iVar23;
                            do {
                              uVar15 = 0;
                              if (bVar5 != 0) {
                                do {
                                  *(undefined4 *)(lVar18 + uVar15 * 4) =
                                       *(undefined4 *)(lVar25 + uVar15 * 4);
                                  uVar13 = (int)uVar15 + 1;
                                  uVar15 = (ulonglong)uVar13;
                                } while (uVar13 < bVar5);
                              }
                              iVar27 = iVar27 + 1;
                              lVar18 = lVar18 + (ulonglong)uVar20;
                              if (iVar27 == *(int *)(param_6 + lVar22 + 0xc)) {
                                iVar27 = 0;
                                lVar25 = lVar25 + (ulonglong)*(uint *)(param_6 + lVar22 + 8);
                              }
                              iVar29 = iVar29 + -1;
                            } while (iVar29 != 0);
                          }
                        }
                        uVar13 = (int)uVar12 + 1;
                        uVar12 = (ulonglong)uVar13;
                      } while (uVar13 < *(uint *)(param_3 + 8));
                    }
                    *(ulonglong *)(param_1 + 0x68) =
                         *(longlong *)(param_1 + 0x68) + (ulonglong)(iVar23 * uVar20);
                    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar23;
                    goto LAB_18016a350;
                  }
                }
                *(uint *)(*(longlong *)(param_1 + 0x88) + 8) =
                     (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar16 * 2);
                *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 0xc;
                local_7c = local_7c + 1;
              } while (local_7c < uVar21);
              if (uVar20 != uVar24) {
                iVar19 = uVar20 - uVar24;
                uVar20 = *(uint *)(param_1 + 0xfe8);
                uVar12 = 0;
                if (*(int *)(param_3 + 8) != 0) {
                  do {
                    lVar22 = uVar12 * 0x10;
                    if (*(longlong *)(param_6 + lVar22) != 0) {
                      lVar25 = *(longlong *)(param_6 + lVar22) +
                               (ulonglong)(*(int *)(param_6 + 8 + lVar22) * uVar24);
                      lVar18 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar12) * 8;
                      bVar5 = *(byte *)(param_3 + 0x16 + lVar18) >> 2;
                      iVar23 = 0;
                      if (iVar19 != 0) {
                        lVar18 = *(longlong *)(param_1 + 0x68) +
                                 (ulonglong)*(byte *)(param_3 + 0x17 + lVar18) * 4;
                        iVar27 = iVar19;
                        do {
                          uVar15 = 0;
                          if (bVar5 != 0) {
                            do {
                              *(undefined4 *)(lVar18 + uVar15 * 4) =
                                   *(undefined4 *)(lVar25 + uVar15 * 4);
                              uVar28 = (int)uVar15 + 1;
                              uVar15 = (ulonglong)uVar28;
                            } while (uVar28 < bVar5);
                          }
                          iVar23 = iVar23 + 1;
                          lVar18 = lVar18 + (ulonglong)uVar20;
                          if (iVar23 == *(int *)(param_6 + lVar22 + 0xc)) {
                            iVar23 = 0;
                            lVar25 = lVar25 + (ulonglong)*(uint *)(param_6 + lVar22 + 8);
                          }
                          iVar27 = iVar27 + -1;
                        } while (iVar27 != 0);
                      }
                    }
                    uVar28 = (int)uVar12 + 1;
                    uVar12 = (ulonglong)uVar28;
                  } while (uVar28 < *(uint *)(param_3 + 8));
                }
                lVar22 = *(longlong *)(param_1 + 0x68) + (ulonglong)(iVar19 * uVar20);
LAB_18016abd4:
                *(longlong *)(param_1 + 0x68) = lVar22;
LAB_18016ac5c:
                *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar19;
              }
            }
          }
          iVar19 = uVar21 * 3 + *(int *)(param_1 + 0x94);
          *(int *)(param_1 + 0x94) = iVar19;
          local_78 = local_78 - uVar21;
          iVar30 = uVar21 + iVar30;
          if (local_78 == 0) {
            return;
          }
        } while( true );
      }
    }
    uVar20 = uVar21 - 1;
    if (uVar21 <= param_10) {
      iVar19 = *(int *)(param_1 + 0x94);
      local_80 = param_10;
      do {
        if (((uint)((0x1000 - *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x70)) < 0x10) ||
           (iVar19 = iVar19 + *(int *)(param_1 + 0x90), 0x1000U - iVar19 < 0x10)) {
          (*(code *)puVar10)();
          (*extraout_x11_02)(param_1,1);
          iVar19 = 0;
        }
        uVar12 = (ulonglong)*(uint *)(param_3 + 0xc);
        uVar24 = 0x1000U - iVar19 & 0xfffffffe;
        if (local_80 < uVar24) {
          uVar24 = local_80;
        }
        if (param_4 == '\0') {
          (*(code *)puVar10)();
          (*extraout_x11_04)(param_1,param_2,param_5);
        }
        else {
          (*(code *)puVar10)();
          (*extraout_x11_03)(param_1,param_2,param_3,param_5,uVar12 & 0xffffffff);
        }
        if ((*(int *)(param_1 + 0x1c) == 0) ||
           (((*(int *)(param_1 + 0x74) == 0 && (*(int *)(param_1 + 0x94) == 0)) ||
            (0xfff < uVar24 + iVar19)))) {
          (*(code *)puVar10)();
          (*extraout_x11_05)(param_1,0);
        }
        else {
          **(int **)(param_1 + 0x88) = *(int *)(param_1 + 0x1c);
          *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 4;
          *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
        }
        iVar19 = *(int *)(param_1 + 0x74);
        uVar26 = 0;
        uVar28 = 0;
        if (param_13 == '\0') {
          uVar16 = 0;
          do {
            if (param_12 == '\0') {
              uVar13 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)(uVar16 + iVar30) * 2);
            }
            else {
              uVar13 = param_9[uVar16 + iVar30];
            }
            uVar14 = uVar13 + param_11;
            if ((param_12 != '\0') && (uVar14 >> 0x10 != *(uint *)(param_1 + 0x50))) {
              lVar22 = 8;
              puVar17 = puVar4;
              do {
                lVar22 = lVar22 + -1;
                *puVar17 = 0;
                puVar17 = puVar17 + 1;
              } while (lVar22 != 0);
              *(uint *)(param_1 + 0x50) = uVar14 >> 0x10;
            }
            uVar2 = uVar14 & 0xffff;
            uVar6 = uVar2 >> 0xb;
            if (*(char *)((longlong)puVar4 + (ulonglong)uVar6) == '\0') {
              *(undefined1 *)((longlong)puVar4 + (ulonglong)uVar6) = 1;
              puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar6 << 8));
              puVar1[1] = 0;
              *puVar1 = 0;
              puVar1[3] = 0;
              puVar1[2] = 0;
              puVar1[5] = 0;
              puVar1[4] = 0;
              puVar1[7] = 0;
              puVar1[6] = 0;
              puVar1[9] = 0;
              puVar1[8] = 0;
              puVar1[0xb] = 0;
              puVar1[10] = 0;
              puVar1[0xd] = 0;
              puVar1[0xc] = 0;
              puVar1[0xf] = 0;
              puVar1[0xe] = 0;
              puVar1[0x11] = 0;
              puVar1[0x10] = 0;
              puVar1[0x13] = 0;
              puVar1[0x12] = 0;
              puVar1[0x15] = 0;
              puVar1[0x14] = 0;
              puVar1[0x17] = 0;
              puVar1[0x16] = 0;
              puVar1[0x19] = 0;
              puVar1[0x18] = 0;
              puVar1[0x1b] = 0;
              puVar1[0x1a] = 0;
              puVar1[0x1d] = 0;
              puVar1[0x1c] = 0;
              puVar1[0x1f] = 0;
              puVar1[0x1e] = 0;
            }
            bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar2 >> 3));
            if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar2 & 7]) == 0) {
              *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar2 >> 3)) =
                   bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar2 & 7];
              *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 2) = (short)iVar19;
              iVar19 = iVar19 + 1;
              if (uVar26 == uVar28) {
LAB_18016b5e8:
                uVar28 = uVar13 + param_11 + 1;
                uVar26 = uVar14;
              }
              else if (uVar14 == uVar28) {
                uVar28 = uVar28 + 1;
              }
              else if (uVar14 < uVar26 || uVar28 < uVar14) {
                uVar6 = *(uint *)(param_1 + 0xfe8);
                iVar23 = uVar28 - uVar26;
                if (param_7 == uVar6) {
                  uVar3 = iVar23 * uVar6;
                  puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar26 * uVar6));
                  puVar9 = *(undefined8 **)(param_1 + 0x68);
                  for (uVar28 = uVar3 >> 4; uVar28 != 0; uVar28 = uVar28 - 1) {
                    puVar8 = puVar1 + 1;
                    uVar31 = *puVar1;
                    puVar1 = puVar1 + 2;
                    puVar9[1] = *puVar8;
                    *puVar9 = uVar31;
                    puVar9 = puVar9 + 2;
                  }
                  uVar28 = uVar3 >> 2 & 3;
                  uVar12 = 0;
                  if (uVar28 != 0) {
                    do {
                      *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                           *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                      uVar26 = (int)uVar12 + 1;
                      uVar12 = (ulonglong)uVar26;
                    } while (uVar26 < uVar28);
                  }
                  *(ulonglong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + (ulonglong)uVar3;
                }
                else if (iVar23 != 0) {
                  uVar28 = uVar6 >> 2 & 3;
                  iVar27 = iVar23;
                  do {
                    puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar26 * param_7));
                    puVar9 = *(undefined8 **)(param_1 + 0x68);
                    for (uVar3 = uVar6 >> 4; uVar3 != 0; uVar3 = uVar3 - 1) {
                      puVar8 = puVar1 + 1;
                      uVar31 = *puVar1;
                      puVar1 = puVar1 + 2;
                      puVar9[1] = *puVar8;
                      *puVar9 = uVar31;
                      puVar9 = puVar9 + 2;
                    }
                    uVar12 = 0;
                    if (uVar28 != 0) {
                      do {
                        *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                             *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                        uVar3 = (int)uVar12 + 1;
                        uVar12 = (ulonglong)uVar3;
                      } while (uVar3 < uVar28);
                    }
                    uVar26 = uVar26 + 1;
                    iVar27 = iVar27 + -1;
                    *(ulonglong *)(param_1 + 0x68) =
                         *(longlong *)(param_1 + 0x68) + (ulonglong)uVar6;
                  } while (iVar27 != 0);
                }
                *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar23;
                goto LAB_18016b5e8;
              }
            }
            *(uint *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar16 * 4) =
                 (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 2);
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar20);
          uVar13 = uVar24 - uVar20;
          uVar16 = 0;
          if (uVar13 != 0) {
            do {
              uVar14 = (uVar16 + iVar30 + uVar21) - 1;
              if (param_12 == '\0') {
                uVar14 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)uVar14 * 2);
              }
              else {
                uVar14 = param_9[uVar14];
              }
              uVar2 = uVar14 + param_11;
              if ((param_12 != '\0') && (uVar2 >> 0x10 != *(uint *)(param_1 + 0x50))) {
                lVar22 = 8;
                puVar17 = puVar4;
                do {
                  lVar22 = lVar22 + -1;
                  *puVar17 = 0;
                  puVar17 = puVar17 + 1;
                } while (lVar22 != 0);
                *(uint *)(param_1 + 0x50) = uVar2 >> 0x10;
              }
              uVar6 = uVar2 & 0xffff;
              uVar3 = uVar6 >> 0xb;
              if (*(char *)((longlong)puVar4 + (ulonglong)uVar3) == '\0') {
                *(undefined1 *)((longlong)puVar4 + (ulonglong)uVar3) = 1;
                puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar3 << 8));
                puVar1[1] = 0;
                *puVar1 = 0;
                puVar1[3] = 0;
                puVar1[2] = 0;
                puVar1[5] = 0;
                puVar1[4] = 0;
                puVar1[7] = 0;
                puVar1[6] = 0;
                puVar1[9] = 0;
                puVar1[8] = 0;
                puVar1[0xb] = 0;
                puVar1[10] = 0;
                puVar1[0xd] = 0;
                puVar1[0xc] = 0;
                puVar1[0xf] = 0;
                puVar1[0xe] = 0;
                puVar1[0x11] = 0;
                puVar1[0x10] = 0;
                puVar1[0x13] = 0;
                puVar1[0x12] = 0;
                puVar1[0x15] = 0;
                puVar1[0x14] = 0;
                puVar1[0x17] = 0;
                puVar1[0x16] = 0;
                puVar1[0x19] = 0;
                puVar1[0x18] = 0;
                puVar1[0x1b] = 0;
                puVar1[0x1a] = 0;
                puVar1[0x1d] = 0;
                puVar1[0x1c] = 0;
                puVar1[0x1f] = 0;
                puVar1[0x1e] = 0;
              }
              bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar6 >> 3));
              if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar6 & 7]) == 0) {
                *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar6 >> 3)) =
                     bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar6 & 7];
                *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar6 * 2) = (short)iVar19;
                iVar19 = iVar19 + 1;
                if (uVar26 == uVar28) {
LAB_18016b874:
                  uVar28 = uVar14 + param_11 + 1;
                  uVar26 = uVar2;
                }
                else if (uVar2 == uVar28) {
                  uVar28 = uVar28 + 1;
                }
                else if (uVar2 < uVar26 || uVar28 < uVar2) {
                  uVar3 = *(uint *)(param_1 + 0xfe8);
                  iVar23 = uVar28 - uVar26;
                  if (param_7 == uVar3) {
                    uVar7 = iVar23 * uVar3;
                    puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar26 * uVar3));
                    puVar9 = *(undefined8 **)(param_1 + 0x68);
                    for (uVar28 = uVar7 >> 4; uVar28 != 0; uVar28 = uVar28 - 1) {
                      puVar8 = puVar1 + 1;
                      uVar31 = *puVar1;
                      puVar1 = puVar1 + 2;
                      puVar9[1] = *puVar8;
                      *puVar9 = uVar31;
                      puVar9 = puVar9 + 2;
                    }
                    uVar28 = uVar7 >> 2 & 3;
                    uVar12 = 0;
                    if (uVar28 != 0) {
                      do {
                        *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                             *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                        uVar26 = (int)uVar12 + 1;
                        uVar12 = (ulonglong)uVar26;
                      } while (uVar26 < uVar28);
                    }
                    *(ulonglong *)(param_1 + 0x68) =
                         *(longlong *)(param_1 + 0x68) + (ulonglong)uVar7;
                  }
                  else if (iVar23 != 0) {
                    uVar28 = uVar3 >> 2 & 3;
                    iVar27 = iVar23;
                    do {
                      puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar26 * param_7));
                      puVar9 = *(undefined8 **)(param_1 + 0x68);
                      for (uVar7 = uVar3 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                        puVar8 = puVar1 + 1;
                        uVar31 = *puVar1;
                        puVar1 = puVar1 + 2;
                        puVar9[1] = *puVar8;
                        *puVar9 = uVar31;
                        puVar9 = puVar9 + 2;
                      }
                      uVar12 = 0;
                      if (uVar28 != 0) {
                        do {
                          *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                               *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                          uVar7 = (int)uVar12 + 1;
                          uVar12 = (ulonglong)uVar7;
                        } while (uVar7 < uVar28);
                      }
                      uVar26 = uVar26 + 1;
                      iVar27 = iVar27 + -1;
                      *(ulonglong *)(param_1 + 0x68) =
                           *(longlong *)(param_1 + 0x68) + (ulonglong)uVar3;
                    } while (iVar27 != 0);
                  }
                  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar23;
                  goto LAB_18016b874;
                }
              }
              iVar23 = uVar16 + uVar21;
              uVar16 = uVar16 + 1;
              *(uint *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(iVar23 - 1) * 4) =
                   (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar6 * 2);
            } while (uVar16 < uVar13);
          }
          if (uVar28 != uVar26) {
            uVar16 = *(uint *)(param_1 + 0xfe8);
            iVar19 = uVar28 - uVar26;
            if (param_7 == uVar16) {
              uVar14 = uVar16 * iVar19;
              puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar26 * uVar16));
              puVar9 = *(undefined8 **)(param_1 + 0x68);
              for (uVar28 = uVar14 >> 4; uVar28 != 0; uVar28 = uVar28 - 1) {
                puVar8 = puVar1 + 1;
                uVar31 = *puVar1;
                puVar1 = puVar1 + 2;
                puVar9[1] = *puVar8;
                *puVar9 = uVar31;
                puVar9 = puVar9 + 2;
              }
              uVar28 = uVar14 >> 2 & 3;
              uVar12 = 0;
              if (uVar28 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                       *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                  uVar26 = (int)uVar12 + 1;
                  uVar12 = (ulonglong)uVar26;
                } while (uVar26 < uVar28);
              }
              *(ulonglong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + (ulonglong)uVar14;
            }
            else if (iVar19 != 0) {
              uVar28 = uVar16 >> 2 & 3;
              iVar23 = iVar19;
              do {
                puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar26 * param_7));
                puVar9 = *(undefined8 **)(param_1 + 0x68);
                for (uVar14 = uVar16 >> 4; uVar14 != 0; uVar14 = uVar14 - 1) {
                  puVar8 = puVar1 + 1;
                  uVar31 = *puVar1;
                  puVar1 = puVar1 + 2;
                  puVar9[1] = *puVar8;
                  *puVar9 = uVar31;
                  puVar9 = puVar9 + 2;
                }
                uVar12 = 0;
                if (uVar28 != 0) {
                  do {
                    *(undefined4 *)((longlong)puVar9 + uVar12 * 4) =
                         *(undefined4 *)((longlong)puVar1 + uVar12 * 4);
                    uVar14 = (int)uVar12 + 1;
                    uVar12 = (ulonglong)uVar14;
                  } while (uVar14 < uVar28);
                }
                uVar26 = uVar26 + 1;
                iVar23 = iVar23 + -1;
                *(ulonglong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + (ulonglong)uVar16;
              } while (iVar23 != 0);
            }
            *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar19;
          }
        }
        else {
          uVar16 = 0;
          do {
            if (param_12 == '\0') {
              uVar13 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)(uVar16 + iVar30) * 2);
            }
            else {
              uVar13 = param_9[uVar16 + iVar30];
            }
            uVar14 = uVar13 + param_11;
            if ((param_12 != '\0') && (uVar14 >> 0x10 != *(uint *)(param_1 + 0x50))) {
              lVar22 = 8;
              puVar17 = puVar4;
              do {
                lVar22 = lVar22 + -1;
                *puVar17 = 0;
                puVar17 = puVar17 + 1;
              } while (lVar22 != 0);
              *(uint *)(param_1 + 0x50) = uVar14 >> 0x10;
            }
            uVar2 = uVar14 & 0xffff;
            uVar6 = uVar2 >> 0xb;
            if (*(char *)((longlong)puVar4 + (ulonglong)uVar6) == '\0') {
              *(undefined1 *)((longlong)puVar4 + (ulonglong)uVar6) = 1;
              puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar6 << 8));
              puVar1[1] = 0;
              *puVar1 = 0;
              puVar1[3] = 0;
              puVar1[2] = 0;
              puVar1[5] = 0;
              puVar1[4] = 0;
              puVar1[7] = 0;
              puVar1[6] = 0;
              puVar1[9] = 0;
              puVar1[8] = 0;
              puVar1[0xb] = 0;
              puVar1[10] = 0;
              puVar1[0xd] = 0;
              puVar1[0xc] = 0;
              puVar1[0xf] = 0;
              puVar1[0xe] = 0;
              puVar1[0x11] = 0;
              puVar1[0x10] = 0;
              puVar1[0x13] = 0;
              puVar1[0x12] = 0;
              puVar1[0x15] = 0;
              puVar1[0x14] = 0;
              puVar1[0x17] = 0;
              puVar1[0x16] = 0;
              puVar1[0x19] = 0;
              puVar1[0x18] = 0;
              puVar1[0x1b] = 0;
              puVar1[0x1a] = 0;
              puVar1[0x1d] = 0;
              puVar1[0x1c] = 0;
              puVar1[0x1f] = 0;
              puVar1[0x1e] = 0;
            }
            bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar2 >> 3));
            if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar2 & 7]) == 0) {
              *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar2 >> 3)) =
                   bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar2 & 7];
              *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 2) = (short)iVar19;
              iVar19 = iVar19 + 1;
              if (uVar26 == uVar28) {
LAB_18016b030:
                uVar28 = uVar13 + param_11 + 1;
                uVar26 = uVar14;
              }
              else if (uVar14 == uVar28) {
                uVar28 = uVar28 + 1;
              }
              else if (uVar14 < uVar26 || uVar28 < uVar14) {
                iVar23 = uVar28 - uVar26;
                uVar28 = *(uint *)(param_1 + 0xfe8);
                uVar12 = 0;
                if (*(int *)(param_3 + 8) != 0) {
                  do {
                    lVar22 = uVar12 * 0x10;
                    if (*(longlong *)(param_6 + lVar22) != 0) {
                      lVar25 = *(longlong *)(param_6 + lVar22) +
                               (ulonglong)(*(int *)(param_6 + 8 + lVar22) * uVar26);
                      lVar18 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar12) * 8;
                      bVar5 = *(byte *)(param_3 + 0x16 + lVar18) >> 2;
                      iVar27 = 0;
                      if (iVar23 != 0) {
                        lVar18 = *(longlong *)(param_1 + 0x68) +
                                 (ulonglong)*(byte *)(param_3 + 0x17 + lVar18) * 4;
                        iVar29 = iVar23;
                        do {
                          uVar15 = 0;
                          if (bVar5 != 0) {
                            do {
                              *(undefined4 *)(lVar18 + uVar15 * 4) =
                                   *(undefined4 *)(lVar25 + uVar15 * 4);
                              uVar6 = (int)uVar15 + 1;
                              uVar15 = (ulonglong)uVar6;
                            } while (uVar6 < bVar5);
                          }
                          iVar27 = iVar27 + 1;
                          lVar18 = lVar18 + (ulonglong)uVar28;
                          if (iVar27 == *(int *)(param_6 + lVar22 + 0xc)) {
                            iVar27 = 0;
                            lVar25 = lVar25 + (ulonglong)*(uint *)(param_6 + lVar22 + 8);
                          }
                          iVar29 = iVar29 + -1;
                        } while (iVar29 != 0);
                      }
                    }
                    uVar6 = (int)uVar12 + 1;
                    uVar12 = (ulonglong)uVar6;
                  } while (uVar6 < *(uint *)(param_3 + 8));
                }
                *(ulonglong *)(param_1 + 0x68) =
                     *(longlong *)(param_1 + 0x68) + (ulonglong)(iVar23 * uVar28);
                *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar23;
                goto LAB_18016b030;
              }
            }
            *(uint *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar16 * 4) =
                 (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 2);
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar20);
          uVar13 = uVar24 - uVar20;
          uVar16 = 0;
          if (uVar13 != 0) {
            do {
              uVar14 = (uVar16 + iVar30 + uVar21) - 1;
              if (param_12 == '\0') {
                uVar14 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)uVar14 * 2);
              }
              else {
                uVar14 = param_9[uVar14];
              }
              uVar2 = uVar14 + param_11;
              if ((param_12 != '\0') && (uVar2 >> 0x10 != *(uint *)(param_1 + 0x50))) {
                lVar22 = 8;
                puVar17 = puVar4;
                do {
                  lVar22 = lVar22 + -1;
                  *puVar17 = 0;
                  puVar17 = puVar17 + 1;
                } while (lVar22 != 0);
                *(uint *)(param_1 + 0x50) = uVar2 >> 0x10;
              }
              uVar6 = uVar2 & 0xffff;
              uVar3 = uVar6 >> 0xb;
              if (*(char *)((longlong)puVar4 + (ulonglong)uVar3) == '\0') {
                *(undefined1 *)((longlong)puVar4 + (ulonglong)uVar3) = 1;
                puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar3 << 8));
                puVar1[1] = 0;
                *puVar1 = 0;
                puVar1[3] = 0;
                puVar1[2] = 0;
                puVar1[5] = 0;
                puVar1[4] = 0;
                puVar1[7] = 0;
                puVar1[6] = 0;
                puVar1[9] = 0;
                puVar1[8] = 0;
                puVar1[0xb] = 0;
                puVar1[10] = 0;
                puVar1[0xd] = 0;
                puVar1[0xc] = 0;
                puVar1[0xf] = 0;
                puVar1[0xe] = 0;
                puVar1[0x11] = 0;
                puVar1[0x10] = 0;
                puVar1[0x13] = 0;
                puVar1[0x12] = 0;
                puVar1[0x15] = 0;
                puVar1[0x14] = 0;
                puVar1[0x17] = 0;
                puVar1[0x16] = 0;
                puVar1[0x19] = 0;
                puVar1[0x18] = 0;
                puVar1[0x1b] = 0;
                puVar1[0x1a] = 0;
                puVar1[0x1d] = 0;
                puVar1[0x1c] = 0;
                puVar1[0x1f] = 0;
                puVar1[0x1e] = 0;
              }
              bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar6 >> 3));
              if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar6 & 7]) == 0) {
                *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar6 >> 3)) =
                     bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar6 & 7];
                *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar6 * 2) = (short)iVar19;
                iVar19 = iVar19 + 1;
                if (uVar26 == uVar28) {
LAB_18016b288:
                  uVar28 = uVar14 + param_11 + 1;
                  uVar26 = uVar2;
                }
                else if (uVar2 == uVar28) {
                  uVar28 = uVar28 + 1;
                }
                else if (uVar2 < uVar26 || uVar28 < uVar2) {
                  iVar23 = uVar28 - uVar26;
                  uVar28 = *(uint *)(param_1 + 0xfe8);
                  uVar12 = 0;
                  if (*(int *)(param_3 + 8) != 0) {
                    do {
                      lVar22 = uVar12 * 0x10;
                      if (*(longlong *)(param_6 + lVar22) != 0) {
                        lVar25 = *(longlong *)(param_6 + lVar22) +
                                 (ulonglong)(*(int *)(param_6 + 8 + lVar22) * uVar26);
                        lVar18 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar12) * 8;
                        bVar5 = *(byte *)(param_3 + 0x16 + lVar18) >> 2;
                        iVar27 = 0;
                        if (iVar23 != 0) {
                          lVar18 = *(longlong *)(param_1 + 0x68) +
                                   (ulonglong)*(byte *)(param_3 + 0x17 + lVar18) * 4;
                          iVar29 = iVar23;
                          do {
                            uVar15 = 0;
                            if (bVar5 != 0) {
                              do {
                                *(undefined4 *)(lVar18 + uVar15 * 4) =
                                     *(undefined4 *)(lVar25 + uVar15 * 4);
                                uVar3 = (int)uVar15 + 1;
                                uVar15 = (ulonglong)uVar3;
                              } while (uVar3 < bVar5);
                            }
                            iVar27 = iVar27 + 1;
                            lVar18 = lVar18 + (ulonglong)uVar28;
                            if (iVar27 == *(int *)(param_6 + lVar22 + 0xc)) {
                              iVar27 = 0;
                              lVar25 = lVar25 + (ulonglong)*(uint *)(param_6 + lVar22 + 8);
                            }
                            iVar29 = iVar29 + -1;
                          } while (iVar29 != 0);
                        }
                      }
                      uVar3 = (int)uVar12 + 1;
                      uVar12 = (ulonglong)uVar3;
                    } while (uVar3 < *(uint *)(param_3 + 8));
                  }
                  *(ulonglong *)(param_1 + 0x68) =
                       *(longlong *)(param_1 + 0x68) + (ulonglong)(iVar23 * uVar28);
                  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar23;
                  goto LAB_18016b288;
                }
              }
              iVar23 = uVar16 + uVar21;
              uVar16 = uVar16 + 1;
              *(uint *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(iVar23 - 1) * 4) =
                   (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar6 * 2);
            } while (uVar16 < uVar13);
          }
          if (uVar28 != uVar26) {
            iVar19 = uVar28 - uVar26;
            uVar28 = *(uint *)(param_1 + 0xfe8);
            uVar12 = 0;
            if (*(int *)(param_3 + 8) != 0) {
              do {
                lVar22 = uVar12 * 0x10;
                if (*(longlong *)(param_6 + lVar22) != 0) {
                  lVar25 = *(longlong *)(param_6 + lVar22) +
                           (ulonglong)(*(int *)(param_6 + 8 + lVar22) * uVar26);
                  lVar18 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar12) * 8;
                  bVar5 = *(byte *)(param_3 + 0x16 + lVar18);
                  iVar23 = 0;
                  if (iVar19 != 0) {
                    lVar18 = *(longlong *)(param_1 + 0x68) +
                             (ulonglong)*(byte *)(param_3 + 0x17 + lVar18) * 4;
                    iVar27 = iVar19;
                    do {
                      uVar15 = 0;
                      uVar16 = (uint)(bVar5 >> 2);
                      if (uVar16 != 0) {
                        do {
                          *(undefined4 *)(lVar18 + uVar15 * 4) =
                               *(undefined4 *)(lVar25 + uVar15 * 4);
                          uVar14 = (int)uVar15 + 1;
                          uVar15 = (ulonglong)uVar14;
                        } while (uVar14 < uVar16);
                      }
                      iVar23 = iVar23 + 1;
                      lVar18 = lVar18 + (ulonglong)uVar28;
                      if (iVar23 == *(int *)(param_6 + lVar22 + 0xc)) {
                        iVar23 = 0;
                        lVar25 = lVar25 + (ulonglong)*(uint *)(param_6 + lVar22 + 8);
                      }
                      iVar27 = iVar27 + -1;
                    } while (iVar27 != 0);
                  }
                }
                uVar16 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar16;
              } while (uVar16 < *(uint *)(param_3 + 8));
            }
            *(ulonglong *)(param_1 + 0x68) =
                 *(longlong *)(param_1 + 0x68) + (ulonglong)(iVar19 * uVar28);
            *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar19;
          }
        }
        iVar30 = uVar13 + iVar30;
        *(ulonglong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + (ulonglong)uVar24 * 4;
        local_80 = (uVar20 - uVar24) + local_80;
        iVar19 = *(int *)(param_1 + 0x94) + uVar24;
        *(int *)(param_1 + 0x94) = iVar19;
      } while (uVar21 <= local_80);
    }
  }
  return;
}

