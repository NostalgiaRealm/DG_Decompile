/*
 * FUN_10013760 at 10013760
 * undefined FUN_10013760(void)
 * Address ranges: 10013760-10013e23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10013760(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 extraout_x1;
  ulonglong uVar14;
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
  int local_104;
  int *local_100;
  int *local_fc;
  undefined *local_f8;
  undefined8 local_f4;
  int local_e8 [6];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [8];
  int local_68;
  
  uVar13 = DAT_100acbc0;
  puVar10 = PTR_s_DGD3D11ROOT_100a2010;
  uVar11 = (*(code *)PTR_FUN_100a1028)(0);
  iVar12 = (*(code *)PTR_FUN_100a1084)(uVar11,puVar10,auStack_70);
  pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((iVar12 == 0) || (local_68 == 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    local_68 = (*extraout_w11)(uVar13,0);
    if (local_68 == 0) goto LAB_10013e00;
  }
  piVar1 = (int *)(local_68 + 8);
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar8) {
      *piVar1 = *piVar1 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  DataMemoryBarrier(2,3);
  piVar3 = (int *)(param_1 + 0x1d50);
  *piVar3 = local_68;
  iVar12 = FUN_10081da0(0x20000);
  piVar1 = (int *)(param_1 + 0x18);
  *piVar1 = iVar12;
  if (iVar12 != 0) {
    iVar12 = FUN_10081da0(0x2000);
    piVar2 = (int *)(param_1 + 0x1c);
    *piVar2 = iVar12;
    if (iVar12 != 0) {
      FUN_100968f0(param_1 + 0x20,0,8);
      local_100 = (int *)(param_1 + 0x10);
      local_e8[5] = 0;
      *(int *)(param_1 + 0x1d54) = *piVar3 + *local_100 * 0x1510 + 0x510;
      *(int *)(param_1 + 0x1d7c) = *piVar3;
      *(int *)(param_1 + 0x1d80) = *local_100;
      *(int *)(param_1 + 0x1db0) = *piVar3;
      *(int *)(param_1 + 0x1db4) = *local_100;
      *(undefined1 *)(param_1 + 0x1db8) = *(undefined1 *)(param_1 + 0xc);
      local_e8[0] = *(int *)(param_1 + 0x74) << 0xc;
      local_e8[1] = 2;
      local_e8[2] = 1;
      local_e8[3] = 0x10000;
      local_e8[4] = 0;
      puVar4 = (undefined4 *)(param_1 + 0x1d74);
      uVar13 = (*pcVar9)();
      iVar12 = (*extraout_w11_00)(uVar13,local_e8,0,puVar4);
      if (-1 < iVar12) {
        local_c0 = 0;
        local_d0 = 0x200004000;
        uStack_c8 = 0x1000000000002;
        puVar5 = (undefined4 *)(param_1 + 0x1d70);
        uVar13 = (*pcVar9)();
        iVar12 = (*extraout_w11_01)(uVar13,&local_d0,0,puVar5);
        if (-1 < iVar12) {
          iVar12 = FUN_100147a0(param_1,0xe90);
          local_fc = (int *)(param_1 + 0x1d64);
          *local_fc = iVar12;
          if (iVar12 != 0) {
            local_b8 = 0x410;
            uStack_b0 = 4;
            local_a8 = 0x41000000000;
            uVar14 = ZEXT48((undefined4 *)(param_1 + 0x1d6c));
            uVar13 = (*pcVar9)();
            iVar12 = (*extraout_w11_02)(uVar13,&local_b8,0,uVar14 & 0xffffffff);
            if (-1 < iVar12) {
              local_f4 = 0;
              local_a0 = 0x100000970;
              uStack_98 = 4;
              local_90 = 0x97000000000;
              local_f8 = &DAT_100a2360;
              uVar14 = ZEXT48((undefined4 *)(param_1 + 0x1d68));
              uVar13 = (*pcVar9)();
              iVar12 = (*extraout_w11_03)(uVar13,&local_a0,&local_f8,uVar14 & 0xffffffff);
              if (-1 < iVar12) {
                uVar14 = ZEXT48((undefined4 *)(param_1 + 0x1d78));
                uVar13 = (*pcVar9)();
                iVar12 = (*extraout_w11_04)(uVar13,&DAT_100a2138,uVar14 & 0xffffffff);
                if (-1 < iVar12) {
                  local_104 = 0;
                  iVar12 = *local_100;
                  *(int *)(param_1 + 0x1da0) = *piVar3;
                  *(int *)(param_1 + 0x1da4) = iVar12;
                  local_88 = 0x200000440;
                  uStack_80 = 0x1000000000004;
                  local_78 = 0x44000000000;
                  uVar13 = (*pcVar9)();
                  iVar12 = (*extraout_w11_05)(uVar13,&local_88,0,&local_104);
                  if (iVar12 < 0) {
                    *(int *)(param_1 + 0x1dcc) = 0;
                  }
                  else {
                    *(int *)(param_1 + 0x1dcc) = local_104;
                    if (local_104 != 0) {
                      *(undefined4 *)(param_1 + 0x1dd0) =
                           *(undefined4 *)(*piVar3 + *local_100 * 0x1510 + 0x520);
                      FUN_10031e60(param_1);
                      FUN_10081f10(param_1 + 0x1dd4,0,0x4a0);
                      *(undefined1 *)(param_1 + 0x2270) = 1;
                      *(undefined4 *)(param_1 + 0x1ef8) = *puVar4;
                      *(undefined4 *)(param_1 + 0x1f38) = *puVar5;
                      FUN_10070ee8(*piVar3,extraout_x1,param_1);
                      FUN_10017758(param_1,1,1,0);
                      (*(code *)PTR_FUN_100a1044)(*piVar3 + 0x4a0);
                      return 1;
                    }
                  }
                  uVar13 = (*pcVar9)();
                  (*extraout_w11_06)(uVar13);
                  *(undefined4 *)(param_1 + 0x1d78) = 0;
                }
                uVar13 = (*pcVar9)();
                (*extraout_w11_07)(uVar13);
                *(undefined4 *)(param_1 + 0x1d68) = 0;
              }
              uVar13 = (*pcVar9)();
              (*extraout_w11_08)(uVar13);
              *(undefined4 *)(param_1 + 0x1d6c) = 0;
            }
            uVar13 = (*pcVar9)();
            (*extraout_w11_09)(uVar13);
            *local_fc = 0;
          }
          uVar13 = (*pcVar9)();
          (*extraout_w11_10)(uVar13);
          *puVar5 = 0;
        }
        uVar13 = (*pcVar9)();
        (*extraout_w11_11)(uVar13);
        *puVar4 = 0;
      }
      FUN_10081dc0(*piVar2);
      *piVar2 = 0;
    }
    FUN_10081dc0(*piVar1);
    *piVar1 = 0;
  }
  iVar12 = *piVar3;
  if (iVar12 != 0) {
    piVar1 = (int *)(iVar12 + 8);
    do {
      iVar6 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar8) {
        *piVar1 = iVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar6 + -1 == 0) {
      if (*(short *)(iVar12 + 0xc) != 0) {
        uVar13 = (*(code *)PTR_FUN_100a1028)(0);
        (*(code *)PTR_FUN_100a109c)(*(short *)(iVar12 + 0xc),uVar13);
        iVar6 = *(int *)(iVar12 + 0x10);
        if (iVar6 != 0) {
          (*(code *)PTR_FUN_100a101c)(iVar6);
          *(int *)(iVar12 + 0x10) = 0;
        }
      }
      (*pcVar9)();
      (*extraout_w11_12)(iVar12);
    }
  }
LAB_10013e00:
  *(undefined4 *)(param_1 + 0x1d50) = 0;
  return 0;
}

