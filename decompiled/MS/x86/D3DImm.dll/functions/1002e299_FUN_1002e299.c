/*
 * FUN_1002e299 at 1002e299
 * uint __thiscall FUN_1002e299(void * this, uint param_1, int param_2, undefined4 param_3, undefined4 param_4, int param_5, uint param_6, undefined4 param_7, uint * param_8, uint param_9, int param_10, char param_11, char param_12, undefined4 param_13)
 * Address ranges: 1002e299-1003069c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1002e299(void *this,uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            uint param_6,undefined4 param_7,uint *param_8,uint param_9,int param_10,char param_11,
            char param_12,undefined4 param_13)

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
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  bool bVar19;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  local_24 = 3;
  puVar17 = (undefined4 *)((int)this + 0x20);
  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar17 = 0;
    puVar17 = puVar17 + 1;
  }
  if ((param_1 == 1) || (param_1 == 2)) {
    local_24 = (param_1 == 2) + 1;
LAB_1002fee4:
    uVar5 = param_9 / local_24;
    for (uVar18 = param_9 - param_9 % local_24; uVar18 != 0; uVar18 = uVar18 - uVar6) {
      iVar13 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
      if (((uint)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50)) < 0x10) ||
         (0x1000U - iVar13 < 0x10)) {
        (**(code **)(*(int *)this + 0x98))(1);
        iVar13 = 0;
      }
      uVar5 = (0x1000 - (0x1000U - iVar13) % local_24) - iVar13;
      uVar6 = uVar18;
      if (uVar5 <= uVar18) {
        uVar6 = uVar5;
      }
      (**(code **)(*(int *)this + 0x9c))
                (param_1,param_2,0,*(undefined4 *)(param_2 + 0xc),uVar6,uVar6,param_13);
      local_1c = *(int *)((int)this + 0x54);
      uVar5 = 0;
      local_c = 0;
      local_10 = 0;
      local_38 = 0;
      if (param_12 == '\0') {
        if (uVar6 != 0) {
          do {
            if (param_11 == '\0') {
              uVar11 = (uint)*(ushort *)((int)param_8 + local_14 * 2 + local_38 * 2);
            }
            else {
              uVar11 = param_8[local_38 + local_14];
            }
            uVar16 = param_10 + uVar11;
            if ((param_11 != '\0') && (uVar16 >> 0x10 != *(uint *)((int)this + 0x40))) {
              puVar17 = (undefined4 *)((int)this + 0x20);
              for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                *puVar17 = 0;
                puVar17 = puVar17 + 1;
              }
              *(uint *)((int)this + 0x40) = uVar16 >> 0x10;
              uVar5 = local_c;
            }
            uVar14 = uVar16 & 0xffff;
            uVar7 = uVar14 >> 0xb;
            if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
              *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
              FUN_1005c9cc((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
            }
            bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3));
            if (((&DAT_1005eed0)[uVar16 & 7] & bVar1) == 0) {
              *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3)) =
                   (&DAT_1005eed0)[uVar16 & 7] | bVar1;
              *(short *)(*(int *)((int)this + 0x18) + uVar14 * 2) = (short)local_1c;
              local_1c = local_1c + 1;
              if (uVar5 == local_10) {
LAB_1003050b:
                local_10 = param_10 + 1 + uVar11;
                uVar5 = uVar16;
                local_c = uVar16;
              }
              else if (uVar16 == local_10) {
                local_10 = local_10 + 1;
              }
              else if ((uVar16 < uVar5) || (local_10 < uVar16)) {
                uVar7 = *(uint *)((int)this + 0x4b0);
                iVar13 = local_10 - uVar5;
                if (param_6 == uVar7) {
                  uVar9 = iVar13 * uVar7;
                  puVar17 = *(undefined4 **)((int)this + 0x4c);
                  puVar12 = (undefined4 *)(uVar5 * uVar7 + param_5);
                  for (uVar8 = uVar9 >> 4; uVar8 != 0; uVar8 = uVar8 - 1) {
                    uVar2 = puVar12[1];
                    uVar3 = puVar12[2];
                    uVar4 = puVar12[3];
                    *puVar17 = *puVar12;
                    puVar17[1] = uVar2;
                    puVar17[2] = uVar3;
                    puVar17[3] = uVar4;
                    puVar17 = puVar17 + 4;
                    puVar12 = puVar12 + 4;
                  }
                  uVar7 = uVar9 >> 2 & 3;
                  uVar5 = 0;
                  if (uVar7 != 0) {
                    do {
                      puVar17[uVar5] = puVar12[uVar5];
                      uVar5 = uVar5 + 1;
                    } while (uVar5 < uVar7);
                  }
                  *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar9;
                }
                else if (iVar13 != 0) {
                  uVar8 = uVar7 >> 2 & 3;
                  local_48 = iVar13;
                  do {
                    puVar17 = *(undefined4 **)((int)this + 0x4c);
                    puVar12 = (undefined4 *)(uVar5 * param_6 + param_5);
                    for (uVar9 = uVar7 >> 4; uVar9 != 0; uVar9 = uVar9 - 1) {
                      uVar2 = puVar12[1];
                      uVar3 = puVar12[2];
                      uVar4 = puVar12[3];
                      *puVar17 = *puVar12;
                      puVar17[1] = uVar2;
                      puVar17[2] = uVar3;
                      puVar17[3] = uVar4;
                      puVar17 = puVar17 + 4;
                      puVar12 = puVar12 + 4;
                      uVar5 = local_c;
                    }
                    if (uVar8 != 0) {
                      uVar9 = 0;
                      do {
                        puVar17[uVar9] = puVar12[uVar9];
                        uVar9 = uVar9 + 1;
                        uVar5 = local_c;
                      } while (uVar9 < uVar8);
                    }
                    uVar5 = uVar5 + 1;
                    local_48 = local_48 + -1;
                    *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar7;
                    local_c = uVar5;
                  } while (local_48 != 0);
                }
                *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar13;
                goto LAB_1003050b;
              }
            }
            *(uint *)(*(int *)((int)this + 100) + local_38 * 4) =
                 (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar14 * 2);
            local_38 = local_38 + 1;
          } while (local_38 < uVar6);
          if (local_10 != uVar5) {
            uVar11 = *(uint *)((int)this + 0x4b0);
            iVar13 = local_10 - uVar5;
            if (param_6 == uVar11) {
              uVar14 = uVar11 * iVar13;
              puVar17 = *(undefined4 **)((int)this + 0x4c);
              puVar12 = (undefined4 *)(uVar5 * uVar11 + param_5);
              for (uVar16 = uVar14 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
                uVar2 = puVar12[1];
                uVar3 = puVar12[2];
                uVar4 = puVar12[3];
                *puVar17 = *puVar12;
                puVar17[1] = uVar2;
                puVar17[2] = uVar3;
                puVar17[3] = uVar4;
                puVar17 = puVar17 + 4;
                puVar12 = puVar12 + 4;
              }
              uVar11 = uVar14 >> 2 & 3;
              uVar5 = 0;
              if (uVar11 != 0) {
                do {
                  puVar17[uVar5] = puVar12[uVar5];
                  uVar5 = uVar5 + 1;
                } while (uVar5 < uVar11);
              }
              *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar14;
            }
            else if (iVar13 != 0) {
              uVar16 = uVar11 >> 2 & 3;
              local_48 = iVar13;
              do {
                puVar17 = *(undefined4 **)((int)this + 0x4c);
                puVar12 = (undefined4 *)(uVar5 * param_6 + param_5);
                for (uVar14 = uVar11 >> 4; uVar14 != 0; uVar14 = uVar14 - 1) {
                  uVar2 = puVar12[1];
                  uVar3 = puVar12[2];
                  uVar4 = puVar12[3];
                  *puVar17 = *puVar12;
                  puVar17[1] = uVar2;
                  puVar17[2] = uVar3;
                  puVar17[3] = uVar4;
                  puVar17 = puVar17 + 4;
                  puVar12 = puVar12 + 4;
                  uVar5 = local_c;
                }
                if (uVar16 != 0) {
                  uVar14 = 0;
                  do {
                    puVar17[uVar14] = puVar12[uVar14];
                    uVar14 = uVar14 + 1;
                    uVar5 = local_c;
                  } while (uVar14 < uVar16);
                }
                uVar5 = uVar5 + 1;
                local_48 = local_48 + -1;
                *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar11;
                local_c = uVar5;
              } while (local_48 != 0);
            }
            goto LAB_10030672;
          }
        }
      }
      else if (uVar6 != 0) {
        do {
          if (param_11 == '\0') {
            uVar11 = (uint)*(ushort *)((int)param_8 + local_14 * 2 + local_38 * 2);
          }
          else {
            uVar11 = param_8[local_38 + local_14];
          }
          uVar16 = param_10 + uVar11;
          if ((param_11 != '\0') && (uVar16 >> 0x10 != *(uint *)((int)this + 0x40))) {
            puVar17 = (undefined4 *)((int)this + 0x20);
            for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar17 = 0;
              puVar17 = puVar17 + 1;
            }
            *(uint *)((int)this + 0x40) = uVar16 >> 0x10;
            uVar5 = local_c;
          }
          uVar14 = uVar16 & 0xffff;
          uVar7 = uVar14 >> 0xb;
          if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
            *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
            FUN_1005c9cc((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
          }
          bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3));
          if (((&DAT_1005eed0)[uVar16 & 7] & bVar1) == 0) {
            *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3)) =
                 (&DAT_1005eed0)[uVar16 & 7] | bVar1;
            *(short *)(*(int *)((int)this + 0x18) + uVar14 * 2) = (short)local_1c;
            local_1c = local_1c + 1;
            if (uVar5 == local_10) {
LAB_10030188:
              local_10 = param_10 + 1 + uVar11;
              uVar5 = uVar16;
              local_c = uVar16;
            }
            else if (uVar16 == local_10) {
              local_10 = local_10 + 1;
            }
            else if ((uVar16 < uVar5) || (local_10 < uVar16)) {
              iVar13 = *(int *)((int)this + 0x4b0);
              iVar15 = local_10 - uVar5;
              param_9 = 0;
              if (*(int *)(param_2 + 8) != 0) {
                do {
                  if (*(int *)(param_5 + param_9 * 8) != 0) {
                    puVar17 = (undefined4 *)
                              (*(int *)(param_5 + 4 + param_9 * 8) * uVar5 +
                              *(int *)(param_5 + param_9 * 8));
                    uVar7 = (uint)*(byte *)(param_2 + 0x9c + param_9);
                    uVar8 = (uint)(*(byte *)(param_2 + 0x16 + uVar7 * 8) >> 2);
                    if (iVar15 != 0) {
                      puVar12 = (undefined4 *)
                                ((uint)*(byte *)(param_2 + 0x17 + uVar7 * 8) * 4 +
                                *(int *)((int)this + 0x4c));
                      local_4c = iVar15;
                      do {
                        uVar5 = 0;
                        if (uVar8 != 0) {
                          if ((uVar8 < 4) ||
                             ((puVar12 <= puVar17 + (uVar8 - 1) &&
                              (puVar17 <= puVar12 + (uVar8 - 1))))) {
                            do {
                              puVar12[uVar5] = puVar17[uVar5];
                              uVar5 = uVar5 + 1;
                            } while (uVar5 < uVar8);
                          }
                          else {
                            FUN_1005ca00(puVar12,puVar17,uVar8 << 2);
                          }
                        }
                        puVar12 = (undefined4 *)((int)puVar12 + iVar13);
                        puVar17 = (undefined4 *)((int)puVar17 + *(int *)(param_5 + 4 + param_9 * 8))
                        ;
                        local_4c = local_4c + -1;
                        uVar5 = local_c;
                      } while (local_4c != 0);
                    }
                  }
                  param_9 = param_9 + 1;
                } while (param_9 < *(uint *)(param_2 + 8));
              }
              *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar15 * iVar13;
              *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar15;
              goto LAB_10030188;
            }
          }
          *(uint *)(*(int *)((int)this + 100) + local_38 * 4) =
               (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar14 * 2);
          local_38 = local_38 + 1;
        } while (local_38 < uVar6);
        if (local_10 != uVar5) {
          iVar15 = *(int *)((int)this + 0x4b0);
          iVar13 = local_10 - uVar5;
          param_9 = 0;
          if (*(int *)(param_2 + 8) != 0) {
            do {
              if (*(int *)(param_5 + param_9 * 8) != 0) {
                puVar17 = (undefined4 *)
                          (*(int *)(param_5 + 4 + param_9 * 8) * uVar5 +
                          *(int *)(param_5 + param_9 * 8));
                uVar11 = (uint)*(byte *)(param_2 + 0x9c + param_9);
                uVar16 = (uint)(*(byte *)(param_2 + 0x16 + uVar11 * 8) >> 2);
                if (iVar13 != 0) {
                  puVar12 = (undefined4 *)
                            ((uint)*(byte *)(param_2 + 0x17 + uVar11 * 8) * 4 +
                            *(int *)((int)this + 0x4c));
                  local_4c = iVar13;
                  do {
                    if (uVar16 != 0) {
                      if ((uVar16 < 4) ||
                         ((puVar12 <= puVar17 + (uVar16 - 1) && (puVar17 <= puVar12 + (uVar16 - 1)))
                         )) {
                        uVar5 = 0;
                        do {
                          puVar12[uVar5] = puVar17[uVar5];
                          uVar5 = uVar5 + 1;
                        } while (uVar5 < uVar16);
                      }
                      else {
                        FUN_1005ca00(puVar12,puVar17,uVar16 << 2);
                      }
                    }
                    puVar12 = (undefined4 *)((int)puVar12 + iVar15);
                    puVar17 = (undefined4 *)((int)puVar17 + *(int *)(param_5 + 4 + param_9 * 8));
                    local_4c = local_4c + -1;
                    uVar5 = local_c;
                  } while (local_4c != 0);
                }
              }
              param_9 = param_9 + 1;
            } while (param_9 < *(uint *)(param_2 + 8));
          }
          *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar15 * iVar13;
LAB_10030672:
          *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar13;
        }
      }
      local_14 = local_14 + uVar6;
      *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar6;
      uVar5 = *(int *)((int)this + 100) + uVar6 * 4;
      *(uint *)((int)this + 100) = uVar5;
    }
  }
  else {
    if (param_1 == 3) {
      uVar5 = 2;
      local_24 = 2;
    }
    else {
      if (param_1 == 4) goto LAB_1002fee4;
      if (param_1 != 5) {
        if (param_1 - 6 != 0) {
          return param_1 - 6;
        }
        if (param_9 < 3) {
          return param_9;
        }
        uVar5 = param_9 - 2;
        uVar18 = uVar5;
        do {
          if (uVar5 == 0) {
            return uVar18;
          }
          iVar15 = *(int *)((int)this + 0x54) + *(int *)((int)this + 0x50);
          iVar13 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
          if ((0x1000U - iVar15 < 0x10) || (0x1000U - iVar13 < 0x10)) {
            (**(code **)(*(int *)this + 0x98))(1);
            iVar15 = 0;
            iVar13 = 0;
          }
          uVar6 = (0x1000U - iVar13) / 3;
          if (0xffeU - iVar15 < uVar6) {
            uVar6 = 0xffeU - iVar15;
          }
          uVar18 = uVar5;
          if (uVar6 <= uVar5) {
            uVar18 = uVar6;
          }
          (**(code **)(*(int *)this + 0x9c))
                    (4,param_2,0,*(undefined4 *)(param_2 + 0xc),uVar18 + 2,uVar18 * 3,param_13);
          local_10 = *(int *)((int)this + 0x54);
          local_c = 0;
          param_9 = 0;
          if (param_12 == '\0') {
            local_4c = 0;
            if (uVar18 != 0) {
              do {
                if (param_11 == '\0') {
                  param_1 = (uint)*(ushort *)((int)param_8 + local_4c * 2 + local_14 * 2 + 2);
                  uVar6 = (uint)*(ushort *)((int)param_8 + local_4c * 2 + local_14 * 2 + 4);
                  uVar11 = (uint)(ushort)*param_8;
                }
                else {
                  param_1 = param_8[local_14 + local_4c + 1];
                  uVar6 = param_8[local_14 + local_4c + 2];
                  uVar11 = *param_8;
                }
                uVar16 = param_10 + param_1;
                if ((param_11 != '\0') && (uVar16 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar17 = (undefined4 *)((int)this + 0x20);
                  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                    *puVar17 = 0;
                    puVar17 = puVar17 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar16 >> 0x10;
                }
                uVar14 = uVar16 & 0xffff;
                uVar7 = uVar14 >> 0xb;
                if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
                  FUN_1005c9cc((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3));
                if (((&DAT_1005eed0)[uVar16 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3)) =
                       (&DAT_1005eed0)[uVar16 & 7] | bVar1;
                  iVar13 = local_10 + 1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar14 * 2) = (short)local_10;
                  local_10 = iVar13;
                  if (local_c == param_9) {
LAB_1002ed80:
                    param_9 = param_1 + 1 + param_10;
                    local_c = uVar16;
                  }
                  else if (uVar16 == param_9) {
                    param_9 = param_9 + 1;
                  }
                  else if ((uVar16 < local_c) || (param_9 < uVar16)) {
                    uVar7 = *(uint *)((int)this + 0x4b0);
                    iVar13 = param_9 - local_c;
                    if (param_6 == uVar7) {
                      uVar9 = iVar13 * uVar7;
                      puVar17 = (undefined4 *)(local_c * uVar7 + param_5);
                      puVar12 = *(undefined4 **)((int)this + 0x4c);
                      for (uVar8 = uVar9 >> 4; uVar8 != 0; uVar8 = uVar8 - 1) {
                        uVar2 = puVar17[1];
                        uVar3 = puVar17[2];
                        uVar4 = puVar17[3];
                        *puVar12 = *puVar17;
                        puVar12[1] = uVar2;
                        puVar12[2] = uVar3;
                        puVar12[3] = uVar4;
                        puVar17 = puVar17 + 4;
                        puVar12 = puVar12 + 4;
                      }
                      uVar8 = uVar9 >> 2 & 3;
                      uVar7 = 0;
                      if (uVar8 != 0) {
                        do {
                          puVar12[uVar7] = puVar17[uVar7];
                          uVar7 = uVar7 + 1;
                        } while (uVar7 < uVar8);
                      }
                      *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar9;
                    }
                    else if (iVar13 != 0) {
                      uVar8 = uVar7 >> 2 & 3;
                      local_3c = iVar13;
                      do {
                        puVar17 = *(undefined4 **)((int)this + 0x4c);
                        puVar12 = (undefined4 *)(local_c * param_6 + param_5);
                        for (uVar9 = uVar7 >> 4; uVar9 != 0; uVar9 = uVar9 - 1) {
                          uVar2 = puVar12[1];
                          uVar3 = puVar12[2];
                          uVar4 = puVar12[3];
                          *puVar17 = *puVar12;
                          puVar17[1] = uVar2;
                          puVar17[2] = uVar3;
                          puVar17[3] = uVar4;
                          puVar17 = puVar17 + 4;
                          puVar12 = puVar12 + 4;
                        }
                        if (uVar8 != 0) {
                          uVar9 = 0;
                          do {
                            puVar17[uVar9] = puVar12[uVar9];
                            uVar9 = uVar9 + 1;
                          } while (uVar9 < uVar8);
                        }
                        local_c = local_c + 1;
                        local_3c = local_3c + -1;
                        *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar7;
                      } while (local_3c != 0);
                    }
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar13;
                    goto LAB_1002ed80;
                  }
                }
                uVar16 = uVar6 + param_10;
                **(uint **)((int)this + 100) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar14 * 2);
                if ((param_11 != '\0') && (uVar16 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar17 = (undefined4 *)((int)this + 0x20);
                  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                    *puVar17 = 0;
                    puVar17 = puVar17 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar16 >> 0x10;
                }
                uVar14 = uVar16 & 0xffff;
                uVar7 = uVar14 >> 0xb;
                if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
                  FUN_1005c9cc((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3));
                if (((&DAT_1005eed0)[uVar16 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3)) =
                       (&DAT_1005eed0)[uVar16 & 7] | bVar1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar14 * 2) = (short)local_10;
                  local_10 = local_10 + 1;
                  if (local_c == param_9) {
LAB_1002ef84:
                    param_9 = uVar6 + 1 + param_10;
                    local_c = uVar16;
                  }
                  else if (uVar16 == param_9) {
                    param_9 = param_9 + 1;
                  }
                  else if ((uVar16 < local_c) || (param_9 < uVar16)) {
                    uVar7 = *(uint *)((int)this + 0x4b0);
                    iVar13 = param_9 - local_c;
                    if (param_6 == uVar7) {
                      uVar9 = iVar13 * uVar7;
                      puVar17 = *(undefined4 **)((int)this + 0x4c);
                      puVar12 = (undefined4 *)(local_c * uVar7 + param_5);
                      for (uVar8 = uVar9 >> 4; uVar8 != 0; uVar8 = uVar8 - 1) {
                        uVar2 = puVar12[1];
                        uVar3 = puVar12[2];
                        uVar4 = puVar12[3];
                        *puVar17 = *puVar12;
                        puVar17[1] = uVar2;
                        puVar17[2] = uVar3;
                        puVar17[3] = uVar4;
                        puVar17 = puVar17 + 4;
                        puVar12 = puVar12 + 4;
                      }
                      uVar8 = uVar9 >> 2 & 3;
                      uVar7 = 0;
                      if (uVar8 != 0) {
                        do {
                          puVar17[uVar7] = puVar12[uVar7];
                          uVar7 = uVar7 + 1;
                        } while (uVar7 < uVar8);
                      }
                      *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar9;
                    }
                    else if (iVar13 != 0) {
                      uVar8 = uVar7 >> 2 & 3;
                      local_48 = iVar13;
                      do {
                        puVar17 = *(undefined4 **)((int)this + 0x4c);
                        puVar12 = (undefined4 *)(local_c * param_6 + param_5);
                        for (uVar9 = uVar7 >> 4; uVar9 != 0; uVar9 = uVar9 - 1) {
                          uVar2 = puVar12[1];
                          uVar3 = puVar12[2];
                          uVar4 = puVar12[3];
                          *puVar17 = *puVar12;
                          puVar17[1] = uVar2;
                          puVar17[2] = uVar3;
                          puVar17[3] = uVar4;
                          puVar17 = puVar17 + 4;
                          puVar12 = puVar12 + 4;
                        }
                        if (uVar8 != 0) {
                          uVar9 = 0;
                          do {
                            puVar17[uVar9] = puVar12[uVar9];
                            uVar9 = uVar9 + 1;
                          } while (uVar9 < uVar8);
                        }
                        local_c = local_c + 1;
                        local_48 = local_48 + -1;
                        *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar7;
                      } while (local_48 != 0);
                    }
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar13;
                    goto LAB_1002ef84;
                  }
                }
                *(uint *)(*(int *)((int)this + 100) + 4) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar14 * 2);
                uVar6 = uVar11 + param_10;
                if ((param_11 != '\0') && (uVar6 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar17 = (undefined4 *)((int)this + 0x20);
                  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                    *puVar17 = 0;
                    puVar17 = puVar17 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar6 >> 0x10;
                }
                uVar14 = uVar6 & 0xffff;
                uVar16 = uVar14 >> 0xb;
                if (*(char *)((int)this + uVar16 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar16 + 0x20) = 1;
                  FUN_1005c9cc((int *)(uVar16 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3));
                if (((&DAT_1005eed0)[uVar6 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3)) =
                       (&DAT_1005eed0)[uVar6 & 7] | bVar1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar14 * 2) = (short)local_10;
                  local_10 = local_10 + 1;
                  if (local_c == param_9) {
LAB_1002f02f:
                    param_9 = param_10 + 1 + uVar11;
                    local_c = uVar6;
                  }
                  else if (uVar6 == param_9) {
                    param_9 = param_9 + 1;
                  }
                  else if ((uVar6 < local_c) || (param_9 < uVar6)) {
                    uVar16 = *(uint *)((int)this + 0x4b0);
                    iVar13 = param_9 - local_c;
                    if (param_6 == uVar16) {
                      uVar8 = iVar13 * uVar16;
                      puVar17 = *(undefined4 **)((int)this + 0x4c);
                      puVar12 = (undefined4 *)(local_c * uVar16 + param_5);
                      for (uVar7 = uVar8 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                        uVar2 = puVar12[1];
                        uVar3 = puVar12[2];
                        uVar4 = puVar12[3];
                        *puVar17 = *puVar12;
                        puVar17[1] = uVar2;
                        puVar17[2] = uVar3;
                        puVar17[3] = uVar4;
                        puVar17 = puVar17 + 4;
                        puVar12 = puVar12 + 4;
                      }
                      uVar7 = uVar8 >> 2 & 3;
                      uVar16 = 0;
                      if (uVar7 != 0) {
                        do {
                          puVar17[uVar16] = puVar12[uVar16];
                          uVar16 = uVar16 + 1;
                        } while (uVar16 < uVar7);
                      }
                      *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar8;
                    }
                    else if (iVar13 != 0) {
                      uVar7 = uVar16 >> 2 & 3;
                      local_44 = iVar13;
                      do {
                        puVar17 = *(undefined4 **)((int)this + 0x4c);
                        puVar12 = (undefined4 *)(local_c * param_6 + param_5);
                        for (uVar8 = uVar16 >> 4; uVar8 != 0; uVar8 = uVar8 - 1) {
                          uVar2 = puVar12[1];
                          uVar3 = puVar12[2];
                          uVar4 = puVar12[3];
                          *puVar17 = *puVar12;
                          puVar17[1] = uVar2;
                          puVar17[2] = uVar3;
                          puVar17[3] = uVar4;
                          puVar17 = puVar17 + 4;
                          puVar12 = puVar12 + 4;
                        }
                        if (uVar7 != 0) {
                          uVar8 = 0;
                          do {
                            puVar17[uVar8] = puVar12[uVar8];
                            uVar8 = uVar8 + 1;
                          } while (uVar8 < uVar7);
                        }
                        local_c = local_c + 1;
                        local_44 = local_44 + -1;
                        *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar16;
                      } while (local_44 != 0);
                    }
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar13;
                    goto LAB_1002f02f;
                  }
                }
                *(uint *)(*(int *)((int)this + 100) + 8) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar14 * 2);
                *(int *)((int)this + 100) = *(int *)((int)this + 100) + 0xc;
                local_4c = local_4c + 1;
              } while (local_4c < uVar18);
              if (param_9 != local_c) {
                uVar6 = *(uint *)((int)this + 0x4b0);
                iVar13 = param_9 - local_c;
                if (param_6 == uVar6) {
                  uVar16 = iVar13 * uVar6;
                  puVar17 = *(undefined4 **)((int)this + 0x4c);
                  puVar12 = (undefined4 *)(uVar6 * local_c + param_5);
                  for (uVar11 = uVar16 >> 4; uVar11 != 0; uVar11 = uVar11 - 1) {
                    uVar2 = puVar12[1];
                    uVar3 = puVar12[2];
                    uVar4 = puVar12[3];
                    *puVar17 = *puVar12;
                    puVar17[1] = uVar2;
                    puVar17[2] = uVar3;
                    puVar17[3] = uVar4;
                    puVar17 = puVar17 + 4;
                    puVar12 = puVar12 + 4;
                  }
                  uVar11 = uVar16 >> 2 & 3;
                  uVar6 = 0;
                  if (uVar11 != 0) {
                    do {
                      puVar17[uVar6] = puVar12[uVar6];
                      uVar6 = uVar6 + 1;
                    } while (uVar6 < uVar11);
                  }
                  goto LAB_1002f244;
                }
                if (iVar13 != 0) {
                  uVar11 = uVar6 >> 2 & 3;
                  local_44 = iVar13;
                  do {
                    puVar17 = *(undefined4 **)((int)this + 0x4c);
                    puVar12 = (undefined4 *)(local_c * param_6 + param_5);
                    for (uVar16 = uVar6 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
                      uVar2 = puVar12[1];
                      uVar3 = puVar12[2];
                      uVar4 = puVar12[3];
                      *puVar17 = *puVar12;
                      puVar17[1] = uVar2;
                      puVar17[2] = uVar3;
                      puVar17[3] = uVar4;
                      puVar17 = puVar17 + 4;
                      puVar12 = puVar12 + 4;
                    }
                    if (uVar11 != 0) {
                      uVar16 = 0;
                      do {
                        puVar17[uVar16] = puVar12[uVar16];
                        uVar16 = uVar16 + 1;
                      } while (uVar16 < uVar11);
                    }
                    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar6;
                    local_c = local_c + 1;
                    local_44 = local_44 + -1;
                  } while (local_44 != 0);
                }
                goto LAB_1002f2e5;
              }
            }
          }
          else {
            local_44 = 0;
            if (uVar18 != 0) {
              do {
                if (param_11 == '\0') {
                  param_1 = (uint)*(ushort *)((int)param_8 + local_44 * 2 + local_14 * 2 + 2);
                  uVar6 = (uint)*(ushort *)((int)param_8 + local_44 * 2 + local_14 * 2 + 4);
                  uVar11 = (uint)(ushort)*param_8;
                }
                else {
                  param_1 = param_8[local_14 + local_44 + 1];
                  uVar6 = param_8[local_14 + local_44 + 2];
                  uVar11 = *param_8;
                }
                uVar16 = param_1;
                uVar14 = param_10 + param_1;
                if ((param_11 != '\0') && (uVar14 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar17 = (undefined4 *)((int)this + 0x20);
                  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                    *puVar17 = 0;
                    puVar17 = puVar17 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar14 >> 0x10;
                }
                uVar7 = uVar14 & 0xffff;
                uVar8 = uVar7 >> 0xb;
                if (*(char *)((int)this + uVar8 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar8 + 0x20) = 1;
                  FUN_1005c9cc((int *)(uVar8 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar7 >> 3));
                if (((&DAT_1005eed0)[uVar14 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar7 >> 3)) =
                       (&DAT_1005eed0)[uVar14 & 7] | bVar1;
                  iVar13 = local_10 + 1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar7 * 2) = (short)local_10;
                  local_10 = iVar13;
                  if (local_c == param_9) {
LAB_1002e603:
                    param_9 = uVar16 + 1 + param_10;
                    local_c = uVar14;
                  }
                  else if (uVar14 == param_9) {
                    param_9 = param_9 + 1;
                  }
                  else if ((uVar14 < local_c) || (param_9 < uVar14)) {
                    iVar13 = *(int *)((int)this + 0x4b0);
                    iVar15 = param_9 - local_c;
                    param_1 = 0;
                    if (*(int *)(param_2 + 8) != 0) {
                      do {
                        if (*(int *)(param_5 + param_1 * 8) != 0) {
                          puVar17 = (undefined4 *)
                                    (*(int *)(param_5 + 4 + param_1 * 8) * local_c +
                                    *(int *)(param_5 + param_1 * 8));
                          uVar8 = (uint)*(byte *)(param_2 + 0x9c + param_1);
                          uVar9 = (uint)(*(byte *)(param_2 + 0x16 + uVar8 * 8) >> 2);
                          if (iVar15 != 0) {
                            puVar12 = (undefined4 *)
                                      (*(int *)((int)this + 0x4c) +
                                      (uint)*(byte *)(param_2 + 0x17 + uVar8 * 8) * 4);
                            local_40 = iVar15;
                            do {
                              if (uVar9 != 0) {
                                if ((uVar9 < 4) ||
                                   ((puVar12 <= puVar17 + (uVar9 - 1) &&
                                    (puVar17 <= puVar12 + (uVar9 - 1))))) {
                                  uVar8 = 0;
                                  do {
                                    puVar12[uVar8] = puVar17[uVar8];
                                    uVar8 = uVar8 + 1;
                                  } while (uVar8 < uVar9);
                                }
                                else {
                                  FUN_1005ca00(puVar12,puVar17,uVar9 * 4);
                                }
                              }
                              puVar12 = (undefined4 *)((int)puVar12 + iVar13);
                              puVar17 = (undefined4 *)
                                        ((int)puVar17 + *(int *)(param_5 + 4 + param_1 * 8));
                              local_40 = local_40 + -1;
                            } while (local_40 != 0);
                          }
                        }
                        param_1 = param_1 + 1;
                      } while (param_1 < *(uint *)(param_2 + 8));
                    }
                    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar15 * iVar13;
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar15;
                    goto LAB_1002e603;
                  }
                }
                uVar16 = uVar6 + param_10;
                **(uint **)((int)this + 100) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar7 * 2);
                if ((param_11 != '\0') && (uVar16 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar17 = (undefined4 *)((int)this + 0x20);
                  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                    *puVar17 = 0;
                    puVar17 = puVar17 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar16 >> 0x10;
                }
                uVar14 = uVar16 & 0xffff;
                uVar7 = uVar14 >> 0xb;
                if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
                  FUN_1005c9cc((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3));
                if (((&DAT_1005eed0)[uVar16 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3)) =
                       (&DAT_1005eed0)[uVar16 & 7] | bVar1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar14 * 2) = (short)local_10;
                  local_10 = local_10 + 1;
                  if (local_c == param_9) {
LAB_1002e7dc:
                    param_9 = uVar6 + 1 + param_10;
                    local_c = uVar16;
                  }
                  else if (uVar16 == param_9) {
                    param_9 = param_9 + 1;
                  }
                  else if ((uVar16 < local_c) || (param_9 < uVar16)) {
                    iVar13 = *(int *)((int)this + 0x4b0);
                    iVar15 = param_9 - local_c;
                    local_28 = 0;
                    if (*(int *)(param_2 + 8) != 0) {
                      do {
                        if (*(int *)(param_5 + local_28 * 8) != 0) {
                          puVar17 = (undefined4 *)
                                    (*(int *)(param_5 + 4 + local_28 * 8) * local_c +
                                    *(int *)(param_5 + local_28 * 8));
                          uVar7 = (uint)*(byte *)(param_2 + 0x9c + local_28);
                          uVar8 = (uint)(*(byte *)(param_2 + 0x16 + uVar7 * 8) >> 2);
                          if (iVar15 != 0) {
                            puVar12 = (undefined4 *)
                                      (*(int *)((int)this + 0x4c) +
                                      (uint)*(byte *)(param_2 + 0x17 + uVar7 * 8) * 4);
                            iVar10 = iVar15;
                            do {
                              uVar7 = 0;
                              if (uVar8 != 0) {
                                if ((uVar8 < 4) ||
                                   ((puVar12 <= puVar17 + (uVar8 - 1) &&
                                    (puVar17 <= puVar12 + (uVar8 - 1))))) {
                                  do {
                                    puVar12[uVar7] = puVar17[uVar7];
                                    uVar7 = uVar7 + 1;
                                  } while (uVar7 < uVar8);
                                }
                                else {
                                  FUN_1005ca00(puVar12,puVar17,uVar8 * 4);
                                }
                              }
                              puVar12 = (undefined4 *)((int)puVar12 + iVar13);
                              puVar17 = (undefined4 *)
                                        ((int)puVar17 + *(int *)(param_5 + 4 + local_28 * 8));
                              iVar10 = iVar10 + -1;
                            } while (iVar10 != 0);
                          }
                        }
                        local_28 = local_28 + 1;
                      } while (local_28 < *(uint *)(param_2 + 8));
                    }
                    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar15 * iVar13;
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar15;
                    goto LAB_1002e7dc;
                  }
                }
                *(uint *)(*(int *)((int)this + 100) + 4) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar14 * 2);
                uVar6 = uVar11 + param_10;
                if ((param_11 != '\0') && (uVar6 >> 0x10 != *(uint *)((int)this + 0x40))) {
                  puVar17 = (undefined4 *)((int)this + 0x20);
                  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                    *puVar17 = 0;
                    puVar17 = puVar17 + 1;
                  }
                  *(uint *)((int)this + 0x40) = uVar6 >> 0x10;
                }
                uVar14 = uVar6 & 0xffff;
                uVar16 = uVar14 >> 0xb;
                if (*(char *)((int)this + uVar16 + 0x20) == '\0') {
                  *(undefined1 *)((int)this + uVar16 + 0x20) = 1;
                  FUN_1005c9cc((int *)(uVar16 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
                }
                bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3));
                if (((&DAT_1005eed0)[uVar6 & 7] & bVar1) == 0) {
                  *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3)) =
                       (&DAT_1005eed0)[uVar6 & 7] | bVar1;
                  *(short *)(*(int *)((int)this + 0x18) + uVar14 * 2) = (short)local_10;
                  local_10 = local_10 + 1;
                  if (local_c == param_9) {
LAB_1002e88a:
                    param_9 = param_10 + 1 + uVar11;
                    local_c = uVar6;
                  }
                  else if (uVar6 == param_9) {
                    param_9 = param_9 + 1;
                  }
                  else if ((uVar6 < local_c) || (param_9 < uVar6)) {
                    iVar13 = *(int *)((int)this + 0x4b0);
                    iVar15 = param_9 - local_c;
                    param_1 = 0;
                    if (*(int *)(param_2 + 8) != 0) {
                      do {
                        if (*(int *)(param_5 + param_1 * 8) != 0) {
                          puVar17 = (undefined4 *)
                                    (*(int *)(param_5 + 4 + param_1 * 8) * local_c +
                                    *(int *)(param_5 + param_1 * 8));
                          uVar16 = (uint)*(byte *)(param_2 + 0x9c + param_1);
                          uVar7 = (uint)(*(byte *)(param_2 + 0x16 + uVar16 * 8) >> 2);
                          if (iVar15 != 0) {
                            puVar12 = (undefined4 *)
                                      ((uint)*(byte *)(param_2 + 0x17 + uVar16 * 8) * 4 +
                                      *(int *)((int)this + 0x4c));
                            local_40 = iVar15;
                            do {
                              uVar16 = 0;
                              if (uVar7 != 0) {
                                if ((uVar7 < 4) ||
                                   ((puVar12 <= puVar17 + (uVar7 - 1) &&
                                    (puVar17 <= puVar12 + (uVar7 - 1))))) {
                                  do {
                                    puVar12[uVar16] = puVar17[uVar16];
                                    uVar16 = uVar16 + 1;
                                  } while (uVar16 < uVar7);
                                }
                                else {
                                  FUN_1005ca00(puVar12,puVar17,uVar7 << 2);
                                }
                              }
                              puVar12 = (undefined4 *)((int)puVar12 + iVar13);
                              puVar17 = (undefined4 *)
                                        ((int)puVar17 + *(int *)(param_5 + 4 + param_1 * 8));
                              local_40 = local_40 + -1;
                            } while (local_40 != 0);
                          }
                        }
                        param_1 = param_1 + 1;
                      } while (param_1 < *(uint *)(param_2 + 8));
                    }
                    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar15 * iVar13;
                    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar15;
                    goto LAB_1002e88a;
                  }
                }
                *(uint *)(*(int *)((int)this + 100) + 8) =
                     (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar14 * 2);
                *(int *)((int)this + 100) = *(int *)((int)this + 100) + 0xc;
                local_44 = local_44 + 1;
              } while (local_44 < uVar18);
              if (param_9 != local_c) {
                iVar15 = *(int *)((int)this + 0x4b0);
                iVar13 = param_9 - local_c;
                param_1 = 0;
                if (*(int *)(param_2 + 8) != 0) {
                  do {
                    if (*(int *)(param_5 + param_1 * 8) != 0) {
                      puVar17 = (undefined4 *)
                                (*(int *)(param_5 + 4 + param_1 * 8) * local_c +
                                *(int *)(param_5 + param_1 * 8));
                      uVar6 = (uint)*(byte *)(param_2 + 0x9c + param_1);
                      uVar11 = (uint)(*(byte *)(param_2 + 0x16 + uVar6 * 8) >> 2);
                      if (iVar13 != 0) {
                        puVar12 = (undefined4 *)
                                  ((uint)*(byte *)(param_2 + 0x17 + uVar6 * 8) * 4 +
                                  *(int *)((int)this + 0x4c));
                        local_44 = iVar13;
                        do {
                          uVar6 = 0;
                          if (uVar11 != 0) {
                            if (3 < uVar11) {
                              if ((puVar17 + (uVar11 - 1) < puVar12) ||
                                 (puVar12 + (uVar11 - 1) < puVar17)) {
                                FUN_1005ca00(puVar12,puVar17,uVar11 * 4);
                                goto LAB_1002ead6;
                              }
                            }
                            do {
                              puVar12[uVar6] = puVar17[uVar6];
                              uVar6 = uVar6 + 1;
                            } while (uVar6 < uVar11);
                          }
LAB_1002ead6:
                          puVar12 = (undefined4 *)((int)puVar12 + iVar15);
                          puVar17 = (undefined4 *)
                                    ((int)puVar17 + *(int *)(param_5 + 4 + param_1 * 8));
                          local_44 = local_44 + -1;
                        } while (local_44 != 0);
                      }
                    }
                    param_1 = param_1 + 1;
                  } while (param_1 < *(uint *)(param_2 + 8));
                }
                uVar16 = iVar15 * iVar13;
LAB_1002f244:
                *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar16;
LAB_1002f2e5:
                *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar13;
              }
            }
          }
          *(uint *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar18 * 3;
          uVar5 = uVar5 - uVar18;
          local_14 = local_14 + uVar18;
        } while( true );
      }
      uVar5 = 3;
    }
    uVar18 = uVar5 - 1;
    bVar19 = param_9 < uVar5;
    uVar5 = uVar18;
    uVar6 = param_9;
    while (!bVar19) {
      iVar13 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
      if (((uint)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50)) < 0x10) ||
         (0x1000U - iVar13 < 0x10)) {
        (**(code **)(*(int *)this + 0x98))(1);
        iVar13 = 0;
      }
      uVar11 = 0x1000U - iVar13 & 0xfffffffe;
      uVar5 = uVar6;
      if (uVar11 <= uVar6) {
        uVar5 = uVar11;
      }
      (**(code **)(*(int *)this + 0x9c))
                (param_1,param_2,0,*(undefined4 *)(param_2 + 0xc),uVar5,uVar5,param_13);
      if ((*(int *)((int)this + 0x14) == 0) ||
         (((*(int *)((int)this + 0x54) == 0 && (*(int *)((int)this + 0x6c) == 0)) ||
          (0xfff < uVar5 + iVar13)))) {
        (**(code **)(*(int *)this + 0x98))(0);
      }
      else {
        **(int **)((int)this + 100) = *(int *)((int)this + 0x14);
        *(int *)((int)this + 100) = *(int *)((int)this + 100) + 4;
        *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + 1;
      }
      local_18 = *(int *)((int)this + 0x54);
      local_10 = 0;
      local_c = 0;
      if (param_12 == '\0') {
        local_48 = 0;
        do {
          if (param_11 == '\0') {
            uVar11 = (uint)*(ushort *)((int)param_8 + local_14 * 2 + local_48 * 2);
          }
          else {
            uVar11 = param_8[local_48 + local_14];
          }
          uVar16 = param_10 + uVar11;
          if ((param_11 != '\0') && (uVar16 >> 0x10 != *(uint *)((int)this + 0x40))) {
            puVar17 = (undefined4 *)((int)this + 0x20);
            for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar17 = 0;
              puVar17 = puVar17 + 1;
            }
            *(uint *)((int)this + 0x40) = uVar16 >> 0x10;
          }
          uVar14 = uVar16 & 0xffff;
          uVar7 = uVar14 >> 0xb;
          if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
            *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
            FUN_1005c9cc((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
          }
          bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3));
          if (((&DAT_1005eed0)[uVar16 & 7] & bVar1) == 0) {
            *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3)) =
                 (&DAT_1005eed0)[uVar16 & 7] | bVar1;
            *(short *)(*(int *)((int)this + 0x18) + uVar14 * 2) = (short)local_18;
            local_18 = local_18 + 1;
            if (local_10 == local_c) {
LAB_1002f9d8:
              local_c = param_10 + 1 + uVar11;
              local_10 = uVar16;
            }
            else if (uVar16 == local_c) {
              local_c = local_c + 1;
            }
            else if ((uVar16 < local_10) || (local_c < uVar16)) {
              uVar7 = *(uint *)((int)this + 0x4b0);
              iVar13 = local_c - local_10;
              if (param_6 == uVar7) {
                uVar9 = iVar13 * uVar7;
                puVar17 = (undefined4 *)(local_10 * uVar7 + param_5);
                puVar12 = *(undefined4 **)((int)this + 0x4c);
                for (uVar8 = uVar9 >> 4; uVar8 != 0; uVar8 = uVar8 - 1) {
                  uVar2 = puVar17[1];
                  uVar3 = puVar17[2];
                  uVar4 = puVar17[3];
                  *puVar12 = *puVar17;
                  puVar12[1] = uVar2;
                  puVar12[2] = uVar3;
                  puVar12[3] = uVar4;
                  puVar17 = puVar17 + 4;
                  puVar12 = puVar12 + 4;
                }
                uVar7 = 0;
                uVar8 = uVar9 >> 2 & 3;
                if (uVar8 != 0) {
                  do {
                    puVar12[uVar7] = puVar17[uVar7];
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < uVar8);
                }
                *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar9;
              }
              else if (iVar13 != 0) {
                uVar8 = uVar7 >> 2 & 3;
                local_4c = iVar13;
                do {
                  puVar17 = *(undefined4 **)((int)this + 0x4c);
                  puVar12 = (undefined4 *)(local_10 * param_6 + param_5);
                  for (uVar9 = uVar7 >> 4; uVar9 != 0; uVar9 = uVar9 - 1) {
                    uVar2 = puVar12[1];
                    uVar3 = puVar12[2];
                    uVar4 = puVar12[3];
                    *puVar17 = *puVar12;
                    puVar17[1] = uVar2;
                    puVar17[2] = uVar3;
                    puVar17[3] = uVar4;
                    puVar17 = puVar17 + 4;
                    puVar12 = puVar12 + 4;
                  }
                  uVar9 = 0;
                  if (uVar8 != 0) {
                    do {
                      puVar17[uVar9] = puVar12[uVar9];
                      uVar9 = uVar9 + 1;
                    } while (uVar9 < uVar8);
                  }
                  local_10 = local_10 + 1;
                  local_4c = local_4c + -1;
                  *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar7;
                } while (local_4c != 0);
              }
              *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar13;
              goto LAB_1002f9d8;
            }
          }
          *(uint *)(*(int *)((int)this + 100) + local_48 * 4) =
               (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar14 * 2);
          local_48 = local_48 + 1;
        } while (local_48 < uVar18);
        local_20 = uVar5 - uVar18;
        local_3c = 0;
        if (local_20 != 0) {
          do {
            if (param_11 == '\0') {
              uVar11 = (uint)*(ushort *)((int)param_8 + (uVar18 + local_14) * 2 + local_3c * 2);
            }
            else {
              uVar11 = param_8[local_3c + uVar18 + local_14];
            }
            uVar16 = param_10 + uVar11;
            if ((param_11 != '\0') && (uVar16 >> 0x10 != *(uint *)((int)this + 0x40))) {
              puVar17 = (undefined4 *)((int)this + 0x20);
              for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                *puVar17 = 0;
                puVar17 = puVar17 + 1;
              }
              *(uint *)((int)this + 0x40) = uVar16 >> 0x10;
            }
            uVar14 = uVar16 & 0xffff;
            uVar7 = uVar14 >> 0xb;
            if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
              *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
              FUN_1005c9cc((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
            }
            bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3));
            if (((&DAT_1005eed0)[uVar16 & 7] & bVar1) == 0) {
              *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3)) =
                   (&DAT_1005eed0)[uVar16 & 7] | bVar1;
              *(short *)(*(int *)((int)this + 0x18) + uVar14 * 2) = (short)local_18;
              local_18 = local_18 + 1;
              if (local_10 == local_c) {
LAB_1002fd43:
                local_c = param_10 + 1 + uVar11;
                local_10 = uVar16;
              }
              else if (uVar16 == local_c) {
                local_c = local_c + 1;
              }
              else if ((uVar16 < local_10) || (local_c < uVar16)) {
                uVar7 = *(uint *)((int)this + 0x4b0);
                iVar13 = local_c - local_10;
                if (param_6 == uVar7) {
                  uVar9 = iVar13 * uVar7;
                  puVar17 = (undefined4 *)(local_10 * uVar7 + param_5);
                  puVar12 = *(undefined4 **)((int)this + 0x4c);
                  for (uVar8 = uVar9 >> 4; uVar8 != 0; uVar8 = uVar8 - 1) {
                    uVar2 = puVar17[1];
                    uVar3 = puVar17[2];
                    uVar4 = puVar17[3];
                    *puVar12 = *puVar17;
                    puVar12[1] = uVar2;
                    puVar12[2] = uVar3;
                    puVar12[3] = uVar4;
                    puVar17 = puVar17 + 4;
                    puVar12 = puVar12 + 4;
                  }
                  uVar7 = 0;
                  uVar8 = uVar9 >> 2 & 3;
                  if (uVar8 != 0) {
                    do {
                      puVar12[uVar7] = puVar17[uVar7];
                      uVar7 = uVar7 + 1;
                    } while (uVar7 < uVar8);
                  }
                  *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar9;
                }
                else if (iVar13 != 0) {
                  uVar8 = uVar7 >> 2 & 3;
                  local_4c = iVar13;
                  do {
                    puVar17 = *(undefined4 **)((int)this + 0x4c);
                    puVar12 = (undefined4 *)(local_10 * param_6 + param_5);
                    for (uVar9 = uVar7 >> 4; uVar9 != 0; uVar9 = uVar9 - 1) {
                      uVar2 = puVar12[1];
                      uVar3 = puVar12[2];
                      uVar4 = puVar12[3];
                      *puVar17 = *puVar12;
                      puVar17[1] = uVar2;
                      puVar17[2] = uVar3;
                      puVar17[3] = uVar4;
                      puVar17 = puVar17 + 4;
                      puVar12 = puVar12 + 4;
                    }
                    uVar9 = 0;
                    if (uVar8 != 0) {
                      do {
                        puVar17[uVar9] = puVar12[uVar9];
                        uVar9 = uVar9 + 1;
                      } while (uVar9 < uVar8);
                    }
                    local_10 = local_10 + 1;
                    local_4c = local_4c + -1;
                    *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar7;
                  } while (local_4c != 0);
                }
                *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar13;
                goto LAB_1002fd43;
              }
            }
            *(uint *)(uVar18 * 4 + local_3c * 4 + *(int *)((int)this + 100)) =
                 (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar14 * 2);
            local_3c = local_3c + 1;
          } while (local_3c < local_20);
        }
        if (local_c != local_10) {
          uVar11 = *(uint *)((int)this + 0x4b0);
          iVar13 = local_c - local_10;
          if (param_6 == uVar11) {
            uVar14 = uVar11 * iVar13;
            puVar17 = (undefined4 *)(local_10 * uVar11 + param_5);
            puVar12 = *(undefined4 **)((int)this + 0x4c);
            for (uVar16 = uVar14 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
              uVar2 = puVar17[1];
              uVar3 = puVar17[2];
              uVar4 = puVar17[3];
              *puVar12 = *puVar17;
              puVar12[1] = uVar2;
              puVar12[2] = uVar3;
              puVar12[3] = uVar4;
              puVar17 = puVar17 + 4;
              puVar12 = puVar12 + 4;
            }
            uVar11 = 0;
            uVar16 = uVar14 >> 2 & 3;
            if (uVar16 != 0) {
              do {
                puVar12[uVar11] = puVar17[uVar11];
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar16);
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar14;
          }
          else if (iVar13 != 0) {
            uVar16 = uVar11 >> 2 & 3;
            local_4c = iVar13;
            do {
              puVar17 = *(undefined4 **)((int)this + 0x4c);
              puVar12 = (undefined4 *)(local_10 * param_6 + param_5);
              for (uVar14 = uVar11 >> 4; uVar14 != 0; uVar14 = uVar14 - 1) {
                uVar2 = puVar12[1];
                uVar3 = puVar12[2];
                uVar4 = puVar12[3];
                *puVar17 = *puVar12;
                puVar17[1] = uVar2;
                puVar17[2] = uVar3;
                puVar17[3] = uVar4;
                puVar17 = puVar17 + 4;
                puVar12 = puVar12 + 4;
              }
              uVar14 = 0;
              if (uVar16 != 0) {
                do {
                  puVar17[uVar14] = puVar12[uVar14];
                  uVar14 = uVar14 + 1;
                } while (uVar14 < uVar16);
              }
              local_10 = local_10 + 1;
              local_4c = local_4c + -1;
              *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar11;
            } while (local_4c != 0);
          }
          goto LAB_1002fea1;
        }
      }
      else {
        local_3c = 0;
        do {
          if (param_11 == '\0') {
            uVar11 = (uint)*(ushort *)((int)param_8 + local_14 * 2 + local_3c * 2);
          }
          else {
            uVar11 = param_8[local_3c + local_14];
          }
          uVar16 = param_10 + uVar11;
          if ((param_11 != '\0') && (uVar16 >> 0x10 != *(uint *)((int)this + 0x40))) {
            puVar17 = (undefined4 *)((int)this + 0x20);
            for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar17 = 0;
              puVar17 = puVar17 + 1;
            }
            *(uint *)((int)this + 0x40) = uVar16 >> 0x10;
          }
          uVar14 = uVar16 & 0xffff;
          uVar7 = uVar14 >> 0xb;
          if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
            *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
            FUN_1005c9cc((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
          }
          bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3));
          if (((&DAT_1005eed0)[uVar16 & 7] & bVar1) == 0) {
            *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3)) =
                 (&DAT_1005eed0)[uVar16 & 7] | bVar1;
            *(short *)(*(int *)((int)this + 0x18) + uVar14 * 2) = (short)local_18;
            local_18 = local_18 + 1;
            if (local_10 == local_c) {
LAB_1002f497:
              local_c = param_10 + 1 + uVar11;
              local_10 = uVar16;
            }
            else if (uVar16 == local_c) {
              local_c = local_c + 1;
            }
            else if ((uVar16 < local_10) || (local_c < uVar16)) {
              iVar13 = *(int *)((int)this + 0x4b0);
              iVar15 = local_c - local_10;
              local_20 = 0;
              if (*(int *)(param_2 + 8) != 0) {
                do {
                  if (*(int *)(param_5 + local_20 * 8) != 0) {
                    puVar17 = (undefined4 *)
                              (*(int *)(param_5 + 4 + local_20 * 8) * local_10 +
                              *(int *)(param_5 + local_20 * 8));
                    uVar7 = (uint)*(byte *)(param_2 + 0x9c + local_20);
                    uVar8 = (uint)(*(byte *)(param_2 + 0x16 + uVar7 * 8) >> 2);
                    if (iVar15 != 0) {
                      puVar12 = (undefined4 *)
                                (*(int *)((int)this + 0x4c) +
                                (uint)*(byte *)(param_2 + 0x17 + uVar7 * 8) * 4);
                      local_4c = iVar15;
                      do {
                        uVar7 = 0;
                        if (uVar8 != 0) {
                          if (3 < uVar8) {
                            if ((puVar17 + (uVar8 - 1) < puVar12) ||
                               (puVar12 + (uVar8 - 1) < puVar17)) {
                              FUN_1005ca00(puVar12,puVar17,uVar8 * 4);
                              goto LAB_1002f584;
                            }
                            uVar7 = 0;
                          }
                          do {
                            puVar12[uVar7] = puVar17[uVar7];
                            uVar7 = uVar7 + 1;
                          } while (uVar7 < uVar8);
                        }
LAB_1002f584:
                        puVar12 = (undefined4 *)((int)puVar12 + iVar13);
                        puVar17 = (undefined4 *)
                                  ((int)puVar17 + *(int *)(param_5 + 4 + local_20 * 8));
                        local_4c = local_4c + -1;
                      } while (local_4c != 0);
                    }
                  }
                  local_20 = local_20 + 1;
                } while (local_20 < *(uint *)(param_2 + 8));
              }
              *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar15 * iVar13;
              *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar15;
              goto LAB_1002f497;
            }
          }
          *(uint *)(*(int *)((int)this + 100) + local_3c * 4) =
               (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar14 * 2);
          local_3c = local_3c + 1;
        } while (local_3c < uVar18);
        local_20 = uVar5 - uVar18;
        local_34 = 0;
        if (local_20 != 0) {
          do {
            if (param_11 == '\0') {
              uVar11 = (uint)*(ushort *)((int)param_8 + (uVar18 + local_14) * 2 + local_34 * 2);
            }
            else {
              uVar11 = param_8[local_34 + uVar18 + local_14];
            }
            uVar16 = param_10 + uVar11;
            if ((param_11 != '\0') && (uVar16 >> 0x10 != *(uint *)((int)this + 0x40))) {
              puVar17 = (undefined4 *)((int)this + 0x20);
              for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                *puVar17 = 0;
                puVar17 = puVar17 + 1;
              }
              *(uint *)((int)this + 0x40) = uVar16 >> 0x10;
            }
            uVar14 = uVar16 & 0xffff;
            uVar7 = uVar14 >> 0xb;
            if (*(char *)((int)this + uVar7 + 0x20) == '\0') {
              *(undefined1 *)((int)this + uVar7 + 0x20) = 1;
              FUN_1005c9cc((int *)(uVar7 * 0x100 + *(int *)((int)this + 0x1c)),0,0x100);
            }
            bVar1 = *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3));
            if (((&DAT_1005eed0)[uVar16 & 7] & bVar1) == 0) {
              *(byte *)(*(int *)((int)this + 0x1c) + (uVar14 >> 3)) =
                   (&DAT_1005eed0)[uVar16 & 7] | bVar1;
              *(short *)(*(int *)((int)this + 0x18) + uVar14 * 2) = (short)local_18;
              local_18 = local_18 + 1;
              if (local_10 == local_c) {
LAB_1002f7da:
                local_c = param_10 + 1 + uVar11;
                local_10 = uVar16;
              }
              else if (uVar16 == local_c) {
                local_c = local_c + 1;
              }
              else if ((uVar16 < local_10) || (local_c < uVar16)) {
                iVar13 = *(int *)((int)this + 0x4b0);
                iVar15 = local_c - local_10;
                local_28 = 0;
                if (*(int *)(param_2 + 8) != 0) {
                  do {
                    if (*(int *)(param_5 + local_28 * 8) != 0) {
                      puVar17 = (undefined4 *)
                                (*(int *)(param_5 + 4 + local_28 * 8) * local_10 +
                                *(int *)(param_5 + local_28 * 8));
                      uVar7 = (uint)*(byte *)(param_2 + 0x9c + local_28);
                      uVar8 = (uint)(*(byte *)(param_2 + 0x16 + uVar7 * 8) >> 2);
                      if (iVar15 != 0) {
                        puVar12 = (undefined4 *)
                                  (*(int *)((int)this + 0x4c) +
                                  (uint)*(byte *)(param_2 + 0x17 + uVar7 * 8) * 4);
                        local_4c = iVar15;
                        do {
                          uVar7 = 0;
                          if (uVar8 != 0) {
                            if (3 < uVar8) {
                              if ((puVar17 + (uVar8 - 1) < puVar12) ||
                                 (puVar12 + (uVar8 - 1) < puVar17)) {
                                FUN_1005ca00(puVar12,puVar17,uVar8 * 4);
                                goto LAB_1002f798;
                              }
                              uVar7 = 0;
                            }
                            do {
                              puVar12[uVar7] = puVar17[uVar7];
                              uVar7 = uVar7 + 1;
                            } while (uVar7 < uVar8);
                          }
LAB_1002f798:
                          puVar12 = (undefined4 *)((int)puVar12 + iVar13);
                          puVar17 = (undefined4 *)
                                    ((int)puVar17 + *(int *)(param_5 + 4 + local_28 * 8));
                          local_4c = local_4c + -1;
                        } while (local_4c != 0);
                      }
                    }
                    local_28 = local_28 + 1;
                  } while (local_28 < *(uint *)(param_2 + 8));
                }
                *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar15 * iVar13;
                *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar15;
                goto LAB_1002f7da;
              }
            }
            *(uint *)(uVar18 * 4 + local_34 * 4 + *(int *)((int)this + 100)) =
                 (uint)*(ushort *)(*(int *)((int)this + 0x18) + uVar14 * 2);
            local_34 = local_34 + 1;
          } while (local_34 < local_20);
        }
        if (local_c != local_10) {
          iVar15 = *(int *)((int)this + 0x4b0);
          iVar13 = local_c - local_10;
          param_9 = 0;
          if (*(int *)(param_2 + 8) != 0) {
            do {
              if (*(int *)(param_5 + param_9 * 8) != 0) {
                puVar17 = (undefined4 *)
                          (*(int *)(param_5 + 4 + param_9 * 8) * local_10 +
                          *(int *)(param_5 + param_9 * 8));
                uVar11 = (uint)*(byte *)(param_2 + 0x9c + param_9);
                uVar16 = (uint)(*(byte *)(param_2 + 0x16 + uVar11 * 8) >> 2);
                if (iVar13 != 0) {
                  puVar12 = (undefined4 *)
                            ((uint)*(byte *)(param_2 + 0x17 + uVar11 * 8) * 4 +
                            *(int *)((int)this + 0x4c));
                  local_48 = iVar13;
                  do {
                    uVar11 = 0;
                    if (uVar16 != 0) {
                      if ((uVar16 < 4) ||
                         ((puVar12 <= puVar17 + (uVar16 - 1) && (puVar17 <= puVar12 + (uVar16 - 1)))
                         )) {
                        do {
                          puVar12[uVar11] = puVar17[uVar11];
                          uVar11 = uVar11 + 1;
                        } while (uVar11 < uVar16);
                      }
                      else {
                        FUN_1005ca00(puVar12,puVar17,uVar16 << 2);
                      }
                    }
                    puVar12 = (undefined4 *)((int)puVar12 + iVar15);
                    puVar17 = (undefined4 *)((int)puVar17 + *(int *)(param_5 + 4 + param_9 * 8));
                    local_48 = local_48 + -1;
                  } while (local_48 != 0);
                }
              }
              param_9 = param_9 + 1;
            } while (param_9 < *(uint *)(param_2 + 8));
          }
          *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar13 * iVar15;
LAB_1002fea1:
          *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar13;
        }
      }
      *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar5;
      uVar6 = uVar6 + (uVar18 - uVar5);
      local_14 = local_14 + local_20;
      bVar19 = uVar6 < local_24;
      uVar5 = *(int *)((int)this + 100) + uVar5 * 4;
      *(uint *)((int)this + 100) = uVar5;
    }
  }
  return uVar5;
}

