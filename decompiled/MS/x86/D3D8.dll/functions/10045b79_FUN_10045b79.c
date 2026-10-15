/*
 * FUN_10045b79 at 10045b79
 * uint __thiscall FUN_10045b79(void * this, int param_1, int param_2, char param_3, undefined4 param_4, undefined4 * param_5, uint param_6, undefined4 * param_7, char param_8, undefined4 param_9, int param_10)
 * Address ranges: 10045b79-100469e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_10045b79(void *this,int param_1,int param_2,char param_3,undefined4 param_4,undefined4 *param_5,
            uint param_6,undefined4 *param_7,char param_8,undefined4 param_9,int param_10)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  bool bVar16;
  uint local_2c;
  uint local_28;
  uint local_20;
  uint local_1c;
  undefined4 *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  puVar12 = (undefined4 *)0x3;
  local_18 = (undefined4 *)0x3;
  if ((param_1 == 1) || (param_1 == 2)) {
    local_18 = (undefined4 *)((param_1 == 2) + 1);
LAB_1004670c:
    local_10 = (uint)param_7 / (uint)local_18;
    for (uVar5 = (int)param_7 - (uint)param_7 % (uint)local_18; uVar5 != 0; uVar5 = uVar5 - uVar6) {
      iVar13 = *(int *)((int)this + 0x54) + *(int *)((int)this + 0x50);
      if (0x1000U - iVar13 < 0x10) {
        (**(code **)(*(int *)this + 0xc0))(1);
        iVar13 = 0;
      }
      uVar9 = (0x1000 - (0x1000U - iVar13) % (uint)local_18) - iVar13;
      uVar6 = uVar5;
      if (uVar9 <= uVar5) {
        uVar6 = uVar9;
      }
      if (param_3 == '\0') {
        local_10 = (**(code **)(*(int *)this + 200))
                             (param_1,param_4,*(undefined4 *)(param_2 + 0xc),uVar6,0,param_10);
      }
      else {
        local_10 = (**(code **)(*(int *)this + 0xc4))
                             (param_1,param_2,param_4,*(undefined4 *)(param_2 + 0xc),uVar6,0,param_9
                             );
      }
      uVar9 = *(uint *)((int)this + 0x6a8);
      if (param_8 == '\0') {
        if (param_6 == uVar9) {
          local_10 = uVar9 * uVar6;
          puVar12 = *(undefined4 **)((int)this + 0x4c);
          puVar10 = (undefined4 *)(local_c * uVar9 + (int)param_5);
          for (uVar7 = local_10 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
            uVar2 = puVar10[1];
            uVar3 = puVar10[2];
            uVar4 = puVar10[3];
            *puVar12 = *puVar10;
            puVar12[1] = uVar2;
            puVar12[2] = uVar3;
            puVar12[3] = uVar4;
            puVar12 = puVar12 + 4;
            puVar10 = puVar10 + 4;
          }
          uVar7 = local_10 >> 2 & 3;
          uVar9 = 0;
          if (uVar7 != 0) {
            do {
              puVar12[uVar9] = puVar10[uVar9];
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
          }
          *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + local_10;
        }
        else if (uVar6 != 0) {
          uVar7 = uVar9 >> 2 & 3;
          local_10 = local_c;
          local_28 = uVar6;
          do {
            puVar12 = *(undefined4 **)((int)this + 0x4c);
            puVar10 = (undefined4 *)(local_10 * param_6 + (int)param_5);
            for (uVar11 = uVar9 >> 4; uVar11 != 0; uVar11 = uVar11 - 1) {
              uVar2 = puVar10[1];
              uVar3 = puVar10[2];
              uVar4 = puVar10[3];
              *puVar12 = *puVar10;
              puVar12[1] = uVar2;
              puVar12[2] = uVar3;
              puVar12[3] = uVar4;
              puVar12 = puVar12 + 4;
              puVar10 = puVar10 + 4;
            }
            if (uVar7 != 0) {
              uVar11 = 0;
              do {
                puVar12[uVar11] = puVar10[uVar11];
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar7);
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar9;
            local_10 = local_10 + 1;
            local_28 = local_28 - 1;
          } while (local_28 != 0);
        }
      }
      else {
        local_10 = 0;
        if (*(int *)(param_2 + 8) != 0) {
          do {
            if (param_5[local_10 * 2] != 0) {
              puVar12 = (undefined4 *)(param_5[local_10 * 2 + 1] * local_c + param_5[local_10 * 2]);
              uVar7 = (uint)*(byte *)(param_2 + 0x9c + local_10);
              uVar11 = (uint)(*(byte *)(param_2 + 0x16 + uVar7 * 8) >> 2);
              if (uVar6 != 0) {
                puVar10 = (undefined4 *)
                          ((uint)*(byte *)(param_2 + 0x17 + uVar7 * 8) * 4 +
                          *(int *)((int)this + 0x4c));
                local_2c = uVar6;
                do {
                  uVar7 = 0;
                  if (uVar11 != 0) {
                    if (3 < uVar11) {
                      if ((puVar12 + (uVar11 - 1) < puVar10) || (puVar10 + (uVar11 - 1) < puVar12))
                      {
                        FUN_100adac0(puVar10,puVar12,uVar11 * 4);
                        goto LAB_1004687a;
                      }
                    }
                    do {
                      puVar10[uVar7] = puVar12[uVar7];
                      uVar7 = uVar7 + 1;
                    } while (uVar7 < uVar11);
                  }
LAB_1004687a:
                  puVar10 = (undefined4 *)((int)puVar10 + uVar9);
                  puVar12 = (undefined4 *)((int)puVar12 + param_5[local_10 * 2 + 1]);
                  local_2c = local_2c - 1;
                } while (local_2c != 0);
              }
            }
            local_10 = local_10 + 1;
          } while (local_10 < *(uint *)(param_2 + 8));
        }
        *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar9 * uVar6;
      }
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + uVar6;
      local_c = local_c + uVar6;
    }
  }
  else {
    if (param_1 == 3) {
      puVar12 = (undefined4 *)0x2;
      local_18 = (undefined4 *)0x2;
    }
    else {
      if (param_1 == 4) goto LAB_1004670c;
      if (param_1 != 5) {
        if (param_1 - 6U != 0) {
          return param_1 - 6U;
        }
        if (param_7 < (undefined4 *)0x3) {
          return (uint)param_7;
        }
        uVar5 = (int)param_7 - 2;
        param_10 = 1;
        do {
          if (uVar5 == 0) {
            return 0;
          }
          iVar14 = *(int *)((int)this + 0x54) + *(int *)((int)this + 0x50);
          iVar13 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
          if ((0x1000U - iVar14 < 0x10) || (0x1000U - iVar13 < 0x10)) {
            (**(code **)(*(int *)this + 0xc0))(1);
            iVar14 = 0;
            iVar13 = 0;
          }
          uVar6 = (0x1000U - iVar13) / 3;
          if (0xffeU - iVar14 < uVar6) {
            uVar6 = 0xffeU - iVar14;
          }
          uVar9 = uVar5;
          if (uVar6 <= uVar5) {
            uVar9 = uVar6;
          }
          iVar13 = uVar9 * 3;
          if (param_3 == '\0') {
            (**(code **)(*(int *)this + 200))
                      (4,param_4,*(undefined4 *)(param_2 + 0xc),uVar9 + 2,iVar13,0);
          }
          else {
            (**(code **)(*(int *)this + 0xc4))
                      (4,param_2,param_4,*(undefined4 *)(param_2 + 0xc),uVar9 + 2,iVar13,param_9);
          }
          uVar6 = *(uint *)((int)this + 0x6a8);
          if (param_8 == '\0') {
            if (param_6 == uVar6) {
              puVar12 = *(undefined4 **)((int)this + 0x4c);
              puVar10 = param_5;
              for (uVar7 = uVar6 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                uVar2 = puVar10[1];
                uVar3 = puVar10[2];
                uVar4 = puVar10[3];
                *puVar12 = *puVar10;
                puVar12[1] = uVar2;
                puVar12[2] = uVar3;
                puVar12[3] = uVar4;
                puVar12 = puVar12 + 4;
                puVar10 = puVar10 + 4;
              }
              uVar7 = 0;
              uVar11 = uVar6 >> 2 & 3;
              if (uVar11 != 0) {
                do {
                  puVar12[uVar7] = puVar10[uVar7];
                  uVar7 = uVar7 + 1;
                } while (uVar7 < uVar11);
              }
            }
            else {
              puVar12 = *(undefined4 **)((int)this + 0x4c);
              puVar10 = param_5;
              for (uVar7 = uVar6 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                uVar2 = puVar10[1];
                uVar3 = puVar10[2];
                uVar4 = puVar10[3];
                *puVar12 = *puVar10;
                puVar12[1] = uVar2;
                puVar12[2] = uVar3;
                puVar12[3] = uVar4;
                puVar12 = puVar12 + 4;
                puVar10 = puVar10 + 4;
              }
              uVar7 = 0;
              uVar11 = uVar6 >> 2 & 3;
              if (uVar11 != 0) {
                do {
                  puVar12[uVar7] = puVar10[uVar7];
                  uVar7 = uVar7 + 1;
                } while (uVar7 < uVar11);
              }
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar6;
            *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
            uVar6 = *(uint *)((int)this + 0x6a8);
            if (param_6 == uVar6) {
              puVar12 = *(undefined4 **)((int)this + 0x4c);
              puVar10 = (undefined4 *)(uVar6 * param_10 + (int)param_5);
              for (uVar7 = uVar6 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                uVar2 = puVar10[1];
                uVar3 = puVar10[2];
                uVar4 = puVar10[3];
                *puVar12 = *puVar10;
                puVar12[1] = uVar2;
                puVar12[2] = uVar3;
                puVar12[3] = uVar4;
                puVar12 = puVar12 + 4;
                puVar10 = puVar10 + 4;
              }
              uVar7 = uVar6 >> 2 & 3;
              if (uVar7 != 0) {
                uVar11 = 0;
                do {
                  puVar12[uVar11] = puVar10[uVar11];
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar7);
              }
              *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar6;
              param_7 = *(undefined4 **)((int)this + 0x4c);
            }
            else {
              puVar12 = *(undefined4 **)((int)this + 0x4c);
              puVar10 = (undefined4 *)(param_10 * param_6 + (int)param_5);
              for (uVar7 = uVar6 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                uVar2 = puVar10[1];
                uVar3 = puVar10[2];
                uVar4 = puVar10[3];
                *puVar12 = *puVar10;
                puVar12[1] = uVar2;
                puVar12[2] = uVar3;
                puVar12[3] = uVar4;
                puVar12 = puVar12 + 4;
                puVar10 = puVar10 + 4;
              }
              uVar7 = uVar6 >> 2 & 3;
              if (uVar7 != 0) {
                uVar11 = 0;
                do {
                  puVar12[uVar11] = puVar10[uVar11];
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar7);
              }
              param_7 = (undefined4 *)(*(int *)((int)this + 0x4c) + uVar6);
              *(undefined4 **)((int)this + 0x4c) = param_7;
            }
            *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
            uVar6 = *(uint *)((int)this + 0x6a8);
            iVar14 = param_10 + 1;
            if (param_6 == uVar6) {
              uVar11 = uVar6 * uVar9;
              puVar12 = (undefined4 *)(uVar6 * iVar14 + (int)param_5);
              for (uVar7 = uVar11 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                uVar2 = puVar12[1];
                uVar3 = puVar12[2];
                uVar4 = puVar12[3];
                *param_7 = *puVar12;
                param_7[1] = uVar2;
                param_7[2] = uVar3;
                param_7[3] = uVar4;
                puVar12 = puVar12 + 4;
                param_7 = param_7 + 4;
              }
              uVar7 = uVar11 >> 2 & 3;
              uVar6 = 0;
              if (uVar7 != 0) {
                do {
                  param_7[uVar6] = puVar12[uVar6];
                  uVar6 = uVar6 + 1;
                } while (uVar6 < uVar7);
              }
              *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar11;
            }
            else if (uVar9 != 0) {
              uVar7 = uVar6 >> 2 & 3;
              local_18 = (undefined4 *)uVar9;
              do {
                puVar12 = (undefined4 *)(iVar14 * param_6 + (int)param_5);
                for (uVar11 = uVar6 >> 4; uVar11 != 0; uVar11 = uVar11 - 1) {
                  uVar2 = puVar12[1];
                  uVar3 = puVar12[2];
                  uVar4 = puVar12[3];
                  *param_7 = *puVar12;
                  param_7[1] = uVar2;
                  param_7[2] = uVar3;
                  param_7[3] = uVar4;
                  puVar12 = puVar12 + 4;
                  param_7 = param_7 + 4;
                }
                uVar11 = 0;
                if (uVar7 != 0) {
                  do {
                    param_7[uVar11] = puVar12[uVar11];
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < uVar7);
                }
                *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar6;
                param_7 = *(undefined4 **)((int)this + 0x4c);
                iVar14 = iVar14 + 1;
                local_18 = (undefined4 *)((int)local_18 - 1);
              } while (local_18 != (undefined4 *)0x0);
            }
          }
          else {
            local_1c = 0;
            if (*(int *)(param_2 + 8) != 0) {
              do {
                puVar12 = (undefined4 *)param_5[local_1c * 2];
                if (puVar12 != (undefined4 *)0x0) {
                  uVar7 = (uint)*(byte *)(param_2 + 0x9c + local_1c);
                  puVar10 = (undefined4 *)
                            ((uint)*(byte *)(param_2 + 0x17 + uVar7 * 8) * 4 +
                            *(int *)((int)this + 0x4c));
                  uVar7 = (uint)(*(byte *)(param_2 + 0x16 + uVar7 * 8) >> 2);
                  uVar11 = 0;
                  if (uVar7 != 0) {
                    if (3 < uVar7) {
                      if ((puVar12 + (uVar7 - 1) < puVar10) || (puVar10 + (uVar7 - 1) < puVar12)) {
                        FUN_100adac0(puVar10,puVar12,uVar7 * 4);
                        goto LAB_10045d33;
                      }
                    }
                    do {
                      puVar10[uVar11] = puVar12[uVar11];
                      uVar11 = uVar11 + 1;
                    } while (uVar11 < uVar7);
                  }
                }
LAB_10045d33:
                local_1c = local_1c + 1;
              } while (local_1c < *(uint *)(param_2 + 8));
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar6;
            *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
            iVar14 = *(int *)((int)this + 0x6a8);
            local_10 = 0;
            if (*(int *)(param_2 + 8) != 0) {
              do {
                if (param_5[local_10 * 2] != 0) {
                  puVar10 = (undefined4 *)
                            (param_5[local_10 * 2 + 1] * param_10 + param_5[local_10 * 2]);
                  uVar6 = (uint)*(byte *)(param_2 + 0x9c + local_10);
                  puVar12 = (undefined4 *)
                            ((uint)*(byte *)(param_2 + 0x17 + uVar6 * 8) * 4 +
                            *(int *)((int)this + 0x4c));
                  uVar6 = (uint)(*(byte *)(param_2 + 0x16 + uVar6 * 8) >> 2);
                  uVar7 = 0;
                  if (uVar6 != 0) {
                    if (3 < uVar6) {
                      if ((puVar10 + (uVar6 - 1) < puVar12) || (puVar12 + (uVar6 - 1) < puVar10)) {
                        FUN_100adac0(puVar12,puVar10,uVar6 * 4);
                        goto LAB_10045e00;
                      }
                    }
                    do {
                      puVar12[uVar7] = puVar10[uVar7];
                      uVar7 = uVar7 + 1;
                    } while (uVar7 < uVar6);
                  }
                }
LAB_10045e00:
                local_10 = local_10 + 1;
              } while (local_10 < *(uint *)(param_2 + 8));
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar14;
            *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
            iVar14 = *(int *)((int)this + 0x6a8);
            local_c = 0;
            if (*(int *)(param_2 + 8) != 0) {
              do {
                if (param_5[local_c * 2] != 0) {
                  puVar12 = (undefined4 *)
                            (param_5[local_c * 2 + 1] * (param_10 + 1) + param_5[local_c * 2]);
                  uVar6 = (uint)*(byte *)(param_2 + 0x9c + local_c);
                  uVar7 = (uint)(*(byte *)(param_2 + 0x16 + uVar6 * 8) >> 2);
                  if (uVar9 != 0) {
                    puVar10 = (undefined4 *)
                              ((uint)*(byte *)(param_2 + 0x17 + uVar6 * 8) * 4 +
                              *(int *)((int)this + 0x4c));
                    local_20 = uVar9;
                    do {
                      uVar6 = 0;
                      if (uVar7 != 0) {
                        if ((uVar7 < 4) ||
                           ((puVar10 <= puVar12 + (uVar7 - 1) && (puVar12 <= puVar10 + (uVar7 - 1)))
                           )) {
                          do {
                            puVar10[uVar6] = puVar12[uVar6];
                            uVar6 = uVar6 + 1;
                          } while (uVar6 < uVar7);
                        }
                        else {
                          FUN_100adac0(puVar10,puVar12,uVar7 << 2);
                        }
                      }
                      puVar10 = (undefined4 *)((int)puVar10 + iVar14);
                      puVar12 = (undefined4 *)((int)puVar12 + param_5[local_c * 2 + 1]);
                      local_20 = local_20 - 1;
                    } while (local_20 != 0);
                  }
                }
                local_c = local_c + 1;
              } while (local_c < *(uint *)(param_2 + 8));
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar9 * iVar14;
          }
          *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + uVar9;
          uVar6 = 0;
          iVar14 = *(int *)((int)this + 0x54) - uVar9;
          if (uVar9 != 0) {
            do {
              **(int **)((int)this + 100) = iVar14 + -1 + uVar6;
              *(uint *)(*(int *)((int)this + 100) + 4) = uVar6 + iVar14;
              *(int *)(*(int *)((int)this + 100) + 8) = iVar14 + -2;
              *(int *)((int)this + 100) = *(int *)((int)this + 100) + 0xc;
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar9);
          }
          param_10 = param_10 + uVar9;
          *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + iVar13;
          uVar5 = uVar5 - uVar9;
        } while( true );
      }
    }
    local_10 = 0;
    uVar5 = (int)puVar12 - 1;
    bVar16 = param_7 < puVar12;
    puVar12 = param_7;
    while (!bVar16) {
      iVar13 = *(int *)((int)this + 0x54) + *(int *)((int)this + 0x50);
      if (0x1000U - iVar13 < 0x10) {
        (**(code **)(*(int *)this + 0xc0))(1);
        iVar13 = 0;
      }
      puVar8 = (undefined4 *)(0x1000U - iVar13 & 0xfffffffe);
      puVar10 = puVar12;
      if (puVar8 <= puVar12) {
        puVar10 = puVar8;
      }
      if (param_3 == '\0') {
        (**(code **)(*(int *)this + 200))
                  (param_1,param_4,*(undefined4 *)(param_2 + 0xc),puVar10,0,0);
      }
      else {
        (**(code **)(*(int *)this + 0xc4))
                  (param_1,param_2,param_4,*(undefined4 *)(param_2 + 0xc),puVar10,0,param_9);
      }
      (**(code **)(*(int *)this + 0xc0))(0);
      uVar6 = *(uint *)((int)this + 0x6a8);
      if (param_8 == '\0') {
        piVar1 = (int *)((int)this + 0x4c);
        if (param_6 == uVar6) {
          uVar7 = uVar6 * uVar5;
          puVar8 = (undefined4 *)*piVar1;
          puVar15 = (undefined4 *)(local_c * uVar6 + (int)param_5);
          for (uVar9 = uVar7 >> 4; uVar9 != 0; uVar9 = uVar9 - 1) {
            uVar2 = puVar15[1];
            uVar3 = puVar15[2];
            uVar4 = puVar15[3];
            *puVar8 = *puVar15;
            puVar8[1] = uVar2;
            puVar8[2] = uVar3;
            puVar8[3] = uVar4;
            puVar8 = puVar8 + 4;
            puVar15 = puVar15 + 4;
          }
          uVar6 = 0;
          uVar9 = uVar7 >> 2 & 3;
          if (uVar9 != 0) {
            do {
              puVar8[uVar6] = puVar15[uVar6];
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar9);
          }
          *piVar1 = *piVar1 + uVar7;
          puVar8 = (undefined4 *)*piVar1;
        }
        else {
          uVar7 = uVar6 >> 2 & 3;
          local_14 = 0;
          uVar9 = local_c;
          do {
            puVar8 = (undefined4 *)(uVar9 * param_6 + (int)param_5);
            puVar15 = (undefined4 *)*piVar1;
            for (uVar11 = uVar6 >> 4; uVar11 != 0; uVar11 = uVar11 - 1) {
              uVar2 = puVar8[1];
              uVar3 = puVar8[2];
              uVar4 = puVar8[3];
              *puVar15 = *puVar8;
              puVar15[1] = uVar2;
              puVar15[2] = uVar3;
              puVar15[3] = uVar4;
              puVar8 = puVar8 + 4;
              puVar15 = puVar15 + 4;
            }
            uVar11 = 0;
            if (uVar7 != 0) {
              do {
                puVar15[uVar11] = puVar8[uVar11];
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar7);
            }
            puVar8 = (undefined4 *)(*piVar1 + uVar6);
            *piVar1 = (int)puVar8;
            uVar9 = uVar9 + 1;
            local_14 = local_14 + 1;
          } while (local_14 < uVar5);
        }
        *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + uVar5;
        uVar6 = *(uint *)((int)this + 0x6a8);
        iVar14 = (int)puVar10 - uVar5;
        iVar13 = uVar5 + local_c;
        if (param_6 == uVar6) {
          uVar7 = iVar14 * uVar6;
          puVar15 = (undefined4 *)(uVar6 * iVar13 + (int)param_5);
          for (uVar9 = uVar7 >> 4; uVar9 != 0; uVar9 = uVar9 - 1) {
            uVar2 = puVar15[1];
            uVar3 = puVar15[2];
            uVar4 = puVar15[3];
            *puVar8 = *puVar15;
            puVar8[1] = uVar2;
            puVar8[2] = uVar3;
            puVar8[3] = uVar4;
            puVar15 = puVar15 + 4;
            puVar8 = puVar8 + 4;
          }
          uVar9 = uVar7 >> 2 & 3;
          uVar6 = 0;
          if (uVar9 != 0) {
            do {
              puVar8[uVar6] = puVar15[uVar6];
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar9);
          }
          *piVar1 = *piVar1 + uVar7;
        }
        else if (iVar14 != 0) {
          uVar9 = uVar6 >> 2 & 3;
          local_28 = iVar14;
          do {
            puVar15 = (undefined4 *)(iVar13 * param_6 + (int)param_5);
            for (uVar7 = uVar6 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
              uVar2 = puVar15[1];
              uVar3 = puVar15[2];
              uVar4 = puVar15[3];
              *puVar8 = *puVar15;
              puVar8[1] = uVar2;
              puVar8[2] = uVar3;
              puVar8[3] = uVar4;
              puVar15 = puVar15 + 4;
              puVar8 = puVar8 + 4;
            }
            uVar7 = 0;
            if (uVar9 != 0) {
              do {
                puVar8[uVar7] = puVar15[uVar7];
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar9);
            }
            *piVar1 = *piVar1 + uVar6;
            puVar8 = (undefined4 *)*piVar1;
            iVar13 = iVar13 + 1;
            local_28 = local_28 + -1;
          } while (local_28 != 0);
        }
      }
      else {
        param_7 = (undefined4 *)0x0;
        if (*(int *)(param_2 + 8) != 0) {
          do {
            if (param_5[(int)param_7 * 2] != 0) {
              uVar9 = (uint)*(byte *)(param_2 + 0x9c + (int)param_7);
              local_1c = 0;
              puVar15 = (undefined4 *)
                        (param_5[(int)param_7 * 2 + 1] * local_c + param_5[(int)param_7 * 2]);
              uVar7 = (uint)(*(byte *)(param_2 + 0x16 + uVar9 * 8) >> 2);
              puVar8 = (undefined4 *)
                       (*(int *)((int)this + 0x4c) + (uint)*(byte *)(param_2 + 0x17 + uVar9 * 8) * 4
                       );
              do {
                if (uVar7 != 0) {
                  if (3 < uVar7) {
                    if ((puVar15 + (uVar7 - 1) < puVar8) || (puVar8 + (uVar7 - 1) < puVar15)) {
                      FUN_100adac0(puVar8,puVar15,uVar7 * 4);
                      goto LAB_1004636e;
                    }
                  }
                  uVar9 = 0;
                  do {
                    puVar8[uVar9] = puVar15[uVar9];
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < uVar7);
                }
LAB_1004636e:
                puVar8 = (undefined4 *)((int)puVar8 + uVar6);
                puVar15 = (undefined4 *)((int)puVar15 + param_5[(int)param_7 * 2 + 1]);
                local_1c = local_1c + 1;
              } while (local_1c < uVar5);
            }
            param_7 = (undefined4 *)((int)param_7 + 1);
          } while (param_7 < *(undefined4 **)(param_2 + 8));
        }
        *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + uVar5;
        param_7 = (undefined4 *)0x0;
        *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar6 * uVar5;
        iVar13 = *(int *)((int)this + 0x6a8);
        iVar14 = (int)puVar10 - uVar5;
        if (*(int *)(param_2 + 8) != 0) {
          do {
            if (param_5[(int)param_7 * 2] != 0) {
              puVar8 = (undefined4 *)
                       (param_5[(int)param_7 * 2 + 1] * (uVar5 + local_c) +
                       param_5[(int)param_7 * 2]);
              uVar6 = (uint)*(byte *)(param_2 + 0x9c + (int)param_7);
              uVar9 = (uint)(*(byte *)(param_2 + 0x16 + uVar6 * 8) >> 2);
              if (iVar14 != 0) {
                puVar15 = (undefined4 *)
                          ((uint)*(byte *)(param_2 + 0x17 + uVar6 * 8) * 4 +
                          *(int *)((int)this + 0x4c));
                local_28 = iVar14;
                do {
                  uVar6 = 0;
                  if (uVar9 != 0) {
                    if ((uVar9 < 4) ||
                       ((puVar15 <= puVar8 + (uVar9 - 1) && (puVar8 <= puVar15 + (uVar9 - 1))))) {
                      do {
                        puVar15[uVar6] = puVar8[uVar6];
                        uVar6 = uVar6 + 1;
                      } while (uVar6 < uVar9);
                    }
                    else {
                      FUN_100adac0(puVar15,puVar8,uVar9 << 2);
                    }
                  }
                  puVar15 = (undefined4 *)((int)puVar15 + iVar13);
                  puVar8 = (undefined4 *)((int)puVar8 + param_5[(int)param_7 * 2 + 1]);
                  local_28 = local_28 + -1;
                } while (local_28 != 0);
              }
            }
            param_7 = (undefined4 *)((int)param_7 + 1);
          } while (param_7 < *(undefined4 **)(param_2 + 8));
        }
        *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar14 * iVar13;
      }
      local_10 = uVar5 - (int)puVar10;
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar14;
      puVar12 = (undefined4 *)((int)puVar12 + local_10);
      local_c = local_c + iVar14;
      bVar16 = puVar12 < local_18;
    }
  }
  return local_10;
}

