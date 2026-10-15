/*
 * FUN_1002d4b0 at 1002d4b0
 * undefined4 * __thiscall FUN_1002d4b0(void * this, int param_1, undefined4 * param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5, undefined4 * param_6, undefined4 * param_7, char param_8, undefined4 param_9)
 * Address ranges: 1002d4b0-1002e298
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1002d4b0(void *this,int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,char param_8,
            undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  bool bVar16;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined4 *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_c = 0;
  puVar9 = (undefined4 *)0x3;
  local_18 = (undefined4 *)0x3;
  if ((param_1 == 1) || (param_1 == 2)) {
    local_18 = (undefined4 *)((param_1 == 2) + 1);
LAB_1002e003:
    puVar14 = (undefined4 *)((uint)param_7 / (uint)local_18);
    for (uVar4 = (int)param_7 - (uint)param_7 % (uint)local_18; uVar4 != 0; uVar4 = uVar4 - uVar5) {
      iVar11 = *(int *)((int)this + 0x54) + *(int *)((int)this + 0x50);
      if (0x1000U - iVar11 < 0x10) {
        (**(code **)(*(int *)this + 0x98))(1);
        iVar11 = 0;
      }
      uVar12 = (0x1000 - (0x1000U - iVar11) % (uint)local_18) - iVar11;
      uVar5 = uVar4;
      if (uVar12 <= uVar4) {
        uVar5 = uVar12;
      }
      puVar14 = (undefined4 *)
                (**(code **)(*(int *)this + 0x9c))(param_1,param_2,0,param_2[3],uVar5,0,param_9);
      puVar9 = *(undefined4 **)((int)this + 0x4b0);
      if (param_8 == '\0') {
        if (param_6 == puVar9) {
          puVar14 = (undefined4 *)((int)puVar9 * uVar5);
          puVar7 = *(undefined4 **)((int)this + 0x4c);
          puVar9 = (undefined4 *)(local_c * (int)puVar9 + (int)param_5);
          for (uVar12 = (uint)puVar14 >> 4; uVar12 != 0; uVar12 = uVar12 - 1) {
            uVar1 = puVar9[1];
            uVar2 = puVar9[2];
            uVar3 = puVar9[3];
            *puVar7 = *puVar9;
            puVar7[1] = uVar1;
            puVar7[2] = uVar2;
            puVar7[3] = uVar3;
            puVar7 = puVar7 + 4;
            puVar9 = puVar9 + 4;
          }
          uVar8 = (uint)puVar14 >> 2 & 3;
          uVar12 = 0;
          if (uVar8 != 0) {
            do {
              puVar7[uVar12] = puVar9[uVar12];
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar8);
          }
          *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + (int)puVar14;
        }
        else if (uVar5 != 0) {
          uVar12 = (uint)puVar9 >> 2 & 3;
          iVar11 = local_c;
          local_2c = uVar5;
          do {
            puVar14 = *(undefined4 **)((int)this + 0x4c);
            puVar7 = (undefined4 *)(iVar11 * (int)param_6 + (int)param_5);
            for (uVar8 = (uint)puVar9 >> 4; uVar8 != 0; uVar8 = uVar8 - 1) {
              uVar1 = puVar7[1];
              uVar2 = puVar7[2];
              uVar3 = puVar7[3];
              *puVar14 = *puVar7;
              puVar14[1] = uVar1;
              puVar14[2] = uVar2;
              puVar14[3] = uVar3;
              puVar14 = puVar14 + 4;
              puVar7 = puVar7 + 4;
            }
            if (uVar12 != 0) {
              uVar8 = 0;
              do {
                puVar14[uVar8] = puVar7[uVar8];
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar12);
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + (int)puVar9;
            iVar11 = iVar11 + 1;
            local_2c = local_2c - 1;
            puVar14 = puVar9;
          } while (local_2c != 0);
        }
      }
      else {
        local_10 = 0;
        puVar14 = param_2;
        if (param_2[2] != 0) {
          do {
            if (param_5[local_10 * 2] != 0) {
              puVar14 = (undefined4 *)(param_5[local_10 * 2 + 1] * local_c + param_5[local_10 * 2]);
              uVar12 = (uint)*(byte *)((int)param_2 + local_10 + 0x9c);
              uVar8 = (uint)(*(byte *)((int)param_2 + uVar12 * 8 + 0x16) >> 2);
              if (uVar5 != 0) {
                puVar7 = (undefined4 *)
                         ((uint)*(byte *)((int)param_2 + uVar12 * 8 + 0x17) * 4 +
                         *(int *)((int)this + 0x4c));
                local_30 = uVar5;
                do {
                  uVar12 = 0;
                  if (uVar8 != 0) {
                    if (3 < uVar8) {
                      if ((puVar14 + (uVar8 - 1) < puVar7) || (puVar7 + (uVar8 - 1) < puVar14)) {
                        FUN_1005ca00(puVar7,puVar14,uVar8 * 4);
                        goto LAB_1002e148;
                      }
                    }
                    do {
                      puVar7[uVar12] = puVar14[uVar12];
                      uVar12 = uVar12 + 1;
                    } while (uVar12 < uVar8);
                  }
LAB_1002e148:
                  puVar7 = (undefined4 *)((int)puVar7 + (int)puVar9);
                  puVar14 = (undefined4 *)((int)puVar14 + param_5[local_10 * 2 + 1]);
                  local_30 = local_30 - 1;
                } while (local_30 != 0);
              }
            }
            local_10 = local_10 + 1;
            puVar14 = param_5;
          } while (local_10 < (uint)param_2[2]);
        }
        *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + (int)puVar9 * uVar5;
      }
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + uVar5;
      local_c = local_c + uVar5;
    }
  }
  else {
    if (param_1 == 3) {
      puVar9 = (undefined4 *)0x2;
      local_18 = (undefined4 *)0x2;
    }
    else {
      if (param_1 == 4) goto LAB_1002e003;
      if (param_1 != 5) {
        if ((undefined4 *)(param_1 + -6) != (undefined4 *)0x0) {
          return (undefined4 *)(param_1 + -6);
        }
        if (param_7 < (undefined4 *)0x3) {
          return param_7;
        }
        uVar4 = (int)param_7 - 2;
        local_c = 1;
        do {
          if (uVar4 == 0) {
            return (undefined4 *)0x0;
          }
          iVar13 = *(int *)((int)this + 0x54) + *(int *)((int)this + 0x50);
          iVar11 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
          if ((0x1000U - iVar13 < 0x10) || (0x1000U - iVar11 < 0x10)) {
            (**(code **)(*(int *)this + 0x98))(1);
            iVar13 = 0;
            iVar11 = 0;
          }
          uVar5 = (0x1000U - iVar11) / 3;
          if (0xffeU - iVar13 < uVar5) {
            uVar5 = 0xffeU - iVar13;
          }
          uVar12 = uVar4;
          if (uVar5 <= uVar4) {
            uVar12 = uVar5;
          }
          (**(code **)(*(int *)this + 0x9c))(4,param_2,0,param_2[3],uVar12 + 2,uVar12 * 3,param_9);
          puVar9 = *(undefined4 **)((int)this + 0x4b0);
          if (param_8 == '\0') {
            if (param_6 == puVar9) {
              puVar14 = *(undefined4 **)((int)this + 0x4c);
              puVar7 = param_5;
              for (uVar5 = (uint)puVar9 >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
                uVar1 = puVar7[1];
                uVar2 = puVar7[2];
                uVar3 = puVar7[3];
                *puVar14 = *puVar7;
                puVar14[1] = uVar1;
                puVar14[2] = uVar2;
                puVar14[3] = uVar3;
                puVar14 = puVar14 + 4;
                puVar7 = puVar7 + 4;
              }
              uVar5 = 0;
              uVar8 = (uint)puVar9 >> 2 & 3;
              if (uVar8 != 0) {
                do {
                  puVar14[uVar5] = puVar7[uVar5];
                  uVar5 = uVar5 + 1;
                } while (uVar5 < uVar8);
              }
            }
            else {
              puVar14 = *(undefined4 **)((int)this + 0x4c);
              puVar7 = param_5;
              for (uVar5 = (uint)puVar9 >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
                uVar1 = puVar7[1];
                uVar2 = puVar7[2];
                uVar3 = puVar7[3];
                *puVar14 = *puVar7;
                puVar14[1] = uVar1;
                puVar14[2] = uVar2;
                puVar14[3] = uVar3;
                puVar14 = puVar14 + 4;
                puVar7 = puVar7 + 4;
              }
              uVar5 = 0;
              uVar8 = (uint)puVar9 >> 2 & 3;
              if (uVar8 != 0) {
                do {
                  puVar14[uVar5] = puVar7[uVar5];
                  uVar5 = uVar5 + 1;
                } while (uVar5 < uVar8);
              }
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + (int)puVar9;
            *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
            puVar9 = *(undefined4 **)((int)this + 0x4b0);
            if (param_6 == puVar9) {
              puVar14 = *(undefined4 **)((int)this + 0x4c);
              puVar7 = (undefined4 *)((int)puVar9 * local_c + (int)param_5);
              for (uVar5 = (uint)puVar9 >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
                uVar1 = puVar7[1];
                uVar2 = puVar7[2];
                uVar3 = puVar7[3];
                *puVar14 = *puVar7;
                puVar14[1] = uVar1;
                puVar14[2] = uVar2;
                puVar14[3] = uVar3;
                puVar14 = puVar14 + 4;
                puVar7 = puVar7 + 4;
              }
              uVar5 = (uint)puVar9 >> 2 & 3;
              if (uVar5 != 0) {
                uVar8 = 0;
                do {
                  puVar14[uVar8] = puVar7[uVar8];
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uVar5);
              }
              *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + (int)puVar9;
              param_7 = *(undefined4 **)((int)this + 0x4c);
            }
            else {
              puVar14 = *(undefined4 **)((int)this + 0x4c);
              puVar7 = (undefined4 *)(local_c * (int)param_6 + (int)param_5);
              for (uVar5 = (uint)puVar9 >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
                uVar1 = puVar7[1];
                uVar2 = puVar7[2];
                uVar3 = puVar7[3];
                *puVar14 = *puVar7;
                puVar14[1] = uVar1;
                puVar14[2] = uVar2;
                puVar14[3] = uVar3;
                puVar14 = puVar14 + 4;
                puVar7 = puVar7 + 4;
              }
              uVar5 = (uint)puVar9 >> 2 & 3;
              if (uVar5 != 0) {
                uVar8 = 0;
                do {
                  puVar14[uVar8] = puVar7[uVar8];
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uVar5);
              }
              param_7 = (undefined4 *)(*(int *)((int)this + 0x4c) + (int)puVar9);
              *(undefined4 **)((int)this + 0x4c) = param_7;
            }
            *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
            puVar9 = *(undefined4 **)((int)this + 0x4b0);
            iVar11 = local_c + 1;
            if (param_6 == puVar9) {
              uVar8 = (int)puVar9 * uVar12;
              puVar9 = (undefined4 *)((int)puVar9 * iVar11 + (int)param_5);
              for (uVar5 = uVar8 >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
                uVar1 = puVar9[1];
                uVar2 = puVar9[2];
                uVar3 = puVar9[3];
                *param_7 = *puVar9;
                param_7[1] = uVar1;
                param_7[2] = uVar2;
                param_7[3] = uVar3;
                puVar9 = puVar9 + 4;
                param_7 = param_7 + 4;
              }
              uVar6 = uVar8 >> 2 & 3;
              uVar5 = 0;
              if (uVar6 != 0) {
                do {
                  param_7[uVar5] = puVar9[uVar5];
                  uVar5 = uVar5 + 1;
                } while (uVar5 < uVar6);
              }
              *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar8;
            }
            else if (uVar12 != 0) {
              uVar5 = (uint)puVar9 >> 2 & 3;
              local_24 = uVar12;
              do {
                puVar14 = (undefined4 *)(iVar11 * (int)param_6 + (int)param_5);
                for (uVar8 = (uint)puVar9 >> 4; uVar8 != 0; uVar8 = uVar8 - 1) {
                  uVar1 = puVar14[1];
                  uVar2 = puVar14[2];
                  uVar3 = puVar14[3];
                  *param_7 = *puVar14;
                  param_7[1] = uVar1;
                  param_7[2] = uVar2;
                  param_7[3] = uVar3;
                  puVar14 = puVar14 + 4;
                  param_7 = param_7 + 4;
                }
                uVar8 = 0;
                if (uVar5 != 0) {
                  do {
                    param_7[uVar8] = puVar14[uVar8];
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < uVar5);
                }
                *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + (int)puVar9;
                param_7 = *(undefined4 **)((int)this + 0x4c);
                iVar11 = iVar11 + 1;
                local_24 = local_24 - 1;
              } while (local_24 != 0);
            }
          }
          else {
            local_1c = 0;
            if (param_2[2] != 0) {
              do {
                puVar14 = (undefined4 *)param_5[local_1c * 2];
                if (puVar14 != (undefined4 *)0x0) {
                  uVar5 = (uint)*(byte *)((int)param_2 + local_1c + 0x9c);
                  puVar7 = (undefined4 *)
                           ((uint)*(byte *)((int)param_2 + uVar5 * 8 + 0x17) * 4 +
                           *(int *)((int)this + 0x4c));
                  uVar5 = (uint)(*(byte *)((int)param_2 + uVar5 * 8 + 0x16) >> 2);
                  uVar8 = 0;
                  if (uVar5 != 0) {
                    if (3 < uVar5) {
                      if ((puVar14 + (uVar5 - 1) < puVar7) || (puVar7 + (uVar5 - 1) < puVar14)) {
                        FUN_1005ca00(puVar7,puVar14,uVar5 * 4);
                        goto LAB_1002d64a;
                      }
                    }
                    do {
                      puVar7[uVar8] = puVar14[uVar8];
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < uVar5);
                  }
                }
LAB_1002d64a:
                local_1c = local_1c + 1;
              } while (local_1c < (uint)param_2[2]);
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + (int)puVar9;
            *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
            iVar11 = *(int *)((int)this + 0x4b0);
            local_14 = 0;
            if (param_2[2] != 0) {
              do {
                if (param_5[local_14 * 2] != 0) {
                  puVar14 = (undefined4 *)
                            (param_5[local_14 * 2 + 1] * local_c + param_5[local_14 * 2]);
                  uVar5 = (uint)*(byte *)((int)param_2 + local_14 + 0x9c);
                  puVar9 = (undefined4 *)
                           ((uint)*(byte *)((int)param_2 + uVar5 * 8 + 0x17) * 4 +
                           *(int *)((int)this + 0x4c));
                  uVar5 = (uint)(*(byte *)((int)param_2 + uVar5 * 8 + 0x16) >> 2);
                  uVar8 = 0;
                  if (uVar5 != 0) {
                    if (3 < uVar5) {
                      if ((puVar14 + (uVar5 - 1) < puVar9) || (puVar9 + (uVar5 - 1) < puVar14)) {
                        FUN_1005ca00(puVar9,puVar14,uVar5 * 4);
                        goto LAB_1002d717;
                      }
                    }
                    do {
                      puVar9[uVar8] = puVar14[uVar8];
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < uVar5);
                  }
                }
LAB_1002d717:
                local_14 = local_14 + 1;
              } while (local_14 < (uint)param_2[2]);
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar11;
            *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
            iVar11 = *(int *)((int)this + 0x4b0);
            local_10 = 0;
            if (param_2[2] != 0) {
              do {
                if (param_5[local_10 * 2] != 0) {
                  puVar9 = (undefined4 *)
                           (param_5[local_10 * 2 + 1] * (local_c + 1) + param_5[local_10 * 2]);
                  uVar5 = (uint)*(byte *)((int)param_2 + local_10 + 0x9c);
                  uVar8 = (uint)(*(byte *)((int)param_2 + uVar5 * 8 + 0x16) >> 2);
                  if (uVar12 != 0) {
                    puVar14 = (undefined4 *)
                              ((uint)*(byte *)((int)param_2 + uVar5 * 8 + 0x17) * 4 +
                              *(int *)((int)this + 0x4c));
                    local_28 = uVar12;
                    do {
                      uVar5 = 0;
                      if (uVar8 != 0) {
                        if ((uVar8 < 4) ||
                           ((puVar14 <= puVar9 + (uVar8 - 1) && (puVar9 <= puVar14 + (uVar8 - 1)))))
                        {
                          do {
                            puVar14[uVar5] = puVar9[uVar5];
                            uVar5 = uVar5 + 1;
                          } while (uVar5 < uVar8);
                        }
                        else {
                          FUN_1005ca00(puVar14,puVar9,uVar8 << 2);
                        }
                      }
                      puVar14 = (undefined4 *)((int)puVar14 + iVar11);
                      puVar9 = (undefined4 *)((int)puVar9 + param_5[local_10 * 2 + 1]);
                      local_28 = local_28 - 1;
                    } while (local_28 != 0);
                  }
                }
                local_10 = local_10 + 1;
              } while (local_10 < (uint)param_2[2]);
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar12 * iVar11;
          }
          *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + uVar12;
          uVar5 = 0;
          iVar11 = *(int *)((int)this + 0x54) - uVar12;
          if (uVar12 != 0) {
            do {
              **(int **)((int)this + 100) = iVar11 + -1 + uVar5;
              *(uint *)(*(int *)((int)this + 100) + 4) = uVar5 + iVar11;
              *(int *)(*(int *)((int)this + 100) + 8) = iVar11 + -2;
              *(int *)((int)this + 100) = *(int *)((int)this + 100) + 0xc;
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar12);
          }
          local_c = local_c + uVar12;
          *(uint *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar12 * 3;
          uVar4 = uVar4 - uVar12;
        } while( true );
      }
    }
    puVar14 = (undefined4 *)0x0;
    uVar4 = (int)puVar9 - 1;
    bVar16 = param_7 < puVar9;
    puVar9 = param_7;
    while (!bVar16) {
      iVar11 = *(int *)((int)this + 0x54) + *(int *)((int)this + 0x50);
      if (0x1000U - iVar11 < 0x10) {
        (**(code **)(*(int *)this + 0x98))(1);
        iVar11 = 0;
      }
      puVar7 = (undefined4 *)(0x1000U - iVar11 & 0xfffffffe);
      puVar14 = puVar9;
      if (puVar7 <= puVar9) {
        puVar14 = puVar7;
      }
      (**(code **)(*(int *)this + 0x9c))(param_1,param_2,0,param_2[3],puVar14,0,param_9);
      (**(code **)(*(int *)this + 0x98))(0);
      puVar7 = *(undefined4 **)((int)this + 0x4b0);
      if (param_8 == '\0') {
        if (param_6 == puVar7) {
          uVar12 = (int)puVar7 * uVar4;
          puVar10 = *(undefined4 **)((int)this + 0x4c);
          puVar7 = (undefined4 *)(local_c * (int)puVar7 + (int)param_5);
          for (uVar5 = uVar12 >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
            uVar1 = puVar7[1];
            uVar2 = puVar7[2];
            uVar3 = puVar7[3];
            *puVar10 = *puVar7;
            puVar10[1] = uVar1;
            puVar10[2] = uVar2;
            puVar10[3] = uVar3;
            puVar10 = puVar10 + 4;
            puVar7 = puVar7 + 4;
          }
          uVar5 = 0;
          uVar8 = uVar12 >> 2 & 3;
          if (uVar8 != 0) {
            do {
              puVar10[uVar5] = puVar7[uVar5];
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar8);
          }
          *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar12;
          puVar10 = *(undefined4 **)((int)this + 0x4c);
        }
        else {
          local_20 = 0;
          uVar5 = (uint)puVar7 >> 2 & 3;
          iVar11 = local_c;
          do {
            puVar10 = *(undefined4 **)((int)this + 0x4c);
            puVar15 = (undefined4 *)(iVar11 * (int)param_6 + (int)param_5);
            for (uVar12 = (uint)puVar7 >> 4; uVar12 != 0; uVar12 = uVar12 - 1) {
              uVar1 = puVar15[1];
              uVar2 = puVar15[2];
              uVar3 = puVar15[3];
              *puVar10 = *puVar15;
              puVar10[1] = uVar1;
              puVar10[2] = uVar2;
              puVar10[3] = uVar3;
              puVar10 = puVar10 + 4;
              puVar15 = puVar15 + 4;
            }
            uVar12 = 0;
            if (uVar5 != 0) {
              do {
                puVar10[uVar12] = puVar15[uVar12];
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar5);
            }
            puVar10 = (undefined4 *)(*(int *)((int)this + 0x4c) + (int)puVar7);
            iVar11 = iVar11 + 1;
            local_20 = local_20 + 1;
            *(undefined4 **)((int)this + 0x4c) = puVar10;
          } while (local_20 < uVar4);
        }
        *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + uVar4;
        puVar7 = *(undefined4 **)((int)this + 0x4b0);
        iVar11 = (int)puVar14 - uVar4;
        iVar13 = uVar4 + local_c;
        if (param_6 == puVar7) {
          uVar12 = iVar11 * (int)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 * iVar13 + (int)param_5);
          for (uVar5 = uVar12 >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
            uVar1 = puVar7[1];
            uVar2 = puVar7[2];
            uVar3 = puVar7[3];
            *puVar10 = *puVar7;
            puVar10[1] = uVar1;
            puVar10[2] = uVar2;
            puVar10[3] = uVar3;
            puVar7 = puVar7 + 4;
            puVar10 = puVar10 + 4;
          }
          uVar8 = uVar12 >> 2 & 3;
          uVar5 = 0;
          if (uVar8 != 0) {
            do {
              puVar10[uVar5] = puVar7[uVar5];
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar8);
          }
          *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar12;
        }
        else if (iVar11 != 0) {
          uVar5 = (uint)puVar7 >> 2 & 3;
          local_34 = iVar11;
          do {
            puVar15 = (undefined4 *)(iVar13 * (int)param_6 + (int)param_5);
            for (uVar12 = (uint)puVar7 >> 4; uVar12 != 0; uVar12 = uVar12 - 1) {
              uVar1 = puVar15[1];
              uVar2 = puVar15[2];
              uVar3 = puVar15[3];
              *puVar10 = *puVar15;
              puVar10[1] = uVar1;
              puVar10[2] = uVar2;
              puVar10[3] = uVar3;
              puVar15 = puVar15 + 4;
              puVar10 = puVar10 + 4;
            }
            if (uVar5 != 0) {
              uVar12 = 0;
              do {
                puVar10[uVar12] = puVar15[uVar12];
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar5);
            }
            puVar10 = (undefined4 *)(*(int *)((int)this + 0x4c) + (int)puVar7);
            iVar13 = iVar13 + 1;
            *(undefined4 **)((int)this + 0x4c) = puVar10;
            local_34 = local_34 + -1;
          } while (local_34 != 0);
        }
      }
      else {
        param_7 = (undefined4 *)0x0;
        if (param_2[2] != 0) {
          do {
            if (param_5[(int)param_7 * 2] != 0) {
              local_24 = 0;
              puVar15 = (undefined4 *)
                        (param_5[(int)param_7 * 2 + 1] * local_c + param_5[(int)param_7 * 2]);
              uVar5 = (uint)(*(byte *)((int)param_2 +
                                      (uint)*(byte *)((int)(param_2 + 0x27) + (int)param_7) * 8 +
                                      0x16) >> 2);
              puVar10 = (undefined4 *)
                        (*(int *)((int)this + 0x4c) +
                        (uint)*(byte *)((int)param_2 +
                                       (uint)*(byte *)((int)(param_2 + 0x27) + (int)param_7) * 8 +
                                       0x17) * 4);
              do {
                uVar12 = 0;
                if (uVar5 != 0) {
                  if (3 < uVar5) {
                    if ((puVar15 + (uVar5 - 1) < puVar10) || (puVar10 + (uVar5 - 1) < puVar15)) {
                      FUN_1005ca00(puVar10,puVar15,uVar5 * 4);
                      goto LAB_1002dc5f;
                    }
                  }
                  do {
                    puVar10[uVar12] = puVar15[uVar12];
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < uVar5);
                }
LAB_1002dc5f:
                puVar10 = (undefined4 *)((int)puVar10 + (int)puVar7);
                puVar15 = (undefined4 *)((int)puVar15 + param_5[(int)param_7 * 2 + 1]);
                local_24 = local_24 + 1;
              } while (local_24 < uVar4);
            }
            param_7 = (undefined4 *)((int)param_7 + 1);
          } while (param_7 < (undefined4 *)param_2[2]);
        }
        *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + uVar4;
        iVar11 = (int)puVar14 - uVar4;
        param_7 = (undefined4 *)0x0;
        *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + (int)puVar7 * uVar4;
        iVar13 = *(int *)((int)this + 0x4b0);
        if (param_2[2] != 0) {
          do {
            if (param_5[(int)param_7 * 2] != 0) {
              puVar7 = (undefined4 *)
                       (param_5[(int)param_7 * 2 + 1] * (uVar4 + local_c) +
                       param_5[(int)param_7 * 2]);
              uVar5 = (uint)(*(byte *)((int)param_2 +
                                      (uint)*(byte *)((int)(param_2 + 0x27) + (int)param_7) * 8 +
                                      0x16) >> 2);
              if (iVar11 != 0) {
                puVar10 = (undefined4 *)
                          ((uint)*(byte *)((int)param_2 +
                                          (uint)*(byte *)((int)(param_2 + 0x27) + (int)param_7) * 8
                                          + 0x17) * 4 + *(int *)((int)this + 0x4c));
                local_1c = iVar11;
                do {
                  uVar12 = 0;
                  if (uVar5 != 0) {
                    if ((uVar5 < 4) ||
                       ((puVar10 <= puVar7 + (uVar5 - 1) && (puVar7 <= puVar10 + (uVar5 - 1))))) {
                      do {
                        puVar10[uVar12] = puVar7[uVar12];
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < uVar5);
                    }
                    else {
                      FUN_1005ca00(puVar10,puVar7,uVar5 << 2);
                    }
                  }
                  puVar10 = (undefined4 *)((int)puVar10 + iVar13);
                  puVar7 = (undefined4 *)((int)puVar7 + param_5[(int)param_7 * 2 + 1]);
                  local_1c = local_1c + -1;
                } while (local_1c != 0);
              }
            }
            param_7 = (undefined4 *)((int)param_7 + 1);
          } while (param_7 < (undefined4 *)param_2[2]);
        }
        *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar11 * iVar13;
      }
      puVar14 = (undefined4 *)(uVar4 - (int)puVar14);
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar11;
      puVar9 = (undefined4 *)((int)puVar9 + (int)puVar14);
      local_c = local_c + iVar11;
      bVar16 = puVar9 < local_18;
    }
  }
  return puVar14;
}

