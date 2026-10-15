/*
 * FUN_180058af8 at 180058af8
 * undefined FUN_180058af8(void)
 * Address ranges: 180058af8-180059853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058af8(longlong *param_1,int param_2,longlong param_3,char param_4,undefined8 param_5,
                  undefined8 *param_6,uint param_7,uint param_8,char param_9,undefined1 param_10,
                  undefined1 param_11)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  byte bVar7;
  code *pcVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  undefined8 uVar23;
  
  iVar22 = 0;
  if (param_2 - 1U < 2) {
    uVar13 = 1;
    if (param_2 == 2) {
      uVar13 = 2;
    }
LAB_18005959c:
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x1800595a4);
      (*pcVar8)();
    }
    uVar12 = 0;
    if (uVar13 != 0) {
      uVar12 = param_8 / uVar13;
    }
    for (uVar12 = uVar12 * uVar13; uVar12 != 0; uVar12 = uVar12 - uVar16) {
      iVar14 = *(int *)((longlong)param_1 + 0x74) + (int)param_1[0xe];
      if (0x1000U - iVar14 < 0x10) {
        (**(code **)(*param_1 + 0x1d8))(param_1,1);
        iVar14 = 0;
      }
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x1800595f8);
        (*pcVar8)();
      }
      uVar16 = 0;
      if (uVar13 != 0) {
        uVar16 = (0x1000U - iVar14) / uVar13;
      }
      uVar16 = (0x1000 - ((0x1000U - iVar14) - uVar16 * uVar13)) - iVar14;
      if (uVar12 < uVar16) {
        uVar16 = uVar12;
      }
      if (param_4 == '\0') {
        (**(code **)(*param_1 + 0x1e8))
                  (param_1,param_2,param_5,*(undefined4 *)(param_3 + 0xc),uVar16,0,param_11);
      }
      else {
        (**(code **)(*param_1 + 0x1e0))
                  (param_1,param_2,param_3,param_5,*(undefined4 *)(param_3 + 0xc),uVar16,0,param_10)
        ;
      }
      uVar2 = *(uint *)(param_1 + 0x1fd);
      if (param_9 == '\0') {
        if (param_7 == uVar2) {
          uVar18 = uVar2 * uVar16;
          puVar17 = (undefined8 *)((longlong)param_6 + (ulonglong)(iVar22 * uVar2));
          puVar1 = (undefined8 *)param_1[0xd];
          for (uVar2 = uVar18 >> 4; uVar2 != 0; uVar2 = uVar2 - 1) {
            puVar6 = puVar17 + 1;
            uVar23 = *puVar17;
            puVar17 = puVar17 + 2;
            puVar1[1] = *puVar6;
            *puVar1 = uVar23;
            puVar1 = puVar1 + 2;
          }
          uVar2 = uVar18 >> 2 & 3;
          uVar15 = 0;
          if (uVar2 != 0) {
            do {
              *(undefined4 *)((longlong)puVar1 + uVar15 * 4) =
                   *(undefined4 *)((longlong)puVar17 + uVar15 * 4);
              uVar3 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar3;
            } while (uVar3 < uVar2);
          }
          lVar10 = param_1[0xd] + (ulonglong)uVar18;
          goto LAB_18005979c;
        }
        if (uVar16 != 0) {
          uVar3 = uVar2 >> 2 & 3;
          iVar14 = iVar22;
          uVar18 = uVar16;
          do {
            puVar17 = (undefined8 *)((longlong)param_6 + (ulonglong)(iVar14 * param_7));
            puVar1 = (undefined8 *)param_1[0xd];
            for (uVar5 = uVar2 >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
              puVar6 = puVar17 + 1;
              uVar23 = *puVar17;
              puVar17 = puVar17 + 2;
              puVar1[1] = *puVar6;
              *puVar1 = uVar23;
              puVar1 = puVar1 + 2;
            }
            uVar15 = 0;
            if (uVar3 != 0) {
              do {
                *(undefined4 *)((longlong)puVar1 + uVar15 * 4) =
                     *(undefined4 *)((longlong)puVar17 + uVar15 * 4);
                uVar5 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar5;
              } while (uVar5 < uVar3);
            }
            iVar14 = iVar14 + 1;
            uVar18 = uVar18 - 1;
            param_1[0xd] = param_1[0xd] + (ulonglong)uVar2;
          } while (uVar18 != 0);
        }
      }
      else {
        uVar15 = 0;
        if (*(int *)(param_3 + 8) != 0) {
          do {
            if (param_6[uVar15 * 2] != 0) {
              lVar10 = param_6[uVar15 * 2] +
                       (ulonglong)(uint)(*(int *)(param_6 + uVar15 * 2 + 1) * iVar22);
              lVar20 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar15) * 8;
              iVar14 = 0;
              bVar4 = *(byte *)(param_3 + 0x16 + lVar20) >> 2;
              if (uVar16 != 0) {
                lVar20 = param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + lVar20) * 4;
                uVar18 = uVar16;
                do {
                  uVar19 = 0;
                  if (bVar4 != 0) {
                    do {
                      *(undefined4 *)(lVar20 + uVar19 * 4) = *(undefined4 *)(lVar10 + uVar19 * 4);
                      uVar3 = (int)uVar19 + 1;
                      uVar19 = (ulonglong)uVar3;
                    } while (uVar3 < bVar4);
                  }
                  iVar14 = iVar14 + 1;
                  lVar20 = lVar20 + (ulonglong)uVar2;
                  if (iVar14 == *(int *)((longlong)param_6 + uVar15 * 0x10 + 0xc)) {
                    iVar14 = 0;
                    lVar10 = lVar10 + (ulonglong)*(uint *)(param_6 + uVar15 * 2 + 1);
                  }
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
            }
            uVar18 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar18;
          } while (uVar18 < *(uint *)(param_3 + 8));
        }
        lVar10 = param_1[0xd] + (ulonglong)(uVar2 * uVar16);
LAB_18005979c:
        param_1[0xd] = lVar10;
      }
      iVar22 = uVar16 + iVar22;
      *(uint *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + uVar16;
    }
  }
  else {
    if (param_2 == 3) {
      uVar12 = 2;
    }
    else {
      uVar13 = 3;
      uVar12 = 3;
      if (param_2 == 4) goto LAB_18005959c;
      if (param_2 != 5) {
        if (param_2 != 6 || param_8 < 3) {
          return;
        }
        param_8 = param_8 - 2;
        iVar22 = 1;
        do {
          if (param_8 == 0) {
            return;
          }
          iVar14 = *(int *)((longlong)param_1 + 0x74) + (int)param_1[0xe];
          if ((0x1000U - iVar14 < 0x10) ||
             (iVar11 = *(int *)((longlong)param_1 + 0x94) + (int)param_1[0x12],
             0x1000U - iVar11 < 0x10)) {
            (**(code **)(*param_1 + 0x1d8))(param_1,1);
            iVar14 = 0;
            iVar11 = 0;
          }
          uVar12 = (0x1000U - iVar11) / 3;
          uVar13 = 0xffeU - iVar14;
          if (uVar12 <= 0xffeU - iVar14) {
            uVar13 = uVar12;
          }
          if (param_8 < uVar13) {
            uVar13 = param_8;
          }
          iVar14 = uVar13 * 3;
          if (param_4 == '\0') {
            (**(code **)(*param_1 + 0x1e8))
                      (param_1,4,param_5,*(undefined4 *)(param_3 + 0xc),uVar13 + 2,iVar14,0);
          }
          else {
            (**(code **)(*param_1 + 0x1e0))
                      (param_1,4,param_3,param_5,*(undefined4 *)(param_3 + 0xc),uVar13 + 2,iVar14,
                       param_10);
          }
          uVar12 = *(uint *)(param_1 + 0x1fd);
          if (param_9 == '\0') {
            puVar17 = (undefined8 *)param_1[0xd];
            uVar16 = uVar12 >> 4;
            puVar1 = param_6;
            if (param_7 == uVar12) {
              for (; uVar16 != 0; uVar16 = uVar16 - 1) {
                uVar23 = *puVar1;
                puVar17[1] = puVar1[1];
                *puVar17 = uVar23;
                puVar17 = puVar17 + 2;
                puVar1 = puVar1 + 2;
              }
              uVar16 = uVar12 >> 2 & 3;
              uVar15 = 0;
              if (uVar16 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar17 + uVar15 * 4) =
                       *(undefined4 *)((longlong)puVar1 + uVar15 * 4);
                  uVar2 = (int)uVar15 + 1;
                  uVar15 = (ulonglong)uVar2;
                } while (uVar2 < uVar16);
              }
            }
            else {
              for (; uVar16 != 0; uVar16 = uVar16 - 1) {
                uVar23 = *puVar1;
                puVar17[1] = puVar1[1];
                *puVar17 = uVar23;
                puVar17 = puVar17 + 2;
                puVar1 = puVar1 + 2;
              }
              uVar16 = uVar12 >> 2 & 3;
              uVar15 = 0;
              if (uVar16 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar17 + uVar15 * 4) =
                       *(undefined4 *)((longlong)puVar1 + uVar15 * 4);
                  uVar2 = (int)uVar15 + 1;
                  uVar15 = (ulonglong)uVar2;
                } while (uVar2 < uVar16);
              }
            }
            puVar17 = (undefined8 *)(param_1[0xd] + (ulonglong)uVar12);
            param_1[0xd] = (longlong)puVar17;
            *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + 1;
            uVar12 = *(uint *)(param_1 + 0x1fd);
            uVar16 = uVar12 >> 4;
            if (param_7 == uVar12) {
              puVar1 = (undefined8 *)((longlong)param_6 + (ulonglong)(uVar12 * iVar22));
              for (; uVar16 != 0; uVar16 = uVar16 - 1) {
                puVar6 = puVar1 + 1;
                uVar23 = *puVar1;
                puVar1 = puVar1 + 2;
                puVar17[1] = *puVar6;
                *puVar17 = uVar23;
                puVar17 = puVar17 + 2;
              }
              uVar16 = uVar12 >> 2 & 3;
              uVar15 = 0;
              if (uVar16 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar17 + uVar15 * 4) =
                       *(undefined4 *)((longlong)puVar1 + uVar15 * 4);
                  uVar2 = (int)uVar15 + 1;
                  uVar15 = (ulonglong)uVar2;
                } while (uVar2 < uVar16);
              }
            }
            else {
              puVar1 = (undefined8 *)((longlong)param_6 + (ulonglong)(iVar22 * param_7));
              for (; uVar16 != 0; uVar16 = uVar16 - 1) {
                puVar6 = puVar1 + 1;
                uVar23 = *puVar1;
                puVar1 = puVar1 + 2;
                puVar17[1] = *puVar6;
                *puVar17 = uVar23;
                puVar17 = puVar17 + 2;
              }
              uVar16 = uVar12 >> 2 & 3;
              uVar15 = 0;
              if (uVar16 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar17 + uVar15 * 4) =
                       *(undefined4 *)((longlong)puVar1 + uVar15 * 4);
                  uVar2 = (int)uVar15 + 1;
                  uVar15 = (ulonglong)uVar2;
                } while (uVar2 < uVar16);
              }
            }
            iVar11 = iVar22 + 1;
            puVar17 = (undefined8 *)(param_1[0xd] + (ulonglong)uVar12);
            param_1[0xd] = (longlong)puVar17;
            *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + 1;
            uVar12 = *(uint *)(param_1 + 0x1fd);
            if (param_7 == uVar12) {
              uVar16 = uVar12 * uVar13;
              puVar1 = (undefined8 *)((longlong)param_6 + (ulonglong)(uVar12 * iVar11));
              for (uVar12 = uVar16 >> 4; uVar12 != 0; uVar12 = uVar12 - 1) {
                puVar6 = puVar1 + 1;
                uVar23 = *puVar1;
                puVar1 = puVar1 + 2;
                puVar17[1] = *puVar6;
                *puVar17 = uVar23;
                puVar17 = puVar17 + 2;
              }
              uVar12 = uVar16 >> 2 & 3;
              uVar15 = 0;
              if (uVar12 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar17 + uVar15 * 4) =
                       *(undefined4 *)((longlong)puVar1 + uVar15 * 4);
                  uVar2 = (int)uVar15 + 1;
                  uVar15 = (ulonglong)uVar2;
                } while (uVar2 < uVar12);
              }
              lVar10 = param_1[0xd] + (ulonglong)uVar16;
              goto LAB_180059020;
            }
            if (uVar13 != 0) {
              uVar2 = uVar12 >> 2 & 3;
              uVar16 = uVar13;
              do {
                puVar1 = (undefined8 *)((longlong)param_6 + (ulonglong)(iVar11 * param_7));
                for (uVar18 = uVar12 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
                  puVar6 = puVar1 + 1;
                  uVar23 = *puVar1;
                  puVar1 = puVar1 + 2;
                  puVar17[1] = *puVar6;
                  *puVar17 = uVar23;
                  puVar17 = puVar17 + 2;
                }
                uVar15 = 0;
                if (uVar2 != 0) {
                  do {
                    *(undefined4 *)((longlong)puVar17 + uVar15 * 4) =
                         *(undefined4 *)((longlong)puVar1 + uVar15 * 4);
                    uVar18 = (int)uVar15 + 1;
                    uVar15 = (ulonglong)uVar18;
                  } while (uVar18 < uVar2);
                }
                iVar11 = iVar11 + 1;
                uVar16 = uVar16 - 1;
                puVar17 = (undefined8 *)(param_1[0xd] + (ulonglong)uVar12);
                param_1[0xd] = (longlong)puVar17;
              } while (uVar16 != 0);
            }
          }
          else {
            uVar16 = *(uint *)(param_3 + 8);
            if (uVar16 != 0) {
              uVar15 = 0;
              do {
                lVar10 = param_6[uVar15 * 2];
                if (lVar10 != 0) {
                  lVar20 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar15) * 8;
                  bVar7 = *(byte *)(param_3 + 0x16 + lVar20) >> 2;
                  bVar4 = *(byte *)(param_3 + 0x17 + lVar20);
                  lVar20 = param_1[0xd];
                  uVar19 = 0;
                  if (bVar7 != 0) {
                    do {
                      *(undefined4 *)(lVar20 + (ulonglong)bVar4 * 4 + uVar19 * 4) =
                           *(undefined4 *)(lVar10 + uVar19 * 4);
                      uVar16 = (int)uVar19 + 1;
                      uVar19 = (ulonglong)uVar16;
                    } while (uVar16 < bVar7);
                    uVar16 = *(uint *)(param_3 + 8);
                  }
                }
                uVar2 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar2;
              } while (uVar2 < uVar16);
            }
            param_1[0xd] = param_1[0xd] + (ulonglong)uVar12;
            *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + 1;
            uVar12 = *(uint *)(param_1 + 0x1fd);
            uVar16 = *(uint *)(param_3 + 8);
            if (uVar16 != 0) {
              uVar15 = 0;
              do {
                lVar10 = param_6[uVar15 * 2];
                if (lVar10 != 0) {
                  iVar11 = *(int *)(param_6 + uVar15 * 2 + 1);
                  lVar21 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar15) * 8;
                  bVar4 = *(byte *)(param_3 + 0x17 + lVar21);
                  lVar20 = param_1[0xd];
                  bVar7 = *(byte *)(param_3 + 0x16 + lVar21) >> 2;
                  uVar19 = 0;
                  if (bVar7 != 0) {
                    do {
                      *(undefined4 *)(lVar20 + (ulonglong)bVar4 * 4 + uVar19 * 4) =
                           *(undefined4 *)(lVar10 + (ulonglong)(uint)(iVar11 * iVar22) + uVar19 * 4)
                      ;
                      uVar16 = (int)uVar19 + 1;
                      uVar19 = (ulonglong)uVar16;
                    } while (uVar16 < bVar7);
                    uVar16 = *(uint *)(param_3 + 8);
                  }
                }
                uVar2 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar2;
              } while (uVar2 < uVar16);
            }
            param_1[0xd] = param_1[0xd] + (ulonglong)uVar12;
            *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + 1;
            uVar12 = *(uint *)(param_1 + 0x1fd);
            if (*(int *)(param_3 + 8) != 0) {
              uVar15 = 0;
              do {
                if (param_6[uVar15 * 2] != 0) {
                  lVar10 = param_6[uVar15 * 2] +
                           (ulonglong)(uint)(*(int *)(param_6 + uVar15 * 2 + 1) * (iVar22 + 1));
                  lVar20 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar15) * 8;
                  iVar11 = 0;
                  bVar4 = *(byte *)(param_3 + 0x16 + lVar20) >> 2;
                  if (uVar13 != 0) {
                    lVar20 = param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + lVar20) * 4;
                    uVar16 = uVar13;
                    do {
                      uVar19 = 0;
                      if (bVar4 != 0) {
                        do {
                          *(undefined4 *)(lVar20 + uVar19 * 4) =
                               *(undefined4 *)(lVar10 + uVar19 * 4);
                          uVar2 = (int)uVar19 + 1;
                          uVar19 = (ulonglong)uVar2;
                        } while (uVar2 < bVar4);
                      }
                      iVar11 = iVar11 + 1;
                      lVar20 = lVar20 + (ulonglong)uVar12;
                      if (iVar11 == *(int *)((longlong)param_6 + uVar15 * 0x10 + 0xc)) {
                        iVar11 = 0;
                        lVar10 = lVar10 + (ulonglong)*(uint *)(param_6 + uVar15 * 2 + 1);
                      }
                      uVar16 = uVar16 - 1;
                    } while (uVar16 != 0);
                  }
                }
                uVar16 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar16;
              } while (uVar16 < *(uint *)(param_3 + 8));
            }
            lVar10 = param_1[0xd] + (ulonglong)(uVar12 * uVar13);
LAB_180059020:
            param_1[0xd] = lVar10;
          }
          iVar11 = *(int *)((longlong)param_1 + 0x74);
          *(uint *)((longlong)param_1 + 0x74) = iVar11 + uVar13;
          uVar12 = 0;
          if (uVar13 != 0) {
            do {
              *(uint *)param_1[0x11] = uVar12 + iVar11 + -1;
              iVar9 = uVar12 + iVar11;
              uVar12 = uVar12 + 1;
              *(int *)(param_1[0x11] + 4) = iVar9;
              *(int *)(param_1[0x11] + 8) = iVar11 + -2;
              param_1[0x11] = param_1[0x11] + 0xc;
            } while (uVar12 < uVar13);
          }
          param_8 = param_8 - uVar13;
          iVar22 = uVar13 + iVar22;
          *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + iVar14;
        } while( true );
      }
    }
    uVar13 = uVar12 - 1;
    for (; uVar12 <= param_8; param_8 = (uVar13 - uVar16) + param_8) {
      iVar14 = *(int *)((longlong)param_1 + 0x74) + (int)param_1[0xe];
      if (0x1000U - iVar14 < 0x10) {
        (**(code **)(*param_1 + 0x1d8))(param_1,1);
        iVar14 = 0;
      }
      uVar16 = 0x1000U - iVar14 & 0xfffffffe;
      if (param_8 < uVar16) {
        uVar16 = param_8;
      }
      if (param_4 == '\0') {
        (**(code **)(*param_1 + 0x1e8))
                  (param_1,param_2,param_5,*(undefined4 *)(param_3 + 0xc),uVar16,0,0);
      }
      else {
        (**(code **)(*param_1 + 0x1e0))
                  (param_1,param_2,param_3,param_5,*(undefined4 *)(param_3 + 0xc),uVar16,0,param_10)
        ;
      }
      (**(code **)(*param_1 + 0x1d8))(param_1,0);
      uVar2 = *(uint *)(param_1 + 0x1fd);
      if (param_9 == '\0') {
        if (param_7 == uVar2) {
          uVar18 = uVar2 * uVar13;
          puVar17 = (undefined8 *)((longlong)param_6 + (ulonglong)(iVar22 * uVar2));
          puVar1 = (undefined8 *)param_1[0xd];
          for (uVar2 = uVar18 >> 4; uVar2 != 0; uVar2 = uVar2 - 1) {
            puVar6 = puVar17 + 1;
            uVar23 = *puVar17;
            puVar17 = puVar17 + 2;
            puVar1[1] = *puVar6;
            *puVar1 = uVar23;
            puVar1 = puVar1 + 2;
          }
          uVar2 = uVar18 >> 2 & 3;
          uVar15 = 0;
          if (uVar2 != 0) {
            do {
              *(undefined4 *)((longlong)puVar1 + uVar15 * 4) =
                   *(undefined4 *)((longlong)puVar17 + uVar15 * 4);
              uVar3 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar3;
            } while (uVar3 < uVar2);
          }
          puVar17 = (undefined8 *)(param_1[0xd] + (ulonglong)uVar18);
          param_1[0xd] = (longlong)puVar17;
        }
        else {
          uVar18 = 0;
          uVar3 = uVar2 >> 2 & 3;
          iVar14 = iVar22;
          do {
            puVar17 = (undefined8 *)((longlong)param_6 + (ulonglong)(iVar14 * param_7));
            puVar1 = (undefined8 *)param_1[0xd];
            for (uVar5 = uVar2 >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
              puVar6 = puVar17 + 1;
              uVar23 = *puVar17;
              puVar17 = puVar17 + 2;
              puVar1[1] = *puVar6;
              *puVar1 = uVar23;
              puVar1 = puVar1 + 2;
            }
            uVar15 = 0;
            if (uVar3 != 0) {
              do {
                *(undefined4 *)((longlong)puVar1 + uVar15 * 4) =
                     *(undefined4 *)((longlong)puVar17 + uVar15 * 4);
                uVar5 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar5;
              } while (uVar5 < uVar3);
            }
            uVar18 = uVar18 + 1;
            iVar14 = iVar14 + 1;
            puVar17 = (undefined8 *)(param_1[0xd] + (ulonglong)uVar2);
            param_1[0xd] = (longlong)puVar17;
          } while (uVar18 < uVar13);
        }
        iVar11 = uVar16 - uVar13;
        iVar14 = iVar22 + uVar12 + -1;
        *(uint *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + uVar12 + -1;
        uVar2 = *(uint *)(param_1 + 0x1fd);
        if (param_7 == uVar2) {
          uVar18 = iVar11 * uVar2;
          puVar1 = (undefined8 *)((longlong)param_6 + (ulonglong)(uVar2 * iVar14));
          for (uVar2 = uVar18 >> 4; uVar2 != 0; uVar2 = uVar2 - 1) {
            puVar6 = puVar1 + 1;
            uVar23 = *puVar1;
            puVar1 = puVar1 + 2;
            puVar17[1] = *puVar6;
            *puVar17 = uVar23;
            puVar17 = puVar17 + 2;
          }
          uVar2 = uVar18 >> 2 & 3;
          uVar15 = 0;
          if (uVar2 != 0) {
            do {
              *(undefined4 *)((longlong)puVar17 + uVar15 * 4) =
                   *(undefined4 *)((longlong)puVar1 + uVar15 * 4);
              uVar3 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar3;
            } while (uVar3 < uVar2);
          }
          lVar10 = param_1[0xd] + (ulonglong)uVar18;
          goto LAB_1800594f0;
        }
        if (iVar11 != 0) {
          uVar18 = uVar2 >> 2 & 3;
          iVar9 = iVar11;
          do {
            puVar1 = (undefined8 *)((longlong)param_6 + (ulonglong)(iVar14 * param_7));
            for (uVar3 = uVar2 >> 4; uVar3 != 0; uVar3 = uVar3 - 1) {
              puVar6 = puVar1 + 1;
              uVar23 = *puVar1;
              puVar1 = puVar1 + 2;
              puVar17[1] = *puVar6;
              *puVar17 = uVar23;
              puVar17 = puVar17 + 2;
            }
            uVar15 = 0;
            if (uVar18 != 0) {
              do {
                *(undefined4 *)((longlong)puVar17 + uVar15 * 4) =
                     *(undefined4 *)((longlong)puVar1 + uVar15 * 4);
                uVar3 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar3;
              } while (uVar3 < uVar18);
            }
            iVar14 = iVar14 + 1;
            iVar9 = iVar9 + -1;
            puVar17 = (undefined8 *)(param_1[0xd] + (ulonglong)uVar2);
            param_1[0xd] = (longlong)puVar17;
          } while (iVar9 != 0);
        }
      }
      else {
        uVar15 = 0;
        if (*(int *)(param_3 + 8) != 0) {
          do {
            if (param_6[uVar15 * 2] != 0) {
              iVar14 = 0;
              uVar18 = 0;
              lVar20 = param_6[uVar15 * 2] +
                       (ulonglong)(uint)(*(int *)(param_6 + uVar15 * 2 + 1) * iVar22);
              lVar10 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar15) * 8;
              bVar4 = *(byte *)(param_3 + 0x16 + lVar10) >> 2;
              lVar10 = param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + lVar10) * 4;
              do {
                uVar19 = 0;
                if (bVar4 != 0) {
                  do {
                    *(undefined4 *)(lVar10 + uVar19 * 4) = *(undefined4 *)(lVar20 + uVar19 * 4);
                    uVar3 = (int)uVar19 + 1;
                    uVar19 = (ulonglong)uVar3;
                  } while (uVar3 < bVar4);
                }
                iVar14 = iVar14 + 1;
                lVar10 = lVar10 + (ulonglong)uVar2;
                if (iVar14 == *(int *)((longlong)param_6 + uVar15 * 0x10 + 0xc)) {
                  iVar14 = 0;
                  lVar20 = lVar20 + (ulonglong)*(uint *)(param_6 + uVar15 * 2 + 1);
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar13);
            }
            uVar18 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar18;
          } while (uVar18 < *(uint *)(param_3 + 8));
        }
        iVar11 = uVar16 - uVar13;
        param_1[0xd] = param_1[0xd] + (ulonglong)(uVar2 * uVar13);
        *(uint *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + uVar12 + -1;
        uVar2 = *(uint *)(param_1 + 0x1fd);
        if (*(int *)(param_3 + 8) != 0) {
          uVar15 = 0;
          do {
            if (param_6[uVar15 * 2] != 0) {
              lVar10 = param_6[uVar15 * 2] +
                       (ulonglong)(*(int *)(param_6 + uVar15 * 2 + 1) * (iVar22 + uVar12 + -1));
              lVar20 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar15) * 8;
              bVar4 = *(byte *)(param_3 + 0x16 + lVar20) >> 2;
              iVar14 = 0;
              if (iVar11 != 0) {
                lVar20 = param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + lVar20) * 4;
                iVar9 = iVar11;
                do {
                  uVar19 = 0;
                  if (bVar4 != 0) {
                    do {
                      *(undefined4 *)(lVar20 + uVar19 * 4) = *(undefined4 *)(lVar10 + uVar19 * 4);
                      uVar18 = (int)uVar19 + 1;
                      uVar19 = (ulonglong)uVar18;
                    } while (uVar18 < bVar4);
                  }
                  iVar14 = iVar14 + 1;
                  lVar20 = lVar20 + (ulonglong)uVar2;
                  if (iVar14 == *(int *)((longlong)param_6 + uVar15 * 0x10 + 0xc)) {
                    iVar14 = 0;
                    lVar10 = lVar10 + (ulonglong)*(uint *)(param_6 + uVar15 * 2 + 1);
                  }
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
              }
            }
            uVar18 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar18;
          } while (uVar18 < *(uint *)(param_3 + 8));
        }
        lVar10 = param_1[0xd] + (ulonglong)(iVar11 * uVar2);
LAB_1800594f0:
        param_1[0xd] = lVar10;
      }
      iVar22 = iVar11 + iVar22;
      *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar11;
    }
  }
  return;
}

