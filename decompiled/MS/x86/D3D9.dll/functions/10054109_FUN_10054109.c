/*
 * FUN_10054109 at 10054109
 * uint __thiscall FUN_10054109(void * this, undefined4 * param_1, int param_2, char param_3, undefined4 param_4, undefined4 * param_5, uint param_6, uint param_7, char param_8, undefined4 param_9, int param_10)
 * Address ranges: 10054109-10054ff7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_10054109(void *this,undefined4 *param_1,int param_2,char param_3,undefined4 param_4,
            undefined4 *param_5,uint param_6,uint param_7,char param_8,undefined4 param_9,
            int param_10)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  uint local_30;
  int local_2c;
  uint local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  uVar5 = 3;
  local_18 = 3;
  if ((param_1 == (undefined4 *)0x1) || (param_1 == (undefined4 *)0x2)) {
    local_18 = (param_1 == (undefined4 *)0x2) + 1;
LAB_10054d00:
    local_28 = param_7 / local_18;
    for (uVar5 = param_7 - param_7 % local_18; uVar5 != 0; uVar5 = uVar5 - uVar6) {
      iVar12 = *(int *)((int)this + 0x54) + *(int *)((int)this + 0x50);
      if (0x1000U - iVar12 < 0x10) {
        (**(code **)(*(int *)this + 0xec))(1);
        iVar12 = 0;
      }
      uVar8 = (0x1000 - (0x1000U - iVar12) % local_18) - iVar12;
      uVar6 = uVar5;
      if (uVar8 <= uVar5) {
        uVar6 = uVar8;
      }
      if (param_3 == '\0') {
        local_28 = (**(code **)(*(int *)this + 0xf4))
                             (param_1,param_4,*(undefined4 *)(param_2 + 0xc),uVar6,0,param_10);
      }
      else {
        local_28 = (**(code **)(*(int *)this + 0xf0))
                             (param_1,param_2,param_4,*(undefined4 *)(param_2 + 0xc),uVar6,0,param_9
                             );
      }
      uVar8 = *(uint *)((int)this + 0xfc8);
      if (param_8 == '\0') {
        if (param_6 == uVar8) {
          local_28 = uVar8 * uVar6;
          puVar11 = *(undefined4 **)((int)this + 0x4c);
          puVar9 = (undefined4 *)(local_c * uVar8 + (int)param_5);
          for (uVar7 = local_28 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
            uVar2 = puVar9[1];
            uVar3 = puVar9[2];
            uVar4 = puVar9[3];
            *puVar11 = *puVar9;
            puVar11[1] = uVar2;
            puVar11[2] = uVar3;
            puVar11[3] = uVar4;
            puVar11 = puVar11 + 4;
            puVar9 = puVar9 + 4;
          }
          uVar7 = local_28 >> 2 & 3;
          uVar8 = 0;
          if (uVar7 != 0) {
            do {
              puVar11[uVar8] = puVar9[uVar8];
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
          }
          *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + local_28;
        }
        else if (uVar6 != 0) {
          uVar7 = uVar8 >> 2 & 3;
          local_28 = local_c;
          local_30 = uVar6;
          do {
            puVar11 = *(undefined4 **)((int)this + 0x4c);
            puVar9 = (undefined4 *)(local_28 * param_6 + (int)param_5);
            for (uVar10 = uVar8 >> 4; uVar10 != 0; uVar10 = uVar10 - 1) {
              uVar2 = puVar9[1];
              uVar3 = puVar9[2];
              uVar4 = puVar9[3];
              *puVar11 = *puVar9;
              puVar11[1] = uVar2;
              puVar11[2] = uVar3;
              puVar11[3] = uVar4;
              puVar11 = puVar11 + 4;
              puVar9 = puVar9 + 4;
            }
            if (uVar7 != 0) {
              uVar10 = 0;
              do {
                puVar11[uVar10] = puVar9[uVar10];
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar7);
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar8;
            local_28 = local_28 + 1;
            local_30 = local_30 - 1;
          } while (local_30 != 0);
        }
      }
      else {
        local_28 = 0;
        if (*(int *)(param_2 + 8) != 0) {
          do {
            if (param_5[local_28 * 3] != 0) {
              local_14 = 0;
              local_24 = (undefined4 *)(param_5[local_28 * 3 + 1] * local_c + param_5[local_28 * 3])
              ;
              uVar7 = (uint)*(byte *)(param_2 + 0x214 + local_28);
              uVar10 = (uint)(*(byte *)(param_2 + 0x16 + uVar7 * 8) >> 2);
              if (uVar6 != 0) {
                puVar11 = (undefined4 *)
                          (*(int *)((int)this + 0x4c) +
                          (uint)*(byte *)(param_2 + 0x17 + uVar7 * 8) * 4);
                local_30 = uVar6;
                do {
                  uVar7 = 0;
                  if (uVar10 != 0) {
                    if ((uVar10 < 4) ||
                       ((puVar11 <= local_24 + (uVar10 - 1) && (local_24 <= puVar11 + (uVar10 - 1)))
                       )) {
                      do {
                        puVar11[uVar7] = local_24[uVar7];
                        uVar7 = uVar7 + 1;
                      } while (uVar7 < uVar10);
                    }
                    else {
                      FUN_100cff00(puVar11,local_24,uVar10 << 2);
                    }
                  }
                  puVar11 = (undefined4 *)((int)puVar11 + uVar8);
                  local_14 = local_14 + 1;
                  if (local_14 == param_5[local_28 * 3 + 2]) {
                    local_14 = 0;
                    local_24 = (undefined4 *)((int)local_24 + param_5[local_28 * 3 + 1]);
                  }
                  local_30 = local_30 - 1;
                } while (local_30 != 0);
              }
            }
            local_28 = local_28 + 1;
          } while (local_28 < *(uint *)(param_2 + 8));
        }
        *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar8 * uVar6;
      }
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + uVar6;
      local_c = local_c + uVar6;
    }
  }
  else {
    if (param_1 == (undefined4 *)0x3) {
      uVar5 = 2;
      local_18 = 2;
    }
    else {
      if (param_1 == (undefined4 *)&DAT_00000004) goto LAB_10054d00;
      if (param_1 != (undefined4 *)0x5) {
        if ((int)param_1 - 6U != 0) {
          return (int)param_1 - 6U;
        }
        if (param_7 < 3) {
          return param_7;
        }
        uVar5 = param_7 - 2;
        param_10 = 1;
        do {
          if (uVar5 == 0) {
            return 0;
          }
          iVar14 = *(int *)((int)this + 0x54) + *(int *)((int)this + 0x50);
          iVar12 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
          if ((0x1000U - iVar14 < 0x10) || (0x1000U - iVar12 < 0x10)) {
            (**(code **)(*(int *)this + 0xec))(1);
            iVar14 = 0;
            iVar12 = 0;
          }
          uVar6 = (0x1000U - iVar12) / 3;
          if (0xffeU - iVar14 < uVar6) {
            uVar6 = 0xffeU - iVar14;
          }
          uVar8 = uVar5;
          if (uVar6 <= uVar5) {
            uVar8 = uVar6;
          }
          iVar12 = uVar8 * 3;
          if (param_3 == '\0') {
            (**(code **)(*(int *)this + 0xf4))
                      (4,param_4,*(undefined4 *)(param_2 + 0xc),uVar8 + 2,iVar12,0);
          }
          else {
            (**(code **)(*(int *)this + 0xf0))
                      (4,param_2,param_4,*(undefined4 *)(param_2 + 0xc),uVar8 + 2,iVar12,param_9);
          }
          uVar6 = *(uint *)((int)this + 0xfc8);
          if (param_8 == '\0') {
            if (param_6 == uVar6) {
              puVar11 = *(undefined4 **)((int)this + 0x4c);
              puVar9 = param_5;
              for (uVar7 = uVar6 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                uVar2 = puVar9[1];
                uVar3 = puVar9[2];
                uVar4 = puVar9[3];
                *puVar11 = *puVar9;
                puVar11[1] = uVar2;
                puVar11[2] = uVar3;
                puVar11[3] = uVar4;
                puVar11 = puVar11 + 4;
                puVar9 = puVar9 + 4;
              }
              uVar7 = 0;
              uVar10 = uVar6 >> 2 & 3;
              if (uVar10 != 0) {
                do {
                  puVar11[uVar7] = puVar9[uVar7];
                  uVar7 = uVar7 + 1;
                } while (uVar7 < uVar10);
              }
            }
            else {
              puVar11 = *(undefined4 **)((int)this + 0x4c);
              puVar9 = param_5;
              for (uVar7 = uVar6 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                uVar2 = puVar9[1];
                uVar3 = puVar9[2];
                uVar4 = puVar9[3];
                *puVar11 = *puVar9;
                puVar11[1] = uVar2;
                puVar11[2] = uVar3;
                puVar11[3] = uVar4;
                puVar11 = puVar11 + 4;
                puVar9 = puVar9 + 4;
              }
              uVar7 = 0;
              uVar10 = uVar6 >> 2 & 3;
              if (uVar10 != 0) {
                do {
                  puVar11[uVar7] = puVar9[uVar7];
                  uVar7 = uVar7 + 1;
                } while (uVar7 < uVar10);
              }
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar6;
            *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
            uVar6 = *(uint *)((int)this + 0xfc8);
            if (param_6 == uVar6) {
              puVar11 = *(undefined4 **)((int)this + 0x4c);
              puVar9 = (undefined4 *)(uVar6 * param_10 + (int)param_5);
              for (uVar7 = uVar6 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                uVar2 = puVar9[1];
                uVar3 = puVar9[2];
                uVar4 = puVar9[3];
                *puVar11 = *puVar9;
                puVar11[1] = uVar2;
                puVar11[2] = uVar3;
                puVar11[3] = uVar4;
                puVar11 = puVar11 + 4;
                puVar9 = puVar9 + 4;
              }
              uVar7 = uVar6 >> 2 & 3;
              if (uVar7 != 0) {
                uVar10 = 0;
                do {
                  puVar11[uVar10] = puVar9[uVar10];
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar7);
              }
              *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar6;
              param_1 = *(undefined4 **)((int)this + 0x4c);
            }
            else {
              puVar11 = *(undefined4 **)((int)this + 0x4c);
              puVar9 = (undefined4 *)(param_10 * param_6 + (int)param_5);
              for (uVar7 = uVar6 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                uVar2 = puVar9[1];
                uVar3 = puVar9[2];
                uVar4 = puVar9[3];
                *puVar11 = *puVar9;
                puVar11[1] = uVar2;
                puVar11[2] = uVar3;
                puVar11[3] = uVar4;
                puVar11 = puVar11 + 4;
                puVar9 = puVar9 + 4;
              }
              uVar7 = uVar6 >> 2 & 3;
              if (uVar7 != 0) {
                uVar10 = 0;
                do {
                  puVar11[uVar10] = puVar9[uVar10];
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar7);
              }
              param_1 = (undefined4 *)(*(int *)((int)this + 0x4c) + uVar6);
              *(undefined4 **)((int)this + 0x4c) = param_1;
            }
            *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
            uVar6 = *(uint *)((int)this + 0xfc8);
            iVar14 = param_10 + 1;
            if (param_6 == uVar6) {
              uVar10 = uVar6 * uVar8;
              puVar11 = (undefined4 *)(uVar6 * iVar14 + (int)param_5);
              for (uVar7 = uVar10 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
                uVar2 = puVar11[1];
                uVar3 = puVar11[2];
                uVar4 = puVar11[3];
                *param_1 = *puVar11;
                param_1[1] = uVar2;
                param_1[2] = uVar3;
                param_1[3] = uVar4;
                puVar11 = puVar11 + 4;
                param_1 = param_1 + 4;
              }
              uVar7 = uVar10 >> 2 & 3;
              uVar6 = 0;
              if (uVar7 != 0) {
                do {
                  param_1[uVar6] = puVar11[uVar6];
                  uVar6 = uVar6 + 1;
                } while (uVar6 < uVar7);
              }
              *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar10;
            }
            else if (uVar8 != 0) {
              uVar7 = uVar6 >> 2 & 3;
              local_1c = uVar8;
              do {
                puVar11 = (undefined4 *)(iVar14 * param_6 + (int)param_5);
                for (uVar10 = uVar6 >> 4; uVar10 != 0; uVar10 = uVar10 - 1) {
                  uVar2 = puVar11[1];
                  uVar3 = puVar11[2];
                  uVar4 = puVar11[3];
                  *param_1 = *puVar11;
                  param_1[1] = uVar2;
                  param_1[2] = uVar3;
                  param_1[3] = uVar4;
                  puVar11 = puVar11 + 4;
                  param_1 = param_1 + 4;
                }
                uVar10 = 0;
                if (uVar7 != 0) {
                  do {
                    param_1[uVar10] = puVar11[uVar10];
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < uVar7);
                }
                *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar6;
                param_1 = *(undefined4 **)((int)this + 0x4c);
                iVar14 = iVar14 + 1;
                local_1c = local_1c - 1;
              } while (local_1c != 0);
            }
          }
          else {
            local_20 = (undefined4 *)0x0;
            if (*(int *)(param_2 + 8) != 0) {
              do {
                puVar11 = (undefined4 *)param_5[(int)local_20 * 3];
                if (puVar11 != (undefined4 *)0x0) {
                  uVar7 = (uint)*(byte *)(param_2 + 0x214 + (int)local_20);
                  puVar9 = (undefined4 *)
                           ((uint)*(byte *)(param_2 + 0x17 + uVar7 * 8) * 4 +
                           *(int *)((int)this + 0x4c));
                  uVar7 = (uint)(*(byte *)(param_2 + 0x16 + uVar7 * 8) >> 2);
                  uVar10 = 0;
                  if (uVar7 != 0) {
                    if (3 < uVar7) {
                      if ((puVar11 + (uVar7 - 1) < puVar9) || (puVar9 + (uVar7 - 1) < puVar11)) {
                        FUN_100cff00(puVar9,puVar11,uVar7 * 4);
                        goto LAB_100542c0;
                      }
                    }
                    do {
                      puVar9[uVar10] = puVar11[uVar10];
                      uVar10 = uVar10 + 1;
                    } while (uVar10 < uVar7);
                  }
                }
LAB_100542c0:
                local_20 = (undefined4 *)((int)local_20 + 1);
              } while (local_20 < *(uint *)(param_2 + 8));
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar6;
            *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
            iVar14 = *(int *)((int)this + 0xfc8);
            local_10 = 0;
            if (*(int *)(param_2 + 8) != 0) {
              do {
                if (param_5[local_10 * 3] != 0) {
                  uVar6 = (uint)*(byte *)(param_2 + 0x214 + local_10);
                  puVar9 = (undefined4 *)
                           (param_5[local_10 * 3 + 1] * param_10 + param_5[local_10 * 3]);
                  puVar11 = (undefined4 *)
                            ((uint)*(byte *)(param_2 + 0x17 + uVar6 * 8) * 4 +
                            *(int *)((int)this + 0x4c));
                  uVar6 = (uint)(*(byte *)(param_2 + 0x16 + uVar6 * 8) >> 2);
                  uVar7 = 0;
                  if (uVar6 != 0) {
                    if (3 < uVar6) {
                      if ((puVar9 + (uVar6 - 1) < puVar11) || (puVar11 + (uVar6 - 1) < puVar9)) {
                        FUN_100cff00(puVar11,puVar9,uVar6 * 4);
                        goto LAB_1005438a;
                      }
                    }
                    do {
                      puVar11[uVar7] = puVar9[uVar7];
                      uVar7 = uVar7 + 1;
                    } while (uVar7 < uVar6);
                  }
                }
LAB_1005438a:
                local_10 = local_10 + 1;
              } while (local_10 < *(uint *)(param_2 + 8));
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar14;
            *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
            iVar14 = *(int *)((int)this + 0xfc8);
            local_14 = 0;
            if (*(int *)(param_2 + 8) != 0) {
              do {
                if (param_5[local_14 * 3] != 0) {
                  local_18 = 0;
                  puVar11 = (undefined4 *)
                            (param_5[local_14 * 3 + 1] * (param_10 + 1) + param_5[local_14 * 3]);
                  uVar6 = (uint)*(byte *)(param_2 + 0x214 + local_14);
                  uVar7 = (uint)(*(byte *)(param_2 + 0x16 + uVar6 * 8) >> 2);
                  if (uVar8 != 0) {
                    puVar9 = (undefined4 *)
                             ((uint)*(byte *)(param_2 + 0x17 + uVar6 * 8) * 4 +
                             *(int *)((int)this + 0x4c));
                    local_28 = uVar8;
                    do {
                      uVar6 = 0;
                      if (uVar7 != 0) {
                        if ((uVar7 < 4) ||
                           ((puVar9 <= puVar11 + (uVar7 - 1) && (puVar11 <= puVar9 + (uVar7 - 1)))))
                        {
                          do {
                            puVar9[uVar6] = puVar11[uVar6];
                            uVar6 = uVar6 + 1;
                          } while (uVar6 < uVar7);
                        }
                        else {
                          FUN_100cff00(puVar9,puVar11,uVar7 * 4);
                        }
                      }
                      puVar9 = (undefined4 *)((int)puVar9 + iVar14);
                      local_18 = local_18 + 1;
                      if (local_18 == param_5[local_14 * 3 + 2]) {
                        local_18 = 0;
                        puVar11 = (undefined4 *)((int)puVar11 + param_5[local_14 * 3 + 1]);
                      }
                      local_28 = local_28 - 1;
                    } while (local_28 != 0);
                  }
                }
                local_14 = local_14 + 1;
              } while (local_14 < *(uint *)(param_2 + 8));
            }
            *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar8 * iVar14;
          }
          *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + uVar8;
          uVar6 = 0;
          iVar14 = *(int *)((int)this + 0x54) - uVar8;
          if (uVar8 != 0) {
            do {
              **(int **)((int)this + 100) = iVar14 + -1 + uVar6;
              *(uint *)(*(int *)((int)this + 100) + 4) = uVar6 + iVar14;
              *(int *)(*(int *)((int)this + 100) + 8) = iVar14 + -2;
              *(int *)((int)this + 100) = *(int *)((int)this + 100) + 0xc;
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar8);
          }
          param_10 = param_10 + uVar8;
          *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + iVar12;
          uVar5 = uVar5 - uVar8;
        } while( true );
      }
    }
    uVar6 = uVar5 - 1;
    bVar15 = param_7 < uVar5;
    local_28 = uVar6;
    while (!bVar15) {
      iVar12 = *(int *)((int)this + 0x54) + *(int *)((int)this + 0x50);
      if (0x1000U - iVar12 < 0x10) {
        (**(code **)(*(int *)this + 0xec))(1);
        iVar12 = 0;
      }
      uVar8 = 0x1000U - iVar12 & 0xfffffffe;
      uVar5 = param_7;
      if (uVar8 <= param_7) {
        uVar5 = uVar8;
      }
      if (param_3 == '\0') {
        (**(code **)(*(int *)this + 0xf4))(param_1,param_4,*(undefined4 *)(param_2 + 0xc),uVar5,0,0)
        ;
      }
      else {
        (**(code **)(*(int *)this + 0xf0))
                  (param_1,param_2,param_4,*(undefined4 *)(param_2 + 0xc),uVar5,0,param_9);
      }
      (**(code **)(*(int *)this + 0xec))(0);
      uVar8 = *(uint *)((int)this + 0xfc8);
      if (param_8 == '\0') {
        piVar1 = (int *)((int)this + 0x4c);
        if (param_6 == uVar8) {
          uVar10 = uVar8 * uVar6;
          puVar11 = (undefined4 *)*piVar1;
          puVar9 = (undefined4 *)(local_c * uVar8 + (int)param_5);
          for (uVar7 = uVar10 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
            uVar2 = puVar9[1];
            uVar3 = puVar9[2];
            uVar4 = puVar9[3];
            *puVar11 = *puVar9;
            puVar11[1] = uVar2;
            puVar11[2] = uVar3;
            puVar11[3] = uVar4;
            puVar11 = puVar11 + 4;
            puVar9 = puVar9 + 4;
          }
          uVar8 = 0;
          uVar7 = uVar10 >> 2 & 3;
          if (uVar7 != 0) {
            do {
              puVar11[uVar8] = puVar9[uVar8];
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
          }
          *piVar1 = *piVar1 + uVar10;
          puVar11 = (undefined4 *)*piVar1;
        }
        else {
          local_28 = 0;
          uVar10 = uVar8 >> 2 & 3;
          uVar7 = local_c;
          do {
            puVar11 = (undefined4 *)(uVar7 * param_6 + (int)param_5);
            puVar9 = (undefined4 *)*piVar1;
            for (uVar13 = uVar8 >> 4; uVar13 != 0; uVar13 = uVar13 - 1) {
              uVar2 = puVar11[1];
              uVar3 = puVar11[2];
              uVar4 = puVar11[3];
              *puVar9 = *puVar11;
              puVar9[1] = uVar2;
              puVar9[2] = uVar3;
              puVar9[3] = uVar4;
              puVar11 = puVar11 + 4;
              puVar9 = puVar9 + 4;
            }
            uVar13 = 0;
            if (uVar10 != 0) {
              do {
                puVar9[uVar13] = puVar11[uVar13];
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar10);
            }
            puVar11 = (undefined4 *)(uVar8 + *piVar1);
            uVar7 = uVar7 + 1;
            local_28 = local_28 + 1;
            *piVar1 = (int)puVar11;
          } while (local_28 < uVar6);
        }
        *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + uVar6;
        uVar8 = *(uint *)((int)this + 0xfc8);
        iVar14 = uVar5 - uVar6;
        iVar12 = uVar6 + local_c;
        if (param_6 == uVar8) {
          uVar10 = iVar14 * uVar8;
          puVar9 = (undefined4 *)(uVar8 * iVar12 + (int)param_5);
          for (uVar7 = uVar10 >> 4; uVar7 != 0; uVar7 = uVar7 - 1) {
            uVar2 = puVar9[1];
            uVar3 = puVar9[2];
            uVar4 = puVar9[3];
            *puVar11 = *puVar9;
            puVar11[1] = uVar2;
            puVar11[2] = uVar3;
            puVar11[3] = uVar4;
            puVar9 = puVar9 + 4;
            puVar11 = puVar11 + 4;
          }
          uVar7 = uVar10 >> 2 & 3;
          uVar8 = 0;
          if (uVar7 != 0) {
            do {
              puVar11[uVar8] = puVar9[uVar8];
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
          }
          *piVar1 = *piVar1 + uVar10;
        }
        else if (iVar14 != 0) {
          uVar7 = uVar8 >> 2 & 3;
          local_2c = iVar14;
          do {
            puVar9 = (undefined4 *)(iVar12 * param_6 + (int)param_5);
            for (uVar10 = uVar8 >> 4; uVar10 != 0; uVar10 = uVar10 - 1) {
              uVar2 = puVar9[1];
              uVar3 = puVar9[2];
              uVar4 = puVar9[3];
              *puVar11 = *puVar9;
              puVar11[1] = uVar2;
              puVar11[2] = uVar3;
              puVar11[3] = uVar4;
              puVar9 = puVar9 + 4;
              puVar11 = puVar11 + 4;
            }
            uVar10 = 0;
            if (uVar7 != 0) {
              do {
                puVar11[uVar10] = puVar9[uVar10];
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar7);
            }
            *piVar1 = *piVar1 + uVar8;
            puVar11 = (undefined4 *)*piVar1;
            iVar12 = iVar12 + 1;
            local_2c = local_2c + -1;
          } while (local_2c != 0);
        }
      }
      else {
        local_1c = 0;
        if (*(int *)(param_2 + 8) != 0) {
          do {
            if (param_5[local_1c * 3] != 0) {
              local_14 = 0;
              local_28 = 0;
              local_20 = (undefined4 *)(param_5[local_1c * 3 + 1] * local_c + param_5[local_1c * 3])
              ;
              uVar7 = (uint)*(byte *)(param_2 + 0x214 + local_1c);
              uVar10 = (uint)(*(byte *)(param_2 + 0x16 + uVar7 * 8) >> 2);
              puVar11 = (undefined4 *)
                        (*(int *)((int)this + 0x4c) +
                        (uint)*(byte *)(param_2 + 0x17 + uVar7 * 8) * 4);
              do {
                uVar7 = 0;
                if (uVar10 != 0) {
                  if ((uVar10 < 4) ||
                     ((puVar11 <= local_20 + (uVar10 - 1) && (local_20 <= puVar11 + (uVar10 - 1)))))
                  {
                    do {
                      puVar11[uVar7] = local_20[uVar7];
                      uVar7 = uVar7 + 1;
                    } while (uVar7 < uVar10);
                  }
                  else {
                    FUN_100cff00(puVar11,local_20,uVar10 << 2);
                  }
                }
                puVar11 = (undefined4 *)((int)puVar11 + uVar8);
                local_14 = local_14 + 1;
                if (local_14 == param_5[local_1c * 3 + 2]) {
                  local_14 = 0;
                  local_20 = (undefined4 *)((int)local_20 + param_5[local_1c * 3 + 1]);
                }
                local_28 = local_28 + 1;
              } while (local_28 < uVar6);
            }
            local_1c = local_1c + 1;
          } while (local_1c < *(uint *)(param_2 + 8));
        }
        *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + uVar6;
        iVar14 = uVar5 - uVar6;
        local_14 = 0;
        *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar8 * uVar6;
        iVar12 = *(int *)((int)this + 0xfc8);
        if (*(int *)(param_2 + 8) != 0) {
          do {
            if (param_5[local_14 * 3] != 0) {
              local_1c = 0;
              puVar11 = (undefined4 *)
                        (param_5[local_14 * 3 + 1] * (uVar6 + local_c) + param_5[local_14 * 3]);
              uVar8 = (uint)*(byte *)(param_2 + 0x214 + local_14);
              uVar7 = (uint)(*(byte *)(param_2 + 0x16 + uVar8 * 8) >> 2);
              if (iVar14 != 0) {
                puVar9 = (undefined4 *)
                         ((uint)*(byte *)(param_2 + 0x17 + uVar8 * 8) * 4 +
                         *(int *)((int)this + 0x4c));
                local_2c = iVar14;
                do {
                  uVar8 = 0;
                  if (uVar7 != 0) {
                    if (3 < uVar7) {
                      if ((puVar11 + (uVar7 - 1) < puVar9) || (puVar9 + (uVar7 - 1) < puVar11)) {
                        FUN_100cff00(puVar9,puVar11,uVar7 * 4);
                        goto LAB_10054a5a;
                      }
                    }
                    do {
                      puVar9[uVar8] = puVar11[uVar8];
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < uVar7);
                  }
LAB_10054a5a:
                  puVar9 = (undefined4 *)((int)puVar9 + iVar12);
                  local_1c = local_1c + 1;
                  if (local_1c == param_5[local_14 * 3 + 2]) {
                    local_1c = 0;
                    puVar11 = (undefined4 *)((int)puVar11 + param_5[local_14 * 3 + 1]);
                  }
                  local_2c = local_2c + -1;
                } while (local_2c != 0);
              }
            }
            local_14 = local_14 + 1;
          } while (local_14 < *(uint *)(param_2 + 8));
        }
        *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar14 * iVar12;
      }
      local_28 = uVar6 - uVar5;
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar14;
      param_7 = param_7 + local_28;
      local_c = local_c + iVar14;
      bVar15 = param_7 < local_18;
    }
  }
  return local_28;
}

