/*
 * FUN_100249c0 at 100249c0
 * undefined FUN_100249c0(void)
 * Address ranges: 100249c0-10025517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100249c0(int param_1,int param_2,undefined4 param_3,int *param_4)

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
  uVar7 = DAT_1009f7ac;
  *(int *)(param_1 + 4) = param_2;
  local_1b8 = param_4;
  iVar6 = FUN_10068d68(uVar7,&PTR_s_DGD3D11ROOT_1009e170,0);
  piVar1 = (int *)(param_1 + 0x3180);
  *piVar1 = iVar6;
  if (iVar6 == 0) {
    return 0;
  }
  local_1bc = piVar1;
  FUN_1006ad40(iVar6,extraout_x1,param_1);
  auVar12 = FUN_100561a8(param_2);
  uVar9 = FUN_100646c8(*piVar1,*(int *)(param_1 + 0x3184),auVar12._0_8_ & 0xffffffff,
                       auVar12._8_8_ & 0xffffffff,auVar12._0_8_ >> 0x20,auVar12._8_8_ >> 0x20 & 0xff
                      );
  if ((uVar9 & 1) == 0) goto LAB_100254d8;
  piVar2 = (int *)(param_1 + 0x3188);
  local_1d0 = 0;
  local_1cc = 0;
  *piVar2 = *piVar1 + *(int *)(param_1 + 0x3184) * 0x1510 + 0x510;
  pcVar4 = *(code **)(param_1 + 0xd8);
  local_1c4 = pcVar4;
  uVar9 = FUN_1002e4f0(uVar9,pcVar4,&local_1cc,&local_1d0);
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((uVar9 & 1) == 0) goto LAB_100254d8;
  local_168[0] = (int)(pcVar4 + 4) * 4;
  local_198[1] = 0;
  local_198[2] = 0;
  local_168[1] = 1;
  local_168[2] = 8;
  local_168[3] = 0;
  local_168[4] = 0x40;
  local_168[5] = 4;
  local_198[0] = local_1cc;
  puVar3 = (undefined4 *)(param_1 + 0x3198);
  local_1a8 = CONCAT44(local_1a8._4_4_,puVar3);
  uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar6 = (*extraout_w11)(uVar7,local_168,local_198,puVar3);
  if (iVar6 < 0) goto LAB_100254d8;
  local_150 = 0x100000000;
  local_148 = 0;
  local_140 = 0;
  uVar9 = (ulonglong)(param_1 + 0x31a4U);
  local_1b0 = CONCAT44(local_1b0._4_4_,param_1 + 0x31a4U);
  pcStack_144 = pcVar4 + 4;
  uVar7 = (*pcVar5)();
  iVar6 = (*extraout_w11_00)(uVar7,*puVar3,&local_150,uVar9 & 0xffffffff);
  if (iVar6 < 0) goto LAB_100254b4;
  local_188[1] = 0;
  local_188[2] = 0;
  local_d8 = 0x100040004;
  uStack_d0 = 8;
  local_c8 = 0x400000040;
  local_188[0] = local_1d0;
  pcVar4 = (code *)(param_1 + 0x3194);
  local_1c8 = pcVar4;
  uVar7 = (*pcVar5)();
  iVar6 = (*extraout_w11_01)(uVar7,&local_d8,local_188,pcVar4);
  if (iVar6 < 0) {
LAB_10025480:
    uVar7 = (*pcVar5)();
    (*extraout_w11_22)(uVar7);
  }
  else {
    local_b0 = 0;
    local_c0 = 0x100000000;
    uStack_b8 = 0x1000100000000;
    local_1c0 = (undefined4 *)(param_1 + 0x31a0);
    uVar9 = ZEXT48(local_1c0);
    uVar7 = (*pcVar5)();
    iVar6 = (*extraout_w11_02)(uVar7,*(undefined4 *)pcVar4,&local_c0,uVar9 & 0xffffffff);
    pcVar4 = local_1c4;
    if (iVar6 < 0) {
LAB_10025454:
      uVar7 = (*pcVar5)();
      (*extraout_w11_21)(uVar7);
      goto LAB_10025480;
    }
    local_138[0] = (int)(local_1c4 + 1) * 4;
    local_138[1] = 2;
    local_138[2] = 8;
    local_138[3] = 0x10000;
    local_138[4] = 0x40;
    local_138[5] = 4;
    uVar7 = (*pcVar5)();
    iVar6 = (*extraout_w11_03)(uVar7,local_138,0,(undefined4 *)(param_1 + 0x319c));
    if (iVar6 < 0) {
LAB_10025428:
      uVar7 = (*pcVar5)();
      (*extraout_w11_20)(uVar7);
      goto LAB_10025454;
    }
    pcStack_114 = pcVar4 + 1;
    local_110 = 0;
    local_118 = 0;
    local_120 = 0x100000000;
    uVar7 = (*pcVar5)();
    iVar6 = (*extraout_w11_04)(uVar7,*(undefined4 *)(param_1 + 0x319c),&local_120);
    if (iVar6 < 0) {
      uVar7 = (*pcVar5)();
      (*extraout_w11_19)(uVar7);
      goto LAB_10025428;
    }
    FUN_1007a4e0(local_1d0);
    FUN_1007a4e0(local_1cc);
    iVar6 = *(int *)(param_1 + 4);
    uVar11 = *(int *)(iVar6 + 0x33) * *(int *)(iVar6 + 0x2f);
    local_108[1] = 0;
    local_108[2] = 8;
    local_108[3] = 0;
    local_108[4] = 0x40;
    local_108[5] = 4;
    local_108[0] = uVar11;
    uVar7 = (*pcVar5)();
    iVar6 = (*extraout_w11_05)(uVar7,local_108,0,(undefined4 *)(param_1 + 0x31ac));
    if (iVar6 < 0) goto LAB_100254d8;
    uStack_e4 = uVar11 >> 2;
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = 0x100000000;
    local_1c0 = (undefined4 *)(param_1 + 0x31b0);
    uVar9 = ZEXT48(local_1c0);
    uVar7 = (*pcVar5)();
    iVar6 = (*extraout_w11_06)(uVar7,*(undefined4 *)(param_1 + 0x31ac),&local_f0,uVar9 & 0xffffffff)
    ;
    if (-1 < iVar6) {
      local_1c8 = (code *)(param_1 + 0x31b4);
      uVar9 = ZEXT48(local_1c8);
      *(undefined4 *)local_1c8 = 0;
      *(undefined8 *)(param_1 + 0x31c0) = 0;
      *(undefined8 *)(param_1 + 0x31b8) = 0;
      *(undefined8 *)(param_1 + 0x31d0) = 0;
      *(undefined8 *)(param_1 + 0x31c8) = 0;
      *(undefined8 *)(param_1 + 0x31e0) = 0;
      *(undefined8 *)(param_1 + 0x31d8) = 0;
      *(undefined8 *)(param_1 + 0x31f0) = 0;
      *(undefined8 *)(param_1 + 0x31e8) = 0;
      *(undefined8 *)(param_1 + 0x3200) = 0;
      *(undefined8 *)(param_1 + 0x31f8) = 0;
      *(undefined8 *)(param_1 + 0x3210) = 0;
      *(undefined8 *)(param_1 + 0x3208) = 0;
      *(undefined8 *)(param_1 + 0x3220) = 0;
      *(undefined8 *)(param_1 + 0x3218) = 0;
      *(undefined8 *)(param_1 + 0x3230) = 0;
      *(undefined8 *)(param_1 + 0x3228) = 0;
      *(undefined8 *)(param_1 + 0x3240) = 0;
      *(undefined8 *)(param_1 + 0x3238) = 0;
      *(undefined8 *)(param_1 + 0x3250) = 0;
      *(undefined8 *)(param_1 + 0x3248) = 0;
      *(undefined8 *)(param_1 + 0x3260) = 0;
      *(undefined8 *)(param_1 + 0x3258) = 0;
      *(undefined8 *)(param_1 + 0x3270) = 0;
      *(undefined8 *)(param_1 + 0x3268) = 0;
      *(undefined8 *)(param_1 + 0x3280) = 0;
      *(undefined8 *)(param_1 + 0x3278) = 0;
      *(undefined8 *)(param_1 + 0x3290) = 0;
      *(undefined8 *)(param_1 + 0x3288) = 0;
      *(undefined8 *)(param_1 + 0x32a0) = 0;
      *(undefined8 *)(param_1 + 0x3298) = 0;
      *(undefined8 *)(param_1 + 0x32b0) = 0;
      *(undefined8 *)(param_1 + 0x32a8) = 0;
      iVar6 = param_1 + 0xc000;
      if (*(char *)(param_1 + 0x2bcb) != '\0') {
        local_1a8 = 0;
        uVar7 = (*pcVar5)();
        iVar6 = (*extraout_w11_07)(uVar7,&local_1a8,uVar9 & 0xffffffff);
        if (iVar6 < 0) goto LAB_100254d8;
        local_1b0 = 4;
        uVar11 = 0;
        local_1c4 = pcVar5;
        uVar10 = extraout_x1_00;
        local_1d0 = param_1 + 0xc000;
        local_1cc = param_2;
        do {
          uVar7 = (*pcVar5)(*(undefined4 *)*piVar2,uVar10,(undefined8 *)(param_1 + 0x31b8) + uVar11)
          ;
          iVar6 = (*extraout_w11_08)(uVar7,&local_1b0);
          if (iVar6 < 0) break;
          local_1a0 = 1;
          iVar6 = param_1 + uVar11 * 8;
          uVar7 = (*local_1c4)(*(undefined4 *)*piVar2,extraout_x1_01,iVar6 + 0x31bc);
          iVar8 = (*extraout_w11_09)(uVar7,&local_1a0);
          if (iVar8 < 0) {
            uVar7 = (*pcVar5)();
            (*extraout_w11_14)(uVar7);
            *(undefined4 *)(iVar6 + 0x31b8) = 0;
            goto LAB_10025264;
          }
          uVar11 = uVar11 + 1;
          uVar10 = extraout_x1_02;
        } while (uVar11 < 0x20);
        if (uVar11 != 0x20) {
LAB_10025264:
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
          goto LAB_100254d8;
        }
        *(undefined8 *)(param_1 + 0x2b60) = 0;
        *(undefined8 *)(param_1 + 0x2b58) = 0;
        *(undefined8 *)(param_1 + 0x2b70) = 0;
        *(undefined8 *)(param_1 + 0x2b68) = 0;
        *(undefined8 *)(param_1 + 0x2b80) = 0;
        *(undefined8 *)(param_1 + 0x2b78) = 0;
        *(undefined8 *)(param_1 + 0x2b90) = 0;
        *(undefined8 *)(param_1 + 0x2b88) = 0;
        *(undefined8 *)(param_1 + 0x2ba0) = 0;
        *(undefined8 *)(param_1 + 0x2b98) = 0;
        *(undefined8 *)(param_1 + 0x2bb0) = 0;
        *(undefined8 *)(param_1 + 0x2ba8) = 0;
        param_2 = local_1cc;
        iVar6 = local_1d0;
      }
      local_a8 = 0x200000590;
      uStack_a0 = 0x1000000000004;
      local_98 = 0x59000000000;
      uVar7 = (*pcVar5)();
      iVar8 = (*extraout_w11_10)(uVar7,&local_a8,0,param_1 + 0x318c);
      if (iVar8 < 0) goto LAB_100254d8;
      local_174 = 0;
      local_90 = 0x100000d50;
      uStack_88 = 4;
      local_80 = 0xd5000000000;
      local_178 = &DAT_1009e520;
      uVar7 = (*pcVar5)();
      iVar8 = (*extraout_w11_11)(uVar7,&local_90,&local_178);
      if (-1 < iVar8) {
        FUN_10025820(param_1);
        piVar1 = local_1bc;
        FUN_1002e1e0(param_1,*local_1bc,param_2,local_1b8);
        FUN_10024450(param_1);
        local_1d0 = param_1 + 0x32b8;
        uVar9 = FUN_1002a868(local_1d0);
        if ((uVar9 & 1) != 0) {
          *(undefined4 *)(param_1 + 0x37b0) = 0;
          piVar2 = (int *)(param_1 + 0x37bc);
          *(undefined1 *)(param_1 + 0x37b8) = 0;
          *(undefined4 *)(param_1 + 0x37dc) = 0;
          local_1c8 = (code *)(param_1 + 0x37d0);
          local_1c4 = (code *)(param_1 + 0x37cc);
          local_1b8 = piVar2;
          uVar9 = FUN_10066a70(*(undefined4 *)(*piVar2 + 0x3180),*(undefined4 *)(*piVar2 + 0x3184),
                               DAT_1009f7ac,1,&DAT_1009f308,&DAT_1009f310,local_1c4,local_1c8);
          if ((uVar9 & 1) != 0) {
            *(undefined8 *)(param_1 + 0x37c0) = 0;
            *(undefined4 *)(param_1 + 0x37c8) = 0;
            local_78 = 0x2000f0000;
            uStack_70 = 0x1000000000001;
            local_68 = 0x3c00000000;
            local_1c0 = (undefined4 *)(param_1 + 0x37d4);
            uVar7 = (*pcVar5)();
            auVar12 = (*extraout_w11_12)(uVar7,&local_78,0,(undefined4 *)(param_1 + 0x37d4));
            if (-1 < auVar12._0_4_) {
              local_60 = 0x200010000;
              uStack_58 = 0x1000000000002;
              local_50 = 0x400000000;
              uVar7 = (*pcVar5)();
              iVar8 = (*extraout_w11_13)(uVar7,&local_60,0);
              if (-1 < iVar8) {
                uVar7 = *(undefined4 *)(*piVar2 + 0x3188);
                *(undefined4 *)(param_1 + 0x37e8) = *(undefined4 *)(*piVar2 + 0x3180);
                *(undefined4 *)(param_1 + 0x37ec) = uVar7;
                *(undefined1 *)(param_1 + 0x37e4) = 1;
                FUN_10046cf8(param_1 + 0x3780,1,1);
                switch(*(undefined4 *)(param_2 + 0x33)) {
                default:
                  uVar9 = FUN_100416c8(*(undefined4 *)(iVar6 + 0x9fc));
                  if ((uVar9 & 1) != 0) {
                    iVar6 = *local_1bc;
                    goto LAB_10025398;
                  }
                  break;
                case 2:
                  uVar9 = FUN_100416c8(*(undefined4 *)(iVar6 + 0x9fc));
                  if ((uVar9 & 1) != 0) {
                    uVar9 = FUN_100416c8(*(undefined4 *)(iVar6 + 0xa00));
                    if ((uVar9 & 1) != 0) {
LAB_10025338:
                      iVar6 = *piVar1;
LAB_10025398:
                      (*(code *)PTR_FUN_1009d090)(iVar6 + 0x4a0);
                      return 1;
                    }
LAB_10025340:
                    FUN_10040c98(*(undefined4 *)(iVar6 + 0x9fc));
                  }
                  break;
                case 3:
                  uVar9 = FUN_100416c8(*(undefined4 *)(iVar6 + 0x9fc));
                  if ((uVar9 & 1) != 0) {
                    uVar9 = FUN_100416c8(*(undefined4 *)(iVar6 + 0xa00));
                    if ((uVar9 & 1) != 0) {
                      uVar9 = FUN_100416c8(*(undefined4 *)(iVar6 + 0xa04));
                      if ((uVar9 & 1) != 0) goto LAB_10025338;
                      FUN_10040c98(*(undefined4 *)(iVar6 + 0xa00));
                    }
                    goto LAB_10025340;
                  }
                }
                FUN_10046aa0(param_1 + 0x3780);
                goto LAB_100253ec;
              }
              uVar7 = (*pcVar5)();
              auVar12 = (*extraout_w11_18)(uVar7);
              *local_1c0 = 0;
            }
            FUN_10066c08(auVar12._0_8_,auVar12._8_8_,1,local_1c4,local_1c8);
          }
LAB_100253ec:
          FUN_1002ab48(local_1d0);
        }
        FUN_10023110(param_1);
        goto LAB_100254d8;
      }
    }
  }
LAB_100254b4:
  uVar7 = (*pcVar5)();
  (*extraout_w11_23)(uVar7);
LAB_100254d8:
  (*(code *)PTR_FUN_1009d090)(*local_1bc + 0x4a0);
  return 0;
}

