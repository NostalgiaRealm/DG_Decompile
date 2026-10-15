/*
 * FUN_100469e3 at 100469e3
 * uint __thiscall FUN_100469e3(void * this, int param_1, int param_2, char param_3, undefined4 param_4, int param_5, uint param_6, undefined4 param_7, uint * param_8, uint param_9, int param_10, char param_11, char param_12, undefined4 param_13, undefined4 param_14)
 * Address ranges: 100469e3-10048e13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_100469e3(void *this,int param_1,int param_2,char param_3,undefined4 param_4,int param_5,
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
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  bool bVar21;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  uint local_4c;
  uint local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_18;
  
  local_24 = 0;
  local_34 = 3;
  puVar19 = (undefined4 *)((int)this + 0x20);
  for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar19 = 0;
    puVar19 = puVar19 + 1;
  }
  if ((param_1 == 1) || (param_1 == 2)) {
    local_34 = (param_1 == 2) + 1;
LAB_10048628:
    uVar5 = param_9 / local_34;
    for (uVar20 = param_9 - param_9 % local_34; uVar20 != 0; uVar20 = uVar20 - uVar6) {
      iVar14 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
      if (((uint)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50)) < 0x10) ||
         (0x1000U - iVar14 < 0x10)) {
        (**(code **)(*(int *)this + 0xc0))(1);
        iVar14 = 0;
      }
      uVar5 = (0x1000 - (0x1000U - iVar14) % local_34) - iVar14;
      uVar6 = uVar20;
      if (uVar5 <= uVar20) {
        uVar6 = uVar5;
      }
      if (param_3 == '\0') {
        (**(code **)(*(int *)this + 200))
                  (param_1,param_4,*(undefined4 *)(param_2 + 0xc),uVar6,uVar6,param_14);
      }
      else {
        (**(code **)(*(int *)this + 0xc4))
                  (param_1,param_2,param_4,*(undefined4 *)(param_2 + 0xc),uVar6,uVar6,param_13);
      }
      local_2c = *(int *)((int)this + 0x54);
      uVar5 = 0;
      local_18 = 0;
      local_20 = 0;
      if (param_12 == '\0') {
        local_48 = 0;
        if (uVar6 != 0) {
          do {
            if (param_11 == '\0') {
              uVar10 = (uint)*(ushort *)((int)param_8 + local_24 * 2 + local_48 * 2);
            }
            else {
              uVar10 = param_8[local_48 + local_24];
            }
            uVar12 = param_10 + uVar10;
            if ((param_11 != '\0') && (uVar12 >> 0x10 != *(uint *)((int)this + 0x40))) {
              puVar19 = (undefined4 *)((int)this + 0x20);
              for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
                *puVar19 = 0;
                puVar19 = puVar19 + 1;
              }
              *(uint *)((int)this + 0x40) = uVar12 >> 0x10;
              uVar5 = local_18;
            }
            uVar15 = uVar12 & 0xffff;
            uVar7 = uVar15 >> 0xb;
            if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
              *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
              FUN_100ada8e((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
            }
            bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar15 >> 3));
            if (((&DAT_100b1d6c)[uVar12 & 7] & bVar1) == 0) {
              *(byte *)(*(int *)((int)this + 0x1c) + (uVar15 >> 3)) =
                   (&DAT_100b1d6c)[uVar12 & 7] | bVar1;
              *(short *)(*(int *)((int)this + 0x18) + uVar15 * 2) = (short)local_2c;
              local_2c = local_2c + 1;
              if (uVar5 == local_20) {
LAB_10048c7d:
                local_20 = param_10 + 1 + uVar10;
                uVar5 = uVar12;
                local_18 = uVar12;
              }
              else if (uVar12 == local_20) {
                local_20 = local_20 + 1;
              }
              else if ((uVar12 < uVar5) || (local_20 < uVar12)) {
                uVar7 = *(uint *)((int)this + 0x6a8);
                iVar14 = local_20 - uVar5;
                if (param_6 == uVar7) {
                  uVar8 = iVar14 * uVar7;
                  puVar19 = *(undefined4 **)((int)this + 0x4c);
                  puVar11 = (undefined4 *)(uVar5 * uVar7 + param_5);
                  for (uVar18 = uVar8 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
                    uVar2 = puVar11[1];
                    uVar3 = puVar11[2];
                    uVar4 = puVar11[3];
                    *puVar19 = *puVar11;
                    puVar19[1] = uVar2;
                    puVar19[2] = uVar3;
                    puVar19[3] = uVar4;
                    puVar19 = puVar19 + 4;
                    puVar11 = puVar11 + 4;
                  }
                  uVar7 = uVar8 >> 2 & 3;
                  uVar5 = 0;
                  if (uVar7 != 0) {
                    do {
                      puVar19[uVar5] = puVar11[uVar5];
                      uVar5 = uVar5 + 1;
                    } while (uVar5 < uVar7);
                  }
                  *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar8;
                }
                else if (iVar14 != 0) {
                  uVar18 = uVar7 >> 2 & 3;
                  local_60 = iVar14;
                  do {
                    puVar19 = *(undefined4 **)((int)this + 0x4c);
                    puVar11 = (undefined4 *)(uVar5 * param_6 + param_5);
                    for (uVar8 = uVar7 >> 4; uVar8 != 0; uVar8 = uVar8 - 1) {
                      uVar2 = puVar11[1];
                      uVar3 = puVar11[2];
                      uVar4 = puVar11[3];
                      *puVar19 = *puVar11;
                      puVar19[1] = uVar2;
                      puVar19[2] = uVar3;
                      puVar19[3] = uVar4;
                      puVar19 = puVar19 + 4;
                      puVar11 = puVar11 + 4;
                      uVar5 = local_18;
                    }
                    if (uVar18 != 0) {
                      uVar8 = 0;
                      do {
                        puVar19[uVar8] = puVar11[uVar8];
                        uVar8 = uVar8 + 1;
                        uVar5 = local_18;
                      } while (uVar8 < uVar18);
                    }
                    uVar5 = uVar5 + 1;
                    local_60 = local_60 + -1;
                    *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar7;
                    local_18 = uVar5;
                  } while (local_60 != 0);
                }
                *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar14;
                goto LAB_10048c7d;
              }
            }
            *(uint *)(*(int *)((int)this + 100) + local_48 * 4) =
                 (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar15 * 2);
            local_48 = local_48 + 1;
          } while (local_48 < uVar6);
          if (local_20 != uVar5) {
            uVar10 = *(uint *)((int)this + 0x6a8);
            iVar14 = local_20 - uVar5;
            if (param_6 == uVar10) {
              uVar15 = uVar10 * iVar14;
              puVar19 = *(undefined4 **)((int)this + 0x4c);
              puVar11 = (undefined4 *)(uVar5 * uVar10 + param_5);
              for (uVar12 = uVar15 >> 4; uVar12 != 0; uVar12 = uVar12 - 1) {
                uVar2 = puVar11[1];
                uVar3 = puVar11[2];
                uVar4 = puVar11[3];
                *puVar19 = *puVar11;
                puVar19[1] = uVar2;
                puVar19[2] = uVar3;
                puVar19[3] = uVar4;
                puVar19 = puVar19 + 4;
                puVar11 = puVar11 + 4;
              }
              uVar10 = uVar15 >> 2 & 3;
              uVar5 = 0;
              if (uVar10 != 0) {
                do {
                  puVar19[uVar5] = puVar11[uVar5];
                  uVar5 = uVar5 + 1;
                } while (uVar5 < uVar10);
              }
              *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar15;
            }
            else if (iVar14 != 0) {
              uVar12 = uVar10 >> 2 & 3;
              local_60 = iVar14;
              do {
                puVar19 = *(undefined4 **)((int)this + 0x4c);
                puVar11 = (undefined4 *)(uVar5 * param_6 + param_5);
                for (uVar15 = uVar10 >> 4; uVar15 != 0; uVar15 = uVar15 - 1) {
                  uVar2 = puVar11[1];
                  uVar3 = puVar11[2];
                  uVar4 = puVar11[3];
                  *puVar19 = *puVar11;
                  puVar19[1] = uVar2;
                  puVar19[2] = uVar3;
                  puVar19[3] = uVar4;
                  puVar19 = puVar19 + 4;
                  puVar11 = puVar11 + 4;
                  uVar5 = local_18;
                }
                if (uVar12 != 0) {
                  uVar15 = 0;
                  do {
                    puVar19[uVar15] = puVar11[uVar15];
                    uVar15 = uVar15 + 1;
                    uVar5 = local_18;
                  } while (uVar15 < uVar12);
                }
                uVar5 = uVar5 + 1;
                local_60 = local_60 + -1;
                *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar10;
                local_18 = uVar5;
              } while (local_60 != 0);
            }
            goto LAB_10048de4;
          }
        }
      }
      else {
        local_4c = 0;
        if (uVar6 != 0) {
          do {
            if (param_11 == '\0') {
              uVar10 = (uint)*(ushort *)((int)param_8 + local_24 * 2 + local_4c * 2);
            }
            else {
              uVar10 = param_8[local_4c + local_24];
            }
            uVar12 = param_10 + uVar10;
            if ((param_11 != '\0') && (uVar12 >> 0x10 != *(uint *)((int)this + 0x40))) {
              puVar19 = (undefined4 *)((int)this + 0x20);
              for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
                *puVar19 = 0;
                puVar19 = puVar19 + 1;
              }
              *(uint *)((int)this + 0x40) = uVar12 >> 0x10;
              uVar5 = local_18;
            }
            uVar15 = uVar12 & 0xffff;
            uVar7 = uVar15 >> 0xb;
            if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
              *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
              FUN_100ada8e((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
            }
            bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar15 >> 3));
            if (((&DAT_100b1d6c)[uVar12 & 7] & bVar1) == 0) {
              *(byte *)(*(int *)((int)this + 0x1c) + (uVar15 >> 3)) =
                   (&DAT_100b1d6c)[uVar12 & 7] | bVar1;
              *(short *)(*(int *)((int)this + 0x18) + uVar15 * 2) = (short)local_2c;
              local_2c = local_2c + 1;
              if (uVar5 == local_20) {
LAB_100488f1:
                local_20 = param_10 + 1 + uVar10;
                uVar5 = uVar12;
                local_18 = uVar12;
              }
              else if (uVar12 == local_20) {
                local_20 = local_20 + 1;
              }
              else if ((uVar12 < uVar5) || (local_20 < uVar12)) {
                iVar14 = *(int *)((int)this + 0x6a8);
                iVar17 = local_20 - uVar5;
                local_3c = 0;
                if (*(int *)(param_2 + 8) != 0) {
                  do {
                    if (*(int *)(param_5 + local_3c * 8) != 0) {
                      puVar19 = (undefined4 *)
                                (*(int *)(param_5 + 4 + local_3c * 8) * uVar5 +
                                *(int *)(param_5 + local_3c * 8));
                      uVar7 = (uint)*(byte *)(param_2 + 0x9c + local_3c);
                      uVar18 = (uint)(*(byte *)(param_2 + 0x16 + uVar7 * 8) >> 2);
                      if (iVar17 != 0) {
                        puVar11 = (undefined4 *)
                                  ((uint)*(byte *)(param_2 + 0x17 + uVar7 * 8) * 4 +
                                  *(int *)((int)this + 0x4c));
                        local_64 = iVar17;
                        do {
                          uVar5 = 0;
                          if (uVar18 != 0) {
                            if ((uVar18 < 4) ||
                               ((puVar11 <= puVar19 + (uVar18 - 1) &&
                                (puVar19 <= puVar11 + (uVar18 - 1))))) {
                              do {
                                puVar11[uVar5] = puVar19[uVar5];
                                uVar5 = uVar5 + 1;
                              } while (uVar5 < uVar18);
                            }
                            else {
                              FUN_100adac0(puVar11,puVar19,uVar18 << 2);
                            }
                          }
                          puVar11 = (undefined4 *)((int)puVar11 + iVar14);
                          puVar19 = (undefined4 *)
                                    ((int)puVar19 + *(int *)(param_5 + 4 + local_3c * 8));
                          local_64 = local_64 + -1;
                          uVar5 = local_18;
                        } while (local_64 != 0);
                      }
                    }
                    local_3c = local_3c + 1;
                  } while (local_3c < *(uint *)(param_2 + 8));
                }
                *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar17 * iVar14;
                *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar17;
                goto LAB_100488f1;
              }
            }
            *(uint *)(*(int *)((int)this + 100) + local_4c * 4) =
                 (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar15 * 2);
            local_4c = local_4c + 1;
          } while (local_4c < uVar6);
          if (local_20 != uVar5) {
            iVar17 = *(int *)((int)this + 0x6a8);
            iVar14 = local_20 - uVar5;
            local_3c = 0;
            if (*(int *)(param_2 + 8) != 0) {
              do {
                if (*(int *)(param_5 + local_3c * 8) != 0) {
                  puVar19 = (undefined4 *)
                            (*(int *)(param_5 + 4 + local_3c * 8) * uVar5 +
                            *(int *)(param_5 + local_3c * 8));
                  uVar10 = (uint)*(byte *)(param_2 + 0x9c + local_3c);
                  uVar12 = (uint)(*(byte *)(param_2 + 0x16 + uVar10 * 8) >> 2);
                  if (iVar14 != 0) {
                    puVar11 = (undefined4 *)
                              ((uint)*(byte *)(param_2 + 0x17 + uVar10 * 8) * 4 +
                              *(int *)((int)this + 0x4c));
                    local_64 = iVar14;
                    do {
                      if (uVar12 != 0) {
                        if ((uVar12 < 4) ||
                           ((puVar11 <= puVar19 + (uVar12 - 1) &&
                            (puVar19 <= puVar11 + (uVar12 - 1))))) {
                          uVar5 = 0;
                          do {
                            puVar11[uVar5] = puVar19[uVar5];
                            uVar5 = uVar5 + 1;
                          } while (uVar5 < uVar12);
                        }
                        else {
                          FUN_100adac0(puVar11,puVar19,uVar12 << 2);
                        }
                      }
                      puVar11 = (undefined4 *)((int)puVar11 + iVar17);
                      puVar19 = (undefined4 *)((int)puVar19 + *(int *)(param_5 + 4 + local_3c * 8));
                      local_64 = local_64 + -1;
                      uVar5 = local_18;
                    } while (local_64 != 0);
                  }
                }
                local_3c = local_3c + 1;
              } while (local_3c < *(uint *)(param_2 + 8));
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar17 * iVar14;
LAB_10048de4:
            *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar14;
          }
        }
      }
      local_24 = local_24 + uVar6;
      *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar6;
      uVar5 = *(int *)((int)this + 100) + uVar6 * 4;
      *(uint *)((int)this + 100) = uVar5;
    }
  }
  else {
    if (param_1 == 3) {
      uVar5 = 2;
      local_34 = 2;
    }
    else {
      if (param_1 == 4) goto LAB_10048628;
      if (param_1 != 5) {
        if (param_1 - 6U != 0) {
          return param_1 - 6U;
        }
        if (param_9 < 3) {
          return param_9;
        }
        uVar5 = param_9 - 2;
        uVar20 = uVar5;
        do {
          if (uVar5 == 0) {
            return uVar20;
          }
          iVar17 = *(int *)((int)this + 0x54) + *(int *)((int)this + 0x50);
          iVar14 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
          if ((0x1000U - iVar17 < 0x10) || (0x1000U - iVar14 < 0x10)) {
            (**(code **)(*(int *)this + 0xc0))(1);
            iVar17 = 0;
            iVar14 = 0;
          }
          uVar6 = (0x1000U - iVar14) / 3;
          if (0xffeU - iVar17 < uVar6) {
            uVar6 = 0xffeU - iVar17;
          }
          uVar20 = uVar5;
          if (uVar6 <= uVar5) {
            uVar20 = uVar6;
          }
          iVar14 = uVar20 * 3;
          if (param_3 == '\0') {
            (**(code **)(*(int *)this + 200))
                      (4,param_4,*(undefined4 *)(param_2 + 0xc),uVar20 + 2,iVar14,param_14);
          }
          else {
            (**(code **)(*(int *)this + 0xc4))
                      (4,param_2,param_4,*(undefined4 *)(param_2 + 0xc),uVar20 + 2,iVar14,param_13);
          }
          local_28 = *(int *)((int)this + 0x54);
          local_20 = 0;
          local_18 = 0;
          if (param_12 == '\0') {
            local_64 = 0;
            if (uVar20 != 0) {
              do {
                if (param_11 == '\0') {
                  uVar6 = (uint)*(ushort *)((int)param_8 + local_64 * 2 + local_24 * 2 + 2);
                  uVar10 = (uint)*(ushort *)((int)param_8 + local_64 * 2 + local_24 * 2 + 4);
                  uVar12 = (uint)(ushort)*param_8;
                }
                else {
                  uVar6 = param_8[local_24 + local_64 + 1];
                  uVar10 = param_8[local_24 + local_64 + 2];
                  uVar12 = *param_8;
                }
                uVar15 = param_10 + uVar6;
                if ((param_11 != '\0') && (uVar15 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar19 = (undefined4 *)((int)this + 0x20);
                  for (iVar17 = 8; iVar17 != 0; iVar17 = iVar17 + -1) {
                    *puVar19 = 0;
                    puVar19 = puVar19 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar15 >> 0x10;
                }
                uVar18 = uVar15 & 0xffff;
                uVar7 = uVar18 >> 0xb;
                if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
                  FUN_100ada8e((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar18 >> 3));
                if (((&DAT_100b1d6c)[uVar15 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar18 >> 3)) =
                       (&DAT_100b1d6c)[uVar15 & 7] | bVar1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar18 * 2) = (short)local_28;
                  local_28 = local_28 + 1;
                  if (local_20 == local_18) {
LAB_100474a7:
                    local_18 = uVar6 + 1 + param_10;
                    local_20 = uVar15;
                  }
                  else if (uVar15 == local_18) {
                    local_18 = local_18 + 1;
                  }
                  else if ((uVar15 < local_20) || (local_18 < uVar15)) {
                    uVar7 = *(uint *)((int)this + 0x6a8);
                    iVar17 = local_18 - local_20;
                    if (param_6 == uVar7) {
                      uVar13 = iVar17 * uVar7;
                      puVar19 = (undefined4 *)(local_20 * uVar7 + param_5);
                      puVar11 = *(undefined4 **)((int)this + 0x4c);
                      for (uVar8 = uVar13 >> 4; uVar8 != 0; uVar8 = uVar8 - 1) {
                        uVar2 = puVar19[1];
                        uVar3 = puVar19[2];
                        uVar4 = puVar19[3];
                        *puVar11 = *puVar19;
                        puVar11[1] = uVar2;
                        puVar11[2] = uVar3;
                        puVar11[3] = uVar4;
                        puVar19 = puVar19 + 4;
                        puVar11 = puVar11 + 4;
                      }
                      uVar8 = uVar13 >> 2 & 3;
                      uVar7 = 0;
                      if (uVar8 != 0) {
                        do {
                          puVar11[uVar7] = puVar19[uVar7];
                          uVar7 = uVar7 + 1;
                        } while (uVar7 < uVar8);
                      }
                      *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar13;
                    }
                    else if (iVar17 != 0) {
                      uVar8 = uVar7 >> 2 & 3;
                      local_54 = iVar17;
                      do {
                        puVar19 = *(undefined4 **)((int)this + 0x4c);
                        puVar11 = (undefined4 *)(local_20 * param_6 + param_5);
                        for (uVar13 = uVar7 >> 4; uVar13 != 0; uVar13 = uVar13 - 1) {
                          uVar2 = puVar11[1];
                          uVar3 = puVar11[2];
                          uVar4 = puVar11[3];
                          *puVar19 = *puVar11;
                          puVar19[1] = uVar2;
                          puVar19[2] = uVar3;
                          puVar19[3] = uVar4;
                          puVar19 = puVar19 + 4;
                          puVar11 = puVar11 + 4;
                        }
                        if (uVar8 != 0) {
                          uVar13 = 0;
                          do {
                            puVar19[uVar13] = puVar11[uVar13];
                            uVar13 = uVar13 + 1;
                          } while (uVar13 < uVar8);
                        }
                        local_20 = local_20 + 1;
                        local_54 = local_54 + -1;
                        *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar7;
                      } while (local_54 != 0);
                    }
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar17;
                    goto LAB_100474a7;
                  }
                }
                **(uint **)((int)this + 100) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar18 * 2);
                uVar6 = uVar10 + param_10;
                if ((param_11 != '\0') && (uVar6 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar19 = (undefined4 *)((int)this + 0x20);
                  for (iVar17 = 8; iVar17 != 0; iVar17 = iVar17 + -1) {
                    *puVar19 = 0;
                    puVar19 = puVar19 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar6 >> 0x10;
                }
                uVar15 = uVar6 & 0xffff;
                uVar7 = uVar15 >> 0xb;
                if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
                  FUN_100ada8e((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar15 >> 3));
                if (((&DAT_100b1d6c)[uVar6 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar15 >> 3)) =
                       (&DAT_100b1d6c)[uVar6 & 7] | bVar1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar15 * 2) = (short)local_28;
                  local_28 = local_28 + 1;
                  if (local_20 == local_18) {
LAB_10047697:
                    local_18 = uVar10 + 1 + param_10;
                    local_20 = uVar6;
                  }
                  else if (uVar6 == local_18) {
                    local_18 = local_18 + 1;
                  }
                  else if ((uVar6 < local_20) || (local_18 < uVar6)) {
                    uVar7 = *(uint *)((int)this + 0x6a8);
                    iVar17 = local_18 - local_20;
                    if (param_6 == uVar7) {
                      uVar8 = iVar17 * uVar7;
                      puVar19 = (undefined4 *)(local_20 * uVar7 + param_5);
                      puVar11 = *(undefined4 **)((int)this + 0x4c);
                      for (uVar18 = uVar8 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
                        uVar2 = puVar19[1];
                        uVar3 = puVar19[2];
                        uVar4 = puVar19[3];
                        *puVar11 = *puVar19;
                        puVar11[1] = uVar2;
                        puVar11[2] = uVar3;
                        puVar11[3] = uVar4;
                        puVar19 = puVar19 + 4;
                        puVar11 = puVar11 + 4;
                      }
                      uVar18 = uVar8 >> 2 & 3;
                      uVar7 = 0;
                      if (uVar18 != 0) {
                        do {
                          puVar11[uVar7] = puVar19[uVar7];
                          uVar7 = uVar7 + 1;
                        } while (uVar7 < uVar18);
                      }
                      *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar8;
                    }
                    else if (iVar17 != 0) {
                      uVar18 = uVar7 >> 2 & 3;
                      local_5c = iVar17;
                      do {
                        puVar19 = *(undefined4 **)((int)this + 0x4c);
                        puVar11 = (undefined4 *)(local_20 * param_6 + param_5);
                        for (uVar8 = uVar7 >> 4; uVar8 != 0; uVar8 = uVar8 - 1) {
                          uVar2 = puVar11[1];
                          uVar3 = puVar11[2];
                          uVar4 = puVar11[3];
                          *puVar19 = *puVar11;
                          puVar19[1] = uVar2;
                          puVar19[2] = uVar3;
                          puVar19[3] = uVar4;
                          puVar19 = puVar19 + 4;
                          puVar11 = puVar11 + 4;
                        }
                        uVar8 = 0;
                        if (uVar18 != 0) {
                          do {
                            puVar19[uVar8] = puVar11[uVar8];
                            uVar8 = uVar8 + 1;
                          } while (uVar8 < uVar18);
                        }
                        local_20 = local_20 + 1;
                        *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar7;
                        local_5c = local_5c + -1;
                      } while (local_5c != 0);
                    }
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar17;
                    goto LAB_10047697;
                  }
                }
                *(uint *)(*(int *)((int)this + 100) + 4) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar15 * 2);
                uVar6 = uVar12 + param_10;
                if ((param_11 != '\0') && (uVar6 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar19 = (undefined4 *)((int)this + 0x20);
                  for (iVar17 = 8; iVar17 != 0; iVar17 = iVar17 + -1) {
                    *puVar19 = 0;
                    puVar19 = puVar19 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar6 >> 0x10;
                }
                uVar15 = uVar6 & 0xffff;
                uVar10 = uVar15 >> 0xb;
                if (*(char *)((int)this + uVar10 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar10 + 0x20) = 1;
                  FUN_100ada8e((int *)(uVar10 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar15 >> 3));
                if (((&DAT_100b1d6c)[uVar6 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar15 >> 3)) =
                       (&DAT_100b1d6c)[uVar6 & 7] | bVar1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar15 * 2) = (short)local_28;
                  local_28 = local_28 + 1;
                  if (local_20 == local_18) {
LAB_10047748:
                    local_18 = param_10 + 1 + uVar12;
                    local_20 = uVar6;
                  }
                  else if (uVar6 == local_18) {
                    local_18 = local_18 + 1;
                  }
                  else if ((uVar6 < local_20) || (local_18 < uVar6)) {
                    uVar10 = *(uint *)((int)this + 0x6a8);
                    iVar17 = local_18 - local_20;
                    if (param_6 == uVar10) {
                      uVar18 = iVar17 * uVar10;
                      puVar19 = (undefined4 *)(local_20 * uVar10 + param_5);
                      puVar11 = *(undefined4 **)((int)this + 0x4c);
                      for (uVar7 = uVar18 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                        uVar2 = puVar19[1];
                        uVar3 = puVar19[2];
                        uVar4 = puVar19[3];
                        *puVar11 = *puVar19;
                        puVar11[1] = uVar2;
                        puVar11[2] = uVar3;
                        puVar11[3] = uVar4;
                        puVar19 = puVar19 + 4;
                        puVar11 = puVar11 + 4;
                      }
                      uVar10 = 0;
                      uVar7 = uVar18 >> 2 & 3;
                      if (uVar7 != 0) {
                        do {
                          puVar11[uVar10] = puVar19[uVar10];
                          uVar10 = uVar10 + 1;
                        } while (uVar10 < uVar7);
                      }
                      *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar18;
                    }
                    else if (iVar17 != 0) {
                      uVar7 = uVar10 >> 2 & 3;
                      local_60 = iVar17;
                      do {
                        puVar19 = *(undefined4 **)((int)this + 0x4c);
                        puVar11 = (undefined4 *)(local_20 * param_6 + param_5);
                        for (uVar18 = uVar10 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
                          uVar2 = puVar11[1];
                          uVar3 = puVar11[2];
                          uVar4 = puVar11[3];
                          *puVar19 = *puVar11;
                          puVar19[1] = uVar2;
                          puVar19[2] = uVar3;
                          puVar19[3] = uVar4;
                          puVar19 = puVar19 + 4;
                          puVar11 = puVar11 + 4;
                        }
                        uVar18 = 0;
                        if (uVar7 != 0) {
                          do {
                            puVar19[uVar18] = puVar11[uVar18];
                            uVar18 = uVar18 + 1;
                          } while (uVar18 < uVar7);
                        }
                        local_20 = local_20 + 1;
                        local_60 = local_60 + -1;
                        *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar10;
                      } while (local_60 != 0);
                    }
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar17;
                    goto LAB_10047748;
                  }
                }
                *(uint *)(*(int *)((int)this + 100) + 8) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar15 * 2);
                *(int *)((int)this + 100) = *(int *)((int)this + 100) + 0xc;
                local_64 = local_64 + 1;
              } while (local_64 < uVar20);
              if (local_18 != local_20) {
                uVar6 = *(uint *)((int)this + 0x6a8);
                iVar17 = local_18 - local_20;
                if (param_6 == uVar6) {
                  uVar12 = uVar6 * iVar17;
                  puVar19 = *(undefined4 **)((int)this + 0x4c);
                  puVar11 = (undefined4 *)(uVar6 * local_20 + param_5);
                  for (uVar10 = uVar12 >> 4; uVar10 != 0; uVar10 = uVar10 - 1) {
                    uVar2 = puVar11[1];
                    uVar3 = puVar11[2];
                    uVar4 = puVar11[3];
                    *puVar19 = *puVar11;
                    puVar19[1] = uVar2;
                    puVar19[2] = uVar3;
                    puVar19[3] = uVar4;
                    puVar19 = puVar19 + 4;
                    puVar11 = puVar11 + 4;
                  }
                  uVar10 = uVar12 >> 2 & 3;
                  uVar6 = 0;
                  if (uVar10 != 0) {
                    do {
                      puVar19[uVar6] = puVar11[uVar6];
                      uVar6 = uVar6 + 1;
                    } while (uVar6 < uVar10);
                  }
                  goto LAB_10047961;
                }
                if (iVar17 != 0) {
                  uVar10 = uVar6 >> 2 & 3;
                  local_5c = iVar17;
                  do {
                    puVar19 = *(undefined4 **)((int)this + 0x4c);
                    puVar11 = (undefined4 *)(local_20 * param_6 + param_5);
                    for (uVar12 = uVar6 >> 4; uVar12 != 0; uVar12 = uVar12 - 1) {
                      uVar2 = puVar11[1];
                      uVar3 = puVar11[2];
                      uVar4 = puVar11[3];
                      *puVar19 = *puVar11;
                      puVar19[1] = uVar2;
                      puVar19[2] = uVar3;
                      puVar19[3] = uVar4;
                      puVar19 = puVar19 + 4;
                      puVar11 = puVar11 + 4;
                    }
                    if (uVar10 != 0) {
                      uVar12 = 0;
                      do {
                        puVar19[uVar12] = puVar11[uVar12];
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < uVar10);
                    }
                    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar6;
                    local_20 = local_20 + 1;
                    local_5c = local_5c + -1;
                  } while (local_5c != 0);
                }
                goto LAB_10047a08;
              }
            }
          }
          else {
            local_5c = 0;
            if (uVar20 != 0) {
              do {
                if (param_11 == '\0') {
                  uVar6 = (uint)*(ushort *)((int)param_8 + local_5c * 2 + local_24 * 2 + 2);
                  uVar10 = (uint)*(ushort *)((int)param_8 + local_5c * 2 + local_24 * 2 + 4);
                  uVar12 = (uint)(ushort)*param_8;
                }
                else {
                  uVar6 = param_8[local_24 + local_5c + 1];
                  uVar10 = param_8[local_24 + local_5c + 2];
                  uVar12 = *param_8;
                }
                uVar15 = param_10 + uVar6;
                if ((param_11 != '\0') && (uVar15 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar19 = (undefined4 *)((int)this + 0x20);
                  for (iVar17 = 8; iVar17 != 0; iVar17 = iVar17 + -1) {
                    *puVar19 = 0;
                    puVar19 = puVar19 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar15 >> 0x10;
                }
                uVar18 = uVar15 & 0xffff;
                uVar7 = uVar18 >> 0xb;
                if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
                  FUN_100ada8e((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar18 >> 3));
                if (((&DAT_100b1d6c)[uVar15 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar18 >> 3)) =
                       (&DAT_100b1d6c)[uVar15 & 7] | bVar1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar18 * 2) = (short)local_28;
                  local_28 = local_28 + 1;
                  if (local_20 == local_18) {
LAB_10046d69:
                    local_18 = uVar6 + 1 + param_10;
                    local_20 = uVar15;
                  }
                  else if (uVar15 == local_18) {
                    local_18 = local_18 + 1;
                  }
                  else if ((uVar15 < local_20) || (local_18 < uVar15)) {
                    iVar17 = *(int *)((int)this + 0x6a8);
                    iVar16 = local_18 - local_20;
                    local_34 = 0;
                    if (*(int *)(param_2 + 8) != 0) {
                      do {
                        if (*(int *)(param_5 + local_34 * 8) != 0) {
                          puVar19 = (undefined4 *)
                                    (*(int *)(param_5 + 4 + local_34 * 8) * local_20 +
                                    *(int *)(param_5 + local_34 * 8));
                          uVar7 = (uint)*(byte *)(param_2 + 0x9c + local_34);
                          uVar8 = (uint)(*(byte *)(param_2 + 0x16 + uVar7 * 8) >> 2);
                          if (iVar16 != 0) {
                            puVar11 = (undefined4 *)
                                      (*(int *)((int)this + 0x4c) +
                                      (uint)*(byte *)(param_2 + 0x17 + uVar7 * 8) * 4);
                            local_54 = iVar16;
                            do {
                              if (uVar8 != 0) {
                                if ((uVar8 < 4) ||
                                   ((puVar11 <= puVar19 + (uVar8 - 1) &&
                                    (puVar19 <= puVar11 + (uVar8 - 1))))) {
                                  uVar7 = 0;
                                  do {
                                    puVar11[uVar7] = puVar19[uVar7];
                                    uVar7 = uVar7 + 1;
                                  } while (uVar7 < uVar8);
                                }
                                else {
                                  FUN_100adac0(puVar11,puVar19,uVar8 * 4);
                                }
                              }
                              puVar11 = (undefined4 *)((int)puVar11 + iVar17);
                              puVar19 = (undefined4 *)
                                        ((int)puVar19 + *(int *)(param_5 + 4 + local_34 * 8));
                              local_54 = local_54 + -1;
                            } while (local_54 != 0);
                          }
                        }
                        local_34 = local_34 + 1;
                      } while (local_34 < *(uint *)(param_2 + 8));
                    }
                    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar16 * iVar17;
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar16;
                    goto LAB_10046d69;
                  }
                }
                uVar6 = uVar10 + param_10;
                **(uint **)((int)this + 100) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar18 * 2);
                if ((param_11 != '\0') && (uVar6 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar19 = (undefined4 *)((int)this + 0x20);
                  for (iVar17 = 8; iVar17 != 0; iVar17 = iVar17 + -1) {
                    *puVar19 = 0;
                    puVar19 = puVar19 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar6 >> 0x10;
                }
                uVar15 = uVar6 & 0xffff;
                uVar7 = uVar15 >> 0xb;
                if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
                  FUN_100ada8e((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar15 >> 3));
                if (((&DAT_100b1d6c)[uVar6 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar15 >> 3)) =
                       (&DAT_100b1d6c)[uVar6 & 7] | bVar1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar15 * 2) = (short)local_28;
                  local_28 = local_28 + 1;
                  if (local_20 == local_18) {
LAB_10046f45:
                    local_18 = uVar10 + 1 + param_10;
                    local_20 = uVar6;
                  }
                  else if (uVar6 == local_18) {
                    local_18 = local_18 + 1;
                  }
                  else if ((uVar6 < local_20) || (local_18 < uVar6)) {
                    iVar17 = *(int *)((int)this + 0x6a8);
                    iVar16 = local_18 - local_20;
                    local_38 = 0;
                    if (*(int *)(param_2 + 8) != 0) {
                      do {
                        if (*(int *)(param_5 + local_38 * 8) != 0) {
                          puVar19 = (undefined4 *)
                                    (*(int *)(param_5 + 4 + local_38 * 8) * local_20 +
                                    *(int *)(param_5 + local_38 * 8));
                          uVar7 = (uint)*(byte *)(param_2 + 0x9c + local_38);
                          uVar18 = (uint)(*(byte *)(param_2 + 0x16 + uVar7 * 8) >> 2);
                          if (iVar16 != 0) {
                            puVar11 = (undefined4 *)
                                      (*(int *)((int)this + 0x4c) +
                                      (uint)*(byte *)(param_2 + 0x17 + uVar7 * 8) * 4);
                            iVar9 = iVar16;
                            do {
                              uVar7 = 0;
                              if (uVar18 != 0) {
                                if ((uVar18 < 4) ||
                                   ((puVar11 <= puVar19 + (uVar18 - 1) &&
                                    (puVar19 <= puVar11 + (uVar18 - 1))))) {
                                  do {
                                    puVar11[uVar7] = puVar19[uVar7];
                                    uVar7 = uVar7 + 1;
                                  } while (uVar7 < uVar18);
                                }
                                else {
                                  FUN_100adac0(puVar11,puVar19,uVar18 * 4);
                                }
                              }
                              puVar11 = (undefined4 *)((int)puVar11 + iVar17);
                              puVar19 = (undefined4 *)
                                        ((int)puVar19 + *(int *)(param_5 + 4 + local_38 * 8));
                              iVar9 = iVar9 + -1;
                            } while (iVar9 != 0);
                          }
                        }
                        local_38 = local_38 + 1;
                      } while (local_38 < *(uint *)(param_2 + 8));
                    }
                    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar16 * iVar17;
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar16;
                    goto LAB_10046f45;
                  }
                }
                *(uint *)(*(int *)((int)this + 100) + 4) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar15 * 2);
                uVar6 = uVar12 + param_10;
                if ((param_11 != '\0') && (uVar6 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar19 = (undefined4 *)((int)this + 0x20);
                  for (iVar17 = 8; iVar17 != 0; iVar17 = iVar17 + -1) {
                    *puVar19 = 0;
                    puVar19 = puVar19 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar6 >> 0x10;
                }
                uVar15 = uVar6 & 0xffff;
                uVar10 = uVar15 >> 0xb;
                if (*(char *)((int)this + uVar10 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar10 + 0x20) = 1;
                  FUN_100ada8e((int *)(uVar10 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar15 >> 3));
                if (((&DAT_100b1d6c)[uVar6 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar15 >> 3)) =
                       (&DAT_100b1d6c)[uVar6 & 7] | bVar1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar15 * 2) = (short)local_28;
                  local_28 = local_28 + 1;
                  if (local_20 == local_18) {
LAB_10046ff3:
                    local_18 = param_10 + 1 + uVar12;
                    local_20 = uVar6;
                  }
                  else if (uVar6 == local_18) {
                    local_18 = local_18 + 1;
                  }
                  else if ((uVar6 < local_20) || (local_18 < uVar6)) {
                    iVar17 = *(int *)((int)this + 0x6a8);
                    iVar16 = local_18 - local_20;
                    local_38 = 0;
                    if (*(int *)(param_2 + 8) != 0) {
                      do {
                        if (*(int *)(param_5 + local_38 * 8) != 0) {
                          puVar19 = (undefined4 *)
                                    (*(int *)(param_5 + 4 + local_38 * 8) * local_20 +
                                    *(int *)(param_5 + local_38 * 8));
                          uVar10 = (uint)*(byte *)(param_2 + 0x9c + local_38);
                          uVar7 = (uint)(*(byte *)(param_2 + 0x16 + uVar10 * 8) >> 2);
                          if (iVar16 != 0) {
                            puVar11 = (undefined4 *)
                                      ((uint)*(byte *)(param_2 + 0x17 + uVar10 * 8) * 4 +
                                      *(int *)((int)this + 0x4c));
                            local_54 = iVar16;
                            do {
                              uVar10 = 0;
                              if (uVar7 != 0) {
                                if ((uVar7 < 4) ||
                                   ((puVar11 <= puVar19 + (uVar7 - 1) &&
                                    (puVar19 <= puVar11 + (uVar7 - 1))))) {
                                  do {
                                    puVar11[uVar10] = puVar19[uVar10];
                                    uVar10 = uVar10 + 1;
                                  } while (uVar10 < uVar7);
                                }
                                else {
                                  FUN_100adac0(puVar11,puVar19,uVar7 << 2);
                                }
                              }
                              puVar11 = (undefined4 *)((int)puVar11 + iVar17);
                              puVar19 = (undefined4 *)
                                        ((int)puVar19 + *(int *)(param_5 + 4 + local_38 * 8));
                              local_54 = local_54 + -1;
                            } while (local_54 != 0);
                          }
                        }
                        local_38 = local_38 + 1;
                      } while (local_38 < *(uint *)(param_2 + 8));
                    }
                    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar16 * iVar17;
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar16;
                    goto LAB_10046ff3;
                  }
                }
                *(uint *)(*(int *)((int)this + 100) + 8) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar15 * 2);
                *(int *)((int)this + 100) = *(int *)((int)this + 100) + 0xc;
                local_5c = local_5c + 1;
              } while (local_5c < uVar20);
              if (local_18 != local_20) {
                iVar16 = *(int *)((int)this + 0x6a8);
                iVar17 = local_18 - local_20;
                local_38 = 0;
                if (*(int *)(param_2 + 8) != 0) {
                  do {
                    if (*(int *)(param_5 + local_38 * 8) != 0) {
                      puVar19 = (undefined4 *)
                                (*(int *)(param_5 + 4 + local_38 * 8) * local_20 +
                                *(int *)(param_5 + local_38 * 8));
                      uVar6 = (uint)*(byte *)(param_2 + 0x9c + local_38);
                      uVar10 = (uint)(*(byte *)(param_2 + 0x16 + uVar6 * 8) >> 2);
                      if (iVar17 != 0) {
                        puVar11 = (undefined4 *)
                                  ((uint)*(byte *)(param_2 + 0x17 + uVar6 * 8) * 4 +
                                  *(int *)((int)this + 0x4c));
                        local_5c = iVar17;
                        do {
                          uVar6 = 0;
                          if (uVar10 != 0) {
                            if (3 < uVar10) {
                              if ((puVar19 + (uVar10 - 1) < puVar11) ||
                                 (puVar11 + (uVar10 - 1) < puVar19)) {
                                FUN_100adac0(puVar11,puVar19,uVar10 * 4);
                                goto LAB_1004721f;
                              }
                            }
                            do {
                              puVar11[uVar6] = puVar19[uVar6];
                              uVar6 = uVar6 + 1;
                            } while (uVar6 < uVar10);
                          }
LAB_1004721f:
                          puVar11 = (undefined4 *)((int)puVar11 + iVar16);
                          puVar19 = (undefined4 *)
                                    ((int)puVar19 + *(int *)(param_5 + 4 + local_38 * 8));
                          local_5c = local_5c + -1;
                        } while (local_5c != 0);
                      }
                    }
                    local_38 = local_38 + 1;
                  } while (local_38 < *(uint *)(param_2 + 8));
                }
                uVar12 = iVar16 * iVar17;
LAB_10047961:
                *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar12;
LAB_10047a08:
                *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar17;
              }
            }
          }
          *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + iVar14;
          uVar5 = uVar5 - uVar20;
          local_24 = local_24 + uVar20;
        } while( true );
      }
      uVar5 = 3;
    }
    uVar20 = uVar5 - 1;
    bVar21 = param_9 < uVar5;
    uVar5 = uVar20;
    while (!bVar21) {
      iVar14 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
      if (((uint)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50)) < 0x10) ||
         (0x1000U - iVar14 < 0x10)) {
        (**(code **)(*(int *)this + 0xc0))(1);
        iVar14 = 0;
      }
      uVar6 = 0x1000U - iVar14 & 0xfffffffe;
      uVar5 = param_9;
      if (uVar6 <= param_9) {
        uVar5 = uVar6;
      }
      if (param_3 == '\0') {
        (**(code **)(*(int *)this + 200))
                  (param_1,param_4,*(undefined4 *)(param_2 + 0xc),uVar5,uVar5,0);
      }
      else {
        (**(code **)(*(int *)this + 0xc4))
                  (param_1,param_2,param_4,*(undefined4 *)(param_2 + 0xc),uVar5,uVar5,param_13);
      }
      if ((*(int *)((int)this + 0x14) == 0) ||
         (((*(int *)((int)this + 0x54) == 0 && (*(int *)((int)this + 0x6c) == 0)) ||
          (0xfff < uVar5 + iVar14)))) {
        (**(code **)(*(int *)this + 0xc0))(0);
      }
      else {
        **(int **)((int)this + 100) = *(int *)((int)this + 0x14);
        *(int *)((int)this + 100) = *(int *)((int)this + 100) + 4;
        *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + 1;
      }
      local_2c = *(int *)((int)this + 0x54);
      local_20 = 0;
      local_18 = 0;
      if (param_12 == '\0') {
        local_60 = 0;
        do {
          if (param_11 == '\0') {
            uVar6 = (uint)*(ushort *)((int)param_8 + local_24 * 2 + local_60 * 2);
          }
          else {
            uVar6 = param_8[local_60 + local_24];
          }
          uVar10 = param_10 + uVar6;
          if ((param_11 != '\0') && (uVar10 >> 0x10 != *(uint *)((int)this + 0x40))) {
            puVar19 = (undefined4 *)((int)this + 0x20);
            for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
              *puVar19 = 0;
              puVar19 = puVar19 + 1;
            }
            *(uint *)((int)this + 0x40) = uVar10 >> 0x10;
          }
          uVar12 = uVar10 & 0xffff;
          uVar15 = uVar12 >> 0xb;
          if (*(char *)((int)this + uVar15 + 0x20) == '\0') {
            *(undefined1 *)((int)this + uVar15 + 0x20) = 1;
            FUN_100ada8e((int *)(uVar15 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
          }
          bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar12 >> 3));
          if (((&DAT_100b1d6c)[uVar10 & 7] & bVar1) == 0) {
            *(byte *)(*(int *)((int)this + 0x1c) + (uVar12 >> 3)) =
                 (&DAT_100b1d6c)[uVar10 & 7] | bVar1;
            *(short *)(*(int *)((int)this + 0x18) + uVar12 * 2) = (short)local_2c;
            local_2c = local_2c + 1;
            if (local_20 == local_18) {
LAB_1004811c:
              local_18 = param_10 + 1 + uVar6;
              local_20 = uVar10;
            }
            else if (uVar10 == local_18) {
              local_18 = local_18 + 1;
            }
            else if ((uVar10 < local_20) || (local_18 < uVar10)) {
              uVar15 = *(uint *)((int)this + 0x6a8);
              iVar14 = local_18 - local_20;
              if (param_6 == uVar15) {
                uVar18 = iVar14 * uVar15;
                puVar19 = (undefined4 *)(local_20 * uVar15 + param_5);
                puVar11 = *(undefined4 **)((int)this + 0x4c);
                for (uVar7 = uVar18 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                  uVar2 = puVar19[1];
                  uVar3 = puVar19[2];
                  uVar4 = puVar19[3];
                  *puVar11 = *puVar19;
                  puVar11[1] = uVar2;
                  puVar11[2] = uVar3;
                  puVar11[3] = uVar4;
                  puVar19 = puVar19 + 4;
                  puVar11 = puVar11 + 4;
                }
                uVar15 = 0;
                uVar7 = uVar18 >> 2 & 3;
                if (uVar7 != 0) {
                  do {
                    puVar11[uVar15] = puVar19[uVar15];
                    uVar15 = uVar15 + 1;
                  } while (uVar15 < uVar7);
                }
                *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar18;
              }
              else if (iVar14 != 0) {
                uVar7 = uVar15 >> 2 & 3;
                local_64 = iVar14;
                do {
                  puVar19 = *(undefined4 **)((int)this + 0x4c);
                  puVar11 = (undefined4 *)(local_20 * param_6 + param_5);
                  for (uVar18 = uVar15 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
                    uVar2 = puVar11[1];
                    uVar3 = puVar11[2];
                    uVar4 = puVar11[3];
                    *puVar19 = *puVar11;
                    puVar19[1] = uVar2;
                    puVar19[2] = uVar3;
                    puVar19[3] = uVar4;
                    puVar19 = puVar19 + 4;
                    puVar11 = puVar11 + 4;
                  }
                  uVar18 = 0;
                  if (uVar7 != 0) {
                    do {
                      puVar19[uVar18] = puVar11[uVar18];
                      uVar18 = uVar18 + 1;
                    } while (uVar18 < uVar7);
                  }
                  local_20 = local_20 + 1;
                  local_64 = local_64 + -1;
                  *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar15;
                } while (local_64 != 0);
              }
              *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar14;
              goto LAB_1004811c;
            }
          }
          *(uint *)(*(int *)((int)this + 100) + local_60 * 4) =
               (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar12 * 2);
          local_60 = local_60 + 1;
        } while (local_60 < uVar20);
        local_38 = uVar5 - uVar20;
        local_28 = 0;
        if (local_38 != 0) {
          do {
            if (param_11 == '\0') {
              uVar6 = (uint)*(ushort *)((int)param_8 + (uVar20 + local_24) * 2 + local_28 * 2);
            }
            else {
              uVar6 = param_8[local_28 + uVar20 + local_24];
            }
            uVar10 = param_10 + uVar6;
            if ((param_11 != '\0') && (uVar10 >> 0x10 != *(uint *)((int)this + 0x40))) {
              puVar19 = (undefined4 *)((int)this + 0x20);
              for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
                *puVar19 = 0;
                puVar19 = puVar19 + 1;
              }
              *(uint *)((int)this + 0x40) = uVar10 >> 0x10;
            }
            uVar12 = uVar10 & 0xffff;
            uVar15 = uVar12 >> 0xb;
            if (*(char *)((int)this + uVar15 + 0x20) == '\0') {
              *(undefined1 *)((int)this + uVar15 + 0x20) = 1;
              FUN_100ada8e((int *)(uVar15 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
            }
            bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar12 >> 3));
            if (((&DAT_100b1d6c)[uVar10 & 7] & bVar1) == 0) {
              *(byte *)(*(int *)((int)this + 0x1c) + (uVar12 >> 3)) =
                   (&DAT_100b1d6c)[uVar10 & 7] | bVar1;
              *(short *)(*(int *)((int)this + 0x18) + uVar12 * 2) = (short)local_2c;
              local_2c = local_2c + 1;
              if (local_20 == local_18) {
LAB_10048487:
                local_18 = param_10 + 1 + uVar6;
                local_20 = uVar10;
              }
              else if (uVar10 == local_18) {
                local_18 = local_18 + 1;
              }
              else if ((uVar10 < local_20) || (local_18 < uVar10)) {
                uVar15 = *(uint *)((int)this + 0x6a8);
                iVar14 = local_18 - local_20;
                if (param_6 == uVar15) {
                  uVar18 = iVar14 * uVar15;
                  puVar19 = (undefined4 *)(local_20 * uVar15 + param_5);
                  puVar11 = *(undefined4 **)((int)this + 0x4c);
                  for (uVar7 = uVar18 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                    uVar2 = puVar19[1];
                    uVar3 = puVar19[2];
                    uVar4 = puVar19[3];
                    *puVar11 = *puVar19;
                    puVar11[1] = uVar2;
                    puVar11[2] = uVar3;
                    puVar11[3] = uVar4;
                    puVar19 = puVar19 + 4;
                    puVar11 = puVar11 + 4;
                  }
                  uVar15 = 0;
                  uVar7 = uVar18 >> 2 & 3;
                  if (uVar7 != 0) {
                    do {
                      puVar11[uVar15] = puVar19[uVar15];
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < uVar7);
                  }
                  *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar18;
                }
                else if (iVar14 != 0) {
                  uVar7 = uVar15 >> 2 & 3;
                  local_64 = iVar14;
                  do {
                    puVar19 = *(undefined4 **)((int)this + 0x4c);
                    puVar11 = (undefined4 *)(local_20 * param_6 + param_5);
                    for (uVar18 = uVar15 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
                      uVar2 = puVar11[1];
                      uVar3 = puVar11[2];
                      uVar4 = puVar11[3];
                      *puVar19 = *puVar11;
                      puVar19[1] = uVar2;
                      puVar19[2] = uVar3;
                      puVar19[3] = uVar4;
                      puVar19 = puVar19 + 4;
                      puVar11 = puVar11 + 4;
                    }
                    uVar18 = 0;
                    if (uVar7 != 0) {
                      do {
                        puVar19[uVar18] = puVar11[uVar18];
                        uVar18 = uVar18 + 1;
                      } while (uVar18 < uVar7);
                    }
                    local_20 = local_20 + 1;
                    local_64 = local_64 + -1;
                    *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar15;
                  } while (local_64 != 0);
                }
                *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar14;
                goto LAB_10048487;
              }
            }
            *(uint *)(uVar20 * 4 + local_28 * 4 + *(int *)((int)this + 100)) =
                 (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar12 * 2);
            local_28 = local_28 + 1;
          } while (local_28 < local_38);
        }
        if (local_18 != local_20) {
          uVar6 = *(uint *)((int)this + 0x6a8);
          iVar14 = local_18 - local_20;
          if (param_6 == uVar6) {
            uVar12 = uVar6 * iVar14;
            puVar19 = (undefined4 *)(local_20 * uVar6 + param_5);
            puVar11 = *(undefined4 **)((int)this + 0x4c);
            for (uVar10 = uVar12 >> 4; uVar10 != 0; uVar10 = uVar10 - 1) {
              uVar2 = puVar19[1];
              uVar3 = puVar19[2];
              uVar4 = puVar19[3];
              *puVar11 = *puVar19;
              puVar11[1] = uVar2;
              puVar11[2] = uVar3;
              puVar11[3] = uVar4;
              puVar19 = puVar19 + 4;
              puVar11 = puVar11 + 4;
            }
            uVar6 = 0;
            uVar10 = uVar12 >> 2 & 3;
            if (uVar10 != 0) {
              do {
                puVar11[uVar6] = puVar19[uVar6];
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar10);
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar12;
          }
          else if (iVar14 != 0) {
            uVar10 = uVar6 >> 2 & 3;
            local_64 = iVar14;
            do {
              puVar19 = *(undefined4 **)((int)this + 0x4c);
              puVar11 = (undefined4 *)(local_20 * param_6 + param_5);
              for (uVar12 = uVar6 >> 4; uVar12 != 0; uVar12 = uVar12 - 1) {
                uVar2 = puVar11[1];
                uVar3 = puVar11[2];
                uVar4 = puVar11[3];
                *puVar19 = *puVar11;
                puVar19[1] = uVar2;
                puVar19[2] = uVar3;
                puVar19[3] = uVar4;
                puVar19 = puVar19 + 4;
                puVar11 = puVar11 + 4;
              }
              uVar12 = 0;
              if (uVar10 != 0) {
                do {
                  puVar19[uVar12] = puVar11[uVar12];
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar10);
              }
              local_20 = local_20 + 1;
              local_64 = local_64 + -1;
              *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar6;
            } while (local_64 != 0);
          }
          goto LAB_100485e5;
        }
      }
      else {
        local_58 = 0;
        do {
          if (param_11 == '\0') {
            uVar6 = (uint)*(ushort *)((int)param_8 + local_24 * 2 + local_58 * 2);
          }
          else {
            uVar6 = param_8[local_58 + local_24];
          }
          uVar10 = param_10 + uVar6;
          if ((param_11 != '\0') && (uVar10 >> 0x10 != *(uint *)((int)this + 0x40))) {
            puVar19 = (undefined4 *)((int)this + 0x20);
            for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
              *puVar19 = 0;
              puVar19 = puVar19 + 1;
            }
            *(uint *)((int)this + 0x40) = uVar10 >> 0x10;
          }
          uVar12 = uVar10 & 0xffff;
          uVar15 = uVar12 >> 0xb;
          if (*(char *)((int)this + uVar15 + 0x20) == '\0') {
            *(undefined1 *)((int)this + uVar15 + 0x20) = 1;
            FUN_100ada8e((int *)(uVar15 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
          }
          bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar12 >> 3));
          if (((&DAT_100b1d6c)[uVar10 & 7] & bVar1) == 0) {
            *(byte *)(*(int *)((int)this + 0x1c) + (uVar12 >> 3)) =
                 (&DAT_100b1d6c)[uVar10 & 7] | bVar1;
            *(short *)(*(int *)((int)this + 0x18) + uVar12 * 2) = (short)local_2c;
            local_2c = local_2c + 1;
            if (local_20 == local_18) {
LAB_10047bdb:
              local_18 = param_10 + 1 + uVar6;
              local_20 = uVar10;
            }
            else if (uVar10 == local_18) {
              local_18 = local_18 + 1;
            }
            else if ((uVar10 < local_20) || (local_18 < uVar10)) {
              iVar14 = *(int *)((int)this + 0x6a8);
              iVar17 = local_18 - local_20;
              local_38 = 0;
              if (*(int *)(param_2 + 8) != 0) {
                do {
                  if (*(int *)(param_5 + local_38 * 8) != 0) {
                    puVar19 = (undefined4 *)
                              (*(int *)(param_5 + 4 + local_38 * 8) * local_20 +
                              *(int *)(param_5 + local_38 * 8));
                    uVar15 = (uint)*(byte *)(param_2 + 0x9c + local_38);
                    uVar7 = (uint)(*(byte *)(param_2 + 0x16 + uVar15 * 8) >> 2);
                    if (iVar17 != 0) {
                      puVar11 = (undefined4 *)
                                (*(int *)((int)this + 0x4c) +
                                (uint)*(byte *)(param_2 + 0x17 + uVar15 * 8) * 4);
                      local_64 = iVar17;
                      do {
                        uVar15 = 0;
                        if (uVar7 != 0) {
                          if (3 < uVar7) {
                            if ((puVar19 + (uVar7 - 1) < puVar11) ||
                               (puVar11 + (uVar7 - 1) < puVar19)) {
                              FUN_100adac0(puVar11,puVar19,uVar7 * 4);
                              goto LAB_10047cc8;
                            }
                            uVar15 = 0;
                          }
                          do {
                            puVar11[uVar15] = puVar19[uVar15];
                            uVar15 = uVar15 + 1;
                          } while (uVar15 < uVar7);
                        }
LAB_10047cc8:
                        puVar11 = (undefined4 *)((int)puVar11 + iVar14);
                        puVar19 = (undefined4 *)
                                  ((int)puVar19 + *(int *)(param_5 + 4 + local_38 * 8));
                        local_64 = local_64 + -1;
                      } while (local_64 != 0);
                    }
                  }
                  local_38 = local_38 + 1;
                } while (local_38 < *(uint *)(param_2 + 8));
              }
              *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar17 * iVar14;
              *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar17;
              goto LAB_10047bdb;
            }
          }
          *(uint *)(*(int *)((int)this + 100) + local_58 * 4) =
               (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar12 * 2);
          local_58 = local_58 + 1;
        } while (local_58 < uVar20);
        local_38 = uVar5 - uVar20;
        local_4c = 0;
        if (local_38 != 0) {
          do {
            if (param_11 == '\0') {
              uVar6 = (uint)*(ushort *)((int)param_8 + (uVar20 + local_24) * 2 + local_4c * 2);
            }
            else {
              uVar6 = param_8[local_4c + uVar20 + local_24];
            }
            uVar10 = param_10 + uVar6;
            if ((param_11 != '\0') && (uVar10 >> 0x10 != *(uint *)((int)this + 0x40))) {
              puVar19 = (undefined4 *)((int)this + 0x20);
              for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
                *puVar19 = 0;
                puVar19 = puVar19 + 1;
              }
              *(uint *)((int)this + 0x40) = uVar10 >> 0x10;
            }
            uVar12 = uVar10 & 0xffff;
            uVar15 = uVar12 >> 0xb;
            if (*(char *)((int)this + uVar15 + 0x20) == '\0') {
              *(undefined1 *)((int)this + uVar15 + 0x20) = 1;
              FUN_100ada8e((int *)(uVar15 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
            }
            bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar12 >> 3));
            if (((&DAT_100b1d6c)[uVar10 & 7] & bVar1) == 0) {
              *(byte *)(*(int *)((int)this + 0x1c) + (uVar12 >> 3)) =
                   (&DAT_100b1d6c)[uVar10 & 7] | bVar1;
              *(short *)(*(int *)((int)this + 0x18) + uVar12 * 2) = (short)local_2c;
              local_2c = local_2c + 1;
              if (local_20 == local_18) {
LAB_10047f1e:
                local_18 = param_10 + 1 + uVar6;
                local_20 = uVar10;
              }
              else if (uVar10 == local_18) {
                local_18 = local_18 + 1;
              }
              else if ((uVar10 < local_20) || (local_18 < uVar10)) {
                iVar14 = *(int *)((int)this + 0x6a8);
                iVar17 = local_18 - local_20;
                local_28 = 0;
                if (*(int *)(param_2 + 8) != 0) {
                  do {
                    if (*(int *)(param_5 + local_28 * 8) != 0) {
                      puVar19 = (undefined4 *)
                                (*(int *)(param_5 + 4 + local_28 * 8) * local_20 +
                                *(int *)(param_5 + local_28 * 8));
                      uVar15 = (uint)*(byte *)(param_2 + 0x9c + local_28);
                      uVar7 = (uint)(*(byte *)(param_2 + 0x16 + uVar15 * 8) >> 2);
                      if (iVar17 != 0) {
                        puVar11 = (undefined4 *)
                                  (*(int *)((int)this + 0x4c) +
                                  (uint)*(byte *)(param_2 + 0x17 + uVar15 * 8) * 4);
                        local_64 = iVar17;
                        do {
                          uVar15 = 0;
                          if (uVar7 != 0) {
                            if (3 < uVar7) {
                              if ((puVar19 + (uVar7 - 1) < puVar11) ||
                                 (puVar11 + (uVar7 - 1) < puVar19)) {
                                FUN_100adac0(puVar11,puVar19,uVar7 * 4);
                                goto LAB_10047edc;
                              }
                              uVar15 = 0;
                            }
                            do {
                              puVar11[uVar15] = puVar19[uVar15];
                              uVar15 = uVar15 + 1;
                            } while (uVar15 < uVar7);
                          }
LAB_10047edc:
                          puVar11 = (undefined4 *)((int)puVar11 + iVar14);
                          puVar19 = (undefined4 *)
                                    ((int)puVar19 + *(int *)(param_5 + 4 + local_28 * 8));
                          local_64 = local_64 + -1;
                        } while (local_64 != 0);
                      }
                    }
                    local_28 = local_28 + 1;
                  } while (local_28 < *(uint *)(param_2 + 8));
                }
                *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar17 * iVar14;
                *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar17;
                goto LAB_10047f1e;
              }
            }
            *(uint *)(uVar20 * 4 + local_4c * 4 + *(int *)((int)this + 100)) =
                 (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar12 * 2);
            local_4c = local_4c + 1;
          } while (local_4c < local_38);
        }
        if (local_18 != local_20) {
          iVar17 = *(int *)((int)this + 0x6a8);
          iVar14 = local_18 - local_20;
          local_3c = 0;
          if (*(int *)(param_2 + 8) != 0) {
            do {
              if (*(int *)(param_5 + local_3c * 8) != 0) {
                puVar19 = (undefined4 *)
                          (*(int *)(param_5 + 4 + local_3c * 8) * local_20 +
                          *(int *)(param_5 + local_3c * 8));
                uVar6 = (uint)*(byte *)(param_2 + 0x9c + local_3c);
                uVar10 = (uint)(*(byte *)(param_2 + 0x16 + uVar6 * 8) >> 2);
                if (iVar14 != 0) {
                  puVar11 = (undefined4 *)
                            ((uint)*(byte *)(param_2 + 0x17 + uVar6 * 8) * 4 +
                            *(int *)((int)this + 0x4c));
                  local_60 = iVar14;
                  do {
                    uVar6 = 0;
                    if (uVar10 != 0) {
                      if ((uVar10 < 4) ||
                         ((puVar11 <= puVar19 + (uVar10 - 1) && (puVar19 <= puVar11 + (uVar10 - 1)))
                         )) {
                        do {
                          puVar11[uVar6] = puVar19[uVar6];
                          uVar6 = uVar6 + 1;
                        } while (uVar6 < uVar10);
                      }
                      else {
                        FUN_100adac0(puVar11,puVar19,uVar10 << 2);
                      }
                    }
                    puVar11 = (undefined4 *)((int)puVar11 + iVar17);
                    puVar19 = (undefined4 *)((int)puVar19 + *(int *)(param_5 + 4 + local_3c * 8));
                    local_60 = local_60 + -1;
                  } while (local_60 != 0);
                }
              }
              local_3c = local_3c + 1;
            } while (local_3c < *(uint *)(param_2 + 8));
          }
          *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar14 * iVar17;
LAB_100485e5:
          *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar14;
        }
      }
      *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar5;
      param_9 = param_9 + (uVar20 - uVar5);
      local_24 = local_24 + local_38;
      bVar21 = param_9 < local_34;
      uVar5 = *(int *)((int)this + 100) + uVar5 * 4;
      *(uint *)((int)this + 100) = uVar5;
    }
  }
  return uVar5;
}

