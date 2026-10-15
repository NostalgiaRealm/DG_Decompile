/*
 * FUN_10054ff8 at 10054ff8
 * uint __thiscall FUN_10054ff8(void * this, int param_1, int param_2, char param_3, undefined4 param_4, int param_5, uint param_6, undefined4 param_7, uint * param_8, uint param_9, int param_10, char param_11, char param_12, undefined4 param_13, undefined4 param_14)
 * Address ranges: 10054ff8-100575e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_10054ff8(void *this,int param_1,int param_2,char param_3,undefined4 param_4,int param_5,
            uint param_6,undefined4 param_7,uint *param_8,uint param_9,int param_10,char param_11,
            char param_12,undefined4 param_13,undefined4 param_14)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  uint local_68;
  int local_64;
  uint local_60;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined4 *local_40;
  uint local_3c;
  undefined4 *local_38;
  int local_34;
  undefined4 *local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_1c;
  uint local_18;
  
  local_24 = 0;
  local_3c = 3;
  puVar20 = (undefined4 *)((int)this + 0x20);
  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar20 = 0;
    puVar20 = puVar20 + 1;
  }
  if ((param_1 == 1) || (param_1 == 2)) {
    local_3c = (param_1 == 2) + 1;
LAB_10056d9a:
    uVar12 = param_9 / local_3c;
    for (uVar5 = param_9 - param_9 % local_3c; uVar5 != 0; uVar5 = uVar5 - uVar6) {
      iVar13 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
      if (((uint)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50)) < 0x10) ||
         (0x1000U - iVar13 < 0x10)) {
        (**(code **)(*(int *)this + 0xec))(1);
        iVar13 = 0;
      }
      uVar12 = (0x1000 - (0x1000U - iVar13) % local_3c) - iVar13;
      uVar6 = uVar5;
      if (uVar12 <= uVar5) {
        uVar6 = uVar12;
      }
      if (param_3 == '\0') {
        (**(code **)(*(int *)this + 0xf4))
                  (param_1,param_4,*(undefined4 *)(param_2 + 0xc),uVar6,uVar6,param_14);
      }
      else {
        (**(code **)(*(int *)this + 0xf0))
                  (param_1,param_2,param_4,*(undefined4 *)(param_2 + 0xc),uVar6,uVar6,param_13);
      }
      local_30 = *(undefined4 **)((int)this + 0x54);
      uVar12 = 0;
      local_28 = 0;
      local_1c = 0;
      if (param_12 == '\0') {
        local_44 = 0;
        if (uVar6 != 0) {
          do {
            if (param_11 == '\0') {
              uVar9 = (uint)*(ushort *)((int)param_8 + local_24 * 2 + local_44 * 2);
            }
            else {
              uVar9 = param_8[local_44 + local_24];
            }
            uVar10 = param_10 + uVar9;
            if ((param_11 != '\0') && (uVar10 >> 0x10 != *(uint *)((int)this + 0x40))) {
              puVar20 = (undefined4 *)((int)this + 0x20);
              for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                *puVar20 = 0;
                puVar20 = puVar20 + 1;
              }
              *(uint *)((int)this + 0x40) = uVar10 >> 0x10;
              uVar12 = local_28;
            }
            uVar14 = uVar10 & 0xffff;
            uVar7 = uVar14 >> 0xb;
            if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
              *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
              FUN_100cfed0((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
            }
            bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3));
            if (((&DAT_100d521c)[uVar10 & 7] & bVar1) == 0) {
              *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3)) =
                   (&DAT_100d521c)[uVar10 & 7] | bVar1;
              *(short *)(*(int *)((int)this + 0x18) + uVar14 * 2) = (short)local_30;
              local_30 = (undefined4 *)((int)local_30 + 1);
              if (uVar12 == local_1c) {
LAB_10057441:
                local_1c = param_10 + 1 + uVar9;
                uVar12 = uVar10;
                local_28 = uVar10;
              }
              else if (uVar10 == local_1c) {
                local_1c = local_1c + 1;
              }
              else if ((uVar10 < uVar12) || (local_1c < uVar10)) {
                uVar7 = *(uint *)((int)this + 0xfc8);
                iVar13 = local_1c - uVar12;
                if (param_6 == uVar7) {
                  puVar20 = *(undefined4 **)((int)this + 0x4c);
                  puVar15 = (undefined4 *)(uVar12 * uVar7 + param_5);
                  for (uVar18 = iVar13 * uVar7 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
                    uVar2 = puVar15[1];
                    uVar3 = puVar15[2];
                    uVar4 = puVar15[3];
                    *puVar20 = *puVar15;
                    puVar20[1] = uVar2;
                    puVar20[2] = uVar3;
                    puVar20[3] = uVar4;
                    puVar20 = puVar20 + 4;
                    puVar15 = puVar15 + 4;
                  }
                  uVar12 = iVar13 * uVar7 >> 2 & 3;
                  if (uVar12 != 0) {
                    uVar18 = 0;
                    do {
                      puVar20[uVar18] = puVar15[uVar18];
                      uVar18 = uVar18 + 1;
                    } while (uVar18 < uVar12);
                  }
                  *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar13 * uVar7;
                }
                else if (iVar13 != 0) {
                  uVar18 = uVar7 >> 2 & 3;
                  local_64 = iVar13;
                  do {
                    puVar20 = *(undefined4 **)((int)this + 0x4c);
                    puVar15 = (undefined4 *)(uVar12 * param_6 + param_5);
                    for (uVar8 = uVar7 >> 4; uVar8 != 0; uVar8 = uVar8 - 1) {
                      uVar2 = puVar15[1];
                      uVar3 = puVar15[2];
                      uVar4 = puVar15[3];
                      *puVar20 = *puVar15;
                      puVar20[1] = uVar2;
                      puVar20[2] = uVar3;
                      puVar20[3] = uVar4;
                      puVar20 = puVar20 + 4;
                      puVar15 = puVar15 + 4;
                      uVar12 = local_28;
                    }
                    if (uVar18 != 0) {
                      uVar8 = 0;
                      do {
                        puVar20[uVar8] = puVar15[uVar8];
                        uVar8 = uVar8 + 1;
                        uVar12 = local_28;
                      } while (uVar8 < uVar18);
                    }
                    uVar12 = uVar12 + 1;
                    local_64 = local_64 + -1;
                    *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar7;
                    local_28 = uVar12;
                  } while (local_64 != 0);
                }
                *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar13;
                goto LAB_10057441;
              }
            }
            *(uint *)(*(int *)((int)this + 100) + local_44 * 4) =
                 (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar14 * 2);
            local_44 = local_44 + 1;
          } while (local_44 < uVar6);
          if (local_1c != uVar12) {
            uVar9 = *(uint *)((int)this + 0xfc8);
            iVar13 = local_1c - uVar12;
            if (param_6 == uVar9) {
              puVar20 = *(undefined4 **)((int)this + 0x4c);
              puVar15 = (undefined4 *)(uVar12 * uVar9 + param_5);
              for (uVar10 = uVar9 * iVar13 >> 4; uVar10 != 0; uVar10 = uVar10 - 1) {
                uVar2 = puVar15[1];
                uVar3 = puVar15[2];
                uVar4 = puVar15[3];
                *puVar20 = *puVar15;
                puVar20[1] = uVar2;
                puVar20[2] = uVar3;
                puVar20[3] = uVar4;
                puVar20 = puVar20 + 4;
                puVar15 = puVar15 + 4;
              }
              uVar12 = uVar9 * iVar13 >> 2 & 3;
              if (uVar12 != 0) {
                uVar10 = 0;
                do {
                  puVar20[uVar10] = puVar15[uVar10];
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar12);
              }
              *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar9 * iVar13;
            }
            else if (iVar13 != 0) {
              uVar10 = uVar9 >> 2 & 3;
              local_64 = iVar13;
              do {
                puVar20 = (undefined4 *)(uVar12 * param_6 + param_5);
                puVar15 = *(undefined4 **)((int)this + 0x4c);
                for (uVar14 = uVar9 >> 4; uVar14 != 0; uVar14 = uVar14 - 1) {
                  uVar2 = puVar20[1];
                  uVar3 = puVar20[2];
                  uVar4 = puVar20[3];
                  *puVar15 = *puVar20;
                  puVar15[1] = uVar2;
                  puVar15[2] = uVar3;
                  puVar15[3] = uVar4;
                  puVar20 = puVar20 + 4;
                  puVar15 = puVar15 + 4;
                  uVar12 = local_28;
                }
                if (uVar10 != 0) {
                  uVar14 = 0;
                  do {
                    puVar15[uVar14] = puVar20[uVar14];
                    uVar14 = uVar14 + 1;
                    uVar12 = local_28;
                  } while (uVar14 < uVar10);
                }
                *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar9;
                uVar12 = uVar12 + 1;
                local_64 = local_64 + -1;
                local_28 = uVar12;
              } while (local_64 != 0);
            }
            goto LAB_100575b8;
          }
        }
      }
      else {
        local_2c = 0;
        if (uVar6 != 0) {
          do {
            if (param_11 == '\0') {
              uVar9 = (uint)*(ushort *)((int)param_8 + local_24 * 2 + local_2c * 2);
            }
            else {
              uVar9 = param_8[local_2c + local_24];
            }
            uVar10 = param_10 + uVar9;
            if ((param_11 != '\0') && (uVar10 >> 0x10 != *(uint *)((int)this + 0x40))) {
              puVar20 = (undefined4 *)((int)this + 0x20);
              for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                *puVar20 = 0;
                puVar20 = puVar20 + 1;
              }
              *(uint *)((int)this + 0x40) = uVar10 >> 0x10;
              uVar12 = local_28;
            }
            uVar14 = uVar10 & 0xffff;
            uVar7 = uVar14 >> 0xb;
            if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
              *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
              FUN_100cfed0((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
            }
            bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3));
            if (((&DAT_100d521c)[uVar10 & 7] & bVar1) == 0) {
              *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3)) =
                   (&DAT_100d521c)[uVar10 & 7] | bVar1;
              *(short *)(*(int *)((int)this + 0x18) + uVar14 * 2) = (short)local_30;
              local_30 = (undefined4 *)((int)local_30 + 1);
              if (uVar12 == local_1c) {
LAB_1005707c:
                local_1c = param_10 + 1 + uVar9;
                uVar12 = uVar10;
                local_28 = uVar10;
              }
              else if (uVar10 == local_1c) {
                local_1c = local_1c + 1;
              }
              else if ((uVar10 < uVar12) || (local_1c < uVar10)) {
                iVar13 = *(int *)((int)this + 0xfc8);
                iVar17 = local_1c - uVar12;
                local_38 = (undefined4 *)0x0;
                if (*(int *)(param_2 + 8) != 0) {
                  do {
                    iVar16 = (int)local_38 * 0xc;
                    if (*(int *)(param_5 + iVar16) != 0) {
                      local_50 = (undefined4 *)
                                 (*(int *)(param_5 + 4 + iVar16) * uVar12 +
                                 *(int *)(param_5 + iVar16));
                      uVar7 = (uint)*(byte *)(param_2 + 0x214 + (int)local_38);
                      uVar18 = (uint)(*(byte *)(param_2 + 0x16 + uVar7 * 8) >> 2);
                      local_4c = 0;
                      if (iVar17 != 0) {
                        puVar20 = (undefined4 *)
                                  (*(int *)((int)this + 0x4c) +
                                  (uint)*(byte *)(param_2 + 0x17 + uVar7 * 8) * 4);
                        local_68 = iVar17;
                        do {
                          uVar12 = 0;
                          if (uVar18 != 0) {
                            if ((uVar18 < 4) ||
                               ((puVar20 <= local_50 + (uVar18 - 1) &&
                                (local_50 <= puVar20 + (uVar18 - 1))))) {
                              do {
                                puVar20[uVar12] = local_50[uVar12];
                                uVar12 = uVar12 + 1;
                              } while (uVar12 < uVar18);
                            }
                            else {
                              FUN_100cff00(puVar20,local_50,uVar18 << 2);
                            }
                          }
                          puVar20 = (undefined4 *)((int)puVar20 + iVar13);
                          local_4c = local_4c + 1;
                          if (local_4c == *(int *)(param_5 + 8 + iVar16)) {
                            local_50 = (undefined4 *)
                                       ((int)local_50 + *(int *)((int)local_38 * 0xc + 4 + param_5))
                            ;
                            local_4c = 0;
                          }
                          local_68 = local_68 + -1;
                          uVar12 = local_28;
                        } while (local_68 != 0);
                      }
                    }
                    local_38 = (undefined4 *)((int)local_38 + 1);
                  } while (local_38 < *(uint *)(param_2 + 8));
                }
                *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar17 * iVar13;
                *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar17;
                goto LAB_1005707c;
              }
            }
            *(uint *)(*(int *)((int)this + 100) + local_2c * 4) =
                 (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar14 * 2);
            local_2c = local_2c + 1;
          } while (local_2c < uVar6);
          if (local_1c != uVar12) {
            iVar17 = *(int *)((int)this + 0xfc8);
            iVar13 = local_1c - uVar12;
            local_38 = (undefined4 *)0x0;
            if (*(int *)(param_2 + 8) != 0) {
              do {
                iVar16 = (int)local_38 * 0xc;
                if (*(int *)(param_5 + iVar16) != 0) {
                  local_58 = (undefined4 *)
                             (*(int *)(param_5 + 4 + iVar16) * uVar12 + *(int *)(param_5 + iVar16));
                  uVar9 = (uint)*(byte *)(param_2 + 0x214 + (int)local_38);
                  uVar10 = (uint)(*(byte *)(param_2 + 0x16 + uVar9 * 8) >> 2);
                  local_54 = (undefined4 *)0x0;
                  if (iVar13 != 0) {
                    local_40 = (undefined4 *)
                               ((uint)*(byte *)(param_2 + 0x17 + uVar9 * 8) * 4 +
                               *(int *)((int)this + 0x4c));
                    local_60 = iVar13;
                    do {
                      if (uVar10 != 0) {
                        if (3 < uVar10) {
                          if ((local_58 + (uVar10 - 1) < local_40) ||
                             (local_40 + (uVar10 - 1) < local_58)) {
                            FUN_100cff00(local_40,local_58,uVar10 * 4);
                            goto LAB_100571b3;
                          }
                        }
                        uVar12 = 0;
                        do {
                          local_40[uVar12] = local_58[uVar12];
                          uVar12 = uVar12 + 1;
                        } while (uVar12 < uVar10);
                      }
LAB_100571b3:
                      local_40 = (undefined4 *)((int)local_40 + iVar17);
                      local_54 = (undefined4 *)((int)local_54 + 1);
                      if (local_54 == (undefined4 *)*(int *)(param_5 + 8 + iVar16)) {
                        local_58 = (undefined4 *)
                                   ((int)local_58 + *(int *)((int)local_38 * 0xc + 4 + param_5));
                        local_54 = (undefined4 *)0x0;
                      }
                      local_60 = local_60 + -1;
                      uVar12 = local_28;
                    } while (local_60 != 0);
                  }
                }
                local_38 = (undefined4 *)((int)local_38 + 1);
              } while (local_38 < *(uint *)(param_2 + 8));
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar17 * iVar13;
LAB_100575b8:
            *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar13;
          }
        }
      }
      local_24 = local_24 + uVar6;
      *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar6;
      uVar12 = *(int *)((int)this + 100) + uVar6 * 4;
      *(uint *)((int)this + 100) = uVar12;
    }
  }
  else {
    if (param_1 == 3) {
      uVar5 = 2;
      local_3c = 2;
    }
    else {
      if (param_1 == 4) goto LAB_10056d9a;
      if (param_1 != 5) {
        if (param_1 - 6U != 0) {
          return param_1 - 6U;
        }
        if (param_9 < 3) {
          return param_9;
        }
        uVar5 = param_9 - 2;
        uVar12 = uVar5;
        do {
          if (uVar5 == 0) {
            return uVar12;
          }
          iVar17 = *(int *)((int)this + 0x54) + *(int *)((int)this + 0x50);
          iVar13 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
          if ((0x1000U - iVar17 < 0x10) || (0x1000U - iVar13 < 0x10)) {
            (**(code **)(*(int *)this + 0xec))(1);
            iVar17 = 0;
            iVar13 = 0;
          }
          uVar6 = (0x1000U - iVar13) / 3;
          if (0xffeU - iVar17 < uVar6) {
            uVar6 = 0xffeU - iVar17;
          }
          uVar12 = uVar5;
          if (uVar6 <= uVar5) {
            uVar12 = uVar6;
          }
          iVar13 = uVar12 * 3;
          if (param_3 == '\0') {
            (**(code **)(*(int *)this + 0xf4))
                      (4,param_4,*(undefined4 *)(param_2 + 0xc),uVar12 + 2,iVar13,param_14);
          }
          else {
            (**(code **)(*(int *)this + 0xf0))
                      (4,param_2,param_4,*(undefined4 *)(param_2 + 0xc),uVar12 + 2,iVar13,param_13);
          }
          local_2c = *(int *)((int)this + 0x54);
          local_1c = 0;
          local_18 = 0;
          if (param_12 == '\0') {
            local_60 = 0;
            if (uVar12 != 0) {
              do {
                if (param_11 == '\0') {
                  uVar6 = (uint)*(ushort *)((int)param_8 + local_60 * 2 + local_24 * 2 + 2);
                  uVar9 = (uint)*(ushort *)((int)param_8 + local_60 * 2 + local_24 * 2 + 4);
                  uVar10 = (uint)(ushort)*param_8;
                }
                else {
                  uVar6 = param_8[local_24 + local_60 + 1];
                  uVar9 = param_8[local_24 + local_60 + 2];
                  uVar10 = *param_8;
                }
                uVar14 = param_10 + uVar6;
                if ((param_11 != '\0') && (uVar14 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar20 = (undefined4 *)((int)this + 0x20);
                  for (iVar17 = 8; iVar17 != 0; iVar17 = iVar17 + -1) {
                    *puVar20 = 0;
                    puVar20 = puVar20 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar14 >> 0x10;
                }
                uVar18 = uVar14 & 0xffff;
                uVar7 = uVar18 >> 0xb;
                if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
                  FUN_100cfed0((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar18 >> 3));
                if (((&DAT_100d521c)[uVar14 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar18 >> 3)) =
                       (&DAT_100d521c)[uVar14 & 7] | bVar1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar18 * 2) = (short)local_2c;
                  local_2c = local_2c + 1;
                  if (local_1c == local_18) {
LAB_10055b93:
                    local_18 = uVar6 + 1 + param_10;
                    local_1c = uVar14;
                  }
                  else if (uVar14 == local_18) {
                    local_18 = local_18 + 1;
                  }
                  else if ((uVar14 < local_1c) || (local_18 < uVar14)) {
                    uVar7 = *(uint *)((int)this + 0xfc8);
                    iVar17 = local_18 - local_1c;
                    if (param_6 == uVar7) {
                      uVar11 = iVar17 * uVar7;
                      puVar20 = *(undefined4 **)((int)this + 0x4c);
                      puVar15 = (undefined4 *)(local_1c * uVar7 + param_5);
                      for (uVar8 = uVar11 >> 4; uVar8 != 0; uVar8 = uVar8 - 1) {
                        uVar2 = puVar15[1];
                        uVar3 = puVar15[2];
                        uVar4 = puVar15[3];
                        *puVar20 = *puVar15;
                        puVar20[1] = uVar2;
                        puVar20[2] = uVar3;
                        puVar20[3] = uVar4;
                        puVar20 = puVar20 + 4;
                        puVar15 = puVar15 + 4;
                      }
                      uVar8 = uVar11 >> 2 & 3;
                      uVar7 = 0;
                      if (uVar8 != 0) {
                        do {
                          puVar20[uVar7] = puVar15[uVar7];
                          uVar7 = uVar7 + 1;
                        } while (uVar7 < uVar8);
                      }
                      *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar11;
                    }
                    else if (iVar17 != 0) {
                      uVar8 = uVar7 >> 2 & 3;
                      local_68 = iVar17;
                      do {
                        puVar20 = *(undefined4 **)((int)this + 0x4c);
                        puVar15 = (undefined4 *)(local_1c * param_6 + param_5);
                        for (uVar11 = uVar7 >> 4; uVar11 != 0; uVar11 = uVar11 - 1) {
                          uVar2 = puVar15[1];
                          uVar3 = puVar15[2];
                          uVar4 = puVar15[3];
                          *puVar20 = *puVar15;
                          puVar20[1] = uVar2;
                          puVar20[2] = uVar3;
                          puVar20[3] = uVar4;
                          puVar20 = puVar20 + 4;
                          puVar15 = puVar15 + 4;
                        }
                        uVar11 = 0;
                        if (uVar8 != 0) {
                          do {
                            puVar20[uVar11] = puVar15[uVar11];
                            uVar11 = uVar11 + 1;
                          } while (uVar11 < uVar8);
                        }
                        local_1c = local_1c + 1;
                        local_68 = local_68 + -1;
                        *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar7;
                      } while (local_68 != 0);
                    }
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar17;
                    goto LAB_10055b93;
                  }
                }
                uVar6 = uVar9 + param_10;
                **(uint **)((int)this + 100) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar18 * 2);
                if ((param_11 != '\0') && (uVar6 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar20 = (undefined4 *)((int)this + 0x20);
                  for (iVar17 = 8; iVar17 != 0; iVar17 = iVar17 + -1) {
                    *puVar20 = 0;
                    puVar20 = puVar20 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar6 >> 0x10;
                }
                uVar14 = uVar6 & 0xffff;
                uVar7 = uVar14 >> 0xb;
                if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
                  FUN_100cfed0((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3));
                if (((&DAT_100d521c)[uVar6 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3)) =
                       (&DAT_100d521c)[uVar6 & 7] | bVar1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar14 * 2) = (short)local_2c;
                  local_2c = local_2c + 1;
                  if (local_1c == local_18) {
LAB_10055d74:
                    local_18 = uVar9 + 1 + param_10;
                    local_1c = uVar6;
                  }
                  else if (uVar6 == local_18) {
                    local_18 = local_18 + 1;
                  }
                  else if ((uVar6 < local_1c) || (local_18 < uVar6)) {
                    uVar7 = *(uint *)((int)this + 0xfc8);
                    iVar17 = local_18 - local_1c;
                    if (param_6 == uVar7) {
                      uVar8 = iVar17 * uVar7;
                      puVar20 = *(undefined4 **)((int)this + 0x4c);
                      puVar15 = (undefined4 *)(local_1c * uVar7 + param_5);
                      for (uVar18 = uVar8 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
                        uVar2 = puVar15[1];
                        uVar3 = puVar15[2];
                        uVar4 = puVar15[3];
                        *puVar20 = *puVar15;
                        puVar20[1] = uVar2;
                        puVar20[2] = uVar3;
                        puVar20[3] = uVar4;
                        puVar20 = puVar20 + 4;
                        puVar15 = puVar15 + 4;
                      }
                      uVar18 = uVar8 >> 2 & 3;
                      uVar7 = 0;
                      if (uVar18 != 0) {
                        do {
                          puVar20[uVar7] = puVar15[uVar7];
                          uVar7 = uVar7 + 1;
                        } while (uVar7 < uVar18);
                      }
                      *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar8;
                    }
                    else if (iVar17 != 0) {
                      uVar18 = uVar7 >> 2 & 3;
                      local_68 = iVar17;
                      do {
                        puVar20 = *(undefined4 **)((int)this + 0x4c);
                        puVar15 = (undefined4 *)(local_1c * param_6 + param_5);
                        for (uVar8 = uVar7 >> 4; uVar8 != 0; uVar8 = uVar8 - 1) {
                          uVar2 = puVar15[1];
                          uVar3 = puVar15[2];
                          uVar4 = puVar15[3];
                          *puVar20 = *puVar15;
                          puVar20[1] = uVar2;
                          puVar20[2] = uVar3;
                          puVar20[3] = uVar4;
                          puVar20 = puVar20 + 4;
                          puVar15 = puVar15 + 4;
                        }
                        uVar8 = 0;
                        if (uVar18 != 0) {
                          do {
                            puVar20[uVar8] = puVar15[uVar8];
                            uVar8 = uVar8 + 1;
                          } while (uVar8 < uVar18);
                        }
                        local_1c = local_1c + 1;
                        local_68 = local_68 + -1;
                        *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar7;
                      } while (local_68 != 0);
                    }
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar17;
                    goto LAB_10055d74;
                  }
                }
                uVar6 = uVar10 + param_10;
                *(uint *)(*(int *)((int)this + 100) + 4) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar14 * 2);
                if ((param_11 != '\0') && (uVar6 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar20 = (undefined4 *)((int)this + 0x20);
                  for (iVar17 = 8; iVar17 != 0; iVar17 = iVar17 + -1) {
                    *puVar20 = 0;
                    puVar20 = puVar20 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar6 >> 0x10;
                }
                uVar9 = uVar6 & 0xffff;
                uVar14 = uVar9 >> 0xb;
                if (*(char *)((int)this + uVar14 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar14 + 0x20) = 1;
                  FUN_100cfed0((int *)(uVar14 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar9 >> 3));
                if (((&DAT_100d521c)[uVar6 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar9 >> 3)) =
                       (&DAT_100d521c)[uVar6 & 7] | bVar1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar9 * 2) = (short)local_2c;
                  local_2c = local_2c + 1;
                  if (local_1c == local_18) {
LAB_10055e25:
                    local_18 = param_10 + 1 + uVar10;
                    local_1c = uVar6;
                  }
                  else if (uVar6 == local_18) {
                    local_18 = local_18 + 1;
                  }
                  else if ((uVar6 < local_1c) || (local_18 < uVar6)) {
                    uVar14 = *(uint *)((int)this + 0xfc8);
                    iVar17 = local_18 - local_1c;
                    if (param_6 == uVar14) {
                      uVar18 = iVar17 * uVar14;
                      puVar20 = *(undefined4 **)((int)this + 0x4c);
                      puVar15 = (undefined4 *)(local_1c * uVar14 + param_5);
                      for (uVar7 = uVar18 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                        uVar2 = puVar15[1];
                        uVar3 = puVar15[2];
                        uVar4 = puVar15[3];
                        *puVar20 = *puVar15;
                        puVar20[1] = uVar2;
                        puVar20[2] = uVar3;
                        puVar20[3] = uVar4;
                        puVar20 = puVar20 + 4;
                        puVar15 = puVar15 + 4;
                      }
                      uVar7 = uVar18 >> 2 & 3;
                      uVar14 = 0;
                      if (uVar7 != 0) {
                        do {
                          puVar20[uVar14] = puVar15[uVar14];
                          uVar14 = uVar14 + 1;
                        } while (uVar14 < uVar7);
                      }
                      *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar18;
                    }
                    else if (iVar17 != 0) {
                      uVar7 = uVar14 >> 2 & 3;
                      local_64 = iVar17;
                      do {
                        puVar20 = *(undefined4 **)((int)this + 0x4c);
                        puVar15 = (undefined4 *)(local_1c * param_6 + param_5);
                        for (uVar18 = uVar14 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
                          uVar2 = puVar15[1];
                          uVar3 = puVar15[2];
                          uVar4 = puVar15[3];
                          *puVar20 = *puVar15;
                          puVar20[1] = uVar2;
                          puVar20[2] = uVar3;
                          puVar20[3] = uVar4;
                          puVar20 = puVar20 + 4;
                          puVar15 = puVar15 + 4;
                        }
                        uVar18 = 0;
                        if (uVar7 != 0) {
                          do {
                            puVar20[uVar18] = puVar15[uVar18];
                            uVar18 = uVar18 + 1;
                          } while (uVar18 < uVar7);
                        }
                        local_1c = local_1c + 1;
                        local_64 = local_64 + -1;
                        *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar14;
                      } while (local_64 != 0);
                    }
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar17;
                    goto LAB_10055e25;
                  }
                }
                *(uint *)(*(int *)((int)this + 100) + 8) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar9 * 2);
                *(int *)((int)this + 100) = *(int *)((int)this + 100) + 0xc;
                local_60 = local_60 + 1;
              } while (local_60 < uVar12);
              if (local_18 != local_1c) {
                uVar6 = *(uint *)((int)this + 0xfc8);
                iVar17 = local_18 - local_1c;
                if (param_6 == uVar6) {
                  uVar10 = uVar6 * iVar17;
                  puVar20 = *(undefined4 **)((int)this + 0x4c);
                  puVar15 = (undefined4 *)(uVar6 * local_1c + param_5);
                  for (uVar9 = uVar10 >> 4; uVar9 != 0; uVar9 = uVar9 - 1) {
                    uVar2 = puVar15[1];
                    uVar3 = puVar15[2];
                    uVar4 = puVar15[3];
                    *puVar20 = *puVar15;
                    puVar20[1] = uVar2;
                    puVar20[2] = uVar3;
                    puVar20[3] = uVar4;
                    puVar20 = puVar20 + 4;
                    puVar15 = puVar15 + 4;
                  }
                  uVar9 = uVar10 >> 2 & 3;
                  uVar6 = 0;
                  if (uVar9 != 0) {
                    do {
                      puVar20[uVar6] = puVar15[uVar6];
                      uVar6 = uVar6 + 1;
                    } while (uVar6 < uVar9);
                  }
                  goto LAB_10056030;
                }
                if (iVar17 != 0) {
                  uVar9 = uVar6 >> 2 & 3;
                  local_60 = iVar17;
                  do {
                    puVar20 = *(undefined4 **)((int)this + 0x4c);
                    puVar15 = (undefined4 *)(local_1c * param_6 + param_5);
                    for (uVar10 = uVar6 >> 4; uVar10 != 0; uVar10 = uVar10 - 1) {
                      uVar2 = puVar15[1];
                      uVar3 = puVar15[2];
                      uVar4 = puVar15[3];
                      *puVar20 = *puVar15;
                      puVar20[1] = uVar2;
                      puVar20[2] = uVar3;
                      puVar20[3] = uVar4;
                      puVar20 = puVar20 + 4;
                      puVar15 = puVar15 + 4;
                    }
                    if (uVar9 != 0) {
                      uVar10 = 0;
                      do {
                        puVar20[uVar10] = puVar15[uVar10];
                        uVar10 = uVar10 + 1;
                      } while (uVar10 < uVar9);
                    }
                    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar6;
                    local_1c = local_1c + 1;
                    local_60 = local_60 + -1;
                  } while (local_60 != 0);
                }
                goto LAB_100560d1;
              }
            }
          }
          else {
            local_68 = 0;
            if (uVar12 != 0) {
              do {
                if (param_11 == '\0') {
                  uVar6 = (uint)*(ushort *)((int)param_8 + local_68 * 2 + local_24 * 2 + 2);
                  uVar9 = (uint)*(ushort *)((int)param_8 + local_68 * 2 + local_24 * 2 + 4);
                  uVar10 = (uint)(ushort)*param_8;
                }
                else {
                  uVar6 = param_8[local_24 + local_68 + 1];
                  uVar9 = param_8[local_24 + local_68 + 2];
                  uVar10 = *param_8;
                }
                uVar14 = param_10 + uVar6;
                if ((param_11 != '\0') && (uVar14 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar20 = (undefined4 *)((int)this + 0x20);
                  for (iVar17 = 8; iVar17 != 0; iVar17 = iVar17 + -1) {
                    *puVar20 = 0;
                    puVar20 = puVar20 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar14 >> 0x10;
                }
                uVar18 = uVar14 & 0xffff;
                uVar7 = uVar18 >> 0xb;
                if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
                  FUN_100cfed0((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar18 >> 3));
                if (((&DAT_100d521c)[uVar14 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar18 >> 3)) =
                       (&DAT_100d521c)[uVar14 & 7] | bVar1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar18 * 2) = (short)local_2c;
                  local_2c = local_2c + 1;
                  if (local_1c == local_18) {
LAB_100553a9:
                    local_18 = uVar6 + 1 + param_10;
                    local_1c = uVar14;
                  }
                  else if (uVar14 == local_18) {
                    local_18 = local_18 + 1;
                  }
                  else if ((uVar14 < local_1c) || (local_18 < uVar14)) {
                    iVar16 = local_18 - local_1c;
                    iVar17 = *(int *)((int)this + 0xfc8);
                    local_50 = (undefined4 *)0x0;
                    if (*(int *)(param_2 + 8) != 0) {
                      do {
                        iVar19 = (int)local_50 * 0xc;
                        if (*(int *)(param_5 + iVar19) != 0) {
                          local_4c = 0;
                          local_38 = (undefined4 *)
                                     (*(int *)(param_5 + 4 + iVar19) * local_1c +
                                     *(int *)(param_5 + iVar19));
                          uVar7 = (uint)*(byte *)(param_2 + 0x214 + (int)local_50);
                          uVar8 = (uint)(*(byte *)(param_2 + 0x16 + uVar7 * 8) >> 2);
                          if (iVar16 != 0) {
                            puVar20 = (undefined4 *)
                                      (*(int *)((int)this + 0x4c) +
                                      (uint)*(byte *)(param_2 + 0x17 + uVar7 * 8) * 4);
                            local_60 = iVar16;
                            do {
                              uVar7 = 0;
                              if (uVar8 != 0) {
                                if (3 < uVar8) {
                                  if ((local_38 + (uVar8 - 1) < puVar20) ||
                                     (puVar20 + (uVar8 - 1) < local_38)) {
                                    FUN_100cff00(puVar20,local_38,uVar8 * 4);
                                    goto LAB_10055327;
                                  }
                                }
                                do {
                                  puVar20[uVar7] = local_38[uVar7];
                                  uVar7 = uVar7 + 1;
                                } while (uVar7 < uVar8);
                              }
LAB_10055327:
                              puVar20 = (undefined4 *)((int)puVar20 + iVar17);
                              local_4c = local_4c + 1;
                              if (local_4c == *(int *)(param_5 + 8 + iVar19)) {
                                local_4c = 0;
                                local_38 = (undefined4 *)
                                           ((int)local_38 + *(int *)(param_5 + 4 + iVar19));
                              }
                              local_60 = local_60 + -1;
                            } while (local_60 != 0);
                          }
                        }
                        local_50 = (undefined4 *)((int)local_50 + 1);
                      } while (local_50 < *(uint *)(param_2 + 8));
                    }
                    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar16 * iVar17;
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar16;
                    goto LAB_100553a9;
                  }
                }
                uVar6 = uVar9 + param_10;
                **(uint **)((int)this + 100) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar18 * 2);
                if ((param_11 != '\0') && (uVar6 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar20 = (undefined4 *)((int)this + 0x20);
                  for (iVar17 = 8; iVar17 != 0; iVar17 = iVar17 + -1) {
                    *puVar20 = 0;
                    puVar20 = puVar20 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar6 >> 0x10;
                }
                uVar14 = uVar6 & 0xffff;
                uVar7 = uVar14 >> 0xb;
                if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
                  FUN_100cfed0((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3));
                if (((&DAT_100d521c)[uVar6 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3)) =
                       (&DAT_100d521c)[uVar6 & 7] | bVar1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar14 * 2) = (short)local_2c;
                  local_2c = local_2c + 1;
                  if (local_1c == local_18) {
LAB_100555e0:
                    local_18 = uVar9 + 1 + param_10;
                    local_1c = uVar6;
                  }
                  else if (uVar6 == local_18) {
                    local_18 = local_18 + 1;
                  }
                  else if ((uVar6 < local_1c) || (local_18 < uVar6)) {
                    iVar17 = *(int *)((int)this + 0xfc8);
                    iVar16 = local_18 - local_1c;
                    local_4c = 0;
                    if (*(int *)(param_2 + 8) != 0) {
                      do {
                        iVar19 = local_4c * 0xc;
                        if (*(int *)(param_5 + iVar19) != 0) {
                          local_50 = (undefined4 *)0x0;
                          local_38 = (undefined4 *)
                                     (*(int *)(param_5 + 4 + iVar19) * local_1c +
                                     *(int *)(param_5 + iVar19));
                          uVar7 = (uint)*(byte *)(param_2 + 0x214 + local_4c);
                          uVar18 = (uint)(*(byte *)(param_2 + 0x16 + uVar7 * 8) >> 2);
                          if (iVar16 != 0) {
                            puVar20 = (undefined4 *)
                                      ((uint)*(byte *)(param_2 + 0x17 + uVar7 * 8) * 4 +
                                      *(int *)((int)this + 0x4c));
                            local_60 = iVar16;
                            do {
                              uVar7 = 0;
                              if (uVar18 != 0) {
                                if (3 < uVar18) {
                                  if ((local_38 + (uVar18 - 1) < puVar20) ||
                                     (puVar20 + (uVar18 - 1) < local_38)) {
                                    FUN_100cff00(puVar20,local_38,uVar18 * 4);
                                    goto LAB_10055575;
                                  }
                                }
                                do {
                                  puVar20[uVar7] = local_38[uVar7];
                                  uVar7 = uVar7 + 1;
                                } while (uVar7 < uVar18);
                              }
LAB_10055575:
                              puVar20 = (undefined4 *)((int)puVar20 + iVar17);
                              local_50 = (undefined4 *)((int)local_50 + 1);
                              if (local_50 == (undefined4 *)*(int *)(param_5 + 8 + iVar19)) {
                                local_50 = (undefined4 *)0x0;
                                local_38 = (undefined4 *)
                                           ((int)local_38 + *(int *)(param_5 + 4 + iVar19));
                              }
                              local_60 = local_60 + -1;
                            } while (local_60 != 0);
                          }
                        }
                        local_4c = local_4c + 1;
                      } while (local_4c < *(uint *)(param_2 + 8));
                    }
                    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar16 * iVar17;
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar16;
                    goto LAB_100555e0;
                  }
                }
                uVar6 = uVar10 + param_10;
                *(uint *)(*(int *)((int)this + 100) + 4) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar14 * 2);
                if ((param_11 != '\0') && (uVar6 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar20 = (undefined4 *)((int)this + 0x20);
                  for (iVar17 = 8; iVar17 != 0; iVar17 = iVar17 + -1) {
                    *puVar20 = 0;
                    puVar20 = puVar20 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar6 >> 0x10;
                }
                uVar9 = uVar6 & 0xffff;
                uVar14 = uVar9 >> 0xb;
                if (*(char *)((int)this + uVar14 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar14 + 0x20) = 1;
                  FUN_100cfed0((int *)(uVar14 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar9 >> 3));
                if (((&DAT_100d521c)[uVar6 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar9 >> 3)) =
                       (&DAT_100d521c)[uVar6 & 7] | bVar1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar9 * 2) = (short)local_2c;
                  local_2c = local_2c + 1;
                  if (local_1c == local_18) {
LAB_10055691:
                    local_18 = param_10 + 1 + uVar10;
                    local_1c = uVar6;
                  }
                  else if (uVar6 == local_18) {
                    local_18 = local_18 + 1;
                  }
                  else if ((uVar6 < local_1c) || (local_18 < uVar6)) {
                    iVar17 = *(int *)((int)this + 0xfc8);
                    iVar16 = local_18 - local_1c;
                    local_48 = 0;
                    if (*(int *)(param_2 + 8) != 0) {
                      do {
                        iVar19 = local_48 * 0xc;
                        if (*(int *)(param_5 + iVar19) != 0) {
                          local_4c = 0;
                          puVar20 = (undefined4 *)
                                    (*(int *)(param_5 + 4 + iVar19) * local_1c +
                                    *(int *)(param_5 + iVar19));
                          uVar14 = (uint)*(byte *)(param_2 + 0x214 + local_48);
                          uVar7 = (uint)(*(byte *)(param_2 + 0x16 + uVar14 * 8) >> 2);
                          if (iVar16 != 0) {
                            puVar15 = (undefined4 *)
                                      ((uint)*(byte *)(param_2 + 0x17 + uVar14 * 8) * 4 +
                                      *(int *)((int)this + 0x4c));
                            local_64 = iVar16;
                            do {
                              uVar14 = 0;
                              if (uVar7 != 0) {
                                if ((uVar7 < 4) ||
                                   ((puVar15 <= puVar20 + (uVar7 - 1) &&
                                    (puVar20 <= puVar15 + (uVar7 - 1))))) {
                                  do {
                                    puVar15[uVar14] = puVar20[uVar14];
                                    uVar14 = uVar14 + 1;
                                  } while (uVar14 < uVar7);
                                }
                                else {
                                  FUN_100cff00(puVar15,puVar20,uVar7 * 4);
                                }
                              }
                              puVar15 = (undefined4 *)((int)puVar15 + iVar17);
                              local_4c = local_4c + 1;
                              if (local_4c == *(int *)(param_5 + 8 + iVar19)) {
                                local_4c = 0;
                                puVar20 = (undefined4 *)
                                          ((int)puVar20 + *(int *)(param_5 + 4 + iVar19));
                              }
                              local_64 = local_64 + -1;
                            } while (local_64 != 0);
                          }
                        }
                        local_48 = local_48 + 1;
                      } while (local_48 < *(uint *)(param_2 + 8));
                    }
                    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar16 * iVar17;
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar16;
                    goto LAB_10055691;
                  }
                }
                *(uint *)(*(int *)((int)this + 100) + 8) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar9 * 2);
                *(int *)((int)this + 100) = *(int *)((int)this + 100) + 0xc;
                local_68 = local_68 + 1;
              } while (local_68 < uVar12);
              if (local_18 != local_1c) {
                iVar16 = *(int *)((int)this + 0xfc8);
                iVar17 = local_18 - local_1c;
                local_50 = (undefined4 *)0x0;
                if (*(int *)(param_2 + 8) != 0) {
                  do {
                    iVar19 = (int)local_50 * 0xc;
                    if (*(int *)(param_5 + iVar19) != 0) {
                      local_44 = 0;
                      puVar20 = (undefined4 *)
                                (*(int *)(param_5 + 4 + iVar19) * local_1c +
                                *(int *)(param_5 + iVar19));
                      uVar6 = (uint)*(byte *)(param_2 + 0x214 + (int)local_50);
                      uVar9 = (uint)(*(byte *)(param_2 + 0x16 + uVar6 * 8) >> 2);
                      if (iVar17 != 0) {
                        local_54 = (undefined4 *)
                                   ((uint)*(byte *)(param_2 + 0x17 + uVar6 * 8) * 4 +
                                   *(int *)((int)this + 0x4c));
                        local_64 = iVar17;
                        do {
                          uVar6 = 0;
                          if (uVar9 != 0) {
                            if ((uVar9 < 4) ||
                               ((local_54 <= puVar20 + (uVar9 - 1) &&
                                (puVar20 <= local_54 + (uVar9 - 1))))) {
                              do {
                                local_54[uVar6] = puVar20[uVar6];
                                uVar6 = uVar6 + 1;
                              } while (uVar6 < uVar9);
                            }
                            else {
                              FUN_100cff00(local_54,puVar20,uVar9 << 2);
                            }
                          }
                          local_54 = (undefined4 *)((int)local_54 + iVar16);
                          local_44 = local_44 + 1;
                          if (local_44 == *(int *)(param_5 + 8 + iVar19)) {
                            local_44 = 0;
                            puVar20 = (undefined4 *)((int)puVar20 + *(int *)(param_5 + 4 + iVar19));
                          }
                          local_64 = local_64 + -1;
                        } while (local_64 != 0);
                      }
                    }
                    local_50 = (undefined4 *)((int)local_50 + 1);
                  } while (local_50 < *(uint *)(param_2 + 8));
                }
                uVar10 = iVar16 * iVar17;
LAB_10056030:
                *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar10;
LAB_100560d1:
                *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar17;
              }
            }
          }
          *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + iVar13;
          uVar5 = uVar5 - uVar12;
          local_24 = local_24 + uVar12;
        } while( true );
      }
      uVar5 = 3;
    }
    uVar6 = uVar5 - 1;
    local_48 = param_9;
    uVar12 = uVar6;
    if (uVar5 <= param_9) {
      do {
        iVar13 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
        if (((uint)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50)) < 0x10) ||
           (0x1000U - iVar13 < 0x10)) {
          (**(code **)(*(int *)this + 0xec))(1);
          iVar13 = 0;
        }
        uVar12 = 0x1000U - iVar13 & 0xfffffffe;
        uVar5 = local_48;
        if (uVar12 <= local_48) {
          uVar5 = uVar12;
        }
        if (param_3 == '\0') {
          (**(code **)(*(int *)this + 0xf4))
                    (param_1,param_4,*(undefined4 *)(param_2 + 0xc),uVar5,uVar5,0);
        }
        else {
          (**(code **)(*(int *)this + 0xf0))
                    (param_1,param_2,param_4,*(undefined4 *)(param_2 + 0xc),uVar5,uVar5,param_13);
        }
        if ((*(int *)((int)this + 0x14) == 0) ||
           (((*(int *)((int)this + 0x54) == 0 && (*(int *)((int)this + 0x6c) == 0)) ||
            (0xfff < uVar5 + iVar13)))) {
          (**(code **)(*(int *)this + 0xec))(0);
        }
        else {
          **(int **)((int)this + 100) = *(int *)((int)this + 0x14);
          *(int *)((int)this + 100) = *(int *)((int)this + 100) + 4;
          *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + 1;
        }
        local_34 = *(int *)((int)this + 0x54);
        local_18 = 0;
        local_1c = 0;
        if (param_12 == '\0') {
          local_60 = 0;
          do {
            if (param_11 == '\0') {
              uVar12 = (uint)*(ushort *)((int)param_8 + local_24 * 2 + local_60 * 2);
            }
            else {
              uVar12 = param_8[local_60 + local_24];
            }
            uVar9 = param_10 + uVar12;
            if ((param_11 != '\0') && (uVar9 >> 0x10 != *(uint *)((int)this + 0x40))) {
              puVar20 = (undefined4 *)((int)this + 0x20);
              for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                *puVar20 = 0;
                puVar20 = puVar20 + 1;
              }
              *(uint *)((int)this + 0x40) = uVar9 >> 0x10;
            }
            uVar10 = uVar9 & 0xffff;
            uVar14 = uVar10 >> 0xb;
            if (*(char *)((int)this + uVar14 + 0x20) == '\0') {
              *(undefined1 *)((int)this + uVar14 + 0x20) = 1;
              FUN_100cfed0((int *)(uVar14 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
            }
            bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar10 >> 3));
            if (((&DAT_100d521c)[uVar9 & 7] & bVar1) == 0) {
              *(byte *)(*(int *)((int)this + 0x1c) + (uVar10 >> 3)) =
                   (&DAT_100d521c)[uVar9 & 7] | bVar1;
              *(short *)(*(int *)((int)this + 0x18) + uVar10 * 2) = (short)local_34;
              local_34 = local_34 + 1;
              if (local_18 == local_1c) {
LAB_10056893:
                local_1c = param_10 + 1 + uVar12;
                local_18 = uVar9;
              }
              else if (uVar9 == local_1c) {
                local_1c = local_1c + 1;
              }
              else if ((uVar9 < local_18) || (local_1c < uVar9)) {
                uVar14 = *(uint *)((int)this + 0xfc8);
                iVar13 = local_1c - local_18;
                if (param_6 == uVar14) {
                  puVar20 = *(undefined4 **)((int)this + 0x4c);
                  puVar15 = (undefined4 *)(local_18 * uVar14 + param_5);
                  for (uVar7 = iVar13 * uVar14 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                    uVar2 = puVar15[1];
                    uVar3 = puVar15[2];
                    uVar4 = puVar15[3];
                    *puVar20 = *puVar15;
                    puVar20[1] = uVar2;
                    puVar20[2] = uVar3;
                    puVar20[3] = uVar4;
                    puVar20 = puVar20 + 4;
                    puVar15 = puVar15 + 4;
                  }
                  uVar7 = 0;
                  uVar18 = iVar13 * uVar14 >> 2 & 3;
                  if (uVar18 != 0) {
                    do {
                      puVar20[uVar7] = puVar15[uVar7];
                      uVar7 = uVar7 + 1;
                    } while (uVar7 < uVar18);
                  }
                  *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar13 * uVar14;
                }
                else if (iVar13 != 0) {
                  uVar7 = uVar14 >> 2 & 3;
                  local_64 = iVar13;
                  do {
                    puVar20 = *(undefined4 **)((int)this + 0x4c);
                    puVar15 = (undefined4 *)(local_18 * param_6 + param_5);
                    for (uVar18 = uVar14 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
                      uVar2 = puVar15[1];
                      uVar3 = puVar15[2];
                      uVar4 = puVar15[3];
                      *puVar20 = *puVar15;
                      puVar20[1] = uVar2;
                      puVar20[2] = uVar3;
                      puVar20[3] = uVar4;
                      puVar20 = puVar20 + 4;
                      puVar15 = puVar15 + 4;
                    }
                    uVar18 = 0;
                    if (uVar7 != 0) {
                      do {
                        puVar20[uVar18] = puVar15[uVar18];
                        uVar18 = uVar18 + 1;
                      } while (uVar18 < uVar7);
                    }
                    local_18 = local_18 + 1;
                    local_64 = local_64 + -1;
                    *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar14;
                  } while (local_64 != 0);
                }
                *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar13;
                goto LAB_10056893;
              }
            }
            *(uint *)(*(int *)((int)this + 100) + local_60 * 4) =
                 (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar10 * 2);
            local_60 = local_60 + 1;
          } while (local_60 < uVar6);
          local_40 = (undefined4 *)0x0;
          if (uVar5 != uVar6) {
            do {
              if (param_11 == '\0') {
                uVar12 = (uint)*(ushort *)
                                ((int)param_8 + (uVar6 + local_24) * 2 + (int)local_40 * 2);
              }
              else {
                uVar12 = param_8[(int)local_40 + uVar6 + local_24];
              }
              uVar9 = param_10 + uVar12;
              if ((param_11 != '\0') && (uVar9 >> 0x10 != *(uint *)((int)this + 0x40))) {
                puVar20 = (undefined4 *)((int)this + 0x20);
                for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *puVar20 = 0;
                  puVar20 = puVar20 + 1;
                }
                *(uint *)((int)this + 0x40) = uVar9 >> 0x10;
              }
              uVar10 = uVar9 & 0xffff;
              uVar14 = uVar10 >> 0xb;
              if (*(char *)((int)this + uVar14 + 0x20) == '\0') {
                *(undefined1 *)((int)this + uVar14 + 0x20) = 1;
                FUN_100cfed0((int *)(uVar14 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
              }
              bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar10 >> 3));
              if (((&DAT_100d521c)[uVar9 & 7] & bVar1) == 0) {
                *(byte *)(*(int *)((int)this + 0x1c) + (uVar10 >> 3)) =
                     (&DAT_100d521c)[uVar9 & 7] | bVar1;
                *(short *)(*(int *)((int)this + 0x18) + uVar10 * 2) = (short)local_34;
                local_34 = local_34 + 1;
                if (local_18 == local_1c) {
LAB_10056bee:
                  local_1c = param_10 + 1 + uVar12;
                  local_18 = uVar9;
                }
                else if (uVar9 == local_1c) {
                  local_1c = local_1c + 1;
                }
                else if ((uVar9 < local_18) || (local_1c < uVar9)) {
                  uVar14 = *(uint *)((int)this + 0xfc8);
                  iVar13 = local_1c - local_18;
                  if (param_6 == uVar14) {
                    puVar20 = *(undefined4 **)((int)this + 0x4c);
                    puVar15 = (undefined4 *)(local_18 * uVar14 + param_5);
                    for (uVar7 = iVar13 * uVar14 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                      uVar2 = puVar15[1];
                      uVar3 = puVar15[2];
                      uVar4 = puVar15[3];
                      *puVar20 = *puVar15;
                      puVar20[1] = uVar2;
                      puVar20[2] = uVar3;
                      puVar20[3] = uVar4;
                      puVar20 = puVar20 + 4;
                      puVar15 = puVar15 + 4;
                    }
                    uVar7 = 0;
                    uVar18 = iVar13 * uVar14 >> 2 & 3;
                    if (uVar18 != 0) {
                      do {
                        puVar20[uVar7] = puVar15[uVar7];
                        uVar7 = uVar7 + 1;
                      } while (uVar7 < uVar18);
                    }
                    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar13 * uVar14;
                  }
                  else if (iVar13 != 0) {
                    uVar7 = uVar14 >> 2 & 3;
                    local_64 = iVar13;
                    do {
                      puVar20 = *(undefined4 **)((int)this + 0x4c);
                      puVar15 = (undefined4 *)(local_18 * param_6 + param_5);
                      for (uVar18 = uVar14 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
                        uVar2 = puVar15[1];
                        uVar3 = puVar15[2];
                        uVar4 = puVar15[3];
                        *puVar20 = *puVar15;
                        puVar20[1] = uVar2;
                        puVar20[2] = uVar3;
                        puVar20[3] = uVar4;
                        puVar20 = puVar20 + 4;
                        puVar15 = puVar15 + 4;
                      }
                      uVar18 = 0;
                      if (uVar7 != 0) {
                        do {
                          puVar20[uVar18] = puVar15[uVar18];
                          uVar18 = uVar18 + 1;
                        } while (uVar18 < uVar7);
                      }
                      local_18 = local_18 + 1;
                      local_64 = local_64 + -1;
                      *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar14;
                    } while (local_64 != 0);
                  }
                  *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar13;
                  goto LAB_10056bee;
                }
              }
              *(uint *)(uVar6 * 4 + (int)local_40 * 4 + *(int *)((int)this + 100)) =
                   (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar10 * 2);
              local_40 = (undefined4 *)((int)local_40 + 1);
            } while (local_40 < uVar5 - uVar6);
          }
          if (local_1c != local_18) {
            uVar12 = *(uint *)((int)this + 0xfc8);
            iVar13 = local_1c - local_18;
            if (param_6 == uVar12) {
              puVar20 = *(undefined4 **)((int)this + 0x4c);
              puVar15 = (undefined4 *)(local_18 * uVar12 + param_5);
              for (uVar9 = uVar12 * iVar13 >> 4; uVar9 != 0; uVar9 = uVar9 - 1) {
                uVar2 = puVar15[1];
                uVar3 = puVar15[2];
                uVar4 = puVar15[3];
                *puVar20 = *puVar15;
                puVar20[1] = uVar2;
                puVar20[2] = uVar3;
                puVar20[3] = uVar4;
                puVar20 = puVar20 + 4;
                puVar15 = puVar15 + 4;
              }
              uVar9 = 0;
              uVar10 = uVar12 * iVar13 >> 2 & 3;
              if (uVar10 != 0) {
                do {
                  puVar20[uVar9] = puVar15[uVar9];
                  uVar9 = uVar9 + 1;
                } while (uVar9 < uVar10);
              }
              *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar12 * iVar13;
            }
            else if (iVar13 != 0) {
              uVar9 = uVar12 >> 2 & 3;
              local_68 = iVar13;
              do {
                puVar20 = *(undefined4 **)((int)this + 0x4c);
                puVar15 = (undefined4 *)(local_18 * param_6 + param_5);
                for (uVar10 = uVar12 >> 4; uVar10 != 0; uVar10 = uVar10 - 1) {
                  uVar2 = puVar15[1];
                  uVar3 = puVar15[2];
                  uVar4 = puVar15[3];
                  *puVar20 = *puVar15;
                  puVar20[1] = uVar2;
                  puVar20[2] = uVar3;
                  puVar20[3] = uVar4;
                  puVar20 = puVar20 + 4;
                  puVar15 = puVar15 + 4;
                }
                uVar10 = 0;
                if (uVar9 != 0) {
                  do {
                    puVar20[uVar10] = puVar15[uVar10];
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < uVar9);
                }
                *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar12;
                local_18 = local_18 + 1;
                local_68 = local_68 + -1;
              } while (local_68 != 0);
            }
            goto LAB_10056d59;
          }
        }
        else {
          local_40 = (undefined4 *)0x0;
          do {
            if (param_11 == '\0') {
              uVar12 = (uint)*(ushort *)((int)param_8 + local_24 * 2 + (int)local_40 * 2);
            }
            else {
              uVar12 = param_8[(int)local_40 + local_24];
            }
            uVar9 = param_10 + uVar12;
            if ((param_11 != '\0') && (uVar9 >> 0x10 != *(uint *)((int)this + 0x40))) {
              puVar20 = (undefined4 *)((int)this + 0x20);
              for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                *puVar20 = 0;
                puVar20 = puVar20 + 1;
              }
              *(uint *)((int)this + 0x40) = uVar9 >> 0x10;
            }
            uVar10 = uVar9 & 0xffff;
            uVar14 = uVar10 >> 0xb;
            if (*(char *)((int)this + uVar14 + 0x20) == '\0') {
              *(undefined1 *)((int)this + uVar14 + 0x20) = 1;
              FUN_100cfed0((int *)(uVar14 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
            }
            bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar10 >> 3));
            if (((&DAT_100d521c)[uVar9 & 7] & bVar1) == 0) {
              *(byte *)(*(int *)((int)this + 0x1c) + (uVar10 >> 3)) =
                   (&DAT_100d521c)[uVar9 & 7] | bVar1;
              *(short *)(*(int *)((int)this + 0x18) + uVar10 * 2) = (short)local_34;
              local_34 = local_34 + 1;
              if (local_18 == local_1c) {
LAB_100562a4:
                local_1c = param_10 + 1 + uVar12;
                local_18 = uVar9;
              }
              else if (uVar9 == local_1c) {
                local_1c = local_1c + 1;
              }
              else if ((uVar9 < local_18) || (local_1c < uVar9)) {
                iVar13 = *(int *)((int)this + 0xfc8);
                iVar17 = local_1c - local_18;
                local_50 = (undefined4 *)0x0;
                if (*(int *)(param_2 + 8) != 0) {
                  do {
                    iVar16 = (int)local_50 * 0xc;
                    if (*(int *)(param_5 + iVar16) != 0) {
                      local_38 = (undefined4 *)
                                 (*(int *)(param_5 + 4 + iVar16) * local_18 +
                                 *(int *)(param_5 + iVar16));
                      uVar14 = (uint)*(byte *)(param_2 + 0x214 + (int)local_50);
                      uVar7 = (uint)(*(byte *)(param_2 + 0x16 + uVar14 * 8) >> 2);
                      local_54 = (undefined4 *)0x0;
                      if (iVar17 != 0) {
                        puVar20 = (undefined4 *)
                                  (*(int *)((int)this + 0x4c) +
                                  (uint)*(byte *)(param_2 + 0x17 + uVar14 * 8) * 4);
                        local_64 = iVar17;
                        do {
                          uVar14 = 0;
                          if (uVar7 != 0) {
                            if (3 < uVar7) {
                              if ((local_38 + (uVar7 - 1) < puVar20) ||
                                 (puVar20 + (uVar7 - 1) < local_38)) {
                                FUN_100cff00(puVar20,local_38,uVar7 * 4);
                                goto LAB_100563e5;
                              }
                            }
                            do {
                              puVar20[uVar14] = local_38[uVar14];
                              uVar14 = uVar14 + 1;
                            } while (uVar14 < uVar7);
                          }
LAB_100563e5:
                          puVar20 = (undefined4 *)((int)puVar20 + iVar13);
                          local_54 = (undefined4 *)((int)local_54 + 1);
                          if (local_54 == (undefined4 *)*(int *)(param_5 + 8 + iVar16)) {
                            local_38 = (undefined4 *)
                                       ((int)local_38 + *(int *)(param_5 + 4 + iVar16));
                            local_54 = (undefined4 *)0x0;
                          }
                          local_64 = local_64 + -1;
                        } while (local_64 != 0);
                      }
                    }
                    local_50 = (undefined4 *)((int)local_50 + 1);
                  } while (local_50 < *(uint *)(param_2 + 8));
                }
                *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar17 * iVar13;
                *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar17;
                goto LAB_100562a4;
              }
            }
            *(uint *)(*(int *)((int)this + 100) + (int)local_40 * 4) =
                 (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar10 * 2);
            local_40 = (undefined4 *)((int)local_40 + 1);
          } while (local_40 < uVar6);
          local_50 = (undefined4 *)0x0;
          if (uVar5 != uVar6) {
            do {
              if (param_11 == '\0') {
                uVar12 = (uint)*(ushort *)
                                ((int)param_8 + (uVar6 + local_24) * 2 + (int)local_50 * 2);
              }
              else {
                uVar12 = param_8[(int)local_50 + uVar6 + local_24];
              }
              uVar9 = param_10 + uVar12;
              if ((param_11 != '\0') && (uVar9 >> 0x10 != *(uint *)((int)this + 0x40))) {
                puVar20 = (undefined4 *)((int)this + 0x20);
                for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *puVar20 = 0;
                  puVar20 = puVar20 + 1;
                }
                *(uint *)((int)this + 0x40) = uVar9 >> 0x10;
              }
              uVar10 = uVar9 & 0xffff;
              uVar14 = uVar10 >> 0xb;
              if (*(char *)((int)this + uVar14 + 0x20) == '\0') {
                *(undefined1 *)((int)this + uVar14 + 0x20) = 1;
                FUN_100cfed0((int *)(uVar14 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
              }
              bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar10 >> 3));
              if (((&DAT_100d521c)[uVar9 & 7] & bVar1) == 0) {
                *(byte *)(*(int *)((int)this + 0x1c) + (uVar10 >> 3)) =
                     (&DAT_100d521c)[uVar9 & 7] | bVar1;
                *(short *)(*(int *)((int)this + 0x18) + uVar10 * 2) = (short)local_34;
                local_34 = local_34 + 1;
                if (local_18 == local_1c) {
LAB_10056647:
                  local_1c = param_10 + 1 + uVar12;
                  local_18 = uVar9;
                }
                else if (uVar9 == local_1c) {
                  local_1c = local_1c + 1;
                }
                else if ((uVar9 < local_18) || (local_1c < uVar9)) {
                  iVar13 = *(int *)((int)this + 0xfc8);
                  iVar17 = local_1c - local_18;
                  local_58 = (undefined4 *)0x0;
                  if (*(int *)(param_2 + 8) != 0) {
                    do {
                      iVar16 = (int)local_58 * 0xc;
                      if (*(int *)(param_5 + iVar16) != 0) {
                        local_38 = (undefined4 *)
                                   (*(int *)(param_5 + 4 + iVar16) * local_18 +
                                   *(int *)(param_5 + iVar16));
                        uVar14 = (uint)*(byte *)(param_2 + 0x214 + (int)local_58);
                        uVar7 = (uint)(*(byte *)(param_2 + 0x16 + uVar14 * 8) >> 2);
                        local_44 = 0;
                        if (iVar17 != 0) {
                          local_30 = (undefined4 *)
                                     (*(int *)((int)this + 0x4c) +
                                     (uint)*(byte *)(param_2 + 0x17 + uVar14 * 8) * 4);
                          local_64 = iVar17;
                          do {
                            uVar14 = 0;
                            if (uVar7 != 0) {
                              if (3 < uVar7) {
                                if ((local_38 + (uVar7 - 1) < local_30) ||
                                   (local_30 + (uVar7 - 1) < local_38)) {
                                  FUN_100cff00(local_30,local_38,uVar7 * 4);
                                  goto LAB_100565e1;
                                }
                              }
                              do {
                                local_30[uVar14] = local_38[uVar14];
                                uVar14 = uVar14 + 1;
                              } while (uVar14 < uVar7);
                            }
LAB_100565e1:
                            local_30 = (undefined4 *)((int)local_30 + iVar13);
                            local_44 = local_44 + 1;
                            if (local_44 == *(int *)(param_5 + 8 + iVar16)) {
                              local_38 = (undefined4 *)
                                         ((int)local_38 +
                                         *(int *)((int)local_58 * 0xc + 4 + param_5));
                              local_44 = 0;
                            }
                            local_64 = local_64 + -1;
                          } while (local_64 != 0);
                        }
                      }
                      local_58 = (undefined4 *)((int)local_58 + 1);
                    } while (local_58 < *(uint *)(param_2 + 8));
                  }
                  *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar17 * iVar13;
                  *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar17;
                  goto LAB_10056647;
                }
              }
              *(uint *)(uVar6 * 4 + (int)local_50 * 4 + *(int *)((int)this + 100)) =
                   (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar10 * 2);
              local_50 = (undefined4 *)((int)local_50 + 1);
            } while (local_50 < uVar5 - uVar6);
          }
          if (local_1c != local_18) {
            iVar17 = *(int *)((int)this + 0xfc8);
            iVar13 = local_1c - local_18;
            local_44 = 0;
            if (*(int *)(param_2 + 8) != 0) {
              do {
                iVar16 = local_44 * 0xc;
                if (*(int *)(param_5 + iVar16) != 0) {
                  puVar20 = (undefined4 *)
                            (*(int *)(param_5 + 4 + iVar16) * local_18 + *(int *)(param_5 + iVar16))
                  ;
                  uVar12 = (uint)*(byte *)(param_2 + 0x214 + local_44);
                  uVar9 = (uint)(*(byte *)(param_2 + 0x16 + uVar12 * 8) >> 2);
                  local_58 = (undefined4 *)0x0;
                  if (iVar13 != 0) {
                    local_38 = (undefined4 *)
                               (*(int *)((int)this + 0x4c) +
                               (uint)*(byte *)(param_2 + 0x17 + uVar12 * 8) * 4);
                    local_64 = iVar13;
                    do {
                      uVar12 = 0;
                      if (uVar9 != 0) {
                        if (3 < uVar9) {
                          if ((puVar20 + (uVar9 - 1) < local_38) ||
                             (local_38 + (uVar9 - 1) < puVar20)) {
                            FUN_100cff00(local_38,puVar20,uVar9 * 4);
                            goto LAB_10056785;
                          }
                        }
                        do {
                          local_38[uVar12] = puVar20[uVar12];
                          uVar12 = uVar12 + 1;
                        } while (uVar12 < uVar9);
                      }
LAB_10056785:
                      local_38 = (undefined4 *)((int)local_38 + iVar17);
                      local_58 = (undefined4 *)((int)local_58 + 1);
                      if (local_58 == (undefined4 *)*(int *)(param_5 + 8 + iVar16)) {
                        puVar20 = (undefined4 *)
                                  ((int)puVar20 + *(int *)(local_44 * 0xc + 4 + param_5));
                        local_58 = (undefined4 *)0x0;
                      }
                      local_64 = local_64 + -1;
                    } while (local_64 != 0);
                  }
                }
                local_44 = local_44 + 1;
              } while (local_44 < *(uint *)(param_2 + 8));
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar13 * iVar17;
LAB_10056d59:
            *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar13;
          }
        }
        local_48 = local_48 + (uVar6 - uVar5);
        *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar5;
        local_24 = local_24 + (uVar5 - uVar6);
        uVar12 = *(int *)((int)this + 100) + uVar5 * 4;
        *(uint *)((int)this + 100) = uVar12;
      } while (local_3c <= local_48);
    }
  }
  return uVar12;
}

