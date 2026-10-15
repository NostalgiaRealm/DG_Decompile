/*
 * FUN_100139b0 at 100139b0
 * undefined FUN_100139b0(void)
 * Address ranges: 100139b0-1001453b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100139b0(int param_1,int param_2,undefined4 param_3,int *param_4)

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
  uVar7 = DAT_100a288c;
  *(int *)(param_1 + 4) = param_2;
  local_1b8 = param_4;
  iVar6 = FUN_1006c588(uVar7,&PTR_s_DGD3D11ROOT_100a11e0,0);
  piVar1 = (int *)(param_1 + 0x3300);
  *piVar1 = iVar6;
  if (iVar6 == 0) {
    return 0;
  }
  local_1bc = piVar1;
  FUN_1006e560(iVar6,extraout_x1,param_1);
  auVar12 = FUN_10059ab8(param_2);
  uVar9 = FUN_10067ee8(*piVar1,*(int *)(param_1 + 0x3304),auVar12._0_8_ & 0xffffffff,
                       auVar12._8_8_ & 0xffffffff,auVar12._0_8_ >> 0x20,auVar12._8_8_ >> 0x20 & 0xff
                      );
  if ((uVar9 & 1) == 0) goto LAB_100144fc;
  piVar2 = (int *)(param_1 + 0x3308);
  local_1d0 = 0;
  local_1cc = 0;
  *piVar2 = *piVar1 + *(int *)(param_1 + 0x3304) * 0x1510 + 0x510;
  pcVar4 = *(code **)(param_1 + 0xd8);
  local_1c4 = pcVar4;
  uVar9 = FUN_100170c0(uVar9,pcVar4,&local_1cc,&local_1d0);
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((uVar9 & 1) == 0) goto LAB_100144fc;
  local_168[0] = (int)(pcVar4 + 4) * 4;
  local_198[1] = 0;
  local_198[2] = 0;
  local_168[1] = 1;
  local_168[2] = 8;
  local_168[3] = 0;
  local_168[4] = 0x40;
  local_168[5] = 4;
  local_198[0] = local_1cc;
  puVar3 = (undefined4 *)(param_1 + 0x3318);
  local_1a8 = CONCAT44(local_1a8._4_4_,puVar3);
  uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar6 = (*extraout_w11)(uVar7,local_168,local_198,puVar3);
  if (iVar6 < 0) goto LAB_100144fc;
  local_150 = 0x100000000;
  local_148 = 0;
  local_140 = 0;
  uVar9 = (ulonglong)(param_1 + 0x3324U);
  local_1b0 = CONCAT44(local_1b0._4_4_,param_1 + 0x3324U);
  pcStack_144 = pcVar4 + 4;
  uVar7 = (*pcVar5)();
  iVar6 = (*extraout_w11_00)(uVar7,*puVar3,&local_150,uVar9 & 0xffffffff);
  if (iVar6 < 0) goto LAB_100144d8;
  local_188[1] = 0;
  local_188[2] = 0;
  local_d8 = 0x100040004;
  uStack_d0 = 8;
  local_c8 = 0x400000040;
  local_188[0] = local_1d0;
  pcVar4 = (code *)(param_1 + 0x3314);
  local_1c8 = pcVar4;
  uVar7 = (*pcVar5)();
  iVar6 = (*extraout_w11_01)(uVar7,&local_d8,local_188,pcVar4);
  if (iVar6 < 0) {
LAB_100144a4:
    uVar7 = (*pcVar5)();
    (*extraout_w11_22)(uVar7);
  }
  else {
    local_b0 = 0;
    local_c0 = 0x100000000;
    uStack_b8 = 0x1000100000000;
    local_1c0 = (undefined4 *)(param_1 + 0x3320);
    uVar9 = ZEXT48(local_1c0);
    uVar7 = (*pcVar5)();
    iVar6 = (*extraout_w11_02)(uVar7,*(undefined4 *)pcVar4,&local_c0,uVar9 & 0xffffffff);
    pcVar4 = local_1c4;
    if (iVar6 < 0) {
LAB_10014478:
      uVar7 = (*pcVar5)();
      (*extraout_w11_21)(uVar7);
      goto LAB_100144a4;
    }
    local_138[0] = (int)(local_1c4 + 1) * 4;
    local_138[1] = 2;
    local_138[2] = 8;
    local_138[3] = 0x10000;
    local_138[4] = 0x40;
    local_138[5] = 4;
    uVar7 = (*pcVar5)();
    iVar6 = (*extraout_w11_03)(uVar7,local_138,0,(undefined4 *)(param_1 + 0x331c));
    if (iVar6 < 0) {
LAB_1001444c:
      uVar7 = (*pcVar5)();
      (*extraout_w11_20)(uVar7);
      goto LAB_10014478;
    }
    pcStack_114 = pcVar4 + 1;
    local_110 = 0;
    local_118 = 0;
    local_120 = 0x100000000;
    uVar7 = (*pcVar5)();
    iVar6 = (*extraout_w11_04)(uVar7,*(undefined4 *)(param_1 + 0x331c),&local_120);
    if (iVar6 < 0) {
      uVar7 = (*pcVar5)();
      (*extraout_w11_19)(uVar7);
      goto LAB_1001444c;
    }
    FUN_1007dd80(local_1d0);
    FUN_1007dd80(local_1cc);
    iVar6 = *(int *)(param_1 + 4);
    uVar11 = *(int *)(iVar6 + 0x33) * *(int *)(iVar6 + 0x2f);
    local_108[1] = 0;
    local_108[2] = 8;
    local_108[3] = 0;
    local_108[4] = 0x40;
    local_108[5] = 4;
    local_108[0] = uVar11;
    uVar7 = (*pcVar5)();
    iVar6 = (*extraout_w11_05)(uVar7,local_108,0,(undefined4 *)(param_1 + 0x332c));
    if (iVar6 < 0) goto LAB_100144fc;
    uStack_e4 = uVar11 >> 2;
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = 0x100000000;
    local_1c0 = (undefined4 *)(param_1 + 0x3330);
    uVar9 = ZEXT48(local_1c0);
    uVar7 = (*pcVar5)();
    iVar6 = (*extraout_w11_06)(uVar7,*(undefined4 *)(param_1 + 0x332c),&local_f0,uVar9 & 0xffffffff)
    ;
    if (-1 < iVar6) {
      local_1c8 = (code *)(param_1 + 0x3334);
      uVar9 = ZEXT48(local_1c8);
      *(undefined4 *)local_1c8 = 0;
      *(undefined8 *)(param_1 + 0x3340) = 0;
      *(undefined8 *)(param_1 + 0x3338) = 0;
      *(undefined8 *)(param_1 + 0x3350) = 0;
      *(undefined8 *)(param_1 + 0x3348) = 0;
      *(undefined8 *)(param_1 + 0x3360) = 0;
      *(undefined8 *)(param_1 + 0x3358) = 0;
      *(undefined8 *)(param_1 + 0x3370) = 0;
      *(undefined8 *)(param_1 + 0x3368) = 0;
      *(undefined8 *)(param_1 + 0x3380) = 0;
      *(undefined8 *)(param_1 + 0x3378) = 0;
      *(undefined8 *)(param_1 + 0x3390) = 0;
      *(undefined8 *)(param_1 + 0x3388) = 0;
      *(undefined8 *)(param_1 + 0x33a0) = 0;
      *(undefined8 *)(param_1 + 0x3398) = 0;
      *(undefined8 *)(param_1 + 0x33b0) = 0;
      *(undefined8 *)(param_1 + 0x33a8) = 0;
      *(undefined8 *)(param_1 + 0x33c0) = 0;
      *(undefined8 *)(param_1 + 0x33b8) = 0;
      *(undefined8 *)(param_1 + 0x33d0) = 0;
      *(undefined8 *)(param_1 + 0x33c8) = 0;
      *(undefined8 *)(param_1 + 0x33e0) = 0;
      *(undefined8 *)(param_1 + 0x33d8) = 0;
      *(undefined8 *)(param_1 + 0x33f0) = 0;
      *(undefined8 *)(param_1 + 0x33e8) = 0;
      *(undefined8 *)(param_1 + 0x3400) = 0;
      *(undefined8 *)(param_1 + 0x33f8) = 0;
      *(undefined8 *)(param_1 + 0x3410) = 0;
      *(undefined8 *)(param_1 + 0x3408) = 0;
      *(undefined8 *)(param_1 + 0x3420) = 0;
      *(undefined8 *)(param_1 + 0x3418) = 0;
      *(undefined8 *)(param_1 + 0x3430) = 0;
      *(undefined8 *)(param_1 + 0x3428) = 0;
      iVar6 = param_1 + 0xc000;
      if (*(char *)(param_1 + 0x2c6b) != '\0') {
        local_1a8 = 0;
        uVar7 = (*pcVar5)();
        iVar6 = (*extraout_w11_07)(uVar7,&local_1a8,uVar9 & 0xffffffff);
        if (iVar6 < 0) goto LAB_100144fc;
        local_1b0 = 4;
        uVar11 = 0;
        local_1c4 = pcVar5;
        uVar10 = extraout_x1_00;
        local_1d0 = param_1 + 0xc000;
        local_1cc = param_2;
        do {
          uVar7 = (*pcVar5)(*(undefined4 *)*piVar2,uVar10,(undefined8 *)(param_1 + 0x3338) + uVar11)
          ;
          iVar6 = (*extraout_w11_08)(uVar7,&local_1b0);
          if (iVar6 < 0) break;
          local_1a0 = 1;
          iVar6 = param_1 + uVar11 * 8;
          uVar7 = (*local_1c4)(*(undefined4 *)*piVar2,extraout_x1_01,iVar6 + 0x333c);
          iVar8 = (*extraout_w11_09)(uVar7,&local_1a0);
          if (iVar8 < 0) {
            uVar7 = (*pcVar5)();
            (*extraout_w11_14)(uVar7);
            *(undefined4 *)(iVar6 + 0x3338) = 0;
            goto LAB_10014288;
          }
          uVar11 = uVar11 + 1;
          uVar10 = extraout_x1_02;
        } while (uVar11 < 0x20);
        if (uVar11 != 0x20) {
LAB_10014288:
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
          goto LAB_100144fc;
        }
        *(undefined8 *)(param_1 + 0x2c00) = 0;
        *(undefined8 *)(param_1 + 0x2bf8) = 0;
        *(undefined8 *)(param_1 + 0x2c10) = 0;
        *(undefined8 *)(param_1 + 0x2c08) = 0;
        *(undefined8 *)(param_1 + 0x2c20) = 0;
        *(undefined8 *)(param_1 + 0x2c18) = 0;
        *(undefined8 *)(param_1 + 0x2c30) = 0;
        *(undefined8 *)(param_1 + 0x2c28) = 0;
        *(undefined8 *)(param_1 + 0x2c40) = 0;
        *(undefined8 *)(param_1 + 0x2c38) = 0;
        *(undefined8 *)(param_1 + 0x2c50) = 0;
        *(undefined8 *)(param_1 + 0x2c48) = 0;
        param_2 = local_1cc;
        iVar6 = local_1d0;
      }
      local_a8 = 0x200000670;
      uStack_a0 = 0x1000000000004;
      local_98 = 0x67000000000;
      uVar7 = (*pcVar5)();
      iVar8 = (*extraout_w11_10)(uVar7,&local_a8,0,param_1 + 0x330c);
      if (iVar8 < 0) goto LAB_100144fc;
      local_174 = 0;
      local_90 = 0x100000d50;
      uStack_88 = 4;
      local_80 = 0xd5000000000;
      local_178 = &DAT_100a1380;
      uVar7 = (*pcVar5)();
      iVar8 = (*extraout_w11_11)(uVar7,&local_90,&local_178);
      if (-1 < iVar8) {
        FUN_10014840(param_1);
        piVar1 = local_1bc;
        FUN_10016d90(param_1,*local_1bc,param_2,local_1b8);
        FUN_10013748(param_1);
        local_1d0 = param_1 + 0x3438;
        uVar9 = FUN_1001aad0(local_1d0);
        if ((uVar9 & 1) != 0) {
          piVar2 = (int *)(param_1 + 0x3ef8);
          *(undefined4 *)(param_1 + 0x3eec) = 0;
          *(undefined4 *)(param_1 + 0x3f20) = 0;
          local_1c8 = (code *)(param_1 + 0x3f10);
          local_1c4 = (code *)(param_1 + 0x3f08);
          local_1b8 = piVar2;
          uVar9 = FUN_1006a290(*(undefined4 *)(*piVar2 + 0x3300),*(undefined4 *)(*piVar2 + 0x3304),
                               DAT_100a288c,2,&DAT_100a2184,&DAT_100a2190,local_1c4,local_1c8);
          if ((uVar9 & 1) != 0) {
            *(undefined8 *)(param_1 + 0x3efc) = 0;
            *(undefined4 *)(param_1 + 0x3f04) = 0;
            local_78 = 0x200140000;
            uStack_70 = 0x1000000000001;
            local_68 = 0x5000000000;
            local_1c0 = (undefined4 *)(param_1 + 0x3f18);
            uVar7 = (*pcVar5)();
            auVar12 = (*extraout_w11_12)(uVar7,&local_78,0,(undefined4 *)(param_1 + 0x3f18));
            if (-1 < auVar12._0_4_) {
              local_60 = 0x200010000;
              uStack_58 = 0x1000000000002;
              local_50 = 0x400000000;
              uVar7 = (*pcVar5)();
              iVar8 = (*extraout_w11_13)(uVar7,&local_60,0);
              if (-1 < iVar8) {
                *(undefined4 *)(param_1 + 0x3e00) = 0;
                *(undefined2 *)(param_1 + 0x3ebc) = 0;
                *(undefined1 *)(param_1 + 0x3ebe) = 0;
                *(undefined4 *)(param_1 + 0x3ef0) = 0xffffffff;
                *(undefined4 *)(*piVar2 + 0x32a0) = *(undefined4 *)(param_1 + 0x3df4);
                uVar7 = *(undefined4 *)(*piVar2 + 0x3308);
                *(undefined4 *)(param_1 + 0x3f2c) = *(undefined4 *)(*piVar2 + 0x3300);
                *(undefined4 *)(param_1 + 0x3f30) = uVar7;
                *(undefined1 *)(param_1 + 0x3f28) = 1;
                FUN_100363e0(param_1 + 0x3d10,1,1);
                switch(*(undefined4 *)(param_2 + 0x33)) {
                default:
                  uVar9 = FUN_10030be8(*(undefined4 *)(iVar6 + 0x1140));
                  if ((uVar9 & 1) != 0) {
                    iVar6 = *local_1bc;
                    goto LAB_100143bc;
                  }
                  break;
                case 2:
                  uVar9 = FUN_10030be8(*(undefined4 *)(iVar6 + 0x1140));
                  if ((uVar9 & 1) != 0) {
                    uVar9 = FUN_10030be8(*(undefined4 *)(iVar6 + 0x1144));
                    if ((uVar9 & 1) != 0) {
LAB_1001435c:
                      iVar6 = *piVar1;
LAB_100143bc:
                      (*(code *)PTR_FUN_100a0090)(iVar6 + 0x4a0);
                      return 1;
                    }
LAB_10014364:
                    FUN_100301b8(*(undefined4 *)(iVar6 + 0x1140));
                  }
                  break;
                case 3:
                  uVar9 = FUN_10030be8(*(undefined4 *)(iVar6 + 0x1140));
                  if ((uVar9 & 1) != 0) {
                    uVar9 = FUN_10030be8(*(undefined4 *)(iVar6 + 0x1144));
                    if ((uVar9 & 1) != 0) {
                      uVar9 = FUN_10030be8(*(undefined4 *)(iVar6 + 0x1148));
                      if ((uVar9 & 1) != 0) goto LAB_1001435c;
                      FUN_100301b8(*(undefined4 *)(iVar6 + 0x1144));
                    }
                    goto LAB_10014364;
                  }
                }
                FUN_10036188(param_1 + 0x3d10);
                goto LAB_10014410;
              }
              uVar7 = (*pcVar5)();
              auVar12 = (*extraout_w11_18)(uVar7);
              *local_1c0 = 0;
            }
            FUN_1006a428(auVar12._0_8_,auVar12._8_8_,2,local_1c4,local_1c8);
          }
LAB_10014410:
          FUN_1001adb0(local_1d0);
        }
        FUN_100123d0(param_1);
        goto LAB_100144fc;
      }
    }
  }
LAB_100144d8:
  uVar7 = (*pcVar5)();
  (*extraout_w11_23)(uVar7);
LAB_100144fc:
  (*(code *)PTR_FUN_100a0090)(*local_1bc + 0x4a0);
  return 0;
}

