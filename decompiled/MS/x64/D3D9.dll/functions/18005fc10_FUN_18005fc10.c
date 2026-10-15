/*
 * FUN_18005fc10 at 18005fc10
 * undefined __fastcall FUN_18005fc10(longlong * param_1, int param_2, longlong param_3, char param_4, undefined8 param_5, undefined8 * param_6, uint param_7, uint param_8, char param_9, undefined1 param_10)
 * Address ranges: 18005fc10-180060c95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005fc10(longlong *param_1,int param_2,longlong param_3,char param_4,undefined8 param_5,
                  undefined8 *param_6,uint param_7,uint param_8,char param_9,undefined1 param_10)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  int local_res10;
  uint in_stack_ffffffffffffff78;
  uint local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  
  uVar9 = 3;
  local_6c = 3;
  local_74 = 0;
  if ((param_2 == 1) || (param_2 == 2)) {
    local_6c = (param_2 == 2) + 1;
LAB_180060937:
    for (uVar9 = param_8 - param_8 % local_6c; uVar9 != 0; uVar9 = uVar9 - uVar14) {
      iVar13 = *(int *)((longlong)param_1 + 0x74) + (int)param_1[0xe];
      if (0x1000U - iVar13 < 0x10) {
        (**(code **)(*param_1 + 0x1d8))(param_1);
        iVar13 = 0;
      }
      uVar18 = (0x1000 - (0x1000U - iVar13) % local_6c) - iVar13;
      uVar14 = uVar9;
      if (uVar18 <= uVar9) {
        uVar14 = uVar18;
      }
      if (param_4 == '\0') {
        (**(code **)(*param_1 + 0x1e8))(param_1);
      }
      else {
        (**(code **)(*param_1 + 0x1e0))
                  (param_1,param_2,param_3,param_5,*(undefined4 *)(param_3 + 0xc),uVar14,0,param_10)
        ;
      }
      uVar18 = *(uint *)(param_1 + 0x1fd);
      if (param_9 == '\0') {
        if (param_7 == uVar18) {
          uVar6 = uVar18 * uVar14;
          puVar19 = (undefined8 *)param_1[0xd];
          puVar7 = (undefined8 *)((ulonglong)(local_74 * uVar18) + (longlong)param_6);
          for (uVar10 = uVar6 >> 4; uVar10 != 0; uVar10 = uVar10 - 1) {
            uVar2 = puVar7[1];
            *puVar19 = *puVar7;
            puVar19[1] = uVar2;
            puVar19 = puVar19 + 2;
            puVar7 = puVar7 + 2;
          }
          uVar18 = uVar6 >> 2 & 3;
          uVar8 = 0;
          if (uVar18 != 0) {
            do {
              uVar10 = (int)uVar8 + 1;
              *(undefined4 *)((longlong)puVar19 + uVar8 * 4) =
                   *(undefined4 *)((longlong)puVar7 + uVar8 * 4);
              uVar8 = (ulonglong)uVar10;
            } while (uVar10 < uVar18);
          }
          param_1[0xd] = param_1[0xd] + (ulonglong)uVar6;
        }
        else if (uVar14 != 0) {
          uVar6 = uVar18 >> 2 & 3;
          iVar13 = local_74;
          uVar10 = uVar14;
          do {
            puVar19 = (undefined8 *)param_1[0xd];
            puVar7 = (undefined8 *)((ulonglong)(iVar13 * param_7) + (longlong)param_6);
            for (uVar11 = uVar18 >> 4; uVar11 != 0; uVar11 = uVar11 - 1) {
              uVar2 = puVar7[1];
              *puVar19 = *puVar7;
              puVar19[1] = uVar2;
              puVar19 = puVar19 + 2;
              puVar7 = puVar7 + 2;
            }
            uVar8 = 0;
            if (uVar6 != 0) {
              do {
                *(undefined4 *)((longlong)puVar19 + uVar8 * 4) =
                     *(undefined4 *)((longlong)puVar7 + uVar8 * 4);
                uVar11 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar11;
              } while (uVar11 < uVar6);
            }
            param_1[0xd] = param_1[0xd] + (ulonglong)uVar18;
            iVar13 = iVar13 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      else {
        uVar8 = 0;
        if (*(int *)(param_3 + 8) != 0) {
          do {
            if (param_6[uVar8 * 2] != 0) {
              uVar3 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar8);
              local_68 = 0;
              puVar19 = (undefined8 *)
                        ((ulonglong)(uint)(local_74 * *(int *)(param_6 + uVar8 * 2 + 1)) +
                        param_6[uVar8 * 2]);
              bVar1 = *(byte *)(param_3 + 0x16 + uVar3 * 8) >> 2;
              uVar10 = (uint)bVar1;
              if (uVar14 != 0) {
                puVar7 = (undefined8 *)
                         (param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + uVar3 * 8) * 4);
                uVar6 = uVar14;
                do {
                  if (bVar1 != 0) {
                    uVar3 = 0;
                    if ((uVar10 < 4) ||
                       ((puVar7 <= (undefined8 *)((longlong)puVar19 + (ulonglong)(uVar10 - 1) * 4)
                        && (puVar19 <=
                            (undefined8 *)((longlong)puVar7 + (ulonglong)(uVar10 - 1) * 4))))) {
                      do {
                        *(undefined4 *)((longlong)puVar7 + uVar3 * 4) =
                             *(undefined4 *)((longlong)puVar19 + uVar3 * 4);
                        uVar11 = (int)uVar3 + 1;
                        uVar3 = (ulonglong)uVar11;
                      } while (uVar11 < uVar10);
                    }
                    else {
                      FUN_1800fbec0(puVar7,puVar19,(ulonglong)uVar10 << 2);
                    }
                  }
                  local_68 = local_68 + 1;
                  puVar7 = (undefined8 *)((longlong)puVar7 + (ulonglong)uVar18);
                  if (local_68 == *(int *)((longlong)param_6 + uVar8 * 0x10 + 0xc)) {
                    puVar19 = (undefined8 *)
                              ((longlong)puVar19 + (ulonglong)*(uint *)(param_6 + uVar8 * 2 + 1));
                    local_68 = 0;
                  }
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
              }
            }
            uVar10 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar10;
          } while (uVar10 < *(uint *)(param_3 + 8));
        }
        param_1[0xd] = param_1[0xd] + (ulonglong)(uVar14 * uVar18);
      }
      *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + uVar14;
      local_74 = local_74 + uVar14;
    }
  }
  else {
    if (param_2 == 3) {
      uVar9 = 2;
      local_6c = 2;
    }
    else {
      if (param_2 == 4) goto LAB_180060937;
      if (param_2 != 5) {
        if (param_2 != 6) {
          return;
        }
        if (param_8 < 3) {
          return;
        }
        local_res10 = 1;
        for (uVar9 = param_8 - 2; uVar9 != 0; uVar9 = uVar9 - uVar18) {
          iVar13 = *(int *)((longlong)param_1 + 0x74) + (int)param_1[0xe];
          if ((0x1000U - iVar13 < 0x10) ||
             (iVar5 = *(int *)((longlong)param_1 + 0x94) + (int)param_1[0x12],
             0x1000U - iVar5 < 0x10)) {
            (**(code **)(*param_1 + 0x1d8))(param_1);
            iVar13 = 0;
            iVar5 = 0;
          }
          uVar14 = (0x1000U - iVar5) / 3;
          if (0xffeU - iVar13 < uVar14) {
            uVar14 = 0xffeU - iVar13;
          }
          uVar18 = uVar9;
          if (uVar14 <= uVar9) {
            uVar18 = uVar14;
          }
          uVar14 = uVar18 * 3;
          if (param_4 == '\0') {
            in_stack_ffffffffffffff78 = in_stack_ffffffffffffff78 & 0xffffff00;
            (**(code **)(*param_1 + 0x1e8))
                      (param_1,4,param_5,*(undefined4 *)(param_3 + 0xc),uVar18 + 2,uVar14,
                       in_stack_ffffffffffffff78);
          }
          else {
            (**(code **)(*param_1 + 0x1e0))
                      (param_1,4,param_3,param_5,*(undefined4 *)(param_3 + 0xc),uVar18 + 2,uVar14,
                       param_10);
            in_stack_ffffffffffffff78 = uVar14;
          }
          uVar14 = *(uint *)(param_1 + 0x1fd);
          if (param_9 == '\0') {
            if (param_7 == uVar14) {
              puVar19 = (undefined8 *)param_1[0xd];
              puVar7 = param_6;
              for (uVar10 = uVar14 >> 4; uVar10 != 0; uVar10 = uVar10 - 1) {
                uVar2 = puVar7[1];
                *puVar19 = *puVar7;
                puVar19[1] = uVar2;
                puVar19 = puVar19 + 2;
                puVar7 = puVar7 + 2;
              }
              uVar10 = uVar14 >> 2 & 3;
              uVar8 = 0;
              if (uVar10 != 0) {
                do {
                  uVar6 = (int)uVar8 + 1;
                  *(undefined4 *)((longlong)puVar19 + uVar8 * 4) =
                       *(undefined4 *)((longlong)puVar7 + uVar8 * 4);
                  uVar8 = (ulonglong)uVar6;
                } while (uVar6 < uVar10);
              }
            }
            else {
              puVar19 = (undefined8 *)param_1[0xd];
              puVar7 = param_6;
              for (uVar10 = uVar14 >> 4; uVar10 != 0; uVar10 = uVar10 - 1) {
                uVar2 = puVar7[1];
                *puVar19 = *puVar7;
                puVar19[1] = uVar2;
                puVar19 = puVar19 + 2;
                puVar7 = puVar7 + 2;
              }
              uVar10 = uVar14 >> 2 & 3;
              uVar8 = 0;
              if (uVar10 != 0) {
                do {
                  uVar6 = (int)uVar8 + 1;
                  *(undefined4 *)((longlong)puVar19 + uVar8 * 4) =
                       *(undefined4 *)((longlong)puVar7 + uVar8 * 4);
                  uVar8 = (ulonglong)uVar6;
                } while (uVar6 < uVar10);
              }
            }
            param_1[0xd] = param_1[0xd] + (ulonglong)uVar14;
            *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + 1;
            uVar14 = *(uint *)(param_1 + 0x1fd);
            if (param_7 == uVar14) {
              puVar19 = (undefined8 *)param_1[0xd];
              puVar7 = (undefined8 *)((ulonglong)(uVar14 * local_res10) + (longlong)param_6);
              for (uVar10 = uVar14 >> 4; uVar10 != 0; uVar10 = uVar10 - 1) {
                uVar2 = puVar7[1];
                *puVar19 = *puVar7;
                puVar19[1] = uVar2;
                puVar19 = puVar19 + 2;
                puVar7 = puVar7 + 2;
              }
              uVar10 = uVar14 >> 2 & 3;
              uVar8 = 0;
              if (uVar10 != 0) {
                do {
                  uVar6 = (int)uVar8 + 1;
                  *(undefined4 *)((longlong)puVar19 + uVar8 * 4) =
                       *(undefined4 *)((longlong)puVar7 + uVar8 * 4);
                  uVar8 = (ulonglong)uVar6;
                } while (uVar6 < uVar10);
              }
              param_1[0xd] = param_1[0xd] + (ulonglong)uVar14;
              puVar19 = (undefined8 *)param_1[0xd];
            }
            else {
              puVar19 = (undefined8 *)param_1[0xd];
              puVar7 = (undefined8 *)((ulonglong)(local_res10 * param_7) + (longlong)param_6);
              for (uVar10 = uVar14 >> 4; uVar10 != 0; uVar10 = uVar10 - 1) {
                uVar2 = puVar7[1];
                *puVar19 = *puVar7;
                puVar19[1] = uVar2;
                puVar19 = puVar19 + 2;
                puVar7 = puVar7 + 2;
              }
              uVar10 = uVar14 >> 2 & 3;
              uVar8 = 0;
              if (uVar10 != 0) {
                do {
                  uVar6 = (int)uVar8 + 1;
                  *(undefined4 *)((longlong)puVar19 + uVar8 * 4) =
                       *(undefined4 *)((longlong)puVar7 + uVar8 * 4);
                  uVar8 = (ulonglong)uVar6;
                } while (uVar6 < uVar10);
              }
              puVar19 = (undefined8 *)(param_1[0xd] + (ulonglong)uVar14);
              param_1[0xd] = (longlong)puVar19;
            }
            *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + 1;
            iVar13 = local_res10 + 1;
            uVar14 = *(uint *)(param_1 + 0x1fd);
            if (param_7 == uVar14) {
              uVar6 = uVar14 * uVar18;
              puVar7 = (undefined8 *)((ulonglong)(uVar14 * iVar13) + (longlong)param_6);
              for (uVar10 = uVar6 >> 4; uVar10 != 0; uVar10 = uVar10 - 1) {
                uVar2 = puVar7[1];
                *puVar19 = *puVar7;
                puVar19[1] = uVar2;
                puVar7 = puVar7 + 2;
                puVar19 = puVar19 + 2;
              }
              uVar14 = uVar6 >> 2 & 3;
              uVar8 = 0;
              if (uVar14 != 0) {
                do {
                  uVar10 = (int)uVar8 + 1;
                  *(undefined4 *)((longlong)puVar19 + uVar8 * 4) =
                       *(undefined4 *)((longlong)puVar7 + uVar8 * 4);
                  uVar8 = (ulonglong)uVar10;
                } while (uVar10 < uVar14);
              }
              param_1[0xd] = param_1[0xd] + (ulonglong)uVar6;
            }
            else if (uVar18 != 0) {
              uVar6 = uVar14 >> 2 & 3;
              uVar10 = uVar18;
              do {
                puVar7 = (undefined8 *)((ulonglong)(iVar13 * param_7) + (longlong)param_6);
                for (uVar11 = uVar14 >> 4; uVar11 != 0; uVar11 = uVar11 - 1) {
                  uVar2 = puVar7[1];
                  *puVar19 = *puVar7;
                  puVar19[1] = uVar2;
                  puVar7 = puVar7 + 2;
                  puVar19 = puVar19 + 2;
                }
                uVar8 = 0;
                if (uVar6 != 0) {
                  do {
                    *(undefined4 *)((longlong)puVar19 + uVar8 * 4) =
                         *(undefined4 *)((longlong)puVar7 + uVar8 * 4);
                    uVar11 = (int)uVar8 + 1;
                    uVar8 = (ulonglong)uVar11;
                  } while (uVar11 < uVar6);
                }
                param_1[0xd] = param_1[0xd] + (ulonglong)uVar14;
                iVar13 = iVar13 + 1;
                puVar19 = (undefined8 *)param_1[0xd];
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
          }
          else {
            uVar8 = 0;
            if (*(int *)(param_3 + 8) != 0) {
              do {
                puVar19 = (undefined8 *)param_6[uVar8 * 2];
                if (puVar19 != (undefined8 *)0x0) {
                  uVar3 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar8);
                  uVar10 = (uint)(*(byte *)(param_3 + 0x16 + uVar3 * 8) >> 2);
                  if (uVar10 != 0) {
                    uVar17 = 0;
                    puVar7 = (undefined8 *)
                             (param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + uVar3 * 8) * 4);
                    if ((uVar10 < 4) ||
                       ((puVar7 <= (undefined8 *)((longlong)puVar19 + (ulonglong)(uVar10 - 1) * 4)
                        && (puVar19 <=
                            (undefined8 *)((longlong)puVar7 + (ulonglong)(uVar10 - 1) * 4))))) {
                      do {
                        *(undefined4 *)((longlong)puVar7 + uVar17 * 4) =
                             *(undefined4 *)((longlong)puVar19 + uVar17 * 4);
                        uVar6 = (int)uVar17 + 1;
                        uVar17 = (ulonglong)uVar6;
                      } while (uVar6 < uVar10);
                    }
                    else {
                      FUN_1800fbec0(puVar7,puVar19,(ulonglong)uVar10 << 2);
                    }
                  }
                }
                uVar10 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar10;
              } while (uVar10 < *(uint *)(param_3 + 8));
            }
            param_1[0xd] = param_1[0xd] + (ulonglong)uVar14;
            uVar8 = 0;
            *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + 1;
            uVar14 = *(uint *)(param_1 + 0x1fd);
            if (*(int *)(param_3 + 8) != 0) {
              do {
                if (param_6[uVar8 * 2] != 0) {
                  uVar3 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar8);
                  uVar10 = (uint)(*(byte *)(param_3 + 0x16 + uVar3 * 8) >> 2);
                  if (uVar10 != 0) {
                    uVar17 = 0;
                    puVar7 = (undefined8 *)
                             (param_6[uVar8 * 2] +
                             (ulonglong)(uint)(local_res10 * *(int *)(param_6 + uVar8 * 2 + 1)));
                    puVar19 = (undefined8 *)
                              (param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + uVar3 * 8) * 4);
                    if ((uVar10 < 4) ||
                       ((puVar19 <= (undefined8 *)((longlong)puVar7 + (ulonglong)(uVar10 - 1) * 4)
                        && (puVar7 <= (undefined8 *)
                                      ((longlong)puVar19 + (ulonglong)(uVar10 - 1) * 4))))) {
                      do {
                        *(undefined4 *)((longlong)puVar19 + uVar17 * 4) =
                             *(undefined4 *)((longlong)puVar7 + uVar17 * 4);
                        uVar6 = (int)uVar17 + 1;
                        uVar17 = (ulonglong)uVar6;
                      } while (uVar6 < uVar10);
                    }
                    else {
                      FUN_1800fbec0(puVar19,puVar7,(ulonglong)uVar10 << 2);
                    }
                  }
                }
                uVar10 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar10;
              } while (uVar10 < *(uint *)(param_3 + 8));
            }
            param_1[0xd] = param_1[0xd] + (ulonglong)uVar14;
            *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + 1;
            uVar14 = *(uint *)(param_1 + 0x1fd);
            if (*(int *)(param_3 + 8) != 0) {
              uVar8 = 0;
              local_78 = 0;
              do {
                if (param_6[uVar8 * 2] != 0) {
                  iVar13 = 0;
                  puVar19 = (undefined8 *)
                            ((ulonglong)
                             (uint)((local_res10 + 1) * *(int *)(param_6 + uVar8 * 2 + 1)) +
                            param_6[uVar8 * 2]);
                  uVar3 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar8);
                  bVar1 = *(byte *)(param_3 + 0x16 + uVar3 * 8) >> 2;
                  uVar10 = (uint)bVar1;
                  if (uVar18 != 0) {
                    puVar7 = (undefined8 *)
                             (param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + uVar3 * 8) * 4);
                    local_70 = uVar18;
                    do {
                      if (bVar1 != 0) {
                        uVar3 = 0;
                        if ((uVar10 < 4) ||
                           ((puVar7 <= (undefined8 *)
                                       ((longlong)puVar19 + (ulonglong)(uVar10 - 1) * 4) &&
                            (puVar19 <=
                             (undefined8 *)((longlong)puVar7 + (ulonglong)(uVar10 - 1) * 4))))) {
                          do {
                            *(undefined4 *)((longlong)puVar7 + uVar3 * 4) =
                                 *(undefined4 *)((longlong)puVar19 + uVar3 * 4);
                            uVar6 = (int)uVar3 + 1;
                            uVar3 = (ulonglong)uVar6;
                          } while (uVar6 < uVar10);
                        }
                        else {
                          FUN_1800fbec0(puVar7,puVar19,(ulonglong)uVar10 << 2);
                        }
                      }
                      puVar7 = (undefined8 *)((longlong)puVar7 + (ulonglong)uVar14);
                      iVar13 = iVar13 + 1;
                      if (iVar13 == *(int *)((longlong)param_6 + uVar8 * 0x10 + 0xc)) {
                        puVar19 = (undefined8 *)
                                  ((longlong)puVar19 + (ulonglong)*(uint *)(param_6 + uVar8 * 2 + 1)
                                  );
                        iVar13 = 0;
                      }
                      local_70 = local_70 - 1;
                    } while (local_70 != 0);
                    uVar8 = (ulonglong)local_78;
                  }
                }
                local_78 = (int)uVar8 + 1;
                uVar8 = (ulonglong)local_78;
              } while (local_78 < *(uint *)(param_3 + 8));
            }
            param_1[0xd] = param_1[0xd] + (ulonglong)(uVar14 * uVar18);
          }
          iVar13 = *(int *)((longlong)param_1 + 0x74);
          uVar14 = 0;
          *(uint *)((longlong)param_1 + 0x74) = iVar13 + uVar18;
          if (uVar18 != 0) {
            do {
              uVar8 = 0;
              do {
                *(uint *)(param_1[0x11] + uVar8 * 4) = (int)uVar8 + iVar13 + -1 + uVar14;
                uVar10 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar10;
              } while ((int)uVar10 < 2);
              uVar14 = uVar14 + 1;
              *(int *)(param_1[0x11] + 8) = iVar13 + -2;
              param_1[0x11] = param_1[0x11] + 0xc;
            } while (uVar14 < uVar18);
          }
          *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + uVar18 * 3;
          local_res10 = local_res10 + uVar18;
        }
        return;
      }
    }
    uVar18 = uVar9 - 1;
    uVar14 = uVar18;
    if (uVar9 <= param_8) {
      do {
        iVar13 = *(int *)((longlong)param_1 + 0x74) + (int)param_1[0xe];
        if (0x1000U - iVar13 < 0x10) {
          (**(code **)(*param_1 + 0x1d8))(param_1);
          iVar13 = 0;
        }
        uVar10 = 0x1000U - iVar13 & 0xfffffffe;
        uVar9 = param_8;
        if (uVar10 <= param_8) {
          uVar9 = uVar10;
        }
        if (param_4 == '\0') {
          (**(code **)(*param_1 + 0x1e8))(param_1);
        }
        else {
          (**(code **)(*param_1 + 0x1e0))
                    (param_1,param_2,param_3,param_5,*(undefined4 *)(param_3 + 0xc),uVar9,0,param_10
                    );
        }
        (**(code **)(*param_1 + 0x1d8))(param_1);
        uVar10 = *(uint *)(param_1 + 0x1fd);
        if (param_9 == '\0') {
          if (param_7 == uVar10) {
            uVar11 = uVar10 * uVar14;
            puVar19 = (undefined8 *)param_1[0xd];
            puVar7 = (undefined8 *)((ulonglong)(local_74 * uVar10) + (longlong)param_6);
            for (uVar6 = uVar11 >> 4; uVar6 != 0; uVar6 = uVar6 - 1) {
              uVar2 = puVar7[1];
              *puVar19 = *puVar7;
              puVar19[1] = uVar2;
              puVar19 = puVar19 + 2;
              puVar7 = puVar7 + 2;
            }
            uVar10 = uVar11 >> 2 & 3;
            uVar8 = 0;
            if (uVar10 != 0) {
              do {
                uVar6 = (int)uVar8 + 1;
                *(undefined4 *)((longlong)puVar19 + uVar8 * 4) =
                     *(undefined4 *)((longlong)puVar7 + uVar8 * 4);
                uVar8 = (ulonglong)uVar6;
              } while (uVar6 < uVar10);
            }
            param_1[0xd] = param_1[0xd] + (ulonglong)uVar11;
            puVar19 = (undefined8 *)param_1[0xd];
          }
          else {
            uVar6 = 0;
            uVar11 = uVar10 >> 2 & 3;
            iVar13 = local_74;
            do {
              puVar19 = (undefined8 *)param_1[0xd];
              puVar7 = (undefined8 *)((ulonglong)(iVar13 * param_7) + (longlong)param_6);
              for (uVar12 = uVar10 >> 4; uVar12 != 0; uVar12 = uVar12 - 1) {
                uVar2 = puVar7[1];
                *puVar19 = *puVar7;
                puVar19[1] = uVar2;
                puVar19 = puVar19 + 2;
                puVar7 = puVar7 + 2;
              }
              uVar8 = 0;
              if (uVar11 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar19 + uVar8 * 4) =
                       *(undefined4 *)((longlong)puVar7 + uVar8 * 4);
                  uVar12 = (int)uVar8 + 1;
                  uVar8 = (ulonglong)uVar12;
                } while (uVar12 < uVar11);
              }
              iVar13 = iVar13 + 1;
              puVar19 = (undefined8 *)(param_1[0xd] + (ulonglong)uVar10);
              uVar6 = uVar6 + 1;
              param_1[0xd] = (longlong)puVar19;
            } while (uVar6 < uVar14);
          }
          *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + (local_6c - 1);
          uVar10 = *(uint *)(param_1 + 0x1fd);
          iVar5 = uVar9 - uVar14;
          iVar13 = (local_6c - 1) + local_74;
          if (param_7 == uVar10) {
            uVar6 = iVar5 * uVar10;
            puVar15 = (undefined8 *)((ulonglong)(uVar10 * iVar13) + (longlong)param_6);
            uVar10 = uVar6 >> 4;
            puVar7 = puVar19;
            puVar16 = puVar15;
            if (uVar6 >> 4 != 0) {
              do {
                puVar16 = puVar15 + 2;
                puVar7 = puVar19 + 2;
                uVar2 = puVar15[1];
                *puVar19 = *puVar15;
                puVar19[1] = uVar2;
                uVar10 = uVar10 - 1;
                puVar19 = puVar7;
                puVar15 = puVar16;
              } while (uVar10 != 0);
              uVar14 = local_6c - 1;
            }
            uVar10 = uVar6 >> 2 & 3;
            uVar8 = 0;
            if (uVar10 != 0) {
              do {
                uVar11 = (int)uVar8 + 1;
                *(undefined4 *)((longlong)puVar7 + uVar8 * 4) =
                     *(undefined4 *)((longlong)puVar16 + uVar8 * 4);
                uVar8 = (ulonglong)uVar11;
              } while (uVar11 < uVar10);
            }
            param_1[0xd] = param_1[0xd] + (ulonglong)uVar6;
          }
          else if (iVar5 != 0) {
            uVar6 = uVar10 >> 2 & 3;
            iVar4 = iVar5;
            do {
              puVar7 = (undefined8 *)((ulonglong)(iVar13 * param_7) + (longlong)param_6);
              for (uVar11 = uVar10 >> 4; uVar11 != 0; uVar11 = uVar11 - 1) {
                uVar2 = puVar7[1];
                *puVar19 = *puVar7;
                puVar19[1] = uVar2;
                puVar7 = puVar7 + 2;
                puVar19 = puVar19 + 2;
              }
              uVar8 = 0;
              if (uVar6 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar19 + uVar8 * 4) =
                       *(undefined4 *)((longlong)puVar7 + uVar8 * 4);
                  uVar11 = (int)uVar8 + 1;
                  uVar8 = (ulonglong)uVar11;
                } while (uVar11 < uVar6);
              }
              iVar13 = iVar13 + 1;
              puVar19 = (undefined8 *)(param_1[0xd] + (ulonglong)uVar10);
              param_1[0xd] = (longlong)puVar19;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        else {
          uVar8 = 0;
          if (*(int *)(param_3 + 8) != 0) {
            do {
              if (param_6[uVar8 * 2] != 0) {
                uVar3 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar8);
                iVar13 = 0;
                puVar7 = (undefined8 *)
                         ((ulonglong)(uint)(local_74 * *(int *)(param_6 + uVar8 * 2 + 1)) +
                         param_6[uVar8 * 2]);
                bVar1 = *(byte *)(param_3 + 0x16 + uVar3 * 8) >> 2;
                uVar14 = (uint)bVar1;
                local_78 = 0;
                puVar19 = (undefined8 *)
                          (param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + uVar3 * 8) * 4);
                do {
                  if (bVar1 != 0) {
                    uVar3 = 0;
                    if ((uVar14 < 4) ||
                       ((puVar19 <= (undefined8 *)((longlong)puVar7 + (ulonglong)(uVar14 - 1) * 4)
                        && (puVar7 <= (undefined8 *)
                                      ((longlong)puVar19 + (ulonglong)(uVar14 - 1) * 4))))) {
                      do {
                        *(undefined4 *)((longlong)puVar19 + uVar3 * 4) =
                             *(undefined4 *)((longlong)puVar7 + uVar3 * 4);
                        uVar6 = (int)uVar3 + 1;
                        uVar3 = (ulonglong)uVar6;
                      } while (uVar6 < uVar14);
                    }
                    else {
                      FUN_1800fbec0(puVar19,puVar7,(ulonglong)uVar14 << 2);
                    }
                  }
                  puVar19 = (undefined8 *)((longlong)puVar19 + (ulonglong)uVar10);
                  iVar13 = iVar13 + 1;
                  if (iVar13 == *(int *)((longlong)param_6 + uVar8 * 0x10 + 0xc)) {
                    puVar7 = (undefined8 *)
                             ((longlong)puVar7 + (ulonglong)*(uint *)(param_6 + uVar8 * 2 + 1));
                    iVar13 = 0;
                  }
                  local_78 = local_78 + 1;
                } while (local_78 < uVar18);
              }
              uVar6 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar6;
              uVar14 = uVar18;
            } while (uVar6 < *(uint *)(param_3 + 8));
          }
          param_1[0xd] = param_1[0xd] + (ulonglong)(uVar10 * uVar14);
          iVar5 = uVar9 - uVar14;
          *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + (local_6c - 1);
          uVar10 = *(uint *)(param_1 + 0x1fd);
          if (*(int *)(param_3 + 8) != 0) {
            uVar6 = 0;
            do {
              uVar8 = (ulonglong)uVar6;
              if (param_6[uVar8 * 2] != 0) {
                iVar13 = 0;
                uVar3 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar8);
                puVar19 = (undefined8 *)
                          ((ulonglong)
                           (((local_6c - 1) + local_74) * *(int *)(param_6 + uVar8 * 2 + 1)) +
                          param_6[uVar8 * 2]);
                bVar1 = *(byte *)(param_3 + 0x16 + uVar3 * 8) >> 2;
                uVar14 = (uint)bVar1;
                if (iVar5 != 0) {
                  puVar7 = (undefined8 *)
                           (param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + uVar3 * 8) * 4);
                  iVar4 = iVar5;
                  do {
                    if (bVar1 != 0) {
                      uVar3 = 0;
                      if ((uVar14 < 4) ||
                         ((puVar7 <= (undefined8 *)((longlong)puVar19 + (ulonglong)(uVar14 - 1) * 4)
                          && (puVar19 <=
                              (undefined8 *)((longlong)puVar7 + (ulonglong)(uVar14 - 1) * 4))))) {
                        do {
                          *(undefined4 *)((longlong)puVar7 + uVar3 * 4) =
                               *(undefined4 *)((longlong)puVar19 + uVar3 * 4);
                          uVar11 = (int)uVar3 + 1;
                          uVar3 = (ulonglong)uVar11;
                        } while (uVar11 < uVar14);
                      }
                      else {
                        FUN_1800fbec0(puVar7,puVar19,(ulonglong)uVar14 << 2);
                      }
                    }
                    puVar7 = (undefined8 *)((longlong)puVar7 + (ulonglong)uVar10);
                    iVar13 = iVar13 + 1;
                    if (iVar13 == *(int *)((longlong)param_6 + uVar8 * 0x10 + 0xc)) {
                      puVar19 = (undefined8 *)
                                ((longlong)puVar19 + (ulonglong)*(uint *)(param_6 + uVar8 * 2 + 1));
                      iVar13 = 0;
                    }
                    iVar4 = iVar4 + -1;
                  } while (iVar4 != 0);
                }
              }
              uVar6 = uVar6 + 1;
              uVar14 = uVar18;
            } while (uVar6 < *(uint *)(param_3 + 8));
          }
          param_1[0xd] = param_1[0xd] + (ulonglong)(iVar5 * uVar10);
        }
        local_74 = local_74 + iVar5;
        *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar5;
        param_8 = param_8 + (uVar14 - uVar9);
      } while (local_6c <= param_8);
    }
  }
  return;
}

