/*
 * FUN_10046300 at 10046300
 * undefined FUN_10046300(void)
 * Address ranges: 10046300-10046cbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10046300(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
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
  int local_80;
  int local_7c;
  undefined1 auStack_78 [8];
  int local_70;
  
  uVar13 = DAT_1013d010;
  puVar10 = PTR_s_DGD3D12ROOT_10135170;
  uVar11 = (*(code *)PTR_FUN_10134098)(0);
  iVar12 = (*(code *)PTR_FUN_101341ac)(uVar11,puVar10,auStack_78);
  pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((iVar12 == 0) || (local_70 == 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    local_70 = (*extraout_w11)(uVar13,0);
    if (local_70 == 0) goto LAB_10046c9c;
  }
  piVar1 = (int *)(local_70 + 8);
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar8) {
      *piVar1 = *piVar1 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  DataMemoryBarrier(2,3);
  *(int *)(param_1 + 0xd9b4) = local_70;
  uVar14 = FUN_1005e8c0(param_1,param_2);
  if ((uVar14 & 1) != 0) {
    piVar1 = (int *)(param_1 + 0x10);
    iVar12 = *(int *)(param_1 + 0xd9b4) + *piVar1 * 0x16c0;
    *(int *)(param_1 + 0xd9b8) = iVar12 + 0x6c0;
    *(int *)(param_1 + 0xd9bc) = *(int *)(param_1 + 0xd9b4) + *piVar1 * 0x18 + 0x520;
    FUN_100fd9e8(iVar12 + 0x1880);
    *(undefined4 *)(param_1 + 0xd9ec) = *(undefined4 *)(param_1 + 0xd9b4);
    *(int *)(param_1 + 0xd9f0) = *piVar1;
    *(undefined4 *)(param_1 + 0xda18) = *(undefined4 *)(param_1 + 0xd9b4);
    *(int *)(param_1 + 0xda1c) = *piVar1;
    *(undefined1 *)(param_1 + 0xda20) = *(undefined1 *)(param_1 + 0xc);
    iVar12 = *(int *)(*(int *)(param_1 + 0xd9c4) + 0xd0);
    *(int *)(param_1 + 0xd9c0) = iVar12;
    if (iVar12 != 0) {
      iVar12 = 0;
      if (*(int *)(param_1 + 0xd9b4) != 0) {
        iVar12 = *(int *)(param_1 + 0xd9b4) + 0x520;
      }
      iVar12 = FUN_100ed508(iVar12,*piVar1,0,0x200,1);
      *(int *)(param_1 + 0xd9c8) = iVar12;
      if (iVar12 != 0) {
        iVar12 = 0;
        if (*(int *)(param_1 + 0xd9b4) != 0) {
          iVar12 = *(int *)(param_1 + 0xd9b4) + 0x520;
        }
        iVar12 = FUN_100ed508(iVar12,*piVar1,1,0x200,1);
        *(int *)(param_1 + 0xd9cc) = iVar12;
        if (iVar12 != 0) {
          iVar6 = *(int *)(param_1 + 0x74) << 0xc;
          *(int *)(param_1 + 0xd9d8) = iVar6;
          iVar4 = *(int *)(param_1 + 0xd9b4);
          iVar12 = 0;
          if (iVar4 != 0) {
            iVar12 = iVar4 + 0x508;
          }
          iVar3 = 0;
          if (iVar4 != 0) {
            iVar3 = iVar4 + 0x520;
          }
          iVar12 = FUN_100e92b8(iVar3,*piVar1,*(int *)(param_1 + 0xd9b8) + 0x1370,iVar6,iVar12);
          *(int *)(param_1 + 0xd9d4) = iVar12;
          if (iVar12 != 0) {
            iVar4 = *(int *)(param_1 + 0xd9b4);
            iVar12 = 0;
            if (iVar4 != 0) {
              iVar12 = iVar4 + 0x508;
            }
            iVar6 = 0;
            if (iVar4 != 0) {
              iVar6 = iVar4 + 0x520;
            }
            iVar12 = FUN_100e92b8(iVar6,*piVar1,*(int *)(param_1 + 0xd9b8) + 0x13d0,0x4000,iVar12);
            *(int *)(param_1 + 0xd9d0) = iVar12;
            if (iVar12 != 0) {
              iVar12 = 0;
              if (*(int *)(param_1 + 0xd9b4) != 0) {
                iVar12 = *(int *)(param_1 + 0xd9b4) + 0x520;
              }
              iVar12 = FUN_100e92b8(iVar12,*piVar1,0,0xbc0,0);
              *(int *)(param_1 + 0xd9dc) = iVar12;
              if (iVar12 != 0) {
                iVar12 = 0;
                if (*(int *)(param_1 + 0xd9b4) != 0) {
                  iVar12 = *(int *)(param_1 + 0xd9b4) + 0x520;
                }
                iVar12 = FUN_100e92b8(iVar12,*piVar1,*(int *)(param_1 + 0xd9b8) + 0x1310,0x8000,0);
                *(int *)(param_1 + 0xd9e4) = iVar12;
                if (iVar12 != 0) {
                  iVar12 = FUN_100e0218(*(int *)(param_1 + 0xd9b4) + 0x520,*piVar1,0x960,0,0);
                  *(int *)(param_1 + 0xd9e0) = iVar12;
                  if (iVar12 != 0) {
                    uVar14 = FUN_100e50c8(*(undefined4 *)(*(int *)(param_1 + 0xd9b8) + 0x130c),
                                          iVar12,*(int *)(param_1 + 0xd9b8) + 0x1430,0,0x960,
                                          &DAT_10136080,0,0);
                    if ((uVar14 & 1) != 0) {
                      FUN_100e1588(*(undefined4 *)(*(int *)(param_1 + 0xd9b8) + 0x130c),
                                   *(undefined4 *)(param_1 + 0xd9e0),0,1,0);
                      FUN_100e1588(*(undefined4 *)(*(int *)(param_1 + 0xd9b8) + 0x1304),
                                   *(undefined4 *)(param_1 + 0xd9e0),0,1,0xc0);
                      iVar12 = 0;
                      if (*(int *)(param_1 + 0xd9b4) != 0) {
                        iVar12 = *(int *)(param_1 + 0xd9b4) + 0x520;
                      }
                      iVar12 = FUN_100e92b8(iVar12,*piVar1,0,0xa0,0);
                      *(int *)(param_1 + 0xda54) = iVar12;
                      if (iVar12 != 0) {
                        iVar12 = 0;
                        if (*(int *)(param_1 + 0xd9b4) != 0) {
                          iVar12 = *(int *)(param_1 + 0xd9b4) + 0x520;
                        }
                        iVar12 = FUN_100e92b8(iVar12,*piVar1,0,0x440,0);
                        *(int *)(param_1 + 0xd9e8) = iVar12;
                        if (iVar12 != 0) {
                          iVar12 = 0;
                          if (*(int *)(param_1 + 0xd9b4) != 0) {
                            iVar12 = *(int *)(param_1 + 0xd9b4) + 0x520;
                          }
                          iVar12 = FUN_100e92b8(iVar12,*piVar1,0,0x80,0);
                          *(int *)(param_1 + 0xda5c) = iVar12;
                          if (iVar12 != 0) {
                            iVar12 = 0;
                            if (*(int *)(param_1 + 0xd9b4) != 0) {
                              iVar12 = *(int *)(param_1 + 0xd9b4) + 0x520;
                            }
                            iVar12 = FUN_100e92b8(iVar12,*piVar1,0,
                                                  *(int *)(param_1 + 0x7c) + 0xffU & 0xffffff00,0);
                            *(int *)(param_1 + 0xda58) = iVar12;
                            if (iVar12 != 0) {
                              iVar12 = 0;
                              if (*(int *)(param_1 + 0xd9b4) != 0) {
                                iVar12 = *(int *)(param_1 + 0xd9b4) + 0x520;
                              }
                              iVar12 = FUN_100e92b8(iVar12,*piVar1,0,0x10,0);
                              *(int *)(param_1 + 0xda60) = iVar12;
                              if (iVar12 != 0) {
                                FUN_100e1060(*(int *)(*(int *)(param_1 + 0xd9b8) + 0x130c) + 4,0);
                                FUN_1005e9c0(param_1);
                                FUN_100ff690(param_1 + 0xda70,0,0x400);
                                *(undefined4 *)(param_1 + 0xda70) =
                                     *(undefined4 *)(param_1 + 0xd9c0);
                                *(undefined4 *)(param_1 + 0xdaa0) = 2;
                                uVar13 = (*pcVar9)();
                                uVar15 = (*extraout_w11_01)(uVar13);
                                *(undefined8 *)(param_1 + 0xdae8) = uVar15;
                                uVar5 = *(uint *)(*(int *)(param_1 + 0xd9c4) + 0xc0);
                                *(uint *)(param_1 + 0xdb48) = uVar5;
                                local_7c = *(int *)(*(int *)(param_1 + 0xd9b8) + 0x15d8);
                                uVar13 = (*pcVar9)();
                                (*extraout_w11_02)(uVar13,&local_80);
                                uVar2 = uVar5 & 0xffff;
                                local_80 = local_80 + *(int *)(local_7c + 0x18) * uVar2;
                                *(int *)(param_1 + 0xdb88) = local_80;
                                *(uint *)(param_1 + 0xdb4c) = uVar5;
                                local_7c = *(int *)(*(int *)(param_1 + 0xd9b8) + 0x15d8);
                                uVar13 = (*pcVar9)();
                                (*extraout_w11_03)(uVar13,&local_80);
                                local_80 = local_80 + *(int *)(local_7c + 0x18) * uVar2;
                                *(int *)(param_1 + 0xdb8c) = local_80;
                                *(uint *)(param_1 + 0xdb50) = uVar5;
                                local_7c = *(int *)(*(int *)(param_1 + 0xd9b8) + 0x15d8);
                                uVar13 = (*pcVar9)();
                                (*extraout_w11_04)(uVar13,&local_80);
                                local_80 = local_80 + *(int *)(local_7c + 0x18) * uVar2;
                                *(int *)(param_1 + 0xdb90) = local_80;
                                *(uint *)(param_1 + 0xdb54) = uVar5;
                                local_7c = *(int *)(*(int *)(param_1 + 0xd9b8) + 0x15d8);
                                uVar13 = (*pcVar9)();
                                (*extraout_w11_05)(uVar13,&local_80);
                                local_80 = local_80 + *(int *)(local_7c + 0x18) * uVar2;
                                *(int *)(param_1 + 0xdb94) = local_80;
                                *(uint *)(param_1 + 0xdb58) = uVar5;
                                local_7c = *(int *)(*(int *)(param_1 + 0xd9b8) + 0x15d8);
                                uVar13 = (*pcVar9)();
                                (*extraout_w11_06)(uVar13,&local_80);
                                local_80 = local_80 + *(int *)(local_7c + 0x18) * uVar2;
                                *(int *)(param_1 + 0xdb98) = local_80;
                                *(uint *)(param_1 + 0xdb5c) = uVar5;
                                local_7c = *(int *)(*(int *)(param_1 + 0xd9b8) + 0x15d8);
                                uVar13 = (*pcVar9)();
                                (*extraout_w11_07)(uVar13,&local_80);
                                local_80 = local_80 + *(int *)(local_7c + 0x18) * uVar2;
                                *(int *)(param_1 + 0xdb9c) = local_80;
                                *(uint *)(param_1 + 0xdb60) = uVar5;
                                local_7c = *(int *)(*(int *)(param_1 + 0xd9b8) + 0x15d8);
                                uVar13 = (*pcVar9)();
                                (*extraout_w11_08)(uVar13,&local_80);
                                local_80 = local_80 + *(int *)(local_7c + 0x18) * uVar2;
                                *(int *)(param_1 + 0xdba0) = local_80;
                                *(uint *)(param_1 + 0xdb64) = uVar5;
                                iVar12 = *(int *)(*(int *)(param_1 + 0xd9b8) + 0x15d8);
                                uVar13 = (*pcVar9)();
                                (*extraout_w11_09)(uVar13,&local_80);
                                *(uint *)(param_1 + 0xdba4) =
                                     local_80 + *(int *)(iVar12 + 0x18) * uVar2;
                                *(undefined4 *)(param_1 + 0xdaa8) = 1;
                                *(undefined8 *)(param_1 + 0xdab0) = 0;
                                *(undefined8 *)(param_1 + 0xdab8) = 0;
                                *(undefined8 *)(param_1 + 56000) = 0;
                                *(undefined8 *)(param_1 + 0xdac8) = 0;
                                *(undefined4 *)(param_1 + 0xdce0) = 0;
                                *(undefined4 *)(param_1 + 0xdc98) =
                                     *(undefined4 *)(param_1 + 0xd9d4);
                                *(undefined4 *)(param_1 + 0xdcd8) =
                                     *(undefined4 *)(param_1 + 0xd9d0);
                                *(undefined4 *)(param_1 + 0xda14) =
                                     *(undefined4 *)(param_1 + 0xd9b8);
                                FUN_1004e260(param_1,1,1,0);
                                return 1;
                              }
                              if (*(int *)(param_1 + 0xda58) != 0) {
                                FUN_10046cd0(*(int *)(param_1 + 0xda58),1);
                              }
                            }
                            if (*(int *)(param_1 + 0xda5c) != 0) {
                              FUN_10046cd0(*(int *)(param_1 + 0xda5c),1);
                            }
                          }
                          if (*(int *)(param_1 + 0xd9e8) != 0) {
                            FUN_10046cd0(*(int *)(param_1 + 0xd9e8),1);
                          }
                        }
                        if (*(int *)(param_1 + 0xda54) != 0) {
                          FUN_10046cd0(*(int *)(param_1 + 0xda54),1);
                        }
                      }
                    }
                    uVar13 = (*pcVar9)();
                    (*extraout_w11_00)(uVar13);
                    *(undefined4 *)(param_1 + 0xd9e0) = 0;
                  }
                  if (*(int *)(param_1 + 0xd9e4) != 0) {
                    FUN_10046cd0(*(int *)(param_1 + 0xd9e4),1);
                  }
                  *(undefined4 *)(param_1 + 0xd9e4) = 0;
                }
                if (*(int *)(param_1 + 0xd9dc) != 0) {
                  FUN_10046cd0(*(int *)(param_1 + 0xd9dc),1);
                }
                *(undefined4 *)(param_1 + 0xd9dc) = 0;
              }
              if (*(int *)(param_1 + 0xd9d0) != 0) {
                FUN_10046cd0(*(int *)(param_1 + 0xd9d0),1);
              }
              *(undefined4 *)(param_1 + 0xd9d0) = 0;
            }
            if (*(int *)(param_1 + 0xd9d4) != 0) {
              FUN_10046cd0(*(int *)(param_1 + 0xd9d4),1);
            }
            *(undefined4 *)(param_1 + 0xd9d4) = 0;
          }
          if (*(int *)(param_1 + 0xd9cc) != 0) {
            FUN_10046ed0(*(int *)(param_1 + 0xd9cc));
          }
          *(undefined4 *)(param_1 + 0xd9cc) = 0;
        }
        if (*(int *)(param_1 + 0xd9c8) != 0) {
          FUN_10046ed0(*(int *)(param_1 + 0xd9c8));
        }
        *(undefined4 *)(param_1 + 0xd9c8) = 0;
      }
      FUN_100fed00(*(undefined4 *)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x1c) = 0;
      FUN_100fed00(*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  FUN_100dafb0(*(undefined4 *)(param_1 + 0xd9b4));
LAB_10046c9c:
  *(undefined4 *)(param_1 + 0xd9b4) = 0;
  return 0;
}

