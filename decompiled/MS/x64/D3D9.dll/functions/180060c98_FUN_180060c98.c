/*
 * FUN_180060c98 at 180060c98
 * ulonglong __fastcall FUN_180060c98(longlong * param_1, int param_2, longlong param_3, char param_4, undefined8 param_5, longlong param_6, uint param_7, undefined8 param_8, uint * param_9, uint param_10, int param_11, char param_12, char param_13, undefined1 param_14, undefined1 param_15)
 * Address ranges: 180060c98-180063814
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180060c98(longlong *param_1,int param_2,longlong param_3,char param_4,
                       undefined8 param_5,longlong param_6,uint param_7,undefined8 param_8,
                       uint *param_9,uint param_10,int param_11,char param_12,char param_13,
                       undefined1 param_14,undefined1 param_15)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  undefined8 *puVar27;
  bool bVar28;
  uint local_res10;
  uint in_stack_ffffffffffffff58;
  uint local_98;
  uint local_94;
  int local_90;
  int local_88;
  uint local_70;
  uint local_6c;
  uint local_68;
  
  uVar5 = 0;
  uVar13 = 3;
  local_88 = 0;
  local_94 = 3;
  plVar18 = param_1 + 6;
  for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined4 *)plVar18 = 0;
    plVar18 = (longlong *)((longlong)plVar18 + 4);
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    local_94 = (param_2 == 2) + 1;
LAB_180062f14:
    uVar5 = (ulonglong)param_10 / (ulonglong)local_94;
    for (uVar13 = param_10 - param_10 % local_94; uVar13 != 0; uVar13 = uVar13 - uVar26) {
      if (((uint)((0x1000 - *(int *)((longlong)param_1 + 0x74)) - (int)param_1[0xe]) < 0x10) ||
         (iVar19 = *(int *)((longlong)param_1 + 0x94) + (int)param_1[0x12], 0x1000U - iVar19 < 0x10)
         ) {
        (**(code **)(*param_1 + 0x1d8))();
        iVar19 = 0;
      }
      uVar4 = (0x1000 - (0x1000U - iVar19) % local_94) - iVar19;
      uVar26 = uVar13;
      if (uVar4 <= uVar13) {
        uVar26 = uVar4;
      }
      if (param_4 == '\0') {
        (**(code **)(*param_1 + 0x1e8))
                  (param_1,param_2,param_5,*(undefined4 *)(param_3 + 0xc),uVar26,uVar26,param_15);
      }
      else {
        (**(code **)(*param_1 + 0x1e0))
                  (param_1,param_2,param_3,param_5,*(undefined4 *)(param_3 + 0xc),uVar26,uVar26,
                   param_14);
      }
      iVar19 = *(int *)((longlong)param_1 + 0x74);
      uVar4 = 0;
      uVar21 = 0;
      param_8._0_4_ = iVar19;
      if (param_13 == '\0') {
        uVar5 = 0;
        if (uVar26 != 0) {
          do {
            uVar6 = (ulonglong)(uint)(local_88 + (int)uVar5);
            if (param_12 == '\0') {
              uVar14 = (uint)*(ushort *)((longlong)param_9 + uVar6 * 2);
            }
            else {
              uVar14 = param_9[uVar6];
            }
            uVar11 = uVar14 + param_11;
            if ((param_12 != '\0') && (uVar11 >> 0x10 != *(uint *)(param_1 + 10))) {
              plVar18 = param_1 + 6;
              for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
                *(undefined4 *)plVar18 = 0;
                plVar18 = (longlong *)((longlong)plVar18 + 4);
              }
              *(uint *)(param_1 + 10) = uVar11 >> 0x10;
            }
            uVar12 = (ushort)uVar11;
            uVar6 = (ulonglong)uVar12;
            uVar2 = uVar12 >> 0xb;
            if (*(char *)((longlong)param_1 + (ulonglong)uVar2 + 0x30) == '\0') {
              *(undefined1 *)((longlong)param_1 + (ulonglong)uVar2 + 0x30) = 1;
              FUN_1800fbea0((undefined1 *)((ulonglong)uVar2 * 0x100 + param_1[5]),0,0x100);
              iVar19 = (uint)param_8;
            }
            bVar1 = *(byte *)(param_1[5] + (ulonglong)(uVar12 >> 3));
            if (((&DAT_180101670)[uVar11 & 7] & bVar1) == 0) {
              *(byte *)(param_1[5] + (ulonglong)(uVar12 >> 3)) =
                   bVar1 | (&DAT_180101670)[uVar11 & 7];
              *(short *)(param_1[4] + uVar6 * 2) = (short)iVar19;
              iVar19 = iVar19 + 1;
              param_8._0_4_ = iVar19;
              if (uVar4 == uVar21) {
LAB_1800636b1:
                uVar21 = param_11 + 1 + uVar14;
                uVar4 = uVar11;
              }
              else if (uVar11 == uVar21) {
                uVar21 = uVar21 + 1;
              }
              else if ((uVar11 < uVar4) || (uVar21 < uVar11)) {
                uVar20 = *(uint *)(param_1 + 0x1fd);
                iVar9 = uVar21 - uVar4;
                if (param_7 == uVar20) {
                  puVar17 = (undefined8 *)param_1[0xd];
                  puVar27 = (undefined8 *)((ulonglong)(uVar4 * uVar20) + param_6);
                  for (uVar21 = iVar9 * uVar20 >> 4; uVar21 != 0; uVar21 = uVar21 - 1) {
                    uVar3 = puVar27[1];
                    *puVar17 = *puVar27;
                    puVar17[1] = uVar3;
                    puVar17 = puVar17 + 2;
                    puVar27 = puVar27 + 2;
                  }
                  uVar4 = iVar9 * uVar20 >> 2 & 3;
                  uVar7 = 0;
                  if (uVar4 != 0) {
                    do {
                      uVar21 = (int)uVar7 + 1;
                      *(undefined4 *)((longlong)puVar17 + uVar7 * 4) =
                           *(undefined4 *)((longlong)puVar27 + uVar7 * 4);
                      uVar7 = (ulonglong)uVar21;
                    } while (uVar21 < uVar4);
                  }
                  param_1[0xd] = param_1[0xd] + (ulonglong)(iVar9 * uVar20);
                }
                else if (iVar9 != 0) {
                  uVar21 = uVar20 >> 2 & 3;
                  iVar22 = iVar9;
                  do {
                    puVar17 = (undefined8 *)param_1[0xd];
                    puVar27 = (undefined8 *)((ulonglong)(uVar4 * param_7) + param_6);
                    for (uVar16 = uVar20 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
                      uVar3 = puVar27[1];
                      *puVar17 = *puVar27;
                      puVar17[1] = uVar3;
                      puVar17 = puVar17 + 2;
                      puVar27 = puVar27 + 2;
                    }
                    uVar6 = 0;
                    if (uVar21 != 0) {
                      do {
                        *(undefined4 *)((longlong)puVar17 + uVar6 * 4) =
                             *(undefined4 *)((longlong)puVar27 + uVar6 * 4);
                        uVar16 = (int)uVar6 + 1;
                        uVar6 = (ulonglong)uVar16;
                      } while (uVar16 < uVar21);
                    }
                    param_1[0xd] = param_1[0xd] + (ulonglong)uVar20;
                    uVar4 = uVar4 + 1;
                    iVar22 = iVar22 + -1;
                  } while (iVar22 != 0);
                  uVar6 = (ulonglong)(uVar11 & 0xffff);
                }
                *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar9;
                goto LAB_1800636b1;
              }
            }
            *(uint *)(param_1[0x11] + uVar5 * 4) = (uint)*(ushort *)(param_1[4] + uVar6 * 2);
            uVar14 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar14;
          } while (uVar14 < uVar26);
          if (uVar21 != uVar4) {
            uVar14 = *(uint *)(param_1 + 0x1fd);
            iVar19 = uVar21 - uVar4;
            if (param_7 == uVar14) {
              puVar17 = (undefined8 *)param_1[0xd];
              puVar27 = (undefined8 *)((ulonglong)(uVar4 * uVar14) + param_6);
              for (uVar21 = uVar14 * iVar19 >> 4; uVar21 != 0; uVar21 = uVar21 - 1) {
                uVar3 = puVar27[1];
                *puVar17 = *puVar27;
                puVar17[1] = uVar3;
                puVar17 = puVar17 + 2;
                puVar27 = puVar27 + 2;
              }
              uVar4 = uVar14 * iVar19 >> 2 & 3;
              uVar5 = 0;
              if (uVar4 != 0) {
                do {
                  uVar21 = (int)uVar5 + 1;
                  *(undefined4 *)((longlong)puVar17 + uVar5 * 4) =
                       *(undefined4 *)((longlong)puVar27 + uVar5 * 4);
                  uVar5 = (ulonglong)uVar21;
                } while (uVar21 < uVar4);
              }
              param_1[0xd] = param_1[0xd] + (ulonglong)(uVar14 * iVar19);
            }
            else if (iVar19 != 0) {
              uVar21 = uVar14 >> 2 & 3;
              iVar9 = iVar19;
              do {
                puVar17 = (undefined8 *)param_1[0xd];
                puVar27 = (undefined8 *)((ulonglong)(uVar4 * param_7) + param_6);
                for (uVar11 = uVar14 >> 4; uVar11 != 0; uVar11 = uVar11 - 1) {
                  uVar3 = puVar27[1];
                  *puVar17 = *puVar27;
                  puVar17[1] = uVar3;
                  puVar17 = puVar17 + 2;
                  puVar27 = puVar27 + 2;
                }
                uVar5 = 0;
                if (uVar21 != 0) {
                  do {
                    *(undefined4 *)((longlong)puVar17 + uVar5 * 4) =
                         *(undefined4 *)((longlong)puVar27 + uVar5 * 4);
                    uVar11 = (int)uVar5 + 1;
                    uVar5 = (ulonglong)uVar11;
                  } while (uVar11 < uVar21);
                }
                param_1[0xd] = param_1[0xd] + (ulonglong)uVar14;
                uVar4 = uVar4 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar19;
          }
        }
      }
      else {
        local_6c = 0;
        if (uVar26 != 0) {
          do {
            if (param_12 == '\0') {
              uVar14 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)(local_88 + local_6c) * 2);
            }
            else {
              uVar14 = param_9[local_88 + local_6c];
            }
            uVar11 = uVar14 + param_11;
            if ((param_12 != '\0') && (uVar11 >> 0x10 != *(uint *)(param_1 + 10))) {
              plVar18 = param_1 + 6;
              for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
                *(undefined4 *)plVar18 = 0;
                plVar18 = (longlong *)((longlong)plVar18 + 4);
              }
              *(uint *)(param_1 + 10) = uVar11 >> 0x10;
            }
            uVar16 = uVar11 & 0xffff;
            uVar20 = uVar16 >> 0xb;
            if (*(char *)((longlong)param_1 + (ulonglong)uVar20 + 0x30) == '\0') {
              *(undefined1 *)((longlong)param_1 + (ulonglong)uVar20 + 0x30) = 1;
              FUN_1800fbea0((undefined1 *)((ulonglong)(uVar20 << 8) + param_1[5]),0,0x100);
              iVar19 = (uint)param_8;
            }
            bVar1 = *(byte *)(param_1[5] + (ulonglong)(uVar16 >> 3));
            if (((&DAT_180101670)[uVar11 & 7] & bVar1) == 0) {
              *(byte *)(param_1[5] + (ulonglong)(uVar16 >> 3)) =
                   bVar1 | (&DAT_180101670)[uVar11 & 7];
              *(short *)(param_1[4] + (ulonglong)uVar16 * 2) = (short)iVar19;
              iVar19 = iVar19 + 1;
              param_8._0_4_ = iVar19;
              if (uVar4 == uVar21) {
                uVar21 = param_11 + 1 + uVar14;
                uVar4 = uVar11;
              }
              else if (uVar11 == uVar21) {
                uVar21 = uVar21 + 1;
              }
              else if ((uVar11 < uVar4) || (uVar21 < uVar11)) {
                uVar5 = 0;
                uVar20 = *(uint *)(param_1 + 0x1fd);
                iVar9 = uVar21 - uVar4;
                local_68 = 0;
                if (*(int *)(param_3 + 8) != 0) {
                  do {
                    lVar8 = uVar5 * 0x10;
                    if (*(longlong *)(param_6 + lVar8) != 0) {
                      uVar6 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar5);
                      local_98 = 0;
                      bVar1 = *(byte *)(param_3 + 0x16 + uVar6 * 8) >> 2;
                      uVar21 = (uint)bVar1;
                      puVar17 = (undefined8 *)
                                ((ulonglong)(uVar4 * *(int *)(param_6 + 8 + lVar8)) +
                                *(longlong *)(param_6 + lVar8));
                      if (iVar9 != 0) {
                        puVar27 = (undefined8 *)
                                  (param_1[0xd] +
                                  (ulonglong)*(byte *)(param_3 + 0x17 + uVar6 * 8) * 4);
                        iVar22 = iVar9;
                        do {
                          if (bVar1 != 0) {
                            uVar6 = 0;
                            if ((uVar21 < 4) ||
                               ((puVar27 <=
                                 (undefined8 *)((longlong)puVar17 + (ulonglong)(uVar21 - 1) * 4) &&
                                (puVar17 <=
                                 (undefined8 *)((longlong)puVar27 + (ulonglong)(uVar21 - 1) * 4)))))
                            {
                              do {
                                *(undefined4 *)((longlong)puVar27 + uVar6 * 4) =
                                     *(undefined4 *)((longlong)puVar17 + uVar6 * 4);
                                uVar15 = (int)uVar6 + 1;
                                uVar6 = (ulonglong)uVar15;
                              } while (uVar15 < uVar21);
                            }
                            else {
                              FUN_1800fbec0(puVar27,puVar17,(ulonglong)uVar21 << 2);
                              uVar5 = (ulonglong)local_68;
                            }
                          }
                          local_98 = local_98 + 1;
                          puVar27 = (undefined8 *)((longlong)puVar27 + (ulonglong)uVar20);
                          if (local_98 == *(int *)(param_6 + 0xc + lVar8)) {
                            puVar17 = (undefined8 *)
                                      ((longlong)puVar17 +
                                      (ulonglong)*(uint *)(param_6 + 8 + uVar5 * 0x10));
                            local_98 = 0;
                          }
                          iVar22 = iVar22 + -1;
                        } while (iVar22 != 0);
                      }
                    }
                    local_68 = (int)uVar5 + 1;
                    uVar5 = (ulonglong)local_68;
                  } while (local_68 < *(uint *)(param_3 + 8));
                }
                *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar9;
                param_1[0xd] = param_1[0xd] + (ulonglong)(iVar9 * uVar20);
                uVar21 = uVar14 + 1 + param_11;
                uVar4 = uVar11;
              }
            }
            uVar5 = (ulonglong)local_6c;
            local_6c = local_6c + 1;
            *(uint *)(param_1[0x11] + uVar5 * 4) =
                 (uint)*(ushort *)(param_1[4] + (ulonglong)uVar16 * 2);
          } while (local_6c < uVar26);
          if (uVar21 != uVar4) {
            uVar14 = *(uint *)(param_1 + 0x1fd);
            iVar19 = uVar21 - uVar4;
            uVar5 = 0;
            if (*(int *)(param_3 + 8) != 0) {
              do {
                lVar8 = uVar5 * 0x10;
                if (*(longlong *)(param_6 + lVar8) != 0) {
                  uVar6 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar5);
                  param_8._0_4_ = 0;
                  bVar1 = *(byte *)(param_3 + 0x16 + uVar6 * 8) >> 2;
                  uVar21 = (uint)bVar1;
                  puVar17 = (undefined8 *)
                            ((ulonglong)(uVar4 * *(int *)(param_6 + 8 + lVar8)) +
                            *(longlong *)(param_6 + lVar8));
                  if (iVar19 != 0) {
                    puVar27 = (undefined8 *)
                              (param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + uVar6 * 8) * 4);
                    iVar9 = iVar19;
                    do {
                      if (bVar1 != 0) {
                        uVar6 = 0;
                        if ((uVar21 < 4) ||
                           ((puVar27 <=
                             (undefined8 *)((longlong)puVar17 + (ulonglong)(uVar21 - 1) * 4) &&
                            (puVar17 <=
                             (undefined8 *)((longlong)puVar27 + (ulonglong)(uVar21 - 1) * 4))))) {
                          do {
                            *(undefined4 *)((longlong)puVar27 + uVar6 * 4) =
                                 *(undefined4 *)((longlong)puVar17 + uVar6 * 4);
                            uVar11 = (int)uVar6 + 1;
                            uVar6 = (ulonglong)uVar11;
                          } while (uVar11 < uVar21);
                        }
                        else {
                          FUN_1800fbec0(puVar27,puVar17,(ulonglong)uVar21 << 2);
                        }
                      }
                      param_8._0_4_ = (uint)param_8 + 1;
                      puVar27 = (undefined8 *)((longlong)puVar27 + (ulonglong)uVar14);
                      if ((uint)param_8 == *(int *)(param_6 + 0xc + lVar8)) {
                        puVar17 = (undefined8 *)
                                  ((longlong)puVar17 +
                                  (ulonglong)*(uint *)(param_6 + 8 + uVar5 * 0x10));
                        param_8._0_4_ = 0;
                      }
                      iVar9 = iVar9 + -1;
                    } while (iVar9 != 0);
                  }
                }
                uVar21 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar21;
              } while (uVar21 < *(uint *)(param_3 + 8));
            }
            param_1[0xd] = param_1[0xd] + (ulonglong)(uVar14 * iVar19);
            *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar19;
          }
        }
      }
      uVar5 = param_1[0x11];
      local_88 = local_88 + uVar26;
      *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + uVar26;
      param_1[0x11] = uVar5 + (ulonglong)uVar26 * 4;
    }
  }
  else {
    if (param_2 == 3) {
      uVar13 = 2;
      local_94 = 2;
    }
    else {
      if (param_2 == 4) goto LAB_180062f14;
      if (param_2 != 5) {
        if (param_2 != 6) {
          return 0;
        }
        uVar5 = (ulonglong)param_10;
        if (param_10 < 3) {
          return uVar5;
        }
        uVar13 = param_10 - 2;
        do {
          if (uVar13 == 0) {
            return uVar5;
          }
          iVar19 = *(int *)((longlong)param_1 + 0x74) + (int)param_1[0xe];
          if ((0x1000U - iVar19 < 0x10) ||
             (iVar9 = *(int *)((longlong)param_1 + 0x94) + (int)param_1[0x12],
             0x1000U - iVar9 < 0x10)) {
            (**(code **)(*param_1 + 0x1d8))(param_1);
            iVar19 = 0;
            iVar9 = 0;
          }
          uVar26 = (0x1000U - iVar9) / 3;
          if (0xffeU - iVar19 < uVar26) {
            uVar26 = 0xffeU - iVar19;
          }
          uVar4 = uVar13;
          if (uVar26 <= uVar13) {
            uVar4 = uVar26;
          }
          uVar26 = uVar4 * 3;
          if (param_4 == '\0') {
            (**(code **)(*param_1 + 0x1e8))
                      (param_1,4,param_5,*(undefined4 *)(param_3 + 0xc),uVar4 + 2,uVar26,param_15);
          }
          else {
            (**(code **)(*param_1 + 0x1e0))
                      (param_1,4,param_3,param_5,*(undefined4 *)(param_3 + 0xc),uVar4 + 2,uVar26,
                       param_14);
          }
          local_90 = *(int *)((longlong)param_1 + 0x74);
          uVar5 = 0;
          param_8._0_4_ = 0;
          local_res10 = 0;
          local_6c = 0;
          if (param_13 == '\0') {
            if (uVar4 != 0) {
              do {
                uVar6 = (ulonglong)(local_88 + 1 + local_6c);
                bVar28 = param_12 == '\0';
                if (bVar28) {
                  uVar21 = (uint)*(ushort *)((longlong)param_9 + uVar6 * 2);
                }
                else {
                  uVar21 = param_9[uVar6];
                }
                uVar6 = (ulonglong)(local_6c + local_88 + 2);
                if (bVar28) {
                  uVar14 = (uint)*(ushort *)((longlong)param_9 + uVar6 * 2);
                  local_98 = (uint)(ushort)*param_9;
                }
                else {
                  local_98 = *param_9;
                  uVar14 = param_9[uVar6];
                }
                uVar11 = uVar21 + param_11;
                if ((!bVar28) && (uVar11 >> 0x10 != *(uint *)(param_1 + 10))) {
                  plVar18 = param_1 + 6;
                  for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
                    *(undefined4 *)plVar18 = 0;
                    plVar18 = (longlong *)((longlong)plVar18 + 4);
                  }
                  *(uint *)(param_1 + 10) = uVar11 >> 0x10;
                }
                uVar12 = (ushort)uVar11;
                uVar2 = uVar12 >> 0xb;
                uVar20 = (uint)uVar5;
                if (*(char *)((longlong)param_1 + (ulonglong)uVar2 + 0x30) == '\0') {
                  *(undefined1 *)((longlong)param_1 + (ulonglong)uVar2 + 0x30) = 1;
                  FUN_1800fbea0((undefined1 *)((ulonglong)uVar2 * 0x100 + param_1[5]),0,0x100);
                  uVar20 = (uint)param_8;
                }
                bVar1 = *(byte *)(param_1[5] + (ulonglong)(uVar12 >> 3));
                if (((&DAT_180101670)[uVar11 & 7] & bVar1) == 0) {
                  *(byte *)(param_1[5] + (ulonglong)(uVar12 >> 3)) =
                       bVar1 | (&DAT_180101670)[uVar11 & 7];
                  *(short *)(param_1[4] + (ulonglong)uVar12 * 2) = (short)local_90;
                  local_90 = local_90 + 1;
                  if (uVar20 == local_res10) {
LAB_180061930:
                    local_res10 = param_11 + 1 + uVar21;
                    param_8._0_4_ = uVar11;
                  }
                  else if (uVar11 == local_res10) {
                    local_res10 = local_res10 + 1;
                  }
                  else if ((uVar11 < uVar20) || (local_res10 < uVar11)) {
                    uVar16 = *(uint *)(param_1 + 0x1fd);
                    iVar19 = local_res10 - uVar20;
                    if (param_7 == uVar16) {
                      uVar25 = iVar19 * uVar16;
                      puVar17 = (undefined8 *)param_1[0xd];
                      puVar27 = (undefined8 *)((ulonglong)(uVar20 * uVar16) + param_6);
                      for (uVar15 = uVar25 >> 4; uVar15 != 0; uVar15 = uVar15 - 1) {
                        uVar3 = puVar27[1];
                        *puVar17 = *puVar27;
                        puVar17[1] = uVar3;
                        puVar17 = puVar17 + 2;
                        puVar27 = puVar27 + 2;
                      }
                      uVar20 = uVar25 >> 2 & 3;
                      uVar5 = 0;
                      if (uVar20 != 0) {
                        do {
                          uVar16 = (int)uVar5 + 1;
                          *(undefined4 *)((longlong)puVar17 + uVar5 * 4) =
                               *(undefined4 *)((longlong)puVar27 + uVar5 * 4);
                          uVar5 = (ulonglong)uVar16;
                        } while (uVar16 < uVar20);
                      }
                      param_1[0xd] = param_1[0xd] + (ulonglong)uVar25;
                    }
                    else if (iVar19 != 0) {
                      uVar20 = uVar16 >> 2 & 3;
                      iVar9 = iVar19;
                      do {
                        puVar17 = (undefined8 *)param_1[0xd];
                        puVar27 = (undefined8 *)((ulonglong)((uint)param_8 * param_7) + param_6);
                        for (uVar15 = uVar16 >> 4; uVar15 != 0; uVar15 = uVar15 - 1) {
                          uVar3 = puVar27[1];
                          *puVar17 = *puVar27;
                          puVar17[1] = uVar3;
                          puVar17 = puVar17 + 2;
                          puVar27 = puVar27 + 2;
                        }
                        uVar5 = 0;
                        if (uVar20 != 0) {
                          do {
                            *(undefined4 *)((longlong)puVar17 + uVar5 * 4) =
                                 *(undefined4 *)((longlong)puVar27 + uVar5 * 4);
                            uVar15 = (int)uVar5 + 1;
                            uVar5 = (ulonglong)uVar15;
                          } while (uVar15 < uVar20);
                        }
                        param_1[0xd] = param_1[0xd] + (ulonglong)uVar16;
                        param_8._0_4_ = (uint)param_8 + 1;
                        iVar9 = iVar9 + -1;
                      } while (iVar9 != 0);
                    }
                    *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar19
                    ;
                    goto LAB_180061930;
                  }
                }
                uVar21 = uVar14 + param_11;
                *(uint *)param_1[0x11] = (uint)*(ushort *)(param_1[4] + (ulonglong)uVar12 * 2);
                if ((param_12 != '\0') && (uVar21 >> 0x10 != *(uint *)(param_1 + 10))) {
                  plVar18 = param_1 + 6;
                  for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
                    *(undefined4 *)plVar18 = 0;
                    plVar18 = (longlong *)((longlong)plVar18 + 4);
                  }
                  *(uint *)(param_1 + 10) = uVar21 >> 0x10;
                }
                uVar12 = (ushort)uVar21;
                uVar2 = uVar12 >> 0xb;
                if (*(char *)((longlong)param_1 + (ulonglong)uVar2 + 0x30) == '\0') {
                  *(undefined1 *)((longlong)param_1 + (ulonglong)uVar2 + 0x30) = 1;
                  FUN_1800fbea0((undefined1 *)((ulonglong)uVar2 * 0x100 + param_1[5]),0,0x100);
                }
                bVar1 = *(byte *)(param_1[5] + (ulonglong)(uVar12 >> 3));
                if (((&DAT_180101670)[uVar21 & 7] & bVar1) == 0) {
                  *(byte *)(param_1[5] + (ulonglong)(uVar12 >> 3)) =
                       bVar1 | (&DAT_180101670)[uVar21 & 7];
                  *(short *)(param_1[4] + (ulonglong)uVar12 * 2) = (short)local_90;
                  local_90 = local_90 + 1;
                  if ((uint)param_8 == local_res10) {
                    local_res10 = uVar14 + 1 + param_11;
                    param_8._0_4_ = uVar21;
                  }
                  else if (uVar21 == local_res10) {
                    local_res10 = local_res10 + 1;
                  }
                  else if ((uVar21 < (uint)param_8) || (local_res10 < uVar21)) {
                    uVar11 = *(uint *)(param_1 + 0x1fd);
                    iVar19 = local_res10 - (uint)param_8;
                    if (param_7 == uVar11) {
                      uVar16 = iVar19 * uVar11;
                      puVar17 = (undefined8 *)param_1[0xd];
                      puVar27 = (undefined8 *)((ulonglong)((uint)param_8 * uVar11) + param_6);
                      for (uVar20 = uVar16 >> 4; uVar20 != 0; uVar20 = uVar20 - 1) {
                        uVar3 = puVar27[1];
                        *puVar17 = *puVar27;
                        puVar17[1] = uVar3;
                        puVar17 = puVar17 + 2;
                        puVar27 = puVar27 + 2;
                      }
                      uVar11 = uVar16 >> 2 & 3;
                      uVar5 = 0;
                      if (uVar11 != 0) {
                        do {
                          uVar20 = (int)uVar5 + 1;
                          *(undefined4 *)((longlong)puVar17 + uVar5 * 4) =
                               *(undefined4 *)((longlong)puVar27 + uVar5 * 4);
                          uVar5 = (ulonglong)uVar20;
                        } while (uVar20 < uVar11);
                      }
                      param_1[0xd] = param_1[0xd] + (ulonglong)uVar16;
                    }
                    else if (iVar19 != 0) {
                      uVar20 = uVar11 >> 2 & 3;
                      iVar9 = iVar19;
                      do {
                        puVar17 = (undefined8 *)param_1[0xd];
                        puVar27 = (undefined8 *)((ulonglong)((uint)param_8 * param_7) + param_6);
                        for (uVar16 = uVar11 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
                          uVar3 = puVar27[1];
                          *puVar17 = *puVar27;
                          puVar17[1] = uVar3;
                          puVar17 = puVar17 + 2;
                          puVar27 = puVar27 + 2;
                        }
                        uVar5 = 0;
                        if (uVar20 != 0) {
                          do {
                            *(undefined4 *)((longlong)puVar17 + uVar5 * 4) =
                                 *(undefined4 *)((longlong)puVar27 + uVar5 * 4);
                            uVar16 = (int)uVar5 + 1;
                            uVar5 = (ulonglong)uVar16;
                          } while (uVar16 < uVar20);
                        }
                        param_1[0xd] = param_1[0xd] + (ulonglong)uVar11;
                        param_8._0_4_ = (uint)param_8 + 1;
                        iVar9 = iVar9 + -1;
                      } while (iVar9 != 0);
                    }
                    *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar19
                    ;
                    local_res10 = param_11 + 1 + uVar14;
                    param_8._0_4_ = uVar21;
                  }
                }
                uVar21 = param_11 + local_98;
                *(uint *)(param_1[0x11] + 4) = (uint)*(ushort *)(param_1[4] + (ulonglong)uVar12 * 2)
                ;
                if ((param_12 != '\0') && (uVar21 >> 0x10 != *(uint *)(param_1 + 10))) {
                  plVar18 = param_1 + 6;
                  for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
                    *(undefined4 *)plVar18 = 0;
                    plVar18 = (longlong *)((longlong)plVar18 + 4);
                  }
                  *(uint *)(param_1 + 10) = uVar21 >> 0x10;
                }
                uVar12 = (ushort)uVar21;
                uVar2 = uVar12 >> 0xb;
                if (*(char *)((longlong)param_1 + (ulonglong)uVar2 + 0x30) == '\0') {
                  *(undefined1 *)((longlong)param_1 + (ulonglong)uVar2 + 0x30) = 1;
                  FUN_1800fbea0((undefined1 *)((ulonglong)uVar2 * 0x100 + param_1[5]),0,0x100);
                }
                uVar5 = (ulonglong)(uint)param_8;
                bVar1 = *(byte *)(param_1[5] + (ulonglong)(uVar12 >> 3));
                if (((&DAT_180101670)[uVar21 & 7] & bVar1) == 0) {
                  *(byte *)(param_1[5] + (ulonglong)(uVar12 >> 3)) =
                       bVar1 | (&DAT_180101670)[uVar21 & 7];
                  *(short *)(param_1[4] + (ulonglong)uVar12 * 2) = (short)local_90;
                  local_90 = local_90 + 1;
                  if ((uint)param_8 == local_res10) {
LAB_180061d82:
                    local_res10 = local_98 + 1 + param_11;
                    uVar5 = (ulonglong)uVar21;
                    param_8._0_4_ = uVar21;
                  }
                  else if (uVar21 == local_res10) {
                    local_res10 = local_res10 + 1;
                  }
                  else if ((uVar21 < (uint)param_8) || (local_res10 < uVar21)) {
                    uVar14 = *(uint *)(param_1 + 0x1fd);
                    iVar19 = local_res10 - (uint)param_8;
                    if (param_7 == uVar14) {
                      uVar20 = iVar19 * uVar14;
                      puVar17 = (undefined8 *)param_1[0xd];
                      puVar27 = (undefined8 *)((ulonglong)((uint)param_8 * uVar14) + param_6);
                      for (uVar11 = uVar20 >> 4; uVar11 != 0; uVar11 = uVar11 - 1) {
                        uVar3 = puVar27[1];
                        *puVar17 = *puVar27;
                        puVar17[1] = uVar3;
                        puVar17 = puVar17 + 2;
                        puVar27 = puVar27 + 2;
                      }
                      uVar14 = uVar20 >> 2 & 3;
                      uVar5 = 0;
                      if (uVar14 != 0) {
                        do {
                          uVar11 = (int)uVar5 + 1;
                          *(undefined4 *)((longlong)puVar17 + uVar5 * 4) =
                               *(undefined4 *)((longlong)puVar27 + uVar5 * 4);
                          uVar5 = (ulonglong)uVar11;
                        } while (uVar11 < uVar14);
                      }
                      param_1[0xd] = param_1[0xd] + (ulonglong)uVar20;
                    }
                    else if (iVar19 != 0) {
                      uVar11 = uVar14 >> 2 & 3;
                      iVar9 = iVar19;
                      do {
                        puVar17 = (undefined8 *)param_1[0xd];
                        puVar27 = (undefined8 *)((ulonglong)((uint)param_8 * param_7) + param_6);
                        for (uVar20 = uVar14 >> 4; uVar20 != 0; uVar20 = uVar20 - 1) {
                          uVar3 = puVar27[1];
                          *puVar17 = *puVar27;
                          puVar17[1] = uVar3;
                          puVar17 = puVar17 + 2;
                          puVar27 = puVar27 + 2;
                        }
                        uVar5 = 0;
                        if (uVar11 != 0) {
                          do {
                            *(undefined4 *)((longlong)puVar17 + uVar5 * 4) =
                                 *(undefined4 *)((longlong)puVar27 + uVar5 * 4);
                            uVar20 = (int)uVar5 + 1;
                            uVar5 = (ulonglong)uVar20;
                          } while (uVar20 < uVar11);
                        }
                        param_1[0xd] = param_1[0xd] + (ulonglong)uVar14;
                        param_8._0_4_ = (uint)param_8 + 1;
                        iVar9 = iVar9 + -1;
                      } while (iVar9 != 0);
                    }
                    *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar19
                    ;
                    goto LAB_180061d82;
                  }
                }
                local_6c = local_6c + 1;
                *(uint *)(param_1[0x11] + 8) = (uint)*(ushort *)(param_1[4] + (ulonglong)uVar12 * 2)
                ;
                param_1[0x11] = param_1[0x11] + 0xc;
              } while (local_6c < uVar4);
              uVar21 = (uint)uVar5;
              if (local_res10 != uVar21) {
                uVar14 = *(uint *)(param_1 + 0x1fd);
                iVar19 = local_res10 - uVar21;
                if (param_7 == uVar14) {
                  uVar20 = uVar14 * iVar19;
                  puVar17 = (undefined8 *)param_1[0xd];
                  puVar27 = (undefined8 *)((ulonglong)(uVar14 * uVar21) + param_6);
                  for (uVar11 = uVar20 >> 4; uVar11 != 0; uVar11 = uVar11 - 1) {
                    uVar3 = puVar27[1];
                    *puVar17 = *puVar27;
                    puVar17[1] = uVar3;
                    puVar17 = puVar17 + 2;
                    puVar27 = puVar27 + 2;
                  }
                  uVar21 = uVar20 >> 2 & 3;
                  uVar5 = 0;
                  if (uVar21 != 0) {
                    do {
                      uVar14 = (int)uVar5 + 1;
                      *(undefined4 *)((longlong)puVar17 + uVar5 * 4) =
                           *(undefined4 *)((longlong)puVar27 + uVar5 * 4);
                      uVar5 = (ulonglong)uVar14;
                    } while (uVar14 < uVar21);
                  }
                  param_1[0xd] = param_1[0xd] + (ulonglong)uVar20;
                }
                else if (iVar19 != 0) {
                  uVar21 = uVar14 >> 2 & 3;
                  iVar9 = iVar19;
                  do {
                    puVar17 = (undefined8 *)param_1[0xd];
                    puVar27 = (undefined8 *)((ulonglong)((uint)param_8 * param_7) + param_6);
                    for (uVar11 = uVar14 >> 4; uVar11 != 0; uVar11 = uVar11 - 1) {
                      uVar3 = puVar27[1];
                      *puVar17 = *puVar27;
                      puVar17[1] = uVar3;
                      puVar17 = puVar17 + 2;
                      puVar27 = puVar27 + 2;
                    }
                    uVar5 = 0;
                    if (uVar21 != 0) {
                      do {
                        *(undefined4 *)((longlong)puVar17 + uVar5 * 4) =
                             *(undefined4 *)((longlong)puVar27 + uVar5 * 4);
                        uVar11 = (int)uVar5 + 1;
                        uVar5 = (ulonglong)uVar11;
                      } while (uVar11 < uVar21);
                    }
                    param_1[0xd] = param_1[0xd] + (ulonglong)uVar14;
                    param_8._0_4_ = (uint)param_8 + 1;
                    iVar9 = iVar9 + -1;
                  } while (iVar9 != 0);
                }
                *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar19;
              }
            }
          }
          else if (uVar4 != 0) {
            do {
              uVar6 = (ulonglong)(local_88 + 1 + local_6c);
              if (param_12 == '\0') {
                uVar21 = (uint)*(ushort *)((longlong)param_9 + uVar6 * 2);
              }
              else {
                uVar21 = param_9[uVar6];
              }
              uVar6 = (ulonglong)(local_6c + local_88 + 2);
              if (param_12 == '\0') {
                uVar14 = (uint)*(ushort *)((longlong)param_9 + uVar6 * 2);
                uVar11 = (uint)(ushort)*param_9;
              }
              else {
                uVar14 = param_9[uVar6];
                uVar11 = *param_9;
              }
              uVar20 = param_11 + uVar21;
              if ((param_12 != '\0') && (uVar20 >> 0x10 != *(uint *)(param_1 + 10))) {
                plVar18 = param_1 + 6;
                for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *(undefined4 *)plVar18 = 0;
                  plVar18 = (longlong *)((longlong)plVar18 + 4);
                }
                *(uint *)(param_1 + 10) = uVar20 >> 0x10;
              }
              uVar15 = uVar20 & 0xffff;
              uVar16 = uVar15 >> 0xb;
              if (*(char *)((longlong)param_1 + (ulonglong)uVar16 + 0x30) == '\0') {
                *(undefined1 *)((longlong)param_1 + (ulonglong)uVar16 + 0x30) = 1;
                FUN_1800fbea0((undefined1 *)((ulonglong)(uVar16 << 8) + param_1[5]),0,0x100);
                uVar5 = (ulonglong)(uint)param_8;
              }
              bVar1 = *(byte *)(param_1[5] + (ulonglong)(uVar15 >> 3));
              if (((&DAT_180101670)[uVar20 & 7] & bVar1) == 0) {
                *(byte *)(param_1[5] + (ulonglong)(uVar15 >> 3)) =
                     bVar1 | (&DAT_180101670)[uVar20 & 7];
                *(short *)(param_1[4] + (ulonglong)uVar15 * 2) = (short)local_90;
                local_90 = local_90 + 1;
                uVar16 = (uint)uVar5;
                if (uVar16 == local_res10) {
LAB_180060f6c:
                  local_res10 = param_11 + 1 + uVar21;
                  param_8._0_4_ = uVar20;
                }
                else if (uVar20 == local_res10) {
                  local_res10 = local_res10 + 1;
                }
                else if ((uVar20 < uVar16) || (local_res10 < uVar20)) {
                  iVar19 = local_res10 - uVar16;
                  uVar16 = *(uint *)(param_1 + 0x1fd);
                  local_70 = 0;
                  if (*(int *)(param_3 + 8) != 0) {
                    do {
                      lVar8 = (ulonglong)local_70 * 0x10;
                      if (*(longlong *)(param_6 + lVar8) != 0) {
                        uVar6 = (ulonglong)*(byte *)(param_3 + 0x214 + (ulonglong)local_70);
                        iVar9 = 0;
                        bVar1 = *(byte *)(param_3 + 0x16 + uVar6 * 8) >> 2;
                        uVar25 = (uint)bVar1;
                        puVar17 = (undefined8 *)
                                  ((ulonglong)(uint)((int)uVar5 * *(int *)(param_6 + 8 + lVar8)) +
                                  *(longlong *)(param_6 + lVar8));
                        if (iVar19 != 0) {
                          puVar27 = (undefined8 *)
                                    (param_1[0xd] +
                                    (ulonglong)*(byte *)(param_3 + 0x17 + uVar6 * 8) * 4);
                          iVar22 = iVar19;
                          do {
                            if (bVar1 != 0) {
                              uVar5 = 0;
                              if ((uVar25 < 4) ||
                                 ((puVar27 <=
                                   (undefined8 *)((longlong)puVar17 + (ulonglong)(uVar25 - 1) * 4)
                                  && (puVar17 <=
                                      (undefined8 *)
                                      ((longlong)puVar27 + (ulonglong)(uVar25 - 1) * 4))))) {
                                do {
                                  *(undefined4 *)((longlong)puVar27 + uVar5 * 4) =
                                       *(undefined4 *)((longlong)puVar17 + uVar5 * 4);
                                  uVar10 = (int)uVar5 + 1;
                                  uVar5 = (ulonglong)uVar10;
                                } while (uVar10 < uVar25);
                              }
                              else {
                                FUN_1800fbec0(puVar27,puVar17,(ulonglong)uVar25 << 2);
                              }
                            }
                            puVar27 = (undefined8 *)((longlong)puVar27 + (ulonglong)uVar16);
                            iVar9 = iVar9 + 1;
                            if (iVar9 == *(int *)(param_6 + 0xc + lVar8)) {
                              puVar17 = (undefined8 *)
                                        ((longlong)puVar17 +
                                        (ulonglong)*(uint *)(param_6 + 8 + lVar8));
                              iVar9 = 0;
                            }
                            iVar22 = iVar22 + -1;
                          } while (iVar22 != 0);
                          uVar5 = (ulonglong)(uint)param_8;
                        }
                      }
                      local_70 = local_70 + 1;
                    } while (local_70 < *(uint *)(param_3 + 8));
                  }
                  *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar19;
                  param_1[0xd] = param_1[0xd] + (ulonglong)(iVar19 * uVar16);
                  goto LAB_180060f6c;
                }
              }
              uVar21 = param_11 + uVar14;
              *(uint *)param_1[0x11] = (uint)*(ushort *)(param_1[4] + (ulonglong)uVar15 * 2);
              if ((param_12 != '\0') && (uVar21 >> 0x10 != *(uint *)(param_1 + 10))) {
                plVar18 = param_1 + 6;
                for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *(undefined4 *)plVar18 = 0;
                  plVar18 = (longlong *)((longlong)plVar18 + 4);
                }
                *(uint *)(param_1 + 10) = uVar21 >> 0x10;
              }
              uVar16 = uVar21 & 0xffff;
              uVar20 = uVar16 >> 0xb;
              if (*(char *)((longlong)param_1 + (ulonglong)uVar20 + 0x30) == '\0') {
                *(undefined1 *)((longlong)param_1 + (ulonglong)uVar20 + 0x30) = 1;
                FUN_1800fbea0((undefined1 *)((ulonglong)(uVar20 << 8) + param_1[5]),0,0x100);
              }
              uVar5 = 0;
              bVar1 = *(byte *)(param_1[5] + (ulonglong)(uVar16 >> 3));
              if (((&DAT_180101670)[uVar21 & 7] & bVar1) == 0) {
                *(byte *)(param_1[5] + (ulonglong)(uVar16 >> 3)) =
                     bVar1 | (&DAT_180101670)[uVar21 & 7];
                *(short *)(param_1[4] + (ulonglong)uVar16 * 2) = (short)local_90;
                local_90 = local_90 + 1;
                if ((uint)param_8 == local_res10) {
LAB_18006106b:
                  local_res10 = param_11 + 1 + uVar14;
                  param_8._0_4_ = uVar21;
                }
                else if (uVar21 == local_res10) {
                  local_res10 = local_res10 + 1;
                }
                else if ((uVar21 < (uint)param_8) || (local_res10 < uVar21)) {
                  iVar19 = local_res10 - (uint)param_8;
                  uVar20 = *(uint *)(param_1 + 0x1fd);
                  local_98 = 0;
                  if (*(int *)(param_3 + 8) != 0) {
                    do {
                      iVar9 = 0;
                      lVar8 = uVar5 * 0x10;
                      uVar15 = (uint)uVar5;
                      if (*(longlong *)(param_6 + lVar8) != 0) {
                        uVar5 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar5);
                        bVar1 = *(byte *)(param_3 + 0x16 + uVar5 * 8) >> 2;
                        uVar25 = (uint)bVar1;
                        puVar17 = (undefined8 *)
                                  ((ulonglong)((uint)param_8 * *(int *)(param_6 + 8 + lVar8)) +
                                  *(longlong *)(param_6 + lVar8));
                        if (iVar19 != 0) {
                          puVar27 = (undefined8 *)
                                    (param_1[0xd] +
                                    (ulonglong)*(byte *)(param_3 + 0x17 + uVar5 * 8) * 4);
                          local_res10 = iVar19;
                          do {
                            if (bVar1 != 0) {
                              uVar5 = 0;
                              if ((uVar25 < 4) ||
                                 ((puVar27 <=
                                   (undefined8 *)((longlong)puVar17 + (ulonglong)(uVar25 - 1) * 4)
                                  && (uVar5 = 0,
                                     puVar17 <=
                                     (undefined8 *)((longlong)puVar27 + (ulonglong)(uVar25 - 1) * 4)
                                     )))) {
                                do {
                                  uVar15 = (int)uVar5 + 1;
                                  *(undefined4 *)((longlong)puVar27 + uVar5 * 4) =
                                       *(undefined4 *)((longlong)puVar17 + uVar5 * 4);
                                  uVar5 = (ulonglong)uVar15;
                                } while (uVar15 < uVar25);
                              }
                              else {
                                FUN_1800fbec0(puVar27,puVar17,(ulonglong)uVar25 << 2);
                              }
                            }
                            puVar27 = (undefined8 *)((longlong)puVar27 + (ulonglong)uVar20);
                            iVar9 = iVar9 + 1;
                            if (iVar9 == *(int *)(param_6 + 0xc + lVar8)) {
                              puVar17 = (undefined8 *)
                                        ((longlong)puVar17 +
                                        (ulonglong)*(uint *)(param_6 + 8 + lVar8));
                              iVar9 = 0;
                            }
                            local_res10 = local_res10 + -1;
                            uVar15 = local_98;
                          } while (local_res10 != 0);
                        }
                      }
                      local_98 = uVar15 + 1;
                      uVar5 = (ulonglong)local_98;
                    } while (local_98 < *(uint *)(param_3 + 8));
                  }
                  param_1[0xd] = param_1[0xd] + (ulonglong)(iVar19 * uVar20);
                  *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar19;
                  goto LAB_18006106b;
                }
              }
              uVar21 = uVar11 + param_11;
              *(uint *)(param_1[0x11] + 4) = (uint)*(ushort *)(param_1[4] + (ulonglong)uVar16 * 2);
              if ((param_12 != '\0') && (uVar21 >> 0x10 != *(uint *)(param_1 + 10))) {
                plVar18 = param_1 + 6;
                for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *(undefined4 *)plVar18 = 0;
                  plVar18 = (longlong *)((longlong)plVar18 + 4);
                }
                *(uint *)(param_1 + 10) = uVar21 >> 0x10;
              }
              uVar6 = (ulonglong)uVar21 & 0xffff;
              uVar5 = uVar6 >> 0xb;
              if (*(char *)((longlong)param_1 + uVar5 + 0x30) == '\0') {
                *(undefined1 *)((longlong)param_1 + uVar5 + 0x30) = 1;
                FUN_1800fbea0((undefined1 *)((ulonglong)(uint)((int)uVar5 << 8) + param_1[5]),0,
                              0x100);
              }
              uVar5 = (ulonglong)(uint)param_8;
              bVar1 = *(byte *)(param_1[5] + (uVar6 >> 3));
              if (((&DAT_180101670)[(uint)uVar6 & 7] & bVar1) == 0) {
                *(byte *)(param_1[5] + (uVar6 >> 3)) = bVar1 | (&DAT_180101670)[(uint)uVar6 & 7];
                *(short *)(param_1[4] + uVar6 * 2) = (short)local_90;
                local_90 = local_90 + 1;
                if ((uint)param_8 == local_res10) {
                  local_res10 = param_11 + 1 + uVar11;
                  uVar5 = (ulonglong)uVar21;
                  param_8._0_4_ = uVar21;
                }
                else if (uVar21 == local_res10) {
                  local_res10 = local_res10 + 1;
                }
                else if ((uVar21 < (uint)param_8) || (local_res10 < uVar21)) {
                  iVar19 = local_res10 - (uint)param_8;
                  uVar14 = *(uint *)(param_1 + 0x1fd);
                  if (*(int *)(param_3 + 8) != 0) {
                    uVar20 = 0;
                    do {
                      lVar8 = (ulonglong)uVar20 * 0x10;
                      if (*(longlong *)(param_6 + lVar8) != 0) {
                        uVar5 = (ulonglong)*(byte *)(param_3 + 0x214 + (ulonglong)uVar20);
                        iVar9 = 0;
                        bVar1 = *(byte *)(param_3 + 0x16 + uVar5 * 8) >> 2;
                        uVar16 = (uint)bVar1;
                        puVar17 = (undefined8 *)
                                  ((ulonglong)((uint)param_8 * *(int *)(param_6 + 8 + lVar8)) +
                                  *(longlong *)(param_6 + lVar8));
                        if (iVar19 != 0) {
                          puVar27 = (undefined8 *)
                                    (param_1[0xd] +
                                    (ulonglong)*(byte *)(param_3 + 0x17 + uVar5 * 8) * 4);
                          iVar22 = iVar19;
                          do {
                            if (bVar1 != 0) {
                              uVar5 = 0;
                              if ((uVar16 < 4) ||
                                 ((puVar27 <=
                                   (undefined8 *)((longlong)puVar17 + (ulonglong)(uVar16 - 1) * 4)
                                  && (puVar17 <=
                                      (undefined8 *)
                                      ((longlong)puVar27 + (ulonglong)(uVar16 - 1) * 4))))) {
                                do {
                                  *(undefined4 *)((longlong)puVar27 + uVar5 * 4) =
                                       *(undefined4 *)((longlong)puVar17 + uVar5 * 4);
                                  uVar15 = (int)uVar5 + 1;
                                  uVar5 = (ulonglong)uVar15;
                                } while (uVar15 < uVar16);
                              }
                              else {
                                FUN_1800fbec0(puVar27,puVar17,(ulonglong)uVar16 << 2);
                              }
                            }
                            puVar27 = (undefined8 *)((longlong)puVar27 + (ulonglong)uVar14);
                            iVar9 = iVar9 + 1;
                            if (iVar9 == *(int *)(param_6 + 0xc + lVar8)) {
                              puVar17 = (undefined8 *)
                                        ((longlong)puVar17 +
                                        (ulonglong)*(uint *)(param_6 + 8 + lVar8));
                              iVar9 = 0;
                            }
                            iVar22 = iVar22 + -1;
                          } while (iVar22 != 0);
                        }
                      }
                      uVar20 = uVar20 + 1;
                    } while (uVar20 < *(uint *)(param_3 + 8));
                  }
                  *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar19;
                  param_1[0xd] = param_1[0xd] + (ulonglong)(iVar19 * uVar14);
                  local_res10 = param_11 + 1 + uVar11;
                  uVar5 = (ulonglong)uVar21;
                  param_8._0_4_ = uVar21;
                }
              }
              local_6c = local_6c + 1;
              *(uint *)(param_1[0x11] + 8) = (uint)*(ushort *)(param_1[4] + uVar6 * 2);
              param_1[0x11] = param_1[0x11] + 0xc;
            } while (local_6c < uVar4);
            if (local_res10 != (uint)uVar5) {
              uVar21 = *(uint *)(param_1 + 0x1fd);
              iVar19 = local_res10 - (uint)uVar5;
              uVar6 = 0;
              if (*(int *)(param_3 + 8) != 0) {
                do {
                  lVar8 = uVar6 * 0x10;
                  if (*(longlong *)(param_6 + lVar8) != 0) {
                    uVar7 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar6);
                    iVar9 = 0;
                    bVar1 = *(byte *)(param_3 + 0x16 + uVar7 * 8) >> 2;
                    uVar14 = (uint)bVar1;
                    puVar17 = (undefined8 *)
                              ((ulonglong)(uint)((int)uVar5 * *(int *)(param_6 + 8 + lVar8)) +
                              *(longlong *)(param_6 + lVar8));
                    if (iVar19 != 0) {
                      puVar27 = (undefined8 *)
                                (param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + uVar7 * 8) * 4
                                );
                      iVar22 = iVar19;
                      do {
                        if (bVar1 != 0) {
                          uVar5 = 0;
                          if ((uVar14 < 4) ||
                             ((puVar27 <=
                               (undefined8 *)((longlong)puVar17 + (ulonglong)(uVar14 - 1) * 4) &&
                              (puVar17 <=
                               (undefined8 *)((longlong)puVar27 + (ulonglong)(uVar14 - 1) * 4))))) {
                            do {
                              *(undefined4 *)((longlong)puVar27 + uVar5 * 4) =
                                   *(undefined4 *)((longlong)puVar17 + uVar5 * 4);
                              uVar11 = (int)uVar5 + 1;
                              uVar5 = (ulonglong)uVar11;
                            } while (uVar11 < uVar14);
                          }
                          else {
                            FUN_1800fbec0(puVar27,puVar17,(ulonglong)uVar14 << 2);
                          }
                        }
                        puVar27 = (undefined8 *)((longlong)puVar27 + (ulonglong)uVar21);
                        iVar9 = iVar9 + 1;
                        if (iVar9 == *(int *)(param_6 + 0xc + lVar8)) {
                          puVar17 = (undefined8 *)
                                    ((longlong)puVar17 + (ulonglong)*(uint *)(param_6 + 8 + lVar8));
                          iVar9 = 0;
                        }
                        iVar22 = iVar22 + -1;
                      } while (iVar22 != 0);
                      uVar5 = (ulonglong)(uint)param_8;
                    }
                  }
                  uVar14 = (int)uVar6 + 1;
                  uVar6 = (ulonglong)uVar14;
                } while (uVar14 < *(uint *)(param_3 + 8));
              }
              param_1[0xd] = param_1[0xd] + (ulonglong)(iVar19 * uVar21);
              *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar19;
            }
          }
          uVar13 = uVar13 - uVar4;
          local_88 = local_88 + uVar4;
          uVar5 = (ulonglong)uVar26;
          *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + uVar26;
        } while( true );
      }
    }
    uVar26 = uVar13 - 1;
    if (uVar13 <= param_10) {
      do {
        if (((uint)((0x1000 - *(int *)((longlong)param_1 + 0x74)) - (int)param_1[0xe]) < 0x10) ||
           (iVar19 = *(int *)((longlong)param_1 + 0x94) + (int)param_1[0x12],
           0x1000U - iVar19 < 0x10)) {
          (**(code **)(*param_1 + 0x1d8))(param_1,1);
          iVar19 = 0;
        }
        uVar4 = 0x1000U - iVar19 & 0xfffffffe;
        uVar13 = param_10;
        if (uVar4 <= param_10) {
          uVar13 = uVar4;
        }
        if (param_4 == '\0') {
          in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffff00;
          (**(code **)(*param_1 + 0x1e8))
                    (param_1,param_2,param_5,*(undefined4 *)(param_3 + 0xc),uVar13,uVar13,
                     in_stack_ffffffffffffff58);
        }
        else {
          in_stack_ffffffffffffff58 = uVar13;
          (**(code **)(*param_1 + 0x1e0))
                    (param_1,param_2,param_3,param_5,*(undefined4 *)(param_3 + 0xc),uVar13,uVar13,
                     param_14);
        }
        if ((*(int *)((longlong)param_1 + 0x1c) == 0) ||
           (((*(int *)((longlong)param_1 + 0x74) == 0 && (*(int *)((longlong)param_1 + 0x94) == 0))
            || (0xfff < uVar13 + iVar19)))) {
          (**(code **)(*param_1 + 0x1d8))(param_1);
        }
        else {
          *(int *)param_1[0x11] = *(int *)((longlong)param_1 + 0x1c);
          param_1[0x11] = param_1[0x11] + 4;
          *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
        }
        iVar19 = *(int *)((longlong)param_1 + 0x74);
        uVar4 = 0;
        param_8._0_4_ = 0;
        if (param_13 == '\0') {
          uVar5 = 0;
          iVar9 = iVar19;
          do {
            uVar6 = (ulonglong)(uint)(local_88 + (int)uVar5);
            if (param_12 == '\0') {
              uVar21 = (uint)*(ushort *)((longlong)param_9 + uVar6 * 2);
            }
            else {
              uVar21 = param_9[uVar6];
            }
            uVar14 = uVar21 + param_11;
            if ((param_12 != '\0') && (uVar14 >> 0x10 != *(uint *)(param_1 + 10))) {
              plVar18 = param_1 + 6;
              for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
                *(undefined4 *)plVar18 = 0;
                plVar18 = (longlong *)((longlong)plVar18 + 4);
              }
              *(uint *)(param_1 + 10) = uVar14 >> 0x10;
            }
            uVar20 = uVar14 & 0xffff;
            uVar11 = uVar20 >> 0xb;
            if (*(char *)((longlong)param_1 + (ulonglong)uVar11 + 0x30) == '\0') {
              *(undefined1 *)((longlong)param_1 + (ulonglong)uVar11 + 0x30) = 1;
              FUN_1800fbea0((undefined1 *)((ulonglong)(uVar11 << 8) + param_1[5]),0,0x100);
              iVar19 = iVar9;
            }
            bVar1 = *(byte *)(param_1[5] + (ulonglong)(uVar20 >> 3));
            if (((&DAT_180101670)[uVar14 & 7] & bVar1) == 0) {
              *(byte *)(param_1[5] + (ulonglong)(uVar20 >> 3)) =
                   bVar1 | (&DAT_180101670)[uVar14 & 7];
              *(short *)(param_1[4] + (ulonglong)uVar20 * 2) = (short)iVar19;
              iVar19 = iVar19 + 1;
              iVar9 = iVar19;
              if ((uint)param_8 == uVar4) {
LAB_180062997:
                uVar4 = param_11 + 1 + uVar21;
                param_8._0_4_ = uVar14;
              }
              else if (uVar14 == uVar4) {
                uVar4 = uVar4 + 1;
              }
              else if ((uVar14 < (uint)param_8) || (uVar4 < uVar14)) {
                uVar11 = *(uint *)(param_1 + 0x1fd);
                iVar22 = uVar4 - (uint)param_8;
                if (param_7 == uVar11) {
                  uVar16 = iVar22 * uVar11;
                  puVar17 = (undefined8 *)param_1[0xd];
                  puVar27 = (undefined8 *)((ulonglong)((uint)param_8 * uVar11) + param_6);
                  for (uVar4 = uVar16 >> 4; uVar4 != 0; uVar4 = uVar4 - 1) {
                    uVar3 = puVar27[1];
                    *puVar17 = *puVar27;
                    puVar17[1] = uVar3;
                    puVar17 = puVar17 + 2;
                    puVar27 = puVar27 + 2;
                  }
                  uVar4 = uVar16 >> 2 & 3;
                  uVar6 = 0;
                  if (uVar4 != 0) {
                    do {
                      uVar11 = (int)uVar6 + 1;
                      *(undefined4 *)((longlong)puVar17 + uVar6 * 4) =
                           *(undefined4 *)((longlong)puVar27 + uVar6 * 4);
                      uVar6 = (ulonglong)uVar11;
                    } while (uVar11 < uVar4);
                  }
                  param_1[0xd] = param_1[0xd] + (ulonglong)uVar16;
                }
                else if (iVar22 != 0) {
                  uVar4 = uVar11 >> 2 & 3;
                  iVar24 = iVar22;
                  do {
                    puVar17 = (undefined8 *)param_1[0xd];
                    puVar27 = (undefined8 *)((ulonglong)((uint)param_8 * param_7) + param_6);
                    for (uVar16 = uVar11 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
                      uVar3 = puVar27[1];
                      *puVar17 = *puVar27;
                      puVar17[1] = uVar3;
                      puVar17 = puVar17 + 2;
                      puVar27 = puVar27 + 2;
                    }
                    uVar6 = 0;
                    if (uVar4 != 0) {
                      do {
                        *(undefined4 *)((longlong)puVar17 + uVar6 * 4) =
                             *(undefined4 *)((longlong)puVar27 + uVar6 * 4);
                        uVar16 = (int)uVar6 + 1;
                        uVar6 = (ulonglong)uVar16;
                      } while (uVar16 < uVar4);
                    }
                    param_1[0xd] = param_1[0xd] + (ulonglong)uVar11;
                    param_8._0_4_ = (uint)param_8 + 1;
                    iVar24 = iVar24 + -1;
                  } while (iVar24 != 0);
                }
                *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar22;
                goto LAB_180062997;
              }
            }
            *(uint *)(param_1[0x11] + uVar5 * 4) =
                 (uint)*(ushort *)(param_1[4] + (ulonglong)uVar20 * 2);
            uVar21 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar21;
          } while (uVar21 < uVar26);
          uVar21 = 0;
          uVar14 = uVar13 - uVar26;
          if (uVar14 != 0) {
            do {
              uVar5 = (ulonglong)(local_94 + local_88 + -1 + uVar21);
              if (param_12 == '\0') {
                uVar11 = (uint)*(ushort *)((longlong)param_9 + uVar5 * 2);
              }
              else {
                uVar11 = param_9[uVar5];
              }
              uVar20 = uVar11 + param_11;
              if ((param_12 != '\0') && (uVar20 >> 0x10 != *(uint *)(param_1 + 10))) {
                plVar18 = param_1 + 6;
                for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *(undefined4 *)plVar18 = 0;
                  plVar18 = (longlong *)((longlong)plVar18 + 4);
                }
                *(uint *)(param_1 + 10) = uVar20 >> 0x10;
              }
              uVar15 = uVar20 & 0xffff;
              uVar16 = uVar15 >> 0xb;
              if (*(char *)((longlong)param_1 + (ulonglong)uVar16 + 0x30) == '\0') {
                *(undefined1 *)((longlong)param_1 + (ulonglong)uVar16 + 0x30) = 1;
                FUN_1800fbea0((undefined1 *)((ulonglong)(uVar16 << 8) + param_1[5]),0,0x100);
              }
              bVar1 = *(byte *)(param_1[5] + (ulonglong)(uVar15 >> 3));
              if (((&DAT_180101670)[uVar20 & 7] & bVar1) == 0) {
                *(byte *)(param_1[5] + (ulonglong)(uVar15 >> 3)) =
                     bVar1 | (&DAT_180101670)[uVar20 & 7];
                *(short *)(param_1[4] + (ulonglong)uVar15 * 2) = (short)iVar9;
                iVar9 = iVar9 + 1;
                if ((uint)param_8 == uVar4) {
LAB_180062c0f:
                  uVar4 = param_11 + 1 + uVar11;
                  param_8._0_4_ = uVar20;
                }
                else if (uVar20 == uVar4) {
                  uVar4 = uVar4 + 1;
                }
                else if ((uVar20 < (uint)param_8) || (uVar4 < uVar20)) {
                  uVar16 = *(uint *)(param_1 + 0x1fd);
                  iVar19 = uVar4 - (uint)param_8;
                  if (param_7 == uVar16) {
                    uVar25 = iVar19 * uVar16;
                    puVar17 = (undefined8 *)param_1[0xd];
                    puVar27 = (undefined8 *)((ulonglong)((uint)param_8 * uVar16) + param_6);
                    for (uVar4 = uVar25 >> 4; uVar4 != 0; uVar4 = uVar4 - 1) {
                      uVar3 = puVar27[1];
                      *puVar17 = *puVar27;
                      puVar17[1] = uVar3;
                      puVar17 = puVar17 + 2;
                      puVar27 = puVar27 + 2;
                    }
                    uVar4 = uVar25 >> 2 & 3;
                    uVar5 = 0;
                    if (uVar4 != 0) {
                      do {
                        uVar16 = (int)uVar5 + 1;
                        *(undefined4 *)((longlong)puVar17 + uVar5 * 4) =
                             *(undefined4 *)((longlong)puVar27 + uVar5 * 4);
                        uVar5 = (ulonglong)uVar16;
                      } while (uVar16 < uVar4);
                    }
                    param_1[0xd] = param_1[0xd] + (ulonglong)uVar25;
                  }
                  else if (iVar19 != 0) {
                    uVar4 = uVar16 >> 2 & 3;
                    iVar22 = iVar19;
                    do {
                      puVar17 = (undefined8 *)param_1[0xd];
                      puVar27 = (undefined8 *)((ulonglong)((uint)param_8 * param_7) + param_6);
                      for (uVar25 = uVar16 >> 4; uVar25 != 0; uVar25 = uVar25 - 1) {
                        uVar3 = puVar27[1];
                        *puVar17 = *puVar27;
                        puVar17[1] = uVar3;
                        puVar17 = puVar17 + 2;
                        puVar27 = puVar27 + 2;
                      }
                      uVar5 = 0;
                      if (uVar4 != 0) {
                        do {
                          *(undefined4 *)((longlong)puVar17 + uVar5 * 4) =
                               *(undefined4 *)((longlong)puVar27 + uVar5 * 4);
                          uVar25 = (int)uVar5 + 1;
                          uVar5 = (ulonglong)uVar25;
                        } while (uVar25 < uVar4);
                      }
                      param_1[0xd] = param_1[0xd] + (ulonglong)uVar16;
                      param_8._0_4_ = (uint)param_8 + 1;
                      iVar22 = iVar22 + -1;
                    } while (iVar22 != 0);
                  }
                  *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar19;
                  goto LAB_180062c0f;
                }
              }
              uVar11 = (local_94 - 1) + uVar21;
              uVar21 = uVar21 + 1;
              *(uint *)(param_1[0x11] + (ulonglong)uVar11 * 4) =
                   (uint)*(ushort *)(param_1[4] + (ulonglong)uVar15 * 2);
            } while (uVar21 < uVar14);
          }
          if (uVar4 != (uint)param_8) {
            uVar21 = *(uint *)(param_1 + 0x1fd);
            iVar19 = uVar4 - (uint)param_8;
            if (param_7 == uVar21) {
              uVar4 = uVar21 * iVar19;
              puVar17 = (undefined8 *)param_1[0xd];
              puVar27 = (undefined8 *)((ulonglong)((uint)param_8 * uVar21) + param_6);
              for (uVar11 = uVar4 >> 4; uVar11 != 0; uVar11 = uVar11 - 1) {
                uVar3 = puVar27[1];
                *puVar17 = *puVar27;
                puVar17[1] = uVar3;
                puVar17 = puVar17 + 2;
                puVar27 = puVar27 + 2;
              }
              uVar21 = uVar4 >> 2 & 3;
              uVar5 = 0;
              if (uVar21 != 0) {
                do {
                  uVar11 = (int)uVar5 + 1;
                  *(undefined4 *)((longlong)puVar17 + uVar5 * 4) =
                       *(undefined4 *)((longlong)puVar27 + uVar5 * 4);
                  uVar5 = (ulonglong)uVar11;
                } while (uVar11 < uVar21);
              }
              goto LAB_180062e0d;
            }
            if (iVar19 != 0) {
              uVar4 = uVar21 >> 2 & 3;
              iVar9 = iVar19;
              do {
                puVar17 = (undefined8 *)param_1[0xd];
                puVar27 = (undefined8 *)((ulonglong)((uint)param_8 * param_7) + param_6);
                for (uVar11 = uVar21 >> 4; uVar11 != 0; uVar11 = uVar11 - 1) {
                  uVar3 = puVar27[1];
                  *puVar17 = *puVar27;
                  puVar17[1] = uVar3;
                  puVar17 = puVar17 + 2;
                  puVar27 = puVar27 + 2;
                }
                uVar5 = 0;
                if (uVar4 != 0) {
                  do {
                    *(undefined4 *)((longlong)puVar17 + uVar5 * 4) =
                         *(undefined4 *)((longlong)puVar27 + uVar5 * 4);
                    uVar11 = (int)uVar5 + 1;
                    uVar5 = (ulonglong)uVar11;
                  } while (uVar11 < uVar4);
                }
                param_1[0xd] = param_1[0xd] + (ulonglong)uVar21;
                param_8._0_4_ = (uint)param_8 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            goto LAB_180062ea7;
          }
        }
        else {
          local_68 = 0;
          iVar9 = iVar19;
          do {
            if (param_12 == '\0') {
              uVar21 = (uint)*(ushort *)((longlong)param_9 + (ulonglong)(local_88 + local_68) * 2);
            }
            else {
              uVar21 = param_9[local_88 + local_68];
            }
            uVar14 = param_11 + uVar21;
            if ((param_12 != '\0') && (uVar14 >> 0x10 != *(uint *)(param_1 + 10))) {
              plVar18 = param_1 + 6;
              for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
                *(undefined4 *)plVar18 = 0;
                plVar18 = (longlong *)((longlong)plVar18 + 4);
              }
              *(uint *)(param_1 + 10) = uVar14 >> 0x10;
            }
            uVar20 = uVar14 & 0xffff;
            uVar11 = uVar20 >> 0xb;
            if (*(char *)((longlong)param_1 + (ulonglong)uVar11 + 0x30) == '\0') {
              *(undefined1 *)((longlong)param_1 + (ulonglong)uVar11 + 0x30) = 1;
              FUN_1800fbea0((undefined1 *)((ulonglong)(uVar11 << 8) + param_1[5]),0,0x100);
              iVar19 = iVar9;
            }
            bVar1 = *(byte *)(param_1[5] + (ulonglong)(uVar20 >> 3));
            if (((&DAT_180101670)[uVar14 & 7] & bVar1) == 0) {
              *(byte *)(param_1[5] + (ulonglong)(uVar20 >> 3)) =
                   bVar1 | (&DAT_180101670)[uVar14 & 7];
              *(short *)(param_1[4] + (ulonglong)uVar20 * 2) = (short)iVar19;
              iVar19 = iVar19 + 1;
              iVar9 = iVar19;
              if ((uint)param_8 == uVar4) {
                uVar4 = param_11 + 1 + uVar21;
                param_8._0_4_ = uVar14;
              }
              else if (uVar14 == uVar4) {
                uVar4 = uVar4 + 1;
              }
              else if ((uVar14 < (uint)param_8) || (uVar4 < uVar14)) {
                uVar11 = *(uint *)(param_1 + 0x1fd);
                iVar22 = uVar4 - (uint)param_8;
                if (*(int *)(param_3 + 8) != 0) {
                  uVar4 = 0;
                  do {
                    lVar8 = (ulonglong)uVar4 * 0x10;
                    if (*(longlong *)(param_6 + lVar8) != 0) {
                      uVar5 = (ulonglong)*(byte *)(param_3 + 0x214 + (ulonglong)uVar4);
                      iVar24 = 0;
                      bVar1 = *(byte *)(param_3 + 0x16 + uVar5 * 8) >> 2;
                      uVar16 = (uint)bVar1;
                      puVar17 = (undefined8 *)
                                ((ulonglong)((uint)param_8 * *(int *)(param_6 + 8 + lVar8)) +
                                *(longlong *)(param_6 + lVar8));
                      if (iVar22 != 0) {
                        puVar27 = (undefined8 *)
                                  (param_1[0xd] +
                                  (ulonglong)*(byte *)(param_3 + 0x17 + uVar5 * 8) * 4);
                        iVar23 = iVar22;
                        do {
                          if (bVar1 != 0) {
                            uVar5 = 0;
                            if ((uVar16 < 4) ||
                               ((puVar27 <=
                                 (undefined8 *)((longlong)puVar17 + (ulonglong)(uVar16 - 1) * 4) &&
                                (puVar17 <=
                                 (undefined8 *)((longlong)puVar27 + (ulonglong)(uVar16 - 1) * 4)))))
                            {
                              do {
                                *(undefined4 *)((longlong)puVar27 + uVar5 * 4) =
                                     *(undefined4 *)((longlong)puVar17 + uVar5 * 4);
                                uVar15 = (int)uVar5 + 1;
                                uVar5 = (ulonglong)uVar15;
                              } while (uVar15 < uVar16);
                            }
                            else {
                              FUN_1800fbec0(puVar27,puVar17,(ulonglong)uVar16 << 2);
                            }
                          }
                          puVar27 = (undefined8 *)((longlong)puVar27 + (ulonglong)uVar11);
                          iVar24 = iVar24 + 1;
                          if (iVar24 == *(int *)(param_6 + 0xc + lVar8)) {
                            puVar17 = (undefined8 *)
                                      ((longlong)puVar17 + (ulonglong)*(uint *)(param_6 + 8 + lVar8)
                                      );
                            iVar24 = 0;
                          }
                          iVar23 = iVar23 + -1;
                        } while (iVar23 != 0);
                      }
                    }
                    uVar4 = uVar4 + 1;
                  } while (uVar4 < *(uint *)(param_3 + 8));
                }
                *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar22;
                param_1[0xd] = param_1[0xd] + (ulonglong)(iVar22 * uVar11);
                uVar4 = param_11 + 1 + uVar21;
                param_8._0_4_ = uVar14;
              }
            }
            uVar5 = (ulonglong)local_68;
            local_68 = local_68 + 1;
            *(uint *)(param_1[0x11] + uVar5 * 4) =
                 (uint)*(ushort *)(param_1[4] + (ulonglong)uVar20 * 2);
          } while (local_68 < uVar26);
          uVar14 = uVar13 - uVar26;
          local_68 = 0;
          if (uVar14 != 0) {
            do {
              uVar5 = (ulonglong)(local_88 + local_94 + -1 + local_68);
              if (param_12 == '\0') {
                uVar21 = (uint)*(ushort *)((longlong)param_9 + uVar5 * 2);
              }
              else {
                uVar21 = param_9[uVar5];
              }
              uVar11 = uVar21 + param_11;
              if ((param_12 != '\0') && (uVar11 >> 0x10 != *(uint *)(param_1 + 10))) {
                plVar18 = param_1 + 6;
                for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *(undefined4 *)plVar18 = 0;
                  plVar18 = (longlong *)((longlong)plVar18 + 4);
                }
                *(uint *)(param_1 + 10) = uVar11 >> 0x10;
              }
              uVar16 = uVar11 & 0xffff;
              uVar20 = uVar16 >> 0xb;
              if (*(char *)((longlong)param_1 + (ulonglong)uVar20 + 0x30) == '\0') {
                *(undefined1 *)((longlong)param_1 + (ulonglong)uVar20 + 0x30) = 1;
                FUN_1800fbea0((undefined1 *)((ulonglong)(uVar20 << 8) + param_1[5]),0,0x100);
              }
              bVar1 = *(byte *)(param_1[5] + (ulonglong)(uVar16 >> 3));
              if (((&DAT_180101670)[uVar11 & 7] & bVar1) == 0) {
                *(byte *)(param_1[5] + (ulonglong)(uVar16 >> 3)) =
                     bVar1 | (&DAT_180101670)[uVar11 & 7];
                *(short *)(param_1[4] + (ulonglong)uVar16 * 2) = (short)iVar9;
                iVar9 = iVar9 + 1;
                if ((uint)param_8 == uVar4) {
                  uVar4 = param_11 + 1 + uVar21;
                  param_8._0_4_ = uVar11;
                }
                else if (uVar11 == uVar4) {
                  uVar4 = uVar4 + 1;
                }
                else if ((uVar11 < (uint)param_8) || (uVar4 < uVar11)) {
                  uVar20 = *(uint *)(param_1 + 0x1fd);
                  iVar19 = uVar4 - (uint)param_8;
                  if (*(int *)(param_3 + 8) != 0) {
                    uVar4 = 0;
                    do {
                      lVar8 = (ulonglong)uVar4 * 0x10;
                      if (*(longlong *)(param_6 + lVar8) != 0) {
                        uVar5 = (ulonglong)*(byte *)(param_3 + 0x214 + (ulonglong)uVar4);
                        iVar22 = 0;
                        bVar1 = *(byte *)(param_3 + 0x16 + uVar5 * 8) >> 2;
                        uVar15 = (uint)bVar1;
                        puVar17 = (undefined8 *)
                                  ((ulonglong)((uint)param_8 * *(int *)(param_6 + 8 + lVar8)) +
                                  *(longlong *)(param_6 + lVar8));
                        if (iVar19 != 0) {
                          puVar27 = (undefined8 *)
                                    (param_1[0xd] +
                                    (ulonglong)*(byte *)(param_3 + 0x17 + uVar5 * 8) * 4);
                          iVar24 = iVar19;
                          do {
                            if (bVar1 != 0) {
                              uVar5 = 0;
                              if ((uVar15 < 4) ||
                                 ((puVar27 <=
                                   (undefined8 *)((longlong)puVar17 + (ulonglong)(uVar15 - 1) * 4)
                                  && (puVar17 <=
                                      (undefined8 *)
                                      ((longlong)puVar27 + (ulonglong)(uVar15 - 1) * 4))))) {
                                do {
                                  *(undefined4 *)((longlong)puVar27 + uVar5 * 4) =
                                       *(undefined4 *)((longlong)puVar17 + uVar5 * 4);
                                  uVar25 = (int)uVar5 + 1;
                                  uVar5 = (ulonglong)uVar25;
                                } while (uVar25 < uVar15);
                              }
                              else {
                                FUN_1800fbec0(puVar27,puVar17,(ulonglong)uVar15 << 2);
                              }
                            }
                            puVar27 = (undefined8 *)((longlong)puVar27 + (ulonglong)uVar20);
                            iVar22 = iVar22 + 1;
                            if (iVar22 == *(int *)(param_6 + 0xc + lVar8)) {
                              puVar17 = (undefined8 *)
                                        ((longlong)puVar17 +
                                        (ulonglong)*(uint *)(param_6 + 8 + lVar8));
                              iVar22 = 0;
                            }
                            iVar24 = iVar24 + -1;
                          } while (iVar24 != 0);
                        }
                      }
                      uVar4 = uVar4 + 1;
                    } while (uVar4 < *(uint *)(param_3 + 8));
                  }
                  *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar19;
                  param_1[0xd] = param_1[0xd] + (ulonglong)(iVar19 * uVar20);
                  uVar4 = param_11 + 1 + uVar21;
                  param_8._0_4_ = uVar11;
                }
              }
              uVar21 = (local_94 - 1) + local_68;
              local_68 = local_68 + 1;
              *(uint *)(param_1[0x11] + (ulonglong)uVar21 * 4) =
                   (uint)*(ushort *)(param_1[4] + (ulonglong)uVar16 * 2);
            } while (local_68 < uVar14);
          }
          if (uVar4 != (uint)param_8) {
            iVar19 = uVar4 - (uint)param_8;
            uVar4 = *(uint *)(param_1 + 0x1fd);
            uVar5 = 0;
            if (*(int *)(param_3 + 8) != 0) {
              do {
                lVar8 = uVar5 * 0x10;
                if (*(longlong *)(param_6 + lVar8) != 0) {
                  iVar9 = 0;
                  uVar6 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar5);
                  puVar17 = (undefined8 *)
                            ((ulonglong)((uint)param_8 * *(int *)(param_6 + 8 + lVar8)) +
                            *(longlong *)(param_6 + lVar8));
                  bVar1 = *(byte *)(param_3 + 0x16 + uVar6 * 8) >> 2;
                  uVar21 = (uint)bVar1;
                  if (iVar19 != 0) {
                    puVar27 = (undefined8 *)
                              (param_1[0xd] + (ulonglong)*(byte *)(param_3 + 0x17 + uVar6 * 8) * 4);
                    iVar22 = iVar19;
                    do {
                      if (bVar1 != 0) {
                        uVar6 = 0;
                        if ((uVar21 < 4) ||
                           ((puVar27 <=
                             (undefined8 *)((longlong)puVar17 + (ulonglong)(uVar21 - 1) * 4) &&
                            (puVar17 <=
                             (undefined8 *)((longlong)puVar27 + (ulonglong)(uVar21 - 1) * 4))))) {
                          do {
                            *(undefined4 *)((longlong)puVar27 + uVar6 * 4) =
                                 *(undefined4 *)((longlong)puVar17 + uVar6 * 4);
                            uVar11 = (int)uVar6 + 1;
                            uVar6 = (ulonglong)uVar11;
                          } while (uVar11 < uVar21);
                        }
                        else {
                          FUN_1800fbec0(puVar27,puVar17,(ulonglong)uVar21 << 2);
                        }
                      }
                      puVar27 = (undefined8 *)((longlong)puVar27 + (ulonglong)uVar4);
                      iVar9 = iVar9 + 1;
                      if (iVar9 == *(int *)(param_6 + 0xc + lVar8)) {
                        puVar17 = (undefined8 *)
                                  ((longlong)puVar17 + (ulonglong)*(uint *)(param_6 + 8 + lVar8));
                        iVar9 = 0;
                      }
                      iVar22 = iVar22 + -1;
                    } while (iVar22 != 0);
                  }
                }
                uVar21 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar21;
              } while (uVar21 < *(uint *)(param_3 + 8));
            }
            uVar4 = iVar19 * uVar4;
LAB_180062e0d:
            param_1[0xd] = param_1[0xd] + (ulonglong)uVar4;
LAB_180062ea7:
            *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar19;
          }
        }
        local_88 = local_88 + uVar14;
        param_10 = param_10 + (uVar26 - uVar13);
        *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + uVar13;
        uVar5 = (ulonglong)uVar13 * 4;
        param_1[0x11] = param_1[0x11] + uVar5;
      } while (local_94 <= param_10);
    }
  }
  return uVar5;
}

