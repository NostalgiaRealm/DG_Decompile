/*
 * FUN_100546f0 at 100546f0
 * undefined FUN_100546f0(void)
 * Address ranges: 100546f0-100557ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100546f0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  undefined *puVar11;
  uint *puVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *extraout_w11_17;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  int *local_bc;
  int *local_b8;
  int *local_b4;
  uint *local_b0;
  int *local_ac;
  uint *local_a8;
  uint local_a4;
  int local_a0;
  int local_9c;
  int *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  int local_70;
  
  uVar15 = DAT_10175b50;
  puVar11 = PTR_s_DGD3D12ROOT_1016d170;
  piVar22 = param_1 + 0x3000;
  uVar13 = (*(code *)PTR_FUN_1016c09c)(0);
  iVar14 = (*(code *)PTR_FUN_1016c1ac)(uVar13,puVar11,auStack_78);
  pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((iVar14 == 0) || (local_70 == 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    local_70 = (*extraout_w11)(uVar15,0);
    if (local_70 == 0) {
      param_1[0x3dad] = 0;
      return 0;
    }
  }
  piVar20 = (int *)(local_70 + 8);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar20),0x10);
    if (bVar9) {
      *piVar20 = *piVar20 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  DataMemoryBarrier(2,3);
  piVar20 = param_1 + 0x3dad;
  *piVar20 = local_70;
  uVar17 = FUN_100732d0(param_1,param_2);
  if ((uVar17 & 1) == 0) {
LAB_10055774:
    FUN_1010d6f0(*piVar20);
    *piVar20 = 0;
    return 0;
  }
  piVar21 = param_1 + 4;
  piVar3 = param_1 + 0x3dae;
  iVar14 = *piVar20 + *piVar21 * 0x16c0;
  *piVar3 = iVar14 + 0x6c0;
  param_1[0x3daf] = *piVar20 + *piVar21 * 0x18 + 0x520;
  FUN_10130fb8(iVar14 + 0x1880);
  param_1[0x3dbb] = *piVar20;
  param_1[0x3dbc] = *piVar21;
  param_1[0x3dc6] = *piVar20;
  param_1[0x3dc7] = *piVar21;
  *(char *)(param_1 + 0x3dc8) = (char)param_1[3];
  iVar14 = *(int *)(param_1[0x3db1] + 0xd0);
  param_1[0x3db0] = iVar14;
  if (iVar14 == 0) goto LAB_10055774;
  iVar14 = 0;
  if (*piVar20 != 0) {
    iVar14 = *piVar20 + 0x520;
  }
  iVar14 = FUN_1011fd58(iVar14,*piVar21,0,0x200,1);
  param_1[0x3db2] = iVar14;
  if (iVar14 == 0) goto LAB_10055744;
  iVar14 = 0;
  if (*piVar20 != 0) {
    iVar14 = *piVar20 + 0x520;
  }
  iVar14 = FUN_1011fd58(iVar14,*piVar21,1,0x200,1);
  param_1[0x3db3] = iVar14;
  if (iVar14 != 0) {
    iVar5 = *piVar20;
    param_1[0x3db6] = param_1[0x1d] << 0xc;
    iVar14 = 0;
    if (iVar5 != 0) {
      iVar14 = iVar5 + 0x508;
    }
    iVar7 = 0;
    if (iVar5 != 0) {
      iVar7 = iVar5 + 0x520;
    }
    iVar14 = FUN_1011bb08(iVar7,*piVar21,*piVar3 + 0x1370,param_1[0x1d] << 0xc,iVar14);
    param_1[0x3db5] = iVar14;
    if (iVar14 != 0) {
      iVar5 = *piVar20;
      iVar14 = 0;
      if (iVar5 != 0) {
        iVar14 = iVar5 + 0x508;
      }
      iVar7 = 0;
      if (iVar5 != 0) {
        iVar7 = iVar5 + 0x520;
      }
      iVar14 = FUN_1011bb08(iVar7,*piVar21,*piVar3 + 0x13d0,0x4000,iVar14);
      param_1[0x3db4] = iVar14;
      if (iVar14 != 0) {
        iVar14 = 0;
        if (*piVar20 != 0) {
          iVar14 = *piVar20 + 0x520;
        }
        iVar14 = FUN_1011bb08(iVar14,*piVar21,0,0xc20,0);
        param_1[0x3db7] = iVar14;
        if (iVar14 != 0) {
          iVar14 = 0;
          if (*piVar20 != 0) {
            iVar14 = *piVar20 + 0x520;
          }
          iVar14 = FUN_1011bb08(iVar14,*piVar21,*piVar3 + 0x1310,0x8000,0);
          param_1[0x3db9] = iVar14;
          if (iVar14 != 0) {
            iVar14 = FUN_10112a68(*piVar20 + 0x520,*piVar21,0x960,0,0);
            piVar1 = param_1 + 0x3db8;
            *piVar1 = iVar14;
            local_98 = piVar1;
            if (iVar14 != 0) {
              uVar17 = FUN_10117918(*(undefined4 *)(*piVar3 + 0x130c),iVar14,*piVar3 + 0x1430,0,
                                    0x960,&DAT_1016e3d0,0,0);
              if ((uVar17 & 1) != 0) {
                FUN_10113dd8(*(undefined4 *)(*piVar3 + 0x130c),*piVar1,0,1,0);
                FUN_10113dd8(*(undefined4 *)(*piVar3 + 0x1304),*piVar1,0,1,0xc0);
                iVar14 = 0;
                if (*piVar20 != 0) {
                  iVar14 = *piVar20 + 0x520;
                }
                iVar14 = FUN_1011bb08(iVar14,*piVar21,0,0x2f0,0);
                param_1[0x3dd5] = iVar14;
                if (iVar14 != 0) {
                  iVar14 = 0;
                  if (*piVar20 != 0) {
                    iVar14 = *piVar20 + 0x520;
                  }
                  iVar14 = FUN_1011bb08(iVar14,*piVar21,0,0x4d0,0);
                  param_1[0x3dba] = iVar14;
                  if (iVar14 != 0) {
                    iVar14 = 0;
                    if (*piVar20 != 0) {
                      iVar14 = *piVar20 + 0x520;
                    }
                    iVar14 = FUN_1011bb08(iVar14,*piVar21,0,0xec0,0);
                    param_1[0x3dd7] = iVar14;
                    if (iVar14 != 0) {
                      iVar14 = 0;
                      if (*piVar20 != 0) {
                        iVar14 = *piVar20 + 0x520;
                      }
                      iVar14 = FUN_1011bb08(iVar14,*piVar21,0,param_1[0x1f] + 0xffU & 0xffffff00,0);
                      param_1[0x3dd6] = iVar14;
                      if (iVar14 != 0) {
                        iVar14 = 0;
                        if (*piVar20 != 0) {
                          iVar14 = *piVar20 + 0x520;
                        }
                        iVar14 = FUN_1011bb08(iVar14,*piVar21,0,0x100,0);
                        param_1[0x3dd8] = iVar14;
                        if (iVar14 != 0) {
                          local_b4 = (int *)*piVar21;
                          local_b0 = (uint *)*piVar20;
                          piVar21 = param_1 + 0x3dda;
                          local_b8 = param_1 + 0x3ddb;
                          *local_b8 = (int)(local_b0 + (int)local_b4 * 0x5b0 + 0x1b0);
                          puVar2 = (uint *)0x0;
                          if (local_b0 != (uint *)0x0) {
                            puVar2 = local_b0 + 0x148;
                          }
                          iVar14 = FUN_10120ed8(puVar2,local_b4,0);
                          param_1[0x3ddd] = iVar14;
                          if (iVar14 == 0) {
LAB_1005528c:
                            FUN_10061c68(param_1);
                          }
                          else {
                            iVar14 = FUN_10120ed8(puVar2,local_b4,1);
                            param_1[0x3dde] = iVar14;
                            if (iVar14 != 0) {
                              iVar14 = (*(code *)PTR_FUN_1016c04c)(0,0,0,0);
                              param_1[0x3df9] = iVar14;
                              if (iVar14 != 0) {
                                iVar14 = (*(code *)PTR_FUN_1016c064)(0,0,FUN_10070540,piVar21,0,0);
                                param_1[0x3df8] = iVar14;
                                if (iVar14 != 0) {
                                  (*(code *)PTR_FUN_1016c0bc)(param_1 + 0x3df2);
                                  iVar14 = *(int *)(*local_b8 + 0x1304);
                                  piVar1 = (int *)(iVar14 + 0x954);
                                  local_a8 = (uint *)(iVar14 + 0x958);
                                  puVar2 = (uint *)(iVar14 + 0x95c);
                                  uVar16 = *puVar2;
                                  if (*local_a8 == uVar16) {
                                    local_ac = (int *)(uVar16 << 1);
                                    if (uVar16 == 0) {
                                      local_ac = (int *)0x10;
                                    }
                                    iVar14 = (int)local_ac * 4;
                                    if ((uint)local_ac >> 0x1e != 0) {
                                      iVar14 = -1;
                                    }
                                    local_9c = FUN_101322b0(iVar14);
                                    if (local_9c != 0) {
                                      FUN_101325a0(local_9c,*piVar1,
                                                   ((ulonglong)*puVar2 & 0x3fffffff) << 2);
                                      FUN_101322d0(*piVar1);
                                      *piVar1 = local_9c;
                                      *puVar2 = (uint)local_ac;
                                      goto LAB_10054d58;
                                    }
                                  }
                                  else {
LAB_10054d58:
                                    *(int **)(*piVar1 + *local_a8 * 4) = piVar21;
                                    *local_a8 = *local_a8 + 1;
                                  }
                                  if ((local_b0[(int)local_b4 * 6 + 0x14b] & 1) == 0) {
                                    param_1[0x3ddc] = 0;
                                  }
                                  else {
                                    FUN_10114660(*(undefined4 *)(*local_b8 + 0x1304),&DAT_1015e650,
                                                 param_1 + 0x3ddc);
                                  }
                                  uVar16 = FUN_10111c30(*(undefined4 *)(param_1[0x3dae] + 0x15dc),1)
                                  ;
                                  param_1[0x3dfc] = uVar16;
                                  if (uVar16 != 0xffffffff) {
                                    local_90 = 0x50000001c;
                                    local_88 = 0;
                                    uStack_80 = 1;
                                    iVar14 = *(int *)(param_1[0x3dae] + 0x15dc);
                                    uVar15 = (*pcVar10)();
                                    (*extraout_w11_01)(uVar15,&local_a4);
                                    local_a4 = local_a4 +
                                               (uVar16 & 0xffff) * *(int *)(iVar14 + 0x18);
                                    uVar17 = (ulonglong)local_a4;
                                    uVar15 = (*pcVar10)();
                                    (*extraout_w11_02)(uVar15,0,&local_90,uVar17 & 0xffffffff);
                                    FUN_101138b0(*(int *)(param_1[0x3dae] + 0x130c) + 4,0);
                                    FUN_100733d0(param_1);
                                    FUN_101325d0(param_1 + 0x3e02,0,0x5a8);
                                    param_1[0x3e02] = param_1[0x3db0];
                                    param_1[0x3e0e] = 2;
                                    uVar15 = (*pcVar10)();
                                    uVar18 = (*extraout_w11_03)(uVar15);
                                    *(undefined8 *)(param_1 + 0x3e20) = uVar18;
                                    uVar16 = 0;
                                    uVar6 = *(uint *)(param_1[0x3db1] + 0xc0);
                                    local_b0 = (uint *)(param_1 + 0x3e40);
                                    local_a8 = (uint *)(param_1 + 0x3dae);
                                    uVar4 = uVar6 & 0xffff;
                                    local_b8 = param_1;
                                    local_b4 = piVar22;
                                    local_ac = param_1 + 0x2000;
                                    do {
                                      local_b0[uVar16] = uVar6;
                                      iVar14 = *(int *)(*local_a8 + 0x15d8);
                                      uVar15 = (*pcVar10)();
                                      (*extraout_w11_04)(uVar15,&local_a0);
                                      piVar22 = local_ac;
                                      piVar21 = local_b4;
                                      piVar20 = local_b8;
                                      local_a0 = local_a0 + *(int *)(iVar14 + 0x18) * uVar4;
                                      iVar14 = uVar16 + 0x3e58;
                                      uVar16 = uVar16 + 1;
                                      param_1[iVar14] = local_a0;
                                    } while (uVar16 < 0x10);
                                    local_b4[0xe7d] = uVar6;
                                    iVar14 = *(int *)(*piVar3 + 0x15d8);
                                    uVar15 = (*pcVar10)();
                                    (*extraout_w11_05)(uVar15,&local_bc);
                                    local_bc = (int *)((int)local_bc +
                                                      *(int *)(iVar14 + 0x18) * uVar4);
                                    piVar21[0xe82] = (int)local_bc;
                                    piVar21[0xe7e] = uVar6;
                                    iVar14 = *(int *)(*piVar3 + 0x15d8);
                                    uVar15 = (*pcVar10)();
                                    (*extraout_w11_06)(uVar15,&local_bc);
                                    local_bc = (int *)((int)local_bc +
                                                      *(int *)(iVar14 + 0x18) * uVar4);
                                    piVar21[0xe83] = (int)local_bc;
                                    piVar21[0xe7f] = uVar6;
                                    iVar14 = *(int *)(*piVar3 + 0x15d8);
                                    uVar15 = (*pcVar10)();
                                    (*extraout_w11_07)(uVar15,&local_bc);
                                    local_bc = (int *)((int)local_bc +
                                                      *(int *)(iVar14 + 0x18) * uVar4);
                                    piVar21[0xe84] = (int)local_bc;
                                    piVar21[0xe80] = uVar6;
                                    iVar14 = *(int *)(*piVar3 + 0x15d8);
                                    uVar15 = (*pcVar10)();
                                    (*extraout_w11_08)(uVar15,&local_bc);
                                    local_bc = (int *)((int)local_bc +
                                                      *(int *)(iVar14 + 0x18) * uVar4);
                                    piVar21[0xe85] = (int)local_bc;
                                    piVar21[0xe81] = uVar6;
                                    iVar14 = *(int *)(*piVar3 + 0x15d8);
                                    uVar15 = (*pcVar10)();
                                    (*extraout_w11_09)(uVar15,&local_bc);
                                    piVar21[0xe86] =
                                         (int)((int)local_bc + *(int *)(iVar14 + 0x18) * uVar4);
                                    piVar21[0xe10] = 1;
                                    piVar22[0x1e12] = 0;
                                    piVar22[0x1e13] = 0;
                                    piVar22[0x1e14] = 0;
                                    piVar22[0x1e15] = 0;
                                    piVar22[0x1e16] = 0;
                                    piVar22[0x1e17] = 0;
                                    piVar22[0x1e18] = 0;
                                    piVar22[0x1e19] = 0;
                                    piVar21[0xf06] = 0;
                                    piVar21[0xef4] = piVar21[0xdb5];
                                    piVar21[0xf04] = piVar21[0xdb4];
                                    piVar21[0xdc5] = *piVar3;
                                    FUN_1005dd98(piVar20,1,1,0);
                                    return 1;
                                  }
                                  FUN_10070390(piVar21);
                                  goto LAB_1005528c;
                                }
                                (*(code *)PTR_FUN_1016c048)(param_1[0x3df9]);
                              }
                              iVar14 = param_1[0x3dde];
                              if (iVar14 == 0) {
                                param_1[0x3dde] = 0;
                              }
                              else {
                                puVar2 = (uint *)(iVar14 + 0xc);
                                piVar21 = (int *)(iVar14 + 8);
                                if (*puVar2 != 0) {
                                  iVar7 = *(int *)(iVar14 + 0x14);
                                  iVar5 = *piVar21 + iVar7 * 0x20;
                                  local_b0 = puVar2;
                                  if (*(int *)(iVar5 + 0x10) != 0) {
                                    uVar15 = (*pcVar10)();
                                    uVar17 = (*extraout_w11_10)(uVar15);
                                    if (uVar17 < *(ulonglong *)(iVar5 + 0x18)) {
                                      puVar19 = (undefined8 *)(*piVar21 + iVar7 * 0x20 + 0x18);
                                      uVar15 = (*pcVar10)();
                                      (*extraout_w11_11)(uVar15,*puVar19,
                                                         *(undefined4 *)(iVar14 + 0x20));
                                      (*(code *)PTR_FUN_1016c138)
                                                (*(undefined4 *)(iVar14 + 0x20),0xffffffff);
                                    }
                                  }
                                  puVar12 = local_b0;
                                  uVar16 = 0;
                                  piVar3 = param_1;
                                  if (*puVar2 != 0) {
                                    do {
                                      local_b4 = piVar22;
                                      local_b8 = piVar3;
                                      local_bc = piVar20;
                                      uVar15 = (*pcVar10)();
                                      (*extraout_w11_12)(uVar15);
                                      uVar15 = (*pcVar10)();
                                      (*extraout_w11_13)(uVar15);
                                      uVar16 = uVar16 + 1;
                                      param_1 = local_b8;
                                      piVar20 = local_bc;
                                      piVar22 = local_b4;
                                      piVar3 = local_b8;
                                    } while (uVar16 < *puVar12);
                                  }
                                  FUN_101322d0(*piVar21);
                                  piVar21[0] = 0;
                                  piVar21[1] = 0;
                                  *(undefined4 *)(iVar14 + 0x10) = 0;
                                  (*(code *)PTR_FUN_1016c048)(*(undefined4 *)(iVar14 + 0x20));
                                  *(undefined4 *)(iVar14 + 0x20) = 0;
                                }
                                FUN_101322d0(*piVar21);
                                FUN_10132260(iVar14,0x24);
                                piVar22[0xdde] = 0;
                              }
                            }
                            piVar21 = param_1 + 0x3ddd;
                            iVar14 = *piVar21;
                            if (iVar14 != 0) {
                              puVar2 = (uint *)(iVar14 + 0xc);
                              piVar3 = (int *)(iVar14 + 8);
                              if (*puVar2 != 0) {
                                iVar7 = *(int *)(iVar14 + 0x14);
                                iVar5 = *piVar3 + iVar7 * 0x20;
                                local_b0 = puVar2;
                                if (*(int *)(iVar5 + 0x10) != 0) {
                                  uVar15 = (*pcVar10)();
                                  uVar17 = (*extraout_w11_14)(uVar15);
                                  if (uVar17 < *(ulonglong *)(iVar5 + 0x18)) {
                                    puVar19 = (undefined8 *)(*piVar3 + iVar7 * 0x20 + 0x18);
                                    uVar15 = (*pcVar10)();
                                    (*extraout_w11_15)(uVar15,*puVar19,
                                                       *(undefined4 *)(iVar14 + 0x20));
                                    (*(code *)PTR_FUN_1016c138)
                                              (*(undefined4 *)(iVar14 + 0x20),0xffffffff);
                                  }
                                }
                                puVar12 = local_b0;
                                uVar16 = 0;
                                piVar21 = param_1;
                                if (*puVar2 != 0) {
                                  do {
                                    local_b4 = piVar22;
                                    local_b8 = piVar21;
                                    local_bc = piVar20;
                                    uVar15 = (*pcVar10)();
                                    (*extraout_w11_16)(uVar15);
                                    uVar15 = (*pcVar10)();
                                    (*extraout_w11_17)(uVar15);
                                    uVar16 = uVar16 + 1;
                                    param_1 = local_b8;
                                    piVar20 = local_bc;
                                    piVar22 = local_b4;
                                    piVar21 = local_b8;
                                  } while (uVar16 < *puVar12);
                                }
                                FUN_101322d0(*piVar3);
                                piVar3[0] = 0;
                                piVar3[1] = 0;
                                *(undefined4 *)(iVar14 + 0x10) = 0;
                                (*(code *)PTR_FUN_1016c048)(*(undefined4 *)(iVar14 + 0x20));
                                *(undefined4 *)(iVar14 + 0x20) = 0;
                                piVar21 = param_1 + 0x3ddd;
                              }
                              FUN_101322d0(*piVar3);
                              FUN_10132260(iVar14,0x24);
                            }
                            *piVar21 = 0;
                            FUN_10061c68(param_1);
                          }
                          goto LAB_10054bac;
                        }
                        if (param_1[0x3dd6] != 0) {
                          FUN_100557b0(param_1[0x3dd6],1);
                        }
                      }
                      if (param_1[0x3dd7] != 0) {
                        FUN_100557b0(param_1[0x3dd7],1);
                      }
                    }
                    if (param_1[0x3dba] != 0) {
                      FUN_100557b0(param_1[0x3dba],1);
                    }
                  }
                  if (param_1[0x3dd5] != 0) {
                    FUN_100557b0(param_1[0x3dd5],1);
                  }
                }
              }
LAB_10054bac:
              piVar21 = local_98;
              uVar15 = (*pcVar10)();
              (*extraout_w11_00)(uVar15);
              *piVar21 = 0;
            }
            if (piVar22[0xdb9] != 0) {
              FUN_100557b0(piVar22[0xdb9],1);
            }
            piVar22[0xdb9] = 0;
          }
          if (piVar22[0xdb7] != 0) {
            FUN_100557b0(piVar22[0xdb7],1);
          }
          piVar22[0xdb7] = 0;
        }
        if (piVar22[0xdb4] != 0) {
          FUN_100557b0(piVar22[0xdb4],1);
        }
        piVar22[0xdb4] = 0;
      }
      if (piVar22[0xdb5] != 0) {
        FUN_100557b0(piVar22[0xdb5],1);
      }
      piVar22[0xdb5] = 0;
    }
    if (piVar22[0xdb3] != 0) {
      FUN_100559b0(piVar22[0xdb3]);
    }
    piVar22[0xdb3] = 0;
  }
  if (piVar22[0xdb2] != 0) {
    FUN_100559b0(piVar22[0xdb2]);
  }
  piVar22[0xdb2] = 0;
LAB_10055744:
  FUN_101322d0(param_1[7]);
  param_1[7] = 0;
  FUN_101322d0(param_1[6]);
  iVar14 = *piVar20;
  param_1[6] = 0;
  FUN_1010d6f0(iVar14);
  *piVar20 = 0;
  return 0;
}

