/*
 * FUN_10032fc0 at 10032fc0
 * undefined FUN_10032fc0(void)
 * Address ranges: 10032fc0-10033b4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10032fc0(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  code *pcVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar10;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
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
  code *extraout_w11_18;
  code *extraout_w11_19;
  code *extraout_w11_20;
  code *extraout_w11_21;
  code *extraout_w11_22;
  code *extraout_w11_23;
  uint uVar11;
  undefined1 auVar12 [16];
  int local_1d0;
  int local_1cc;
  code *local_1c8;
  code *local_1c4;
  undefined4 *local_1c0;
  int *local_1bc;
  int *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  int local_198 [4];
  int local_188 [4];
  undefined *local_178;
  undefined8 local_174;
  int local_168 [6];
  undefined8 local_150;
  undefined4 local_148;
  code *pcStack_144;
  undefined8 local_140;
  int local_138 [6];
  undefined8 local_120;
  undefined4 local_118;
  code *pcStack_114;
  undefined8 local_110;
  uint local_108 [6];
  undefined8 local_f0;
  undefined4 local_e8;
  uint uStack_e4;
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
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  *(undefined4 *)(param_1 + 8) = param_3;
  uVar7 = DAT_100aaa5c;
  *(int *)(param_1 + 4) = param_2;
  local_1b8 = param_4;
  iVar6 = FUN_10071c28(uVar7,&PTR_s_DGD3D11ROOT_100a92e8,0);
  piVar1 = (int *)(param_1 + 0x3680);
  *piVar1 = iVar6;
  if (iVar6 == 0) {
    return 0;
  }
  local_1bc = piVar1;
  FUN_10073c00(iVar6,extraout_x1,param_1);
  auVar12 = FUN_1005f168(param_2);
  uVar9 = FUN_1006d588(*piVar1,*(int *)(param_1 + 0x3684),auVar12._0_8_ & 0xffffffff,
                       auVar12._8_8_ & 0xffffffff,auVar12._0_8_ >> 0x20,auVar12._8_8_ >> 0x20 & 0xff
                      );
  if ((uVar9 & 1) == 0) goto LAB_10033b0c;
  piVar2 = (int *)(param_1 + 0x3688);
  local_1d0 = 0;
  local_1cc = 0;
  *piVar2 = *piVar1 + *(int *)(param_1 + 0x3684) * 0x1510 + 0x510;
  pcVar4 = *(code **)(param_1 + 0xdc);
  local_1c4 = pcVar4;
  uVar9 = FUN_10017568(uVar9,pcVar4,&local_1cc,&local_1d0);
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((uVar9 & 1) == 0) goto LAB_10033b0c;
  local_168[0] = (int)(pcVar4 + 4) * 4;
  local_198[1] = 0;
  local_198[2] = 0;
  local_168[1] = 1;
  local_168[2] = 8;
  local_168[3] = 0;
  local_168[4] = 0x40;
  local_168[5] = 4;
  local_198[0] = local_1cc;
  puVar3 = (undefined4 *)(param_1 + 0x3698);
  local_1a8 = CONCAT44(local_1a8._4_4_,puVar3);
  uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar6 = (*extraout_w11)(uVar7,local_168,local_198,puVar3);
  if (iVar6 < 0) goto LAB_10033b0c;
  local_150 = 0x100000000;
  local_148 = 0;
  local_140 = 0;
  uVar9 = (ulonglong)(param_1 + 0x36a4U);
  local_1b0 = CONCAT44(local_1b0._4_4_,param_1 + 0x36a4U);
  pcStack_144 = pcVar4 + 4;
  uVar7 = (*pcVar5)();
  iVar6 = (*extraout_w11_00)(uVar7,*puVar3,&local_150,uVar9 & 0xffffffff);
  if (iVar6 < 0) goto LAB_10033ae8;
  local_188[1] = 0;
  local_188[2] = 0;
  local_d8 = 0x100040004;
  uStack_d0 = 8;
  local_c8 = 0x400000040;
  local_188[0] = local_1d0;
  pcVar4 = (code *)(param_1 + 0x3694);
  local_1c8 = pcVar4;
  uVar7 = (*pcVar5)();
  iVar6 = (*extraout_w11_01)(uVar7,&local_d8,local_188,pcVar4);
  if (iVar6 < 0) {
LAB_10033ab4:
    uVar7 = (*pcVar5)();
    (*extraout_w11_22)(uVar7);
  }
  else {
    local_b0 = 0;
    local_c0 = 0x100000000;
    uStack_b8 = 0x1000100000000;
    local_1c0 = (undefined4 *)(param_1 + 0x36a0);
    uVar9 = ZEXT48(local_1c0);
    uVar7 = (*pcVar5)();
    iVar6 = (*extraout_w11_02)(uVar7,*(undefined4 *)pcVar4,&local_c0,uVar9 & 0xffffffff);
    pcVar4 = local_1c4;
    if (iVar6 < 0) {
LAB_10033a88:
      uVar7 = (*pcVar5)();
      (*extraout_w11_21)(uVar7);
      goto LAB_10033ab4;
    }
    local_138[0] = (int)(local_1c4 + 1) * 4;
    local_138[1] = 2;
    local_138[2] = 8;
    local_138[3] = 0x10000;
    local_138[4] = 0x40;
    local_138[5] = 4;
    uVar7 = (*pcVar5)();
    iVar6 = (*extraout_w11_03)(uVar7,local_138,0,(undefined4 *)(param_1 + 0x369c));
    if (iVar6 < 0) {
LAB_10033a5c:
      uVar7 = (*pcVar5)();
      (*extraout_w11_20)(uVar7);
      goto LAB_10033a88;
    }
    pcStack_114 = pcVar4 + 1;
    local_110 = 0;
    local_118 = 0;
    local_120 = 0x100000000;
    uVar7 = (*pcVar5)();
    iVar6 = (*extraout_w11_04)(uVar7,*(undefined4 *)(param_1 + 0x369c),&local_120);
    if (iVar6 < 0) {
      uVar7 = (*pcVar5)();
      (*extraout_w11_19)(uVar7);
      goto LAB_10033a5c;
    }
    FUN_10083420(local_1d0);
    FUN_10083420(local_1cc);
    iVar6 = *(int *)(param_1 + 4);
    uVar11 = *(int *)(iVar6 + 0x33) * *(int *)(iVar6 + 0x2f);
    local_108[1] = 0;
    local_108[2] = 8;
    local_108[3] = 0;
    local_108[4] = 0x40;
    local_108[5] = 4;
    local_108[0] = uVar11;
    uVar7 = (*pcVar5)();
    iVar6 = (*extraout_w11_05)(uVar7,local_108,0,(undefined4 *)(param_1 + 0x36ac));
    if (iVar6 < 0) goto LAB_10033b0c;
    uStack_e4 = uVar11 >> 2;
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = 0x100000000;
    local_1c0 = (undefined4 *)(param_1 + 14000);
    uVar9 = ZEXT48(local_1c0);
    uVar7 = (*pcVar5)();
    iVar6 = (*extraout_w11_06)(uVar7,*(undefined4 *)(param_1 + 0x36ac),&local_f0,uVar9 & 0xffffffff)
    ;
    if (-1 < iVar6) {
      local_1c8 = (code *)(param_1 + 0x36b4);
      uVar9 = ZEXT48(local_1c8);
      *(undefined4 *)local_1c8 = 0;
      *(undefined8 *)(param_1 + 0x36c0) = 0;
      *(undefined8 *)(param_1 + 0x36b8) = 0;
      *(undefined8 *)(param_1 + 0x36d0) = 0;
      *(undefined8 *)(param_1 + 0x36c8) = 0;
      *(undefined8 *)(param_1 + 0x36e0) = 0;
      *(undefined8 *)(param_1 + 0x36d8) = 0;
      *(undefined8 *)(param_1 + 0x36f0) = 0;
      *(undefined8 *)(param_1 + 0x36e8) = 0;
      *(undefined8 *)(param_1 + 0x3700) = 0;
      *(undefined8 *)(param_1 + 0x36f8) = 0;
      *(undefined8 *)(param_1 + 0x3710) = 0;
      *(undefined8 *)(param_1 + 0x3708) = 0;
      *(undefined8 *)(param_1 + 0x3720) = 0;
      *(undefined8 *)(param_1 + 0x3718) = 0;
      *(undefined8 *)(param_1 + 0x3730) = 0;
      *(undefined8 *)(param_1 + 0x3728) = 0;
      *(undefined8 *)(param_1 + 0x3740) = 0;
      *(undefined8 *)(param_1 + 0x3738) = 0;
      *(undefined8 *)(param_1 + 0x3750) = 0;
      *(undefined8 *)(param_1 + 0x3748) = 0;
      *(undefined8 *)(param_1 + 0x3760) = 0;
      *(undefined8 *)(param_1 + 0x3758) = 0;
      *(undefined8 *)(param_1 + 0x3770) = 0;
      *(undefined8 *)(param_1 + 0x3768) = 0;
      *(undefined8 *)(param_1 + 0x3780) = 0;
      *(undefined8 *)(param_1 + 0x3778) = 0;
      *(undefined8 *)(param_1 + 0x3790) = 0;
      *(undefined8 *)(param_1 + 0x3788) = 0;
      *(undefined8 *)(param_1 + 0x37a0) = 0;
      *(undefined8 *)(param_1 + 0x3798) = 0;
      *(undefined8 *)(param_1 + 0x37b0) = 0;
      *(undefined8 *)(param_1 + 0x37a8) = 0;
      iVar6 = param_1 + 0xc000;
      if (*(char *)(param_1 + 0x2db3) != '\0') {
        local_1a8 = 0;
        uVar7 = (*pcVar5)();
        iVar6 = (*extraout_w11_07)(uVar7,&local_1a8,uVar9 & 0xffffffff);
        if (iVar6 < 0) goto LAB_10033b0c;
        local_1b0 = 4;
        uVar11 = 0;
        local_1c4 = pcVar5;
        uVar10 = extraout_x1_00;
        local_1d0 = param_1 + 0xc000;
        local_1cc = param_2;
        do {
          uVar7 = (*pcVar5)(*(undefined4 *)*piVar2,uVar10,(undefined8 *)(param_1 + 0x36b8) + uVar11)
          ;
          iVar6 = (*extraout_w11_08)(uVar7,&local_1b0);
          if (iVar6 < 0) break;
          local_1a0 = 1;
          iVar6 = param_1 + uVar11 * 8;
          uVar7 = (*local_1c4)(*(undefined4 *)*piVar2,extraout_x1_01,iVar6 + 0x36bc);
          iVar8 = (*extraout_w11_09)(uVar7,&local_1a0);
          if (iVar8 < 0) {
            uVar7 = (*pcVar5)();
            (*extraout_w11_14)(uVar7);
            *(undefined4 *)(iVar6 + 0x36b8) = 0;
            goto LAB_10033898;
          }
          uVar11 = uVar11 + 1;
          uVar10 = extraout_x1_02;
        } while (uVar11 < 0x20);
        if (uVar11 != 0x20) {
LAB_10033898:
          puVar3 = local_1c0;
          pcVar4 = local_1c8;
          if (uVar11 != 0) {
            local_1c8 = pcVar5;
            iVar6 = uVar11 << 3;
            do {
              uVar7 = (*local_1c8)();
              (*extraout_w11_15)(uVar7);
              *(undefined4 *)(iVar6 + (int)puVar3) = 0;
              uVar7 = (*pcVar5)();
              (*extraout_w11_16)(uVar7);
              *(undefined4 *)(pcVar4 + iVar6) = 0;
              uVar11 = uVar11 - 1;
              iVar6 = iVar6 + -8;
            } while (uVar11 != 0);
          }
          uVar7 = (*pcVar5)();
          (*extraout_w11_17)(uVar7);
          *(undefined4 *)pcVar4 = 0;
          goto LAB_10033b0c;
        }
        *(undefined8 *)(param_1 + 0x2d48) = 0;
        *(undefined8 *)(param_1 + 0x2d40) = 0;
        *(undefined8 *)(param_1 + 0x2d58) = 0;
        *(undefined8 *)(param_1 + 0x2d50) = 0;
        *(undefined8 *)(param_1 + 0x2d68) = 0;
        *(undefined8 *)(param_1 + 0x2d60) = 0;
        *(undefined8 *)(param_1 + 0x2d78) = 0;
        *(undefined8 *)(param_1 + 0x2d70) = 0;
        *(undefined8 *)(param_1 + 0x2d88) = 0;
        *(undefined8 *)(param_1 + 0x2d80) = 0;
        *(undefined8 *)(param_1 + 0x2d98) = 0;
        *(undefined8 *)(param_1 + 0x2d90) = 0;
        param_2 = local_1cc;
        iVar6 = local_1d0;
      }
      local_a8 = 0x2000008a0;
      uStack_a0 = 0x1000000000004;
      local_98 = 0x8a000000000;
      uVar7 = (*pcVar5)();
      iVar8 = (*extraout_w11_10)(uVar7,&local_a8,0,param_1 + 0x368c);
      if (iVar8 < 0) goto LAB_10033b0c;
      local_174 = 0;
      local_90 = 0x100000e10;
      uStack_88 = 4;
      local_80 = 0xe1000000000;
      local_178 = &DAT_100a9490;
      uVar7 = (*pcVar5)();
      iVar8 = (*extraout_w11_11)(uVar7,&local_90,&local_178);
      if (-1 < iVar8) {
        FUN_10014cd0(param_1);
        piVar1 = local_1bc;
        FUN_10017218(param_1,*local_1bc,param_2,local_1b8);
        FUN_100147e0(param_1);
        local_1d0 = param_1 + 0x37b8;
        uVar9 = FUN_1001afd0(local_1d0);
        if ((uVar9 & 1) != 0) {
          piVar2 = (int *)(param_1 + 0x4278);
          *(undefined4 *)(param_1 + 0x426c) = 0;
          *(undefined4 *)(param_1 + 0x42a0) = 0;
          local_1c8 = (code *)(param_1 + 0x4290);
          local_1c4 = (code *)(param_1 + 0x4288);
          local_1b8 = piVar2;
          uVar9 = FUN_1006f930(*(undefined4 *)(*piVar2 + 0x3680),*(undefined4 *)(*piVar2 + 0x3684),
                               DAT_100aaa5c,2,&DAT_100aa354,&DAT_100aa360,local_1c4,local_1c8);
          if ((uVar9 & 1) != 0) {
            *(undefined8 *)(param_1 + 0x427c) = 0;
            *(undefined4 *)(param_1 + 0x4284) = 0;
            local_78 = 0x200140000;
            uStack_70 = 0x1000000000001;
            local_68 = 0x5000000000;
            local_1c0 = (undefined4 *)(param_1 + 0x4298);
            uVar7 = (*pcVar5)();
            auVar12 = (*extraout_w11_12)(uVar7,&local_78,0,(undefined4 *)(param_1 + 0x4298));
            if (-1 < auVar12._0_4_) {
              local_60 = 0x200010000;
              uStack_58 = 0x1000000000002;
              local_50 = 0x400000000;
              uVar7 = (*pcVar5)();
              iVar8 = (*extraout_w11_13)(uVar7,&local_60,0);
              if (-1 < iVar8) {
                *(undefined4 *)(param_1 + 0x4180) = 0;
                *(undefined2 *)(param_1 + 0x423c) = 0;
                *(undefined1 *)(param_1 + 0x423e) = 0;
                *(undefined4 *)(param_1 + 0x4270) = 0xffffffff;
                *(undefined4 *)(*piVar2 + 0x3620) = *(undefined4 *)(param_1 + 0x4174);
                uVar7 = *(undefined4 *)(*piVar2 + 0x3688);
                *(undefined4 *)(param_1 + 0x42ac) = *(undefined4 *)(*piVar2 + 0x3680);
                *(undefined4 *)(param_1 + 0x42b0) = uVar7;
                *(undefined1 *)(param_1 + 0x42a8) = 1;
                FUN_10035540(param_1 + 0x4090,1,1);
                switch(*(undefined4 *)(param_2 + 0x33)) {
                default:
                  uVar9 = FUN_10034ae0(*(undefined4 *)(iVar6 + 0x14f0));
                  if ((uVar9 & 1) != 0) {
                    iVar6 = *local_1bc;
                    goto LAB_100339cc;
                  }
                  break;
                case 2:
                  uVar9 = FUN_10034ae0(*(undefined4 *)(iVar6 + 0x14f0));
                  if ((uVar9 & 1) != 0) {
                    uVar9 = FUN_10034ae0(*(undefined4 *)(iVar6 + 0x14f4));
                    if ((uVar9 & 1) != 0) {
LAB_1003396c:
                      iVar6 = *piVar1;
LAB_100339cc:
                      (*(code *)PTR_FUN_100a8090)(iVar6 + 0x4a0);
                      return 1;
                    }
LAB_10033974:
                    FUN_100340b8(*(undefined4 *)(iVar6 + 0x14f0));
                  }
                  break;
                case 3:
                  uVar9 = FUN_10034ae0(*(undefined4 *)(iVar6 + 0x14f0));
                  if ((uVar9 & 1) != 0) {
                    uVar9 = FUN_10034ae0(*(undefined4 *)(iVar6 + 0x14f4));
                    if ((uVar9 & 1) != 0) {
                      uVar9 = FUN_10034ae0(*(undefined4 *)(iVar6 + 0x14f8));
                      if ((uVar9 & 1) != 0) goto LAB_1003396c;
                      FUN_100340b8(*(undefined4 *)(iVar6 + 0x14f4));
                    }
                    goto LAB_10033974;
                  }
                }
                switchD_10035238::caseD_100352e8(param_1 + 0x4090);
                goto LAB_10033a20;
              }
              uVar7 = (*pcVar5)();
              auVar12 = (*extraout_w11_18)(uVar7);
              *local_1c0 = 0;
            }
            FUN_1006fac8(auVar12._0_8_,auVar12._8_8_,2,local_1c4,local_1c8);
          }
LAB_10033a20:
          FUN_1001b370(local_1d0);
        }
        FUN_10013480(param_1);
        goto LAB_10033b0c;
      }
    }
  }
LAB_10033ae8:
  uVar7 = (*pcVar5)();
  (*extraout_w11_23)(uVar7);
LAB_10033b0c:
  (*(code *)PTR_FUN_100a8090)(*local_1bc + 0x4a0);
  return 0;
}

