/*
 * FUN_180059860 at 180059860
 * undefined FUN_180059860(void)
 * Address ranges: 180059860-18005bc67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180059860(longlong *param_1,int param_2,longlong param_3,char param_4,undefined8 param_5,
                  longlong param_6,uint param_7,undefined8 param_8,uint *param_9,uint param_10,
                  int param_11,char param_12,char param_13,undefined1 param_14,undefined1 param_15)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  undefined8 uVar30;
  uint local_a0;
  uint local_90;
  uint local_8c;
  uint local_80;
  
  plVar4 = param_1 + 6;
  param_1[7] = 0;
  *plVar4 = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  iVar29 = 0;
  if (param_2 - 1U < 2) {
    uVar17 = 1;
    if (param_2 == 2) {
      uVar17 = 2;
    }
LAB_18005b4dc:
    if (uVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(0xf004,0x18005b4e8);
      (*pcVar10)();
    }
    uVar16 = 0;
    if (uVar17 != 0) {
      uVar16 = param_10 / uVar17;
    }
    for (uVar16 = uVar16 * uVar17; uVar16 != 0; uVar16 = uVar16 - uVar21) {
      if (((uint)((0x1000 - *(int *)((longlong)param_1 + 0x74)) - (int)param_1[0xe]) < 0x10) ||
         (iVar15 = *(int *)((longlong)param_1 + 0x94) + (int)param_1[0x12], 0x1000U - iVar15 < 0x10)
         ) {
        (**(code **)(*param_1 + 0x1d8))(param_1,1);
        iVar15 = 0;
      }
      if (uVar17 == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(0xf004,0x18005b564);
        (*pcVar10)();
      }
      uVar21 = 0;
      if (uVar17 != 0) {
        uVar21 = (0x1000U - iVar15) / uVar17;
      }
      uVar21 = (0x1000 - ((0x1000U - iVar15) - uVar21 * uVar17)) - iVar15;
      if (uVar16 < uVar21) {
        uVar21 = uVar16;
      }
      if (param_4 == '\0') {
        (**(code **)(*param_1 + 0x1e8))
                  (param_1,param_2,param_5,*(undefined4 *)(param_3 + 0xc),uVar21,uVar21,param_15);
      }
      else {
        (**(code **)(*param_1 + 0x1e0))
                  (param_1,param_2,param_3,param_5,*(undefined4 *)(param_3 + 0xc),uVar21,uVar21,
                   param_14);
      }
      iVar15 = *(int *)((longlong)param_1 + 0x74);
      uVar24 = 0;
      uVar23 = 0;
      if (param_13 == '\0') {
        uVar26 = 0;
        if (uVar21 != 0) {
          do {
            if (param_12 == '\0') {
              uVar14 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)(uVar26 + iVar29) * 2);
            }
            else {
              uVar14 = param_9[uVar26 + iVar29];
            }
            uVar27 = uVar14 + param_11;
            if ((param_12 != '\0') && (uVar27 >> 0x10 != *(uint *)(param_1 + 10))) {
              param_1[7] = 0;
              *plVar4 = 0;
              param_1[9] = 0;
              param_1[8] = 0;
              *(uint *)(param_1 + 10) = uVar27 >> 0x10;
            }
            uVar2 = uVar27 & 0xffff;
            uVar6 = uVar2 >> 0xb;
            if (*(char *)((longlong)plVar4 + (ulonglong)uVar6) == '\0') {
              *(undefined1 *)((longlong)plVar4 + (ulonglong)uVar6) = 1;
              puVar1 = (undefined8 *)(param_1[5] + (ulonglong)(uVar6 << 8));
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
            bVar5 = *(byte *)(param_1[5] + (ulonglong)(uVar2 >> 3));
            if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar2 & 7]) == 0) {
              *(byte *)(param_1[5] + (ulonglong)(uVar2 >> 3)) =
                   bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar2 & 7];
              *(short *)(param_1[4] + (ulonglong)uVar2 * 2) = (short)iVar15;
              iVar15 = iVar15 + 1;
              if (uVar24 == uVar23) {
LAB_18005bae8:
                uVar23 = uVar14 + param_11 + 1;
                uVar24 = uVar27;
              }
              else if (uVar27 == uVar23) {
                uVar23 = uVar23 + 1;
              }
              else if (uVar27 < uVar24 || uVar23 < uVar27) {
                uVar6 = *(uint *)(param_1 + 0x1fd);
                iVar20 = uVar23 - uVar24;
                if (param_7 == uVar6) {
                  uVar3 = iVar20 * uVar6;
                  puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * uVar6));
                  puVar9 = (undefined8 *)param_1[0xd];
                  for (uVar23 = uVar3 >> 4; uVar23 != 0; uVar23 = uVar23 - 1) {
                    puVar8 = puVar1 + 1;
                    uVar30 = *puVar1;
                    puVar1 = puVar1 + 2;
                    puVar9[1] = *puVar8;
                    *puVar9 = uVar30;
                    puVar9 = puVar9 + 2;
                  }
                  uVar23 = uVar3 >> 2 & 3;
                  uVar18 = 0;
                  if (uVar23 != 0) {
                    do {
                      *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                           *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                      uVar24 = (int)uVar18 + 1;
                      uVar18 = (ulonglong)uVar24;
                    } while (uVar24 < uVar23);
                  }
                  param_1[0xd] = param_1[0xd] + (ulonglong)uVar3;
                }
                else if (iVar20 != 0) {
                  uVar23 = uVar6 >> 2 & 3;
                  iVar25 = iVar20;
                  do {
                    puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * param_7));
                    puVar9 = (undefined8 *)param_1[0xd];
                    for (uVar3 = uVar6 >> 4; uVar3 != 0; uVar3 = uVar3 - 1) {
                      puVar8 = puVar1 + 1;
                      uVar30 = *puVar1;
                      puVar1 = puVar1 + 2;
                      puVar9[1] = *puVar8;
                      *puVar9 = uVar30;
                      puVar9 = puVar9 + 2;
                    }
                    uVar18 = 0;
                    if (uVar23 != 0) {
                      do {
                        *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                             *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                        uVar3 = (int)uVar18 + 1;
                        uVar18 = (ulonglong)uVar3;
                      } while (uVar3 < uVar23);
                    }
                    uVar24 = uVar24 + 1;
                    iVar25 = iVar25 + -1;
                    param_1[0xd] = param_1[0xd] + (ulonglong)uVar6;
                  } while (iVar25 != 0);
                }
                *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar20;
                goto LAB_18005bae8;
              }
            }
            *(uint *)(param_1[0x11] + (ulonglong)uVar26 * 4) =
                 (uint)*(ushort *)(param_1[4] + (ulonglong)uVar2 * 2);
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar21);
          if (uVar23 != uVar24) {
            uVar26 = *(uint *)(param_1 + 0x1fd);
            iVar15 = uVar23 - uVar24;
            if (param_7 == uVar26) {
              uVar14 = uVar26 * iVar15;
              puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar26 * uVar24));
              puVar9 = (undefined8 *)param_1[0xd];
              for (uVar23 = uVar14 >> 4; uVar23 != 0; uVar23 = uVar23 - 1) {
                puVar8 = puVar1 + 1;
                uVar30 = *puVar1;
                puVar1 = puVar1 + 2;
                puVar9[1] = *puVar8;
                *puVar9 = uVar30;
                puVar9 = puVar9 + 2;
              }
              uVar23 = uVar14 >> 2 & 3;
              uVar18 = 0;
              if (uVar23 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                       *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                  uVar24 = (int)uVar18 + 1;
                  uVar18 = (ulonglong)uVar24;
                } while (uVar24 < uVar23);
              }
              lVar19 = param_1[0xd] + (ulonglong)uVar14;
              goto LAB_18005bb8c;
            }
            if (iVar15 != 0) {
              uVar23 = uVar26 >> 2 & 3;
              iVar20 = iVar15;
              do {
                puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * param_7));
                puVar9 = (undefined8 *)param_1[0xd];
                for (uVar14 = uVar26 >> 4; uVar14 != 0; uVar14 = uVar14 - 1) {
                  puVar8 = puVar1 + 1;
                  uVar30 = *puVar1;
                  puVar1 = puVar1 + 2;
                  puVar9[1] = *puVar8;
                  *puVar9 = uVar30;
                  puVar9 = puVar9 + 2;
                }
                uVar18 = 0;
                if (uVar23 != 0) {
                  do {
                    *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                         *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                    uVar14 = (int)uVar18 + 1;
                    uVar18 = (ulonglong)uVar14;
                  } while (uVar14 < uVar23);
                }
                uVar24 = uVar24 + 1;
                iVar20 = iVar20 + -1;
                param_1[0xd] = param_1[0xd] + (ulonglong)uVar26;
              } while (iVar20 != 0);
            }
            goto LAB_18005bc14;
          }
        }
      }
      else {
        uVar26 = 0;
        if (uVar21 != 0) {
          do {
            if (param_12 == '\0') {
              uVar14 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)(uVar26 + iVar29) * 2);
            }
            else {
              uVar14 = param_9[uVar26 + iVar29];
            }
            uVar27 = uVar14 + param_11;
            if ((param_12 != '\0') && (uVar27 >> 0x10 != *(uint *)(param_1 + 10))) {
              param_1[7] = 0;
              *plVar4 = 0;
              param_1[9] = 0;
              param_1[8] = 0;
              *(uint *)(param_1 + 10) = uVar27 >> 0x10;
            }
            uVar2 = uVar27 & 0xffff;
            uVar6 = uVar2 >> 0xb;
            if (*(char *)((longlong)plVar4 + (ulonglong)uVar6) == '\0') {
              *(undefined1 *)((longlong)plVar4 + (ulonglong)uVar6) = 1;
              puVar1 = (undefined8 *)(param_1[5] + (ulonglong)(uVar6 << 8));
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
            bVar5 = *(byte *)(param_1[5] + (ulonglong)(uVar2 >> 3));
            if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar2 & 7]) == 0) {
              *(byte *)(param_1[5] + (ulonglong)(uVar2 >> 3)) =
                   bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar2 & 7];
              *(short *)(param_1[4] + (ulonglong)uVar2 * 2) = (short)iVar15;
              iVar15 = iVar15 + 1;
              if (uVar24 == uVar23) {
LAB_18005b7d4:
                uVar23 = uVar14 + param_11 + 1;
                uVar24 = uVar27;
              }
              else if (uVar27 == uVar23) {
                uVar23 = uVar23 + 1;
              }
              else if (uVar27 < uVar24 || uVar23 < uVar27) {
                iVar20 = uVar23 - uVar24;
                uVar23 = *(uint *)(param_1 + 0x1fd);
                uVar18 = 0;
                if (*(int *)(param_3 + 8) != 0) {
                  do {
                    lVar19 = uVar18 * 0x10;
                    if (*(longlong *)(lVar19 + param_6) != 0) {
                      lVar12 = *(longlong *)(lVar19 + param_6) +
                               (ulonglong)(*(int *)(param_6 + 8 + lVar19) * uVar24);
                      lVar13 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar18) * 8;
                      bVar5 = *(byte *)(param_3 + 0x16 + lVar13) >> 2;
                      iVar25 = 0;
                      if (iVar20 != 0) {
                        lVar13 = param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + lVar13) * 4;
                        iVar22 = iVar20;
                        do {
                          uVar28 = 0;
                          if (bVar5 != 0) {
                            do {
                              *(undefined4 *)(lVar13 + uVar28 * 4) =
                                   *(undefined4 *)(lVar12 + uVar28 * 4);
                              uVar6 = (int)uVar28 + 1;
                              uVar28 = (ulonglong)uVar6;
                            } while (uVar6 < bVar5);
                          }
                          iVar25 = iVar25 + 1;
                          lVar13 = lVar13 + (ulonglong)uVar23;
                          if (iVar25 == *(int *)(lVar19 + param_6 + 0xc)) {
                            iVar25 = 0;
                            lVar12 = lVar12 + (ulonglong)*(uint *)(lVar19 + param_6 + 8);
                          }
                          iVar22 = iVar22 + -1;
                        } while (iVar22 != 0);
                      }
                    }
                    uVar6 = (int)uVar18 + 1;
                    uVar18 = (ulonglong)uVar6;
                  } while (uVar6 < *(uint *)(param_3 + 8));
                }
                param_1[0xd] = param_1[0xd] + (ulonglong)(iVar20 * uVar23);
                *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar20;
                goto LAB_18005b7d4;
              }
            }
            *(uint *)(param_1[0x11] + (ulonglong)uVar26 * 4) =
                 (uint)*(ushort *)(param_1[4] + (ulonglong)uVar2 * 2);
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar21);
          if (uVar23 != uVar24) {
            iVar15 = uVar23 - uVar24;
            uVar23 = *(uint *)(param_1 + 0x1fd);
            uVar18 = 0;
            if (*(int *)(param_3 + 8) != 0) {
              do {
                lVar19 = uVar18 * 0x10;
                if (*(longlong *)(lVar19 + param_6) != 0) {
                  lVar12 = *(longlong *)(lVar19 + param_6) +
                           (ulonglong)(*(int *)(param_6 + 8 + lVar19) * uVar24);
                  lVar13 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar18) * 8;
                  bVar5 = *(byte *)(param_3 + 0x16 + lVar13) >> 2;
                  iVar20 = 0;
                  if (iVar15 != 0) {
                    lVar13 = param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + lVar13) * 4;
                    iVar25 = iVar15;
                    do {
                      uVar28 = 0;
                      if (bVar5 != 0) {
                        do {
                          *(undefined4 *)(lVar13 + uVar28 * 4) =
                               *(undefined4 *)(lVar12 + uVar28 * 4);
                          uVar26 = (int)uVar28 + 1;
                          uVar28 = (ulonglong)uVar26;
                        } while (uVar26 < bVar5);
                      }
                      iVar20 = iVar20 + 1;
                      lVar13 = lVar13 + (ulonglong)uVar23;
                      if (iVar20 == *(int *)(lVar19 + param_6 + 0xc)) {
                        iVar20 = 0;
                        lVar12 = lVar12 + (ulonglong)*(uint *)(lVar19 + param_6 + 8);
                      }
                      iVar25 = iVar25 + -1;
                    } while (iVar25 != 0);
                  }
                }
                uVar26 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar26;
              } while (uVar26 < *(uint *)(param_3 + 8));
            }
            lVar19 = param_1[0xd] + (ulonglong)(uVar23 * iVar15);
LAB_18005bb8c:
            param_1[0xd] = lVar19;
LAB_18005bc14:
            *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar15;
          }
        }
      }
      iVar29 = uVar21 + iVar29;
      param_1[0x11] = param_1[0x11] + (ulonglong)uVar21 * 4;
      *(uint *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + uVar21;
    }
  }
  else {
    if (param_2 == 3) {
      uVar16 = 2;
    }
    else {
      uVar17 = 3;
      uVar16 = 3;
      if (param_2 == 4) goto LAB_18005b4dc;
      if (param_2 != 5) {
        if (param_2 != 6 || param_10 < 3) {
          return;
        }
        local_a0 = param_10 - 2;
        if (local_a0 == 0) {
          return;
        }
        iVar15 = *(int *)((longlong)param_1 + 0x94);
        do {
          iVar20 = *(int *)((longlong)param_1 + 0x74) + (int)param_1[0xe];
          if ((0x1000U - iVar20 < 0x10) ||
             (iVar15 = iVar15 + (int)param_1[0x12], 0x1000U - iVar15 < 0x10)) {
            (**(code **)(*param_1 + 0x1d8))(param_1,1);
            iVar20 = 0;
            iVar15 = 0;
          }
          uVar16 = (0x1000U - iVar15) / 3;
          uVar17 = 0xffeU - iVar20;
          if (uVar16 <= 0xffeU - iVar20) {
            uVar17 = uVar16;
          }
          if (local_a0 < uVar17) {
            uVar17 = local_a0;
          }
          iVar15 = uVar17 * 3;
          if (param_4 == '\0') {
            (**(code **)(*param_1 + 0x1e8))
                      (param_1,4,param_5,*(undefined4 *)(param_3 + 0xc),uVar17 + 2,iVar15,param_15);
          }
          else {
            (**(code **)(*param_1 + 0x1e0))
                      (param_1,4,param_3,param_5,*(undefined4 *)(param_3 + 0xc),uVar17 + 2,iVar15,
                       param_14);
          }
          iVar20 = *(int *)((longlong)param_1 + 0x74);
          uVar21 = 0;
          uVar16 = 0;
          if (uVar17 != 0) {
            if (param_13 == '\0') {
              local_8c = 0;
              do {
                uVar23 = local_8c + iVar29 + 1;
                if (param_12 == '\0') {
                  uVar23 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)uVar23 * 2);
                }
                else {
                  uVar23 = param_9[uVar23];
                }
                uVar24 = local_8c + iVar29 + 2;
                if (param_12 == '\0') {
                  uVar26 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)uVar24 * 2);
                  uVar24 = (uint)(ushort)*param_9;
                }
                else {
                  uVar26 = param_9[uVar24];
                  uVar24 = *param_9;
                }
                uVar14 = uVar23 + param_11;
                if ((param_12 != '\0') && (uVar14 >> 0x10 != *(uint *)(param_1 + 10))) {
                  param_1[7] = 0;
                  *plVar4 = 0;
                  param_1[9] = 0;
                  param_1[8] = 0;
                  *(uint *)(param_1 + 10) = uVar14 >> 0x10;
                }
                uVar27 = uVar14 & 0xffff;
                uVar2 = uVar27 >> 0xb;
                if (*(char *)((longlong)plVar4 + (ulonglong)uVar2) == '\0') {
                  *(undefined1 *)((longlong)plVar4 + (ulonglong)uVar2) = 1;
                  puVar1 = (undefined8 *)(param_1[5] + (ulonglong)(uVar2 << 8));
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
                bVar5 = *(byte *)(param_1[5] + (ulonglong)(uVar27 >> 3));
                if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar27 & 7]) == 0) {
                  *(byte *)(param_1[5] + (ulonglong)(uVar27 >> 3)) =
                       bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar27 & 7];
                  *(short *)(param_1[4] + (ulonglong)uVar27 * 2) = (short)iVar20;
                  iVar20 = iVar20 + 1;
                  if (uVar21 == uVar16) {
LAB_18005a314:
                    uVar16 = uVar23 + param_11 + 1;
                    uVar21 = uVar14;
                  }
                  else if (uVar14 == uVar16) {
                    uVar16 = uVar16 + 1;
                  }
                  else if (uVar14 < uVar21 || uVar16 < uVar14) {
                    uVar2 = *(uint *)(param_1 + 0x1fd);
                    iVar25 = uVar16 - uVar21;
                    if (param_7 == uVar2) {
                      uVar6 = iVar25 * uVar2;
                      puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar21 * uVar2));
                      puVar9 = (undefined8 *)param_1[0xd];
                      for (uVar16 = uVar6 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
                        puVar8 = puVar1 + 1;
                        uVar30 = *puVar1;
                        puVar1 = puVar1 + 2;
                        puVar9[1] = *puVar8;
                        *puVar9 = uVar30;
                        puVar9 = puVar9 + 2;
                      }
                      uVar16 = uVar6 >> 2 & 3;
                      uVar18 = 0;
                      if (uVar16 != 0) {
                        do {
                          *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                               *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                          uVar21 = (int)uVar18 + 1;
                          uVar18 = (ulonglong)uVar21;
                        } while (uVar21 < uVar16);
                      }
                      param_1[0xd] = param_1[0xd] + (ulonglong)uVar6;
                    }
                    else if (iVar25 != 0) {
                      uVar16 = uVar2 >> 2 & 3;
                      iVar22 = iVar25;
                      do {
                        puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar21 * param_7));
                        puVar9 = (undefined8 *)param_1[0xd];
                        for (uVar6 = uVar2 >> 4; uVar6 != 0; uVar6 = uVar6 - 1) {
                          puVar8 = puVar1 + 1;
                          uVar30 = *puVar1;
                          puVar1 = puVar1 + 2;
                          puVar9[1] = *puVar8;
                          *puVar9 = uVar30;
                          puVar9 = puVar9 + 2;
                        }
                        uVar18 = 0;
                        if (uVar16 != 0) {
                          do {
                            *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                                 *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                            uVar6 = (int)uVar18 + 1;
                            uVar18 = (ulonglong)uVar6;
                          } while (uVar6 < uVar16);
                        }
                        uVar21 = uVar21 + 1;
                        iVar22 = iVar22 + -1;
                        param_1[0xd] = param_1[0xd] + (ulonglong)uVar2;
                      } while (iVar22 != 0);
                    }
                    *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar25
                    ;
                    goto LAB_18005a314;
                  }
                }
                *(uint *)param_1[0x11] = (uint)*(ushort *)(param_1[4] + (ulonglong)uVar27 * 2);
                uVar23 = uVar26 + param_11;
                if ((param_12 != '\0') && (uVar23 >> 0x10 != *(uint *)(param_1 + 10))) {
                  param_1[7] = 0;
                  *plVar4 = 0;
                  param_1[9] = 0;
                  param_1[8] = 0;
                  *(uint *)(param_1 + 10) = uVar23 >> 0x10;
                }
                uVar14 = uVar23 & 0xffff;
                uVar27 = uVar14 >> 0xb;
                if (*(char *)((longlong)plVar4 + (ulonglong)uVar27) == '\0') {
                  *(undefined1 *)((longlong)plVar4 + (ulonglong)uVar27) = 1;
                  puVar1 = (undefined8 *)(param_1[5] + (ulonglong)(uVar27 << 8));
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
                bVar5 = *(byte *)(param_1[5] + (ulonglong)(uVar14 >> 3));
                if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar14 & 7]) == 0) {
                  *(byte *)(param_1[5] + (ulonglong)(uVar14 >> 3)) =
                       bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar14 & 7];
                  *(short *)(param_1[4] + (ulonglong)uVar14 * 2) = (short)iVar20;
                  iVar20 = iVar20 + 1;
                  if (uVar21 == uVar16) {
LAB_18005a508:
                    uVar16 = uVar26 + param_11 + 1;
                    uVar21 = uVar23;
                  }
                  else if (uVar23 == uVar16) {
                    uVar16 = uVar16 + 1;
                  }
                  else if (uVar23 < uVar21 || uVar16 < uVar23) {
                    uVar27 = *(uint *)(param_1 + 0x1fd);
                    iVar25 = uVar16 - uVar21;
                    if (param_7 == uVar27) {
                      uVar2 = iVar25 * uVar27;
                      puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar21 * uVar27));
                      puVar9 = (undefined8 *)param_1[0xd];
                      for (uVar16 = uVar2 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
                        puVar8 = puVar1 + 1;
                        uVar30 = *puVar1;
                        puVar1 = puVar1 + 2;
                        puVar9[1] = *puVar8;
                        *puVar9 = uVar30;
                        puVar9 = puVar9 + 2;
                      }
                      uVar16 = uVar2 >> 2 & 3;
                      uVar18 = 0;
                      if (uVar16 != 0) {
                        do {
                          *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                               *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                          uVar21 = (int)uVar18 + 1;
                          uVar18 = (ulonglong)uVar21;
                        } while (uVar21 < uVar16);
                      }
                      param_1[0xd] = param_1[0xd] + (ulonglong)uVar2;
                    }
                    else if (iVar25 != 0) {
                      uVar16 = uVar27 >> 2 & 3;
                      iVar22 = iVar25;
                      do {
                        puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar21 * param_7));
                        puVar9 = (undefined8 *)param_1[0xd];
                        for (uVar2 = uVar27 >> 4; uVar2 != 0; uVar2 = uVar2 - 1) {
                          puVar8 = puVar1 + 1;
                          uVar30 = *puVar1;
                          puVar1 = puVar1 + 2;
                          puVar9[1] = *puVar8;
                          *puVar9 = uVar30;
                          puVar9 = puVar9 + 2;
                        }
                        uVar18 = 0;
                        if (uVar16 != 0) {
                          do {
                            *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                                 *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                            uVar2 = (int)uVar18 + 1;
                            uVar18 = (ulonglong)uVar2;
                          } while (uVar2 < uVar16);
                        }
                        uVar21 = uVar21 + 1;
                        iVar22 = iVar22 + -1;
                        param_1[0xd] = param_1[0xd] + (ulonglong)uVar27;
                      } while (iVar22 != 0);
                    }
                    *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar25
                    ;
                    goto LAB_18005a508;
                  }
                }
                *(uint *)(param_1[0x11] + 4) = (uint)*(ushort *)(param_1[4] + (ulonglong)uVar14 * 2)
                ;
                uVar23 = uVar24 + param_11;
                if ((param_12 != '\0') && (uVar23 >> 0x10 != *(uint *)(param_1 + 10))) {
                  param_1[7] = 0;
                  *plVar4 = 0;
                  param_1[9] = 0;
                  param_1[8] = 0;
                  *(uint *)(param_1 + 10) = uVar23 >> 0x10;
                }
                uVar26 = uVar23 & 0xffff;
                uVar14 = uVar26 >> 0xb;
                if (*(char *)((longlong)plVar4 + (ulonglong)uVar14) == '\0') {
                  *(undefined1 *)((longlong)plVar4 + (ulonglong)uVar14) = 1;
                  puVar1 = (undefined8 *)(param_1[5] + (ulonglong)(uVar14 << 8));
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
                bVar5 = *(byte *)(param_1[5] + (ulonglong)(uVar26 >> 3));
                if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar26 & 7]) == 0) {
                  *(byte *)(param_1[5] + (ulonglong)(uVar26 >> 3)) =
                       bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar26 & 7];
                  *(short *)(param_1[4] + (ulonglong)uVar26 * 2) = (short)iVar20;
                  iVar20 = iVar20 + 1;
                  if (uVar21 == uVar16) {
LAB_18005a6f8:
                    uVar16 = uVar24 + param_11 + 1;
                    uVar21 = uVar23;
                  }
                  else if (uVar23 == uVar16) {
                    uVar16 = uVar16 + 1;
                  }
                  else if (uVar23 < uVar21 || uVar16 < uVar23) {
                    uVar14 = *(uint *)(param_1 + 0x1fd);
                    iVar25 = uVar16 - uVar21;
                    if (param_7 == uVar14) {
                      uVar27 = iVar25 * uVar14;
                      puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar21 * uVar14));
                      puVar9 = (undefined8 *)param_1[0xd];
                      for (uVar16 = uVar27 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
                        puVar8 = puVar1 + 1;
                        uVar30 = *puVar1;
                        puVar1 = puVar1 + 2;
                        puVar9[1] = *puVar8;
                        *puVar9 = uVar30;
                        puVar9 = puVar9 + 2;
                      }
                      uVar16 = uVar27 >> 2 & 3;
                      uVar18 = 0;
                      if (uVar16 != 0) {
                        do {
                          *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                               *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                          uVar21 = (int)uVar18 + 1;
                          uVar18 = (ulonglong)uVar21;
                        } while (uVar21 < uVar16);
                      }
                      param_1[0xd] = param_1[0xd] + (ulonglong)uVar27;
                    }
                    else if (iVar25 != 0) {
                      uVar16 = uVar14 >> 2 & 3;
                      iVar22 = iVar25;
                      do {
                        puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar21 * param_7));
                        puVar9 = (undefined8 *)param_1[0xd];
                        for (uVar27 = uVar14 >> 4; uVar27 != 0; uVar27 = uVar27 - 1) {
                          puVar8 = puVar1 + 1;
                          uVar30 = *puVar1;
                          puVar1 = puVar1 + 2;
                          puVar9[1] = *puVar8;
                          *puVar9 = uVar30;
                          puVar9 = puVar9 + 2;
                        }
                        uVar18 = 0;
                        if (uVar16 != 0) {
                          do {
                            *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                                 *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                            uVar27 = (int)uVar18 + 1;
                            uVar18 = (ulonglong)uVar27;
                          } while (uVar27 < uVar16);
                        }
                        uVar21 = uVar21 + 1;
                        iVar22 = iVar22 + -1;
                        param_1[0xd] = param_1[0xd] + (ulonglong)uVar14;
                      } while (iVar22 != 0);
                    }
                    *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar25
                    ;
                    goto LAB_18005a6f8;
                  }
                }
                *(uint *)(param_1[0x11] + 8) = (uint)*(ushort *)(param_1[4] + (ulonglong)uVar26 * 2)
                ;
                param_1[0x11] = param_1[0x11] + 0xc;
                local_8c = local_8c + 1;
              } while (local_8c < uVar17);
              if (uVar16 != uVar21) {
                uVar23 = *(uint *)(param_1 + 0x1fd);
                iVar20 = uVar16 - uVar21;
                if (param_7 == uVar23) {
                  uVar24 = uVar23 * iVar20;
                  puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar21 * uVar23));
                  puVar9 = (undefined8 *)param_1[0xd];
                  for (uVar16 = uVar24 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
                    puVar8 = puVar1 + 1;
                    uVar30 = *puVar1;
                    puVar1 = puVar1 + 2;
                    puVar9[1] = *puVar8;
                    *puVar9 = uVar30;
                    puVar9 = puVar9 + 2;
                  }
                  uVar16 = uVar24 >> 2 & 3;
                  uVar18 = 0;
                  if (uVar16 != 0) {
                    do {
                      *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                           *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                      uVar21 = (int)uVar18 + 1;
                      uVar18 = (ulonglong)uVar21;
                    } while (uVar21 < uVar16);
                  }
                  param_1[0xd] = param_1[0xd] + (ulonglong)uVar24;
                }
                else if (iVar20 != 0) {
                  uVar16 = uVar23 >> 2 & 3;
                  iVar25 = iVar20;
                  do {
                    puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar21 * param_7));
                    puVar9 = (undefined8 *)param_1[0xd];
                    for (uVar24 = uVar23 >> 4; uVar24 != 0; uVar24 = uVar24 - 1) {
                      puVar8 = puVar1 + 1;
                      uVar30 = *puVar1;
                      puVar1 = puVar1 + 2;
                      puVar9[1] = *puVar8;
                      *puVar9 = uVar30;
                      puVar9 = puVar9 + 2;
                    }
                    uVar18 = 0;
                    if (uVar16 != 0) {
                      do {
                        *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                             *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                        uVar24 = (int)uVar18 + 1;
                        uVar18 = (ulonglong)uVar24;
                      } while (uVar24 < uVar16);
                    }
                    uVar21 = uVar21 + 1;
                    iVar25 = iVar25 + -1;
                    param_1[0xd] = param_1[0xd] + (ulonglong)uVar23;
                  } while (iVar25 != 0);
                }
                iVar20 = *(int *)((longlong)param_1 + 0x74) + iVar20;
                goto LAB_18005a840;
              }
            }
            else {
              local_80 = 0;
              do {
                uVar23 = local_80 + iVar29 + 1;
                if (param_12 == '\0') {
                  uVar23 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)uVar23 * 2);
                }
                else {
                  uVar23 = param_9[uVar23];
                }
                uVar24 = local_80 + iVar29 + 2;
                if (param_12 == '\0') {
                  uVar26 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)uVar24 * 2);
                  uVar24 = (uint)(ushort)*param_9;
                }
                else {
                  uVar26 = param_9[uVar24];
                  uVar24 = *param_9;
                }
                uVar14 = uVar23 + param_11;
                if ((param_12 != '\0') && (uVar14 >> 0x10 != *(uint *)(param_1 + 10))) {
                  param_1[7] = 0;
                  *plVar4 = 0;
                  param_1[9] = 0;
                  param_1[8] = 0;
                  *(uint *)(param_1 + 10) = uVar14 >> 0x10;
                }
                uVar27 = uVar14 & 0xffff;
                uVar2 = uVar27 >> 0xb;
                if (*(char *)((longlong)plVar4 + (ulonglong)uVar2) == '\0') {
                  *(undefined1 *)((longlong)plVar4 + (ulonglong)uVar2) = 1;
                  puVar1 = (undefined8 *)(param_1[5] + (ulonglong)(uVar2 << 8));
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
                bVar5 = *(byte *)(param_1[5] + (ulonglong)(uVar27 >> 3));
                if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar27 & 7]) == 0) {
                  *(byte *)(param_1[5] + (ulonglong)(uVar27 >> 3)) =
                       bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar27 & 7];
                  *(short *)(param_1[4] + (ulonglong)uVar27 * 2) = (short)iVar20;
                  iVar20 = iVar20 + 1;
                  if (uVar21 == uVar16) {
LAB_180059c08:
                    uVar16 = uVar23 + param_11 + 1;
                    uVar21 = uVar14;
                  }
                  else if (uVar14 == uVar16) {
                    uVar16 = uVar16 + 1;
                  }
                  else if (uVar14 < uVar21 || uVar16 < uVar14) {
                    iVar25 = uVar16 - uVar21;
                    uVar16 = *(uint *)(param_1 + 0x1fd);
                    uVar18 = 0;
                    if (*(int *)(param_3 + 8) != 0) {
                      do {
                        lVar19 = uVar18 * 0x10;
                        if (*(longlong *)(param_6 + lVar19) != 0) {
                          lVar12 = *(longlong *)(param_6 + lVar19) +
                                   (ulonglong)(*(int *)(param_6 + 8 + lVar19) * uVar21);
                          lVar13 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar18) * 8;
                          bVar5 = *(byte *)(param_3 + 0x16 + lVar13) >> 2;
                          iVar22 = 0;
                          if (iVar25 != 0) {
                            lVar13 = param_1[0xd] +
                                     (ulonglong)*(byte *)(param_3 + 0x17 + lVar13) * 4;
                            iVar11 = iVar25;
                            do {
                              uVar28 = 0;
                              if (bVar5 != 0) {
                                do {
                                  *(undefined4 *)(lVar13 + uVar28 * 4) =
                                       *(undefined4 *)(lVar12 + uVar28 * 4);
                                  uVar2 = (int)uVar28 + 1;
                                  uVar28 = (ulonglong)uVar2;
                                } while (uVar2 < bVar5);
                              }
                              iVar22 = iVar22 + 1;
                              lVar13 = lVar13 + (ulonglong)uVar16;
                              if (iVar22 == *(int *)(param_6 + lVar19 + 0xc)) {
                                iVar22 = 0;
                                lVar12 = lVar12 + (ulonglong)*(uint *)(param_6 + lVar19 + 8);
                              }
                              iVar11 = iVar11 + -1;
                            } while (iVar11 != 0);
                          }
                        }
                        uVar2 = (int)uVar18 + 1;
                        uVar18 = (ulonglong)uVar2;
                      } while (uVar2 < *(uint *)(param_3 + 8));
                    }
                    param_1[0xd] = param_1[0xd] + (ulonglong)(iVar25 * uVar16);
                    *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar25
                    ;
                    goto LAB_180059c08;
                  }
                }
                *(uint *)param_1[0x11] = (uint)*(ushort *)(param_1[4] + (ulonglong)uVar27 * 2);
                uVar23 = uVar26 + param_11;
                if ((param_12 != '\0') && (uVar23 >> 0x10 != *(uint *)(param_1 + 10))) {
                  param_1[7] = 0;
                  *plVar4 = 0;
                  param_1[9] = 0;
                  param_1[8] = 0;
                  *(uint *)(param_1 + 10) = uVar23 >> 0x10;
                }
                uVar14 = uVar23 & 0xffff;
                uVar27 = uVar14 >> 0xb;
                if (*(char *)((longlong)plVar4 + (ulonglong)uVar27) == '\0') {
                  *(undefined1 *)((longlong)plVar4 + (ulonglong)uVar27) = 1;
                  puVar1 = (undefined8 *)(param_1[5] + (ulonglong)(uVar27 << 8));
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
                bVar5 = *(byte *)(param_1[5] + (ulonglong)(uVar14 >> 3));
                if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar14 & 7]) == 0) {
                  *(byte *)(param_1[5] + (ulonglong)(uVar14 >> 3)) =
                       bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar14 & 7];
                  *(short *)(param_1[4] + (ulonglong)uVar14 * 2) = (short)iVar20;
                  iVar20 = iVar20 + 1;
                  if (uVar21 == uVar16) {
LAB_180059dd8:
                    uVar16 = uVar26 + param_11 + 1;
                    uVar21 = uVar23;
                  }
                  else if (uVar23 == uVar16) {
                    uVar16 = uVar16 + 1;
                  }
                  else if (uVar23 < uVar21 || uVar16 < uVar23) {
                    iVar25 = uVar16 - uVar21;
                    uVar16 = *(uint *)(param_1 + 0x1fd);
                    uVar18 = 0;
                    if (*(int *)(param_3 + 8) != 0) {
                      do {
                        lVar19 = uVar18 * 0x10;
                        if (*(longlong *)(param_6 + lVar19) != 0) {
                          lVar12 = *(longlong *)(param_6 + lVar19) +
                                   (ulonglong)(*(int *)(param_6 + 8 + lVar19) * uVar21);
                          lVar13 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar18) * 8;
                          bVar5 = *(byte *)(param_3 + 0x16 + lVar13) >> 2;
                          iVar22 = 0;
                          if (iVar25 != 0) {
                            lVar13 = param_1[0xd] +
                                     (ulonglong)*(byte *)(param_3 + 0x17 + lVar13) * 4;
                            iVar11 = iVar25;
                            do {
                              uVar28 = 0;
                              if (bVar5 != 0) {
                                do {
                                  *(undefined4 *)(lVar13 + uVar28 * 4) =
                                       *(undefined4 *)(lVar12 + uVar28 * 4);
                                  uVar27 = (int)uVar28 + 1;
                                  uVar28 = (ulonglong)uVar27;
                                } while (uVar27 < bVar5);
                              }
                              iVar22 = iVar22 + 1;
                              lVar13 = lVar13 + (ulonglong)uVar16;
                              if (iVar22 == *(int *)(param_6 + lVar19 + 0xc)) {
                                iVar22 = 0;
                                lVar12 = lVar12 + (ulonglong)*(uint *)(param_6 + lVar19 + 8);
                              }
                              iVar11 = iVar11 + -1;
                            } while (iVar11 != 0);
                          }
                        }
                        uVar27 = (int)uVar18 + 1;
                        uVar18 = (ulonglong)uVar27;
                      } while (uVar27 < *(uint *)(param_3 + 8));
                    }
                    param_1[0xd] = param_1[0xd] + (ulonglong)(iVar25 * uVar16);
                    *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar25
                    ;
                    goto LAB_180059dd8;
                  }
                }
                *(uint *)(param_1[0x11] + 4) = (uint)*(ushort *)(param_1[4] + (ulonglong)uVar14 * 2)
                ;
                uVar23 = uVar24 + param_11;
                if ((param_12 != '\0') && (uVar23 >> 0x10 != *(uint *)(param_1 + 10))) {
                  param_1[7] = 0;
                  *plVar4 = 0;
                  param_1[9] = 0;
                  param_1[8] = 0;
                  *(uint *)(param_1 + 10) = uVar23 >> 0x10;
                }
                uVar26 = uVar23 & 0xffff;
                uVar14 = uVar26 >> 0xb;
                if (*(char *)((longlong)plVar4 + (ulonglong)uVar14) == '\0') {
                  *(undefined1 *)((longlong)plVar4 + (ulonglong)uVar14) = 1;
                  puVar1 = (undefined8 *)(param_1[5] + (ulonglong)(uVar14 << 8));
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
                bVar5 = *(byte *)(param_1[5] + (ulonglong)(uVar26 >> 3));
                if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar26 & 7]) == 0) {
                  *(byte *)(param_1[5] + (ulonglong)(uVar26 >> 3)) =
                       bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar26 & 7];
                  *(short *)(param_1[4] + (ulonglong)uVar26 * 2) = (short)iVar20;
                  iVar20 = iVar20 + 1;
                  if (uVar21 == uVar16) {
LAB_180059fa4:
                    uVar16 = uVar24 + param_11 + 1;
                    uVar21 = uVar23;
                  }
                  else if (uVar23 == uVar16) {
                    uVar16 = uVar16 + 1;
                  }
                  else if (uVar23 < uVar21 || uVar16 < uVar23) {
                    iVar25 = uVar16 - uVar21;
                    uVar16 = *(uint *)(param_1 + 0x1fd);
                    uVar18 = 0;
                    if (*(int *)(param_3 + 8) != 0) {
                      do {
                        lVar19 = uVar18 * 0x10;
                        if (*(longlong *)(param_6 + lVar19) != 0) {
                          lVar12 = *(longlong *)(param_6 + lVar19) +
                                   (ulonglong)(*(int *)(param_6 + 8 + lVar19) * uVar21);
                          lVar13 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar18) * 8;
                          bVar5 = *(byte *)(param_3 + 0x16 + lVar13) >> 2;
                          iVar22 = 0;
                          if (iVar25 != 0) {
                            lVar13 = param_1[0xd] +
                                     (ulonglong)*(byte *)(param_3 + 0x17 + lVar13) * 4;
                            iVar11 = iVar25;
                            do {
                              uVar28 = 0;
                              if (bVar5 != 0) {
                                do {
                                  *(undefined4 *)(lVar13 + uVar28 * 4) =
                                       *(undefined4 *)(lVar12 + uVar28 * 4);
                                  uVar14 = (int)uVar28 + 1;
                                  uVar28 = (ulonglong)uVar14;
                                } while (uVar14 < bVar5);
                              }
                              iVar22 = iVar22 + 1;
                              lVar13 = lVar13 + (ulonglong)uVar16;
                              if (iVar22 == *(int *)(param_6 + lVar19 + 0xc)) {
                                iVar22 = 0;
                                lVar12 = lVar12 + (ulonglong)*(uint *)(param_6 + lVar19 + 8);
                              }
                              iVar11 = iVar11 + -1;
                            } while (iVar11 != 0);
                          }
                        }
                        uVar14 = (int)uVar18 + 1;
                        uVar18 = (ulonglong)uVar14;
                      } while (uVar14 < *(uint *)(param_3 + 8));
                    }
                    param_1[0xd] = param_1[0xd] + (ulonglong)(iVar25 * uVar16);
                    *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar25
                    ;
                    goto LAB_180059fa4;
                  }
                }
                *(uint *)(param_1[0x11] + 8) = (uint)*(ushort *)(param_1[4] + (ulonglong)uVar26 * 2)
                ;
                param_1[0x11] = param_1[0x11] + 0xc;
                local_80 = local_80 + 1;
              } while (local_80 < uVar17);
              if (uVar16 != uVar21) {
                iVar20 = uVar16 - uVar21;
                uVar16 = *(uint *)(param_1 + 0x1fd);
                uVar18 = 0;
                if (*(int *)(param_3 + 8) != 0) {
                  do {
                    lVar19 = uVar18 * 0x10;
                    if (*(longlong *)(param_6 + lVar19) != 0) {
                      lVar12 = *(longlong *)(param_6 + lVar19) +
                               (ulonglong)(*(int *)(param_6 + 8 + lVar19) * uVar21);
                      lVar13 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar18) * 8;
                      bVar5 = *(byte *)(param_3 + 0x16 + lVar13) >> 2;
                      iVar25 = 0;
                      if (iVar20 != 0) {
                        lVar13 = param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + lVar13) * 4;
                        iVar22 = iVar20;
                        do {
                          uVar28 = 0;
                          if (bVar5 != 0) {
                            do {
                              *(undefined4 *)(lVar13 + uVar28 * 4) =
                                   *(undefined4 *)(lVar12 + uVar28 * 4);
                              uVar23 = (int)uVar28 + 1;
                              uVar28 = (ulonglong)uVar23;
                            } while (uVar23 < bVar5);
                          }
                          iVar25 = iVar25 + 1;
                          lVar13 = lVar13 + (ulonglong)uVar16;
                          if (iVar25 == *(int *)(param_6 + lVar19 + 0xc)) {
                            iVar25 = 0;
                            lVar12 = lVar12 + (ulonglong)*(uint *)(param_6 + lVar19 + 8);
                          }
                          iVar22 = iVar22 + -1;
                        } while (iVar22 != 0);
                      }
                    }
                    uVar23 = (int)uVar18 + 1;
                    uVar18 = (ulonglong)uVar23;
                  } while (uVar23 < *(uint *)(param_3 + 8));
                }
                param_1[0xd] = param_1[0xd] + (ulonglong)(iVar20 * uVar16);
                iVar20 = *(int *)((longlong)param_1 + 0x74) + iVar20;
LAB_18005a840:
                *(int *)((longlong)param_1 + 0x74) = iVar20;
              }
            }
          }
          iVar29 = uVar17 + iVar29;
          iVar15 = iVar15 + *(int *)((longlong)param_1 + 0x94);
          *(int *)((longlong)param_1 + 0x94) = iVar15;
          local_a0 = local_a0 - uVar17;
          if (local_a0 == 0) {
            return;
          }
        } while( true );
      }
    }
    uVar17 = uVar16 - 1;
    if (uVar16 <= param_10) {
      iVar15 = *(int *)((longlong)param_1 + 0x94);
      local_90 = param_10;
      do {
        if (((uint)((0x1000 - *(int *)((longlong)param_1 + 0x74)) - (int)param_1[0xe]) < 0x10) ||
           (iVar15 = iVar15 + (int)param_1[0x12], 0x1000U - iVar15 < 0x10)) {
          (**(code **)(*param_1 + 0x1d8))(param_1,1);
          iVar15 = 0;
        }
        uVar21 = 0x1000U - iVar15 & 0xfffffffe;
        if (local_90 < uVar21) {
          uVar21 = local_90;
        }
        if (param_4 == '\0') {
          (**(code **)(*param_1 + 0x1e8))
                    (param_1,param_2,param_5,*(undefined4 *)(param_3 + 0xc),uVar21,uVar21,0);
        }
        else {
          (**(code **)(*param_1 + 0x1e0))
                    (param_1,param_2,param_3,param_5,*(undefined4 *)(param_3 + 0xc),uVar21,uVar21,
                     param_14);
        }
        if ((*(int *)((longlong)param_1 + 0x1c) == 0) ||
           (((*(int *)((longlong)param_1 + 0x74) == 0 && (*(int *)((longlong)param_1 + 0x94) == 0))
            || (0xfff < uVar21 + iVar15)))) {
          (**(code **)(*param_1 + 0x1d8))(param_1,0);
        }
        else {
          *(int *)param_1[0x11] = *(int *)((longlong)param_1 + 0x1c);
          param_1[0x11] = param_1[0x11] + 4;
          *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
        }
        iVar15 = *(int *)((longlong)param_1 + 0x74);
        uVar24 = 0;
        uVar23 = 0;
        if (param_13 == '\0') {
          uVar26 = 0;
          do {
            if (param_12 == '\0') {
              uVar14 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)(uVar26 + iVar29) * 2);
            }
            else {
              uVar14 = param_9[uVar26 + iVar29];
            }
            uVar27 = uVar14 + param_11;
            if ((param_12 != '\0') && (uVar27 >> 0x10 != *(uint *)(param_1 + 10))) {
              param_1[7] = 0;
              *plVar4 = 0;
              param_1[9] = 0;
              param_1[8] = 0;
              *(uint *)(param_1 + 10) = uVar27 >> 0x10;
            }
            uVar2 = uVar27 & 0xffff;
            uVar6 = uVar2 >> 0xb;
            if (*(char *)((longlong)plVar4 + (ulonglong)uVar6) == '\0') {
              *(undefined1 *)((longlong)plVar4 + (ulonglong)uVar6) = 1;
              puVar1 = (undefined8 *)(param_1[5] + (ulonglong)(uVar6 << 8));
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
            bVar5 = *(byte *)(param_1[5] + (ulonglong)(uVar2 >> 3));
            if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar2 & 7]) == 0) {
              *(byte *)(param_1[5] + (ulonglong)(uVar2 >> 3)) =
                   bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar2 & 7];
              *(short *)(param_1[4] + (ulonglong)uVar2 * 2) = (short)iVar15;
              iVar15 = iVar15 + 1;
              if (uVar24 == uVar23) {
LAB_18005b0f4:
                uVar23 = uVar14 + param_11 + 1;
                uVar24 = uVar27;
              }
              else if (uVar27 == uVar23) {
                uVar23 = uVar23 + 1;
              }
              else if (uVar27 < uVar24 || uVar23 < uVar27) {
                uVar6 = *(uint *)(param_1 + 0x1fd);
                iVar20 = uVar23 - uVar24;
                if (param_7 == uVar6) {
                  uVar3 = iVar20 * uVar6;
                  puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * uVar6));
                  puVar9 = (undefined8 *)param_1[0xd];
                  for (uVar23 = uVar3 >> 4; uVar23 != 0; uVar23 = uVar23 - 1) {
                    puVar8 = puVar1 + 1;
                    uVar30 = *puVar1;
                    puVar1 = puVar1 + 2;
                    puVar9[1] = *puVar8;
                    *puVar9 = uVar30;
                    puVar9 = puVar9 + 2;
                  }
                  uVar23 = uVar3 >> 2 & 3;
                  uVar18 = 0;
                  if (uVar23 != 0) {
                    do {
                      *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                           *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                      uVar24 = (int)uVar18 + 1;
                      uVar18 = (ulonglong)uVar24;
                    } while (uVar24 < uVar23);
                  }
                  param_1[0xd] = param_1[0xd] + (ulonglong)uVar3;
                }
                else if (iVar20 != 0) {
                  uVar23 = uVar6 >> 2 & 3;
                  iVar25 = iVar20;
                  do {
                    puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * param_7));
                    puVar9 = (undefined8 *)param_1[0xd];
                    for (uVar3 = uVar6 >> 4; uVar3 != 0; uVar3 = uVar3 - 1) {
                      puVar8 = puVar1 + 1;
                      uVar30 = *puVar1;
                      puVar1 = puVar1 + 2;
                      puVar9[1] = *puVar8;
                      *puVar9 = uVar30;
                      puVar9 = puVar9 + 2;
                    }
                    uVar18 = 0;
                    if (uVar23 != 0) {
                      do {
                        *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                             *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                        uVar3 = (int)uVar18 + 1;
                        uVar18 = (ulonglong)uVar3;
                      } while (uVar3 < uVar23);
                    }
                    uVar24 = uVar24 + 1;
                    iVar25 = iVar25 + -1;
                    param_1[0xd] = param_1[0xd] + (ulonglong)uVar6;
                  } while (iVar25 != 0);
                }
                *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar20;
                goto LAB_18005b0f4;
              }
            }
            *(uint *)(param_1[0x11] + (ulonglong)uVar26 * 4) =
                 (uint)*(ushort *)(param_1[4] + (ulonglong)uVar2 * 2);
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar17);
          uVar14 = uVar21 - uVar17;
          uVar26 = 0;
          if (uVar14 != 0) {
            do {
              uVar27 = (uVar26 + iVar29 + uVar16) - 1;
              if (param_12 == '\0') {
                uVar27 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)uVar27 * 2);
              }
              else {
                uVar27 = param_9[uVar27];
              }
              uVar2 = uVar27 + param_11;
              if ((param_12 != '\0') && (uVar2 >> 0x10 != *(uint *)(param_1 + 10))) {
                param_1[7] = 0;
                *plVar4 = 0;
                param_1[9] = 0;
                param_1[8] = 0;
                *(uint *)(param_1 + 10) = uVar2 >> 0x10;
              }
              uVar6 = uVar2 & 0xffff;
              uVar3 = uVar6 >> 0xb;
              if (*(char *)((longlong)plVar4 + (ulonglong)uVar3) == '\0') {
                *(undefined1 *)((longlong)plVar4 + (ulonglong)uVar3) = 1;
                puVar1 = (undefined8 *)(param_1[5] + (ulonglong)(uVar3 << 8));
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
              bVar5 = *(byte *)(param_1[5] + (ulonglong)(uVar6 >> 3));
              if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar6 & 7]) == 0) {
                *(byte *)(param_1[5] + (ulonglong)(uVar6 >> 3)) =
                     bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar6 & 7];
                *(short *)(param_1[4] + (ulonglong)uVar6 * 2) = (short)iVar15;
                iVar15 = iVar15 + 1;
                if (uVar24 == uVar23) {
LAB_18005b34c:
                  uVar23 = uVar27 + param_11 + 1;
                  uVar24 = uVar2;
                }
                else if (uVar2 == uVar23) {
                  uVar23 = uVar23 + 1;
                }
                else if (uVar2 < uVar24 || uVar23 < uVar2) {
                  uVar3 = *(uint *)(param_1 + 0x1fd);
                  iVar20 = uVar23 - uVar24;
                  if (param_7 == uVar3) {
                    uVar7 = iVar20 * uVar3;
                    puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * uVar3));
                    puVar9 = (undefined8 *)param_1[0xd];
                    for (uVar23 = uVar7 >> 4; uVar23 != 0; uVar23 = uVar23 - 1) {
                      puVar8 = puVar1 + 1;
                      uVar30 = *puVar1;
                      puVar1 = puVar1 + 2;
                      puVar9[1] = *puVar8;
                      *puVar9 = uVar30;
                      puVar9 = puVar9 + 2;
                    }
                    uVar23 = uVar7 >> 2 & 3;
                    uVar18 = 0;
                    if (uVar23 != 0) {
                      do {
                        *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                             *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                        uVar24 = (int)uVar18 + 1;
                        uVar18 = (ulonglong)uVar24;
                      } while (uVar24 < uVar23);
                    }
                    param_1[0xd] = param_1[0xd] + (ulonglong)uVar7;
                  }
                  else if (iVar20 != 0) {
                    uVar23 = uVar3 >> 2 & 3;
                    iVar25 = iVar20;
                    do {
                      puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * param_7));
                      puVar9 = (undefined8 *)param_1[0xd];
                      for (uVar7 = uVar3 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                        puVar8 = puVar1 + 1;
                        uVar30 = *puVar1;
                        puVar1 = puVar1 + 2;
                        puVar9[1] = *puVar8;
                        *puVar9 = uVar30;
                        puVar9 = puVar9 + 2;
                      }
                      uVar18 = 0;
                      if (uVar23 != 0) {
                        do {
                          *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                               *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                          uVar7 = (int)uVar18 + 1;
                          uVar18 = (ulonglong)uVar7;
                        } while (uVar7 < uVar23);
                      }
                      uVar24 = uVar24 + 1;
                      iVar25 = iVar25 + -1;
                      param_1[0xd] = param_1[0xd] + (ulonglong)uVar3;
                    } while (iVar25 != 0);
                  }
                  *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar20;
                  goto LAB_18005b34c;
                }
              }
              iVar20 = uVar26 + uVar16;
              uVar26 = uVar26 + 1;
              *(uint *)(param_1[0x11] + (ulonglong)(iVar20 - 1) * 4) =
                   (uint)*(ushort *)(param_1[4] + (ulonglong)uVar6 * 2);
            } while (uVar26 < uVar14);
          }
          if (uVar23 != uVar24) {
            uVar26 = *(uint *)(param_1 + 0x1fd);
            iVar15 = uVar23 - uVar24;
            if (param_7 == uVar26) {
              uVar27 = uVar26 * iVar15;
              puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * uVar26));
              puVar9 = (undefined8 *)param_1[0xd];
              for (uVar23 = uVar27 >> 4; uVar23 != 0; uVar23 = uVar23 - 1) {
                puVar8 = puVar1 + 1;
                uVar30 = *puVar1;
                puVar1 = puVar1 + 2;
                puVar9[1] = *puVar8;
                *puVar9 = uVar30;
                puVar9 = puVar9 + 2;
              }
              uVar23 = uVar27 >> 2 & 3;
              uVar18 = 0;
              if (uVar23 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                       *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                  uVar24 = (int)uVar18 + 1;
                  uVar18 = (ulonglong)uVar24;
                } while (uVar24 < uVar23);
              }
              param_1[0xd] = param_1[0xd] + (ulonglong)uVar27;
            }
            else if (iVar15 != 0) {
              uVar23 = uVar26 >> 2 & 3;
              iVar20 = iVar15;
              do {
                puVar1 = (undefined8 *)(param_6 + (ulonglong)(uVar24 * param_7));
                puVar9 = (undefined8 *)param_1[0xd];
                for (uVar27 = uVar26 >> 4; uVar27 != 0; uVar27 = uVar27 - 1) {
                  puVar8 = puVar1 + 1;
                  uVar30 = *puVar1;
                  puVar1 = puVar1 + 2;
                  puVar9[1] = *puVar8;
                  *puVar9 = uVar30;
                  puVar9 = puVar9 + 2;
                }
                uVar18 = 0;
                if (uVar23 != 0) {
                  do {
                    *(undefined4 *)((longlong)puVar9 + uVar18 * 4) =
                         *(undefined4 *)((longlong)puVar1 + uVar18 * 4);
                    uVar27 = (int)uVar18 + 1;
                    uVar18 = (ulonglong)uVar27;
                  } while (uVar27 < uVar23);
                }
                uVar24 = uVar24 + 1;
                iVar20 = iVar20 + -1;
                param_1[0xd] = param_1[0xd] + (ulonglong)uVar26;
              } while (iVar20 != 0);
            }
            *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar15;
          }
        }
        else {
          uVar26 = 0;
          do {
            if (param_12 == '\0') {
              uVar14 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)(uVar26 + iVar29) * 2);
            }
            else {
              uVar14 = param_9[uVar26 + iVar29];
            }
            uVar27 = uVar14 + param_11;
            if ((param_12 != '\0') && (uVar27 >> 0x10 != *(uint *)(param_1 + 10))) {
              param_1[7] = 0;
              *plVar4 = 0;
              param_1[9] = 0;
              param_1[8] = 0;
              *(uint *)(param_1 + 10) = uVar27 >> 0x10;
            }
            uVar2 = uVar27 & 0xffff;
            uVar6 = uVar2 >> 0xb;
            if (*(char *)((longlong)plVar4 + (ulonglong)uVar6) == '\0') {
              *(undefined1 *)((longlong)plVar4 + (ulonglong)uVar6) = 1;
              puVar1 = (undefined8 *)(param_1[5] + (ulonglong)(uVar6 << 8));
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
            bVar5 = *(byte *)(param_1[5] + (ulonglong)(uVar2 >> 3));
            if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar2 & 7]) == 0) {
              *(byte *)(param_1[5] + (ulonglong)(uVar2 >> 3)) =
                   bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar2 & 7];
              *(short *)(param_1[4] + (ulonglong)uVar2 * 2) = (short)iVar15;
              iVar15 = iVar15 + 1;
              if (uVar24 == uVar23) {
LAB_18005ab8c:
                uVar23 = uVar14 + param_11 + 1;
                uVar24 = uVar27;
              }
              else if (uVar27 == uVar23) {
                uVar23 = uVar23 + 1;
              }
              else if (uVar27 < uVar24 || uVar23 < uVar27) {
                iVar20 = uVar23 - uVar24;
                uVar23 = *(uint *)(param_1 + 0x1fd);
                uVar18 = 0;
                if (*(int *)(param_3 + 8) != 0) {
                  do {
                    lVar19 = uVar18 * 0x10;
                    if (*(longlong *)(param_6 + lVar19) != 0) {
                      lVar12 = *(longlong *)(param_6 + lVar19) +
                               (ulonglong)(*(int *)(param_6 + 8 + lVar19) * uVar24);
                      lVar13 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar18) * 8;
                      bVar5 = *(byte *)(param_3 + 0x16 + lVar13) >> 2;
                      iVar25 = 0;
                      if (iVar20 != 0) {
                        lVar13 = param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + lVar13) * 4;
                        iVar22 = iVar20;
                        do {
                          uVar28 = 0;
                          if (bVar5 != 0) {
                            do {
                              *(undefined4 *)(lVar13 + uVar28 * 4) =
                                   *(undefined4 *)(lVar12 + uVar28 * 4);
                              uVar6 = (int)uVar28 + 1;
                              uVar28 = (ulonglong)uVar6;
                            } while (uVar6 < bVar5);
                          }
                          iVar25 = iVar25 + 1;
                          lVar13 = lVar13 + (ulonglong)uVar23;
                          if (iVar25 == *(int *)(param_6 + lVar19 + 0xc)) {
                            iVar25 = 0;
                            lVar12 = lVar12 + (ulonglong)*(uint *)(param_6 + lVar19 + 8);
                          }
                          iVar22 = iVar22 + -1;
                        } while (iVar22 != 0);
                      }
                    }
                    uVar6 = (int)uVar18 + 1;
                    uVar18 = (ulonglong)uVar6;
                  } while (uVar6 < *(uint *)(param_3 + 8));
                }
                param_1[0xd] = param_1[0xd] + (ulonglong)(iVar20 * uVar23);
                *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar20;
                goto LAB_18005ab8c;
              }
            }
            *(uint *)(param_1[0x11] + (ulonglong)uVar26 * 4) =
                 (uint)*(ushort *)(param_1[4] + (ulonglong)uVar2 * 2);
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar17);
          uVar14 = uVar21 - uVar17;
          uVar26 = 0;
          if (uVar14 != 0) {
            do {
              uVar27 = (uVar26 + iVar29 + uVar16) - 1;
              if (param_12 == '\0') {
                uVar27 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)uVar27 * 2);
              }
              else {
                uVar27 = param_9[uVar27];
              }
              uVar2 = uVar27 + param_11;
              if ((param_12 != '\0') && (uVar2 >> 0x10 != *(uint *)(param_1 + 10))) {
                param_1[7] = 0;
                *plVar4 = 0;
                param_1[9] = 0;
                param_1[8] = 0;
                *(uint *)(param_1 + 10) = uVar2 >> 0x10;
              }
              uVar6 = uVar2 & 0xffff;
              uVar3 = uVar6 >> 0xb;
              if (*(char *)((longlong)plVar4 + (ulonglong)uVar3) == '\0') {
                *(undefined1 *)((longlong)plVar4 + (ulonglong)uVar3) = 1;
                puVar1 = (undefined8 *)(param_1[5] + (ulonglong)(uVar3 << 8));
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
              bVar5 = *(byte *)(param_1[5] + (ulonglong)(uVar6 >> 3));
              if ((bVar5 & (&DAT_18022a8d8)[(ulonglong)uVar6 & 7]) == 0) {
                *(byte *)(param_1[5] + (ulonglong)(uVar6 >> 3)) =
                     bVar5 | (&DAT_18022a8d8)[(ulonglong)uVar6 & 7];
                *(short *)(param_1[4] + (ulonglong)uVar6 * 2) = (short)iVar15;
                iVar15 = iVar15 + 1;
                if (uVar24 == uVar23) {
LAB_18005adc0:
                  uVar23 = uVar27 + param_11 + 1;
                  uVar24 = uVar2;
                }
                else if (uVar2 == uVar23) {
                  uVar23 = uVar23 + 1;
                }
                else if (uVar2 < uVar24 || uVar23 < uVar2) {
                  iVar20 = uVar23 - uVar24;
                  uVar23 = *(uint *)(param_1 + 0x1fd);
                  uVar18 = 0;
                  if (*(int *)(param_3 + 8) != 0) {
                    do {
                      lVar19 = uVar18 * 0x10;
                      if (*(longlong *)(param_6 + lVar19) != 0) {
                        lVar12 = *(longlong *)(param_6 + lVar19) +
                                 (ulonglong)(*(int *)(param_6 + 8 + lVar19) * uVar24);
                        lVar13 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar18) * 8;
                        bVar5 = *(byte *)(param_3 + 0x16 + lVar13) >> 2;
                        iVar25 = 0;
                        if (iVar20 != 0) {
                          lVar13 = param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + lVar13) * 4;
                          iVar22 = iVar20;
                          do {
                            uVar28 = 0;
                            if (bVar5 != 0) {
                              do {
                                *(undefined4 *)(lVar13 + uVar28 * 4) =
                                     *(undefined4 *)(lVar12 + uVar28 * 4);
                                uVar3 = (int)uVar28 + 1;
                                uVar28 = (ulonglong)uVar3;
                              } while (uVar3 < bVar5);
                            }
                            iVar25 = iVar25 + 1;
                            lVar13 = lVar13 + (ulonglong)uVar23;
                            if (iVar25 == *(int *)(param_6 + lVar19 + 0xc)) {
                              iVar25 = 0;
                              lVar12 = lVar12 + (ulonglong)*(uint *)(param_6 + lVar19 + 8);
                            }
                            iVar22 = iVar22 + -1;
                          } while (iVar22 != 0);
                        }
                      }
                      uVar3 = (int)uVar18 + 1;
                      uVar18 = (ulonglong)uVar3;
                    } while (uVar3 < *(uint *)(param_3 + 8));
                  }
                  param_1[0xd] = param_1[0xd] + (ulonglong)(iVar20 * uVar23);
                  *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar20;
                  goto LAB_18005adc0;
                }
              }
              iVar20 = uVar26 + uVar16;
              uVar26 = uVar26 + 1;
              *(uint *)(param_1[0x11] + (ulonglong)(iVar20 - 1) * 4) =
                   (uint)*(ushort *)(param_1[4] + (ulonglong)uVar6 * 2);
            } while (uVar26 < uVar14);
          }
          if (uVar23 != uVar24) {
            iVar15 = uVar23 - uVar24;
            uVar23 = *(uint *)(param_1 + 0x1fd);
            uVar18 = 0;
            if (*(int *)(param_3 + 8) != 0) {
              do {
                lVar19 = uVar18 * 0x10;
                if (*(longlong *)(param_6 + lVar19) != 0) {
                  lVar12 = *(longlong *)(param_6 + lVar19) +
                           (ulonglong)(*(int *)(param_6 + 8 + lVar19) * uVar24);
                  lVar13 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar18) * 8;
                  bVar5 = *(byte *)(param_3 + 0x16 + lVar13) >> 2;
                  iVar20 = 0;
                  if (iVar15 != 0) {
                    lVar13 = param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + lVar13) * 4;
                    iVar25 = iVar15;
                    do {
                      uVar28 = 0;
                      if (bVar5 != 0) {
                        do {
                          *(undefined4 *)(lVar13 + uVar28 * 4) =
                               *(undefined4 *)(lVar12 + uVar28 * 4);
                          uVar26 = (int)uVar28 + 1;
                          uVar28 = (ulonglong)uVar26;
                        } while (uVar26 < bVar5);
                      }
                      iVar20 = iVar20 + 1;
                      lVar13 = lVar13 + (ulonglong)uVar23;
                      if (iVar20 == *(int *)(param_6 + lVar19 + 0xc)) {
                        iVar20 = 0;
                        lVar12 = lVar12 + (ulonglong)*(uint *)(param_6 + lVar19 + 8);
                      }
                      iVar25 = iVar25 + -1;
                    } while (iVar25 != 0);
                  }
                }
                uVar26 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar26;
              } while (uVar26 < *(uint *)(param_3 + 8));
            }
            param_1[0xd] = param_1[0xd] + (ulonglong)(iVar15 * uVar23);
            *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar15;
          }
        }
        iVar29 = uVar14 + iVar29;
        param_1[0x11] = param_1[0x11] + (ulonglong)uVar21 * 4;
        local_90 = (uVar17 - uVar21) + local_90;
        iVar15 = *(int *)((longlong)param_1 + 0x94) + uVar21;
        *(int *)((longlong)param_1 + 0x94) = iVar15;
      } while (uVar16 <= local_90);
    }
  }
  return;
}

