/*
 * FUN_10041cd0 at 10041cd0
 * undefined FUN_10041cd0(void)
 * Address ranges: 10041cd0-100423ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10041cd0(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
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
  int local_120;
  int local_11c;
  undefined *local_118;
  undefined8 local_114;
  int local_108 [6];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  int local_70;
  
  uVar8 = DAT_10175b50;
  puVar5 = PTR_s_DGD3D11ROOT_1016d160;
  uVar6 = (*(code *)PTR_FUN_1016c09c)(0);
  iVar7 = (*(code *)PTR_FUN_1016c1ac)(uVar6,puVar5,auStack_78);
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((iVar7 == 0) || (local_70 == 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    local_70 = (*extraout_w11)(uVar8,0);
    if (local_70 == 0) goto LAB_1004238c;
  }
  piVar1 = (int *)(local_70 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  *(int *)(param_1 + 0xf6b0) = local_70;
  uVar9 = FUN_100732d0(param_1,param_2);
  if ((uVar9 & 1) != 0) {
    piVar1 = (int *)(param_1 + 0x10);
    local_108[5] = 0;
    *(int *)(param_1 + 0xf6b4) = *(int *)(param_1 + 0xf6b0) + *piVar1 * 0x1510 + 0x510;
    *(int *)(param_1 + 0xf6dc) = *(int *)(param_1 + 0xf6b0);
    *(int *)(param_1 + 0xf6e0) = *piVar1;
    *(undefined4 *)(param_1 + 0xf710) = *(undefined4 *)(param_1 + 0xf6b0);
    *(int *)(param_1 + 0xf714) = *piVar1;
    *(undefined1 *)(param_1 + 0xf718) = *(undefined1 *)(param_1 + 0xc);
    local_108[0] = *(int *)(param_1 + 0x74) << 0xc;
    local_108[1] = 2;
    local_108[2] = 1;
    local_108[3] = 0x10000;
    local_108[4] = 0;
    uVar8 = (*pcVar4)();
    iVar7 = (*extraout_w11_00)(uVar8,local_108,0);
    if (-1 < iVar7) {
      local_e0 = 0;
      local_f0 = 0x200004000;
      uStack_e8 = 0x1000000000002;
      uVar8 = (*pcVar4)();
      iVar7 = (*extraout_w11_01)(uVar8,&local_f0,0);
      if (-1 < iVar7) {
        iVar7 = FUN_10042c08(param_1,0xc20);
        *(int *)(param_1 + 0xf6c4) = iVar7;
        if (iVar7 != 0) {
          local_d8 = 0x8010;
          uStack_d0 = 4;
          local_c8 = 0x801000000000;
          uVar8 = (*pcVar4)();
          iVar7 = (*extraout_w11_02)(uVar8,&local_d8,0);
          if (-1 < iVar7) {
            local_114 = 0;
            local_c0 = 0x100000970;
            uStack_b8 = 4;
            local_b0 = 0x97000000000;
            local_118 = &DAT_1016e3d0;
            uVar8 = (*pcVar4)();
            iVar7 = (*extraout_w11_03)(uVar8,&local_c0,&local_118);
            if (-1 < iVar7) {
              uVar8 = (*pcVar4)(**(undefined4 **)(param_1 + 0xf6b4),extraout_x1,param_1 + 0xf6d8);
              iVar7 = (*extraout_w11_04)(uVar8,&DAT_1016e1d8);
              if (-1 < iVar7) {
                local_120 = 0;
                *(undefined4 *)(param_1 + 0xf700) = *(undefined4 *)(param_1 + 0xf6b0);
                *(int *)(param_1 + 0xf704) = *piVar1;
                local_a8 = 0x2000002f0;
                uStack_a0 = 0x1000000000004;
                local_98 = 0x2f000000000;
                uVar8 = (*pcVar4)();
                iVar7 = (*extraout_w11_05)(uVar8,&local_a8,0,&local_120);
                if (iVar7 < 0) {
LAB_100421a8:
                  *(undefined4 *)(param_1 + 0xf730) = 0;
                }
                else {
                  *(int *)(param_1 + 0xf730) = local_120;
                  if (local_120 != 0) {
                    local_11c = 0;
                    local_90 = 0x2000004d0;
                    uStack_88 = 0x1000000000004;
                    local_80 = 0x4d000000000;
                    uVar8 = (*pcVar4)();
                    iVar7 = (*extraout_w11_06)(uVar8,&local_90,0,&local_11c);
                    if (iVar7 < 0) {
LAB_1004217c:
                      *(undefined4 *)(param_1 + 0xf744) = 0;
                    }
                    else {
                      *(int *)(param_1 + 0xf744) = local_11c;
                      if (local_11c != 0) {
                        iVar7 = FUN_10042c08(param_1,0xec0);
                        *(int *)(param_1 + 0xf738) = iVar7;
                        if (iVar7 != 0) {
                          iVar7 = FUN_10042c08(param_1,*(undefined4 *)(param_1 + 0x7c));
                          *(int *)(param_1 + 0xf734) = iVar7;
                          if (iVar7 != 0) {
                            iVar7 = FUN_10042c08(param_1,0x100);
                            *(int *)(param_1 + 0xf73c) = iVar7;
                            if (iVar7 != 0) {
                              *(undefined4 *)(param_1 + 0xf748) =
                                   *(undefined4 *)
                                    (*(int *)(param_1 + 0xf6b0) + *piVar1 * 0x1510 + 0x520);
                              FUN_100733d0(param_1);
                              FUN_101325d0(param_1 + 0xf74c,0,0xae8);
                              *(undefined1 *)(param_1 + 0x10230) = 1;
                              *(undefined4 *)(param_1 + 0xf9d8) = *(undefined4 *)(param_1 + 0xf6d4);
                              *(undefined4 *)(param_1 + 0xfa18) = *(undefined4 *)(param_1 + 0xf6d0);
                              *(undefined4 *)(param_1 + 0x10104) = 1;
                              FUN_1010f6c0(*(undefined4 *)(param_1 + 0xf6b0),extraout_x1_00,param_1)
                              ;
                              FUN_10047cc0(param_1,1,1,0);
                              (*(code *)PTR_FUN_1016c0c0)(*(int *)(param_1 + 0xf6b0) + 0x4a0);
                              return 1;
                            }
                            uVar8 = (*pcVar4)();
                            (*extraout_w11_07)(uVar8);
                            *(undefined4 *)(param_1 + 0xf734) = 0;
                          }
                          uVar8 = (*pcVar4)();
                          (*extraout_w11_08)(uVar8);
                          *(undefined4 *)(param_1 + 0xf738) = 0;
                        }
                        uVar8 = (*pcVar4)();
                        (*extraout_w11_09)(uVar8);
                        goto LAB_1004217c;
                      }
                    }
                    uVar8 = (*pcVar4)();
                    (*extraout_w11_10)(uVar8);
                    goto LAB_100421a8;
                  }
                }
                uVar8 = (*pcVar4)();
                (*extraout_w11_11)(uVar8);
                *(undefined4 *)(param_1 + 0xf6d8) = 0;
              }
              uVar8 = (*pcVar4)();
              (*extraout_w11_12)(uVar8);
              *(undefined4 *)(param_1 + 0xf6c8) = 0;
            }
            uVar8 = (*pcVar4)();
            (*extraout_w11_13)(uVar8);
            *(undefined4 *)(param_1 + 0xf6cc) = 0;
          }
          uVar8 = (*pcVar4)();
          (*extraout_w11_14)(uVar8);
          *(undefined4 *)(param_1 + 0xf6c4) = 0;
        }
        uVar8 = (*pcVar4)();
        (*extraout_w11_15)(uVar8);
        *(undefined4 *)(param_1 + 0xf6d0) = 0;
      }
      uVar8 = (*pcVar4)();
      (*extraout_w11_16)(uVar8);
      *(undefined4 *)(param_1 + 0xf6d4) = 0;
    }
    FUN_101322d0(*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_101322d0(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_1010d6f0(*(undefined4 *)(param_1 + 0xf6b0));
LAB_1004238c:
  *(undefined4 *)(param_1 + 0xf6b0) = 0;
  return 0;
}

