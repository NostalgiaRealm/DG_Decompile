/*
 * FUN_1001dd60 at 1001dd60
 * undefined FUN_1001dd60(void)
 * Address ranges: 1001dd60-1001e80f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001dd60(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  code *pcVar13;
  undefined *puVar14;
  char cVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined8 uVar19;
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
  int local_a0;
  int *local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  undefined1 auStack_78 [8];
  int local_70;
  
  uVar18 = DAT_100acbc0;
  puVar14 = PTR_s_DGD3D12ROOT_100a2020;
  uVar16 = (*(code *)PTR_FUN_100a1028)(0);
  iVar17 = (*(code *)PTR_FUN_100a1084)(uVar16,puVar14,auStack_78);
  pcVar13 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((iVar17 == 0) || (local_70 == 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    local_70 = (*extraout_w11)(uVar18,0);
    if (local_70 == 0) goto LAB_1001e7ec;
  }
  piVar1 = (int *)(local_70 + 8);
  do {
    cVar15 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar12) {
      *piVar1 = *piVar1 + 1;
      cVar15 = ExclusiveMonitorsStatus();
    }
  } while (cVar15 != '\0');
  DataMemoryBarrier(2,3);
  piVar4 = (int *)(param_1 + 0x1d50);
  *piVar4 = local_70;
  iVar17 = FUN_10081da0(0x20000);
  piVar1 = (int *)(param_1 + 0x18);
  *piVar1 = iVar17;
  if (iVar17 != 0) {
    iVar17 = FUN_10081da0(0x2000);
    piVar2 = (int *)(param_1 + 0x1c);
    *piVar2 = iVar17;
    if (iVar17 != 0) {
      FUN_100968f0(param_1 + 0x20,0,8);
      piVar3 = (int *)(param_1 + 0x10);
      iVar17 = *piVar4 + *piVar3 * 0x16c0;
      piVar5 = (int *)(param_1 + 0x1d54);
      *piVar5 = iVar17 + 0x6c0;
      *(int *)(param_1 + 0x1d58) = *piVar4 + *piVar3 * 0x18 + 0x520;
      FUN_100816d8(iVar17 + 0x1880);
      *(int *)(param_1 + 0x1d88) = *piVar4;
      *(int *)(param_1 + 0x1d8c) = *piVar3;
      *(int *)(param_1 + 0x1db4) = *piVar4;
      *(int *)(param_1 + 0x1db8) = *piVar3;
      *(undefined1 *)(param_1 + 0x1dbc) = *(undefined1 *)(param_1 + 0xc);
      local_7c = (int *)(param_1 + 0x1d60);
      iVar17 = *(int *)(*local_7c + 0xd8);
      local_84 = (int *)(param_1 + 0x1d5c);
      *local_84 = iVar17;
      if (iVar17 == 0) goto LAB_1001e738;
      iVar17 = 0;
      if (*piVar4 != 0) {
        iVar17 = *piVar4 + 0x520;
      }
      iVar17 = FUN_10076ad0(iVar17,*piVar3,0,0x200,1);
      local_88 = (int *)(param_1 + 0x1d64);
      *local_88 = iVar17;
      if (iVar17 != 0) {
        iVar17 = 0;
        if (*piVar4 != 0) {
          iVar17 = *piVar4 + 0x520;
        }
        iVar17 = FUN_10076ad0(iVar17,*piVar3,1,0x200,1);
        local_8c = (int *)(param_1 + 0x1d68);
        *local_8c = iVar17;
        if (iVar17 != 0) {
          iVar9 = *piVar4;
          iVar11 = *(int *)(param_1 + 0x74) << 0xc;
          *(int *)(param_1 + 0x1d74) = iVar11;
          iVar17 = 0;
          if (iVar9 != 0) {
            iVar17 = iVar9 + 0x508;
          }
          iVar8 = 0;
          if (iVar9 != 0) {
            iVar8 = iVar9 + 0x520;
          }
          iVar17 = FUN_10076e00(iVar8,*piVar3,*piVar5 + 0x1370,iVar11,iVar17);
          local_98 = (int *)(param_1 + 0x1d70);
          *local_98 = iVar17;
          if (iVar17 != 0) {
            iVar9 = *piVar4;
            iVar17 = 0;
            if (iVar9 != 0) {
              iVar17 = iVar9 + 0x508;
            }
            iVar11 = 0;
            if (iVar9 != 0) {
              iVar11 = iVar9 + 0x520;
            }
            iVar17 = FUN_10076e00(iVar11,*piVar3,*piVar5 + 0x13d0,0x4000,iVar17);
            local_9c = (int *)(param_1 + 0x1d6c);
            *local_9c = iVar17;
            if (iVar17 != 0) {
              iVar17 = 0;
              if (*piVar4 != 0) {
                iVar17 = *piVar4 + 0x520;
              }
              iVar17 = FUN_10076e00(iVar17,*piVar3,0,0xe90,0);
              local_90 = (int *)(param_1 + 0x1d78);
              *local_90 = iVar17;
              if (iVar17 != 0) {
                iVar17 = 0;
                if (*piVar4 != 0) {
                  iVar17 = *piVar4 + 0x520;
                }
                iVar17 = FUN_10076e00(iVar17,*piVar3,*piVar5 + 0x1310,0x400,0);
                local_94 = (int *)(param_1 + 0x1d80);
                *local_94 = iVar17;
                if (iVar17 != 0) {
                  iVar17 = FUN_10071900(*piVar4 + 0x520,*piVar3,0x960);
                  piVar6 = (int *)(param_1 + 0x1d7c);
                  *piVar6 = iVar17;
                  local_80 = piVar6;
                  if (iVar17 != 0) {
                    cVar15 = FUN_10072fb0(*(undefined4 *)(*piVar5 + 0x130c),iVar17,*piVar5 + 0x1430)
                    ;
                    if (cVar15 != '\0') {
                      FUN_10072268(*(undefined4 *)(*piVar5 + 0x130c),*piVar6,0,1,0);
                      FUN_10072268(*(undefined4 *)(*piVar5 + 0x1304),*piVar6,0,1,0xc0);
                      iVar17 = 0;
                      if (*piVar4 != 0) {
                        iVar17 = *piVar4 + 0x520;
                      }
                      uVar18 = FUN_10076e00(iVar17,*piVar3,0,0x440,0);
                      *(undefined4 *)(param_1 + 0x1d84) = uVar18;
                      FUN_10071e00(*(int *)(*piVar5 + 0x130c) + 4,0);
                      FUN_10031e60(param_1);
                      FUN_10081f10((int *)(param_1 + 0x1df8),0,1000);
                      *(int *)(param_1 + 0x1df8) = *local_84;
                      *(undefined4 *)(param_1 + 0x1e28) = 2;
                      uVar18 = (*pcVar13)();
                      uVar19 = (*extraout_w11_00)(uVar18);
                      *(undefined8 *)(param_1 + 0x1e70) = uVar19;
                      uVar10 = *(uint *)(*local_7c + 200);
                      *(uint *)(param_1 + 0x1ed0) = uVar10;
                      iVar17 = *(int *)(*piVar5 + 0x15d8);
                      uVar18 = (*pcVar13)();
                      (*extraout_w11_01)(uVar18,&local_a0);
                      uVar7 = uVar10 & 0xffff;
                      local_a0 = local_a0 + *(int *)(iVar17 + 0x18) * uVar7;
                      *(int *)(param_1 + 0x1f10) = local_a0;
                      *(uint *)(param_1 + 0x1ed4) = uVar10;
                      iVar17 = *(int *)(*piVar5 + 0x15d8);
                      uVar18 = (*pcVar13)();
                      (*extraout_w11_02)(uVar18,&local_a0);
                      local_a0 = local_a0 + *(int *)(iVar17 + 0x18) * uVar7;
                      *(int *)(param_1 + 0x1f14) = local_a0;
                      *(uint *)(param_1 + 0x1ed8) = uVar10;
                      iVar17 = *(int *)(*piVar5 + 0x15d8);
                      uVar18 = (*pcVar13)();
                      (*extraout_w11_03)(uVar18,&local_a0);
                      local_a0 = local_a0 + *(int *)(iVar17 + 0x18) * uVar7;
                      *(int *)(param_1 + 0x1f18) = local_a0;
                      *(uint *)(param_1 + 0x1edc) = uVar10;
                      iVar17 = *(int *)(*piVar5 + 0x15d8);
                      uVar18 = (*pcVar13)();
                      (*extraout_w11_04)(uVar18,&local_a0);
                      local_a0 = local_a0 + *(int *)(iVar17 + 0x18) * uVar7;
                      *(int *)(param_1 + 0x1f1c) = local_a0;
                      *(uint *)(param_1 + 0x1ee0) = uVar10;
                      iVar17 = *(int *)(*piVar5 + 0x15d8);
                      uVar18 = (*pcVar13)();
                      (*extraout_w11_05)(uVar18,&local_a0);
                      local_a0 = local_a0 + *(int *)(iVar17 + 0x18) * uVar7;
                      *(int *)(param_1 + 0x1f20) = local_a0;
                      *(uint *)(param_1 + 0x1ee4) = uVar10;
                      iVar17 = *(int *)(*piVar5 + 0x15d8);
                      uVar18 = (*pcVar13)();
                      (*extraout_w11_06)(uVar18,&local_a0);
                      local_a0 = local_a0 + *(int *)(iVar17 + 0x18) * uVar7;
                      *(int *)(param_1 + 0x1f24) = local_a0;
                      *(uint *)(param_1 + 0x1ee8) = uVar10;
                      iVar17 = *(int *)(*piVar5 + 0x15d8);
                      uVar18 = (*pcVar13)();
                      (*extraout_w11_07)(uVar18,&local_a0);
                      local_a0 = local_a0 + *(int *)(iVar17 + 0x18) * uVar7;
                      *(int *)(param_1 + 0x1f28) = local_a0;
                      *(uint *)(param_1 + 0x1eec) = uVar10;
                      iVar17 = *(int *)(*piVar5 + 0x15d8);
                      uVar18 = (*pcVar13)();
                      (*extraout_w11_08)(uVar18,&local_a0);
                      *(uint *)(param_1 + 0x1f2c) = local_a0 + *(int *)(iVar17 + 0x18) * uVar7;
                      *(undefined4 *)(param_1 + 0x1e30) = 1;
                      *(undefined8 *)(param_1 + 0x1e38) = 0;
                      *(undefined8 *)(param_1 + 0x1e40) = 0;
                      *(undefined8 *)(param_1 + 0x1e48) = 0;
                      *(undefined8 *)(param_1 + 0x1e50) = 0;
                      *(undefined4 *)(param_1 + 0x206c) = 0;
                      *(int *)(param_1 + 0x2024) = *local_98;
                      *(int *)(param_1 + 0x2064) = *local_9c;
                      *(int *)(param_1 + 0x1db0) = *piVar5;
                      FUN_10025ea0(param_1,1,1,0);
                      return 1;
                    }
                    uVar18 = (*pcVar13)();
                    (*extraout_w11_09)(uVar18);
                    *piVar6 = 0;
                  }
                  if (*local_94 != 0) {
                    FUN_1001e820(*local_94,1);
                  }
                  *local_94 = 0;
                }
                if (*local_90 != 0) {
                  FUN_1001e820(*local_90,1);
                }
                *local_90 = 0;
              }
              if (*local_9c != 0) {
                FUN_1001e820(*local_9c,1);
              }
              *local_9c = 0;
            }
            if (*local_98 != 0) {
              FUN_1001e820(*local_98,1);
            }
            *local_98 = 0;
          }
          if (*local_8c != 0) {
            FUN_1001ea20(*local_8c);
          }
          *local_8c = 0;
        }
        if (*local_88 != 0) {
          FUN_1001ea20(*local_88);
        }
        *local_88 = 0;
      }
      FUN_10081dc0(*piVar2);
      *piVar2 = 0;
    }
    FUN_10081dc0(*piVar1);
    *piVar1 = 0;
  }
LAB_1001e738:
  iVar17 = *piVar4;
  if (iVar17 != 0) {
    piVar1 = (int *)(iVar17 + 8);
    do {
      iVar9 = *piVar1;
      cVar15 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar12) {
        *piVar1 = iVar9 + -1;
        cVar15 = ExclusiveMonitorsStatus();
      }
    } while (cVar15 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar9 + -1 == 0) {
      if (*(short *)(iVar17 + 0xc) != 0) {
        uVar18 = (*(code *)PTR_FUN_100a1028)(0);
        (*(code *)PTR_FUN_100a109c)(*(short *)(iVar17 + 0xc),uVar18);
        iVar9 = *(int *)(iVar17 + 0x10);
        if (iVar9 != 0) {
          (*(code *)PTR_FUN_100a101c)(iVar9);
          *(int *)(iVar17 + 0x10) = 0;
        }
      }
      (*pcVar13)();
      (*extraout_w11_10)(iVar17);
    }
  }
LAB_1001e7ec:
  *(undefined4 *)(param_1 + 0x1d50) = 0;
  return 0;
}

