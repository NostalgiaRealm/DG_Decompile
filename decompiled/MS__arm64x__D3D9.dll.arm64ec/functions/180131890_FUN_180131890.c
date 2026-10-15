/*
 * FUN_180131890 at 180131890
 * undefined FUN_180131890(void)
 * Address ranges: 180131890-180131fb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180131890(longlong param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  short sVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  code *extraout_x11_15;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined *local_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  lVar9 = FUN_1801fe488(DAT_180258908);
  *(longlong *)(param_1 + 0x250) = lVar9;
  if (lVar9 == 0) {
    return 0;
  }
  local_48 = 0;
  local_60 = 0x10000001c;
  uStack_58 = 0;
  local_50 = 8;
  uStack_68 = 0x100000001;
  local_70 = 0x100000001;
  local_190 = 0;
  *(ulonglong *)(param_1 + 0x260) = lVar9 + (ulonglong)*(uint *)(param_1 + 600) * 0x18c0 + 0x6b0;
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  local_108 = &DAT_180247584;
  uStack_100 = 0x400000004;
  local_f8 = &DAT_180247584;
  uStack_f0 = 0x400000004;
  local_e8 = &DAT_180247584;
  uStack_e0 = 0x400000004;
  local_d8 = &DAT_180247584;
  uStack_d0 = 0x400000004;
  local_c8 = &DAT_180247584;
  uStack_c0 = 0x400000004;
  local_b8 = &DAT_180247584;
  uStack_b0 = 0x400000004;
  uVar10 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar6 = (*extraout_x11)(uVar10,&local_70,&local_108,&local_190);
  if (-1 < iVar6) {
    local_170 = 0;
    local_180 = 0x40000001c;
    uStack_178 = 0xffffffff00000000;
    uVar10 = (*(code *)puVar5)(0x180224000);
    iVar6 = (*extraout_x11_00)(uVar10,local_190,&local_180,param_1 + 0x238);
    if (-1 < iVar6) {
      local_198 = 0;
      local_128 = 0x10000001c;
      uStack_120 = 0;
      local_138 = 0x100000001;
      uStack_130 = 0x600000001;
      local_110 = 4;
      local_118 = 8;
      uVar10 = (*(code *)puVar5)(0x180224000);
      iVar6 = (*extraout_x11_01)(uVar10,&local_138,&local_108,&local_198);
      if (-1 < iVar6) {
        local_158 = 0;
        local_168 = 0x90000001c;
        uStack_160 = 0xffffffff00000000;
        uVar10 = (*(code *)puVar5)(0x180224000);
        iVar6 = (*extraout_x11_02)(uVar10,local_198,&local_168,param_1 + 0x240);
        if (-1 < iVar6) {
          local_90 = 0x1c;
          uStack_88 = 8;
          local_80 = 0;
          uStack_98 = 0x100000001;
          local_a0 = 0x100000001;
          local_1a0 = 0;
          uVar10 = (*(code *)puVar5)(0x180224000);
          iVar6 = (*extraout_x11_03)(uVar10,&local_a0,&local_108,&local_1a0);
          if (-1 < iVar6) {
            local_140 = 0;
            local_150 = 0x80000001c;
            uStack_148 = 0xffffffff00000000;
            uVar10 = (*(code *)puVar5)(0x180224000);
            iVar6 = (*extraout_x11_04)(uVar10,local_1a0,&local_150,param_1 + 0x248);
            if (-1 < iVar6) {
              (*(code *)puVar5)(0x180224000);
              (*extraout_x11_05)();
              (*(code *)puVar5)(0x180224000);
              (*extraout_x11_06)();
              (*(code *)puVar5)(0x180224000);
              auVar14 = (*extraout_x11_07)();
              uVar10 = DAT_180258908;
              local_188 = (undefined8 *)(param_1 + 0xd8);
              bVar4 = true;
              uVar13 = 0;
              iVar6 = *(int *)(*(longlong *)(param_1 + 0x250) +
                               (ulonglong)*(uint *)(param_1 + 600) * 0x18c0 + 0x6cc);
              *(undefined8 *)(param_1 + 0xe0) = 0;
              *local_188 = 0;
              *(undefined8 *)(param_1 + 0xf0) = 0;
              *(undefined8 *)(param_1 + 0xe8) = 0;
              *(undefined8 *)(param_1 + 0x100) = 0;
              *(undefined8 *)(param_1 + 0xf8) = 0;
              *(undefined8 *)(param_1 + 0x110) = 0;
              *(undefined8 *)(param_1 + 0x108) = 0;
              *(undefined8 *)(param_1 + 0x120) = 0;
              *(undefined8 *)(param_1 + 0x118) = 0;
              *(undefined8 *)(param_1 + 0x130) = 0;
              *(undefined8 *)(param_1 + 0x128) = 0;
              *(undefined8 *)(param_1 + 0x140) = 0;
              *(undefined8 *)(param_1 + 0x138) = 0;
              *(undefined8 *)(param_1 + 0x150) = 0;
              *(undefined8 *)(param_1 + 0x148) = 0;
              *(undefined8 *)(param_1 + 0x160) = 0;
              *(undefined8 *)(param_1 + 0x158) = 0;
              puVar2 = &DAT_1802473b0;
              if (iVar6 != 0xa000) {
                puVar2 = &DAT_180247388;
              }
              do {
                if (!bVar4) goto LAB_180131ecc;
                if (puVar2[uVar13] != 0) {
                  uVar7 = FUN_180222950(uVar10,puVar2[uVar13],u_RT_CUSTOM_1802381f0);
                  lVar9 = FUN_1802227d0(uVar10,puVar2[uVar13],u_RT_CUSTOM_1802381f0);
                  if (lVar9 != 0) {
                    uVar11 = (*(code *)puVar5)(0x180224000);
                    iVar8 = (*extraout_x11_08)(uVar11,lVar9,uVar7,0,local_188 + uVar13);
                    if (-1 < iVar8) {
                      auVar14 = FUN_1802229d8(lVar9);
                      goto LAB_180131bdc;
                    }
                  }
                  auVar14 = FUN_1802229d8(lVar9);
                  bVar4 = false;
                }
LAB_180131bdc:
                uVar11 = DAT_180258908;
                uVar1 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar1;
              } while (uVar1 < 0x12);
              if (bVar4) {
                bVar4 = true;
                uVar13 = 0;
                puVar2 = &DAT_180247328;
                if (iVar6 < 0xb000) {
                  puVar2 = &DAT_180247318;
                }
                *(undefined8 *)(param_1 + 0x1f8) = 0;
                *(undefined8 *)(param_1 + 0x1f0) = 0;
                *(undefined8 *)(param_1 + 0x208) = 0;
                *(undefined8 *)(param_1 + 0x200) = 0;
                *(undefined8 *)(param_1 + 0x218) = 0;
                *(undefined8 *)(param_1 + 0x210) = 0;
                do {
                  if (!bVar4) goto LAB_180131ec4;
                  if (puVar2[uVar13] != 0) {
                    uVar7 = FUN_180222950(uVar11,puVar2[uVar13],u_RT_CUSTOM_1802381f0);
                    lVar9 = FUN_1802227d0(uVar11,puVar2[uVar13],u_RT_CUSTOM_1802381f0);
                    if (lVar9 != 0) {
                      uVar10 = (*(code *)puVar5)(0x180224000);
                      iVar8 = (*extraout_x11_09)(uVar10,lVar9,uVar7,0,
                                                 (undefined8 *)(param_1 + 0x1f0) + uVar13);
                      if (-1 < iVar8) {
                        FUN_1802229d8(lVar9);
                        goto LAB_180131ccc;
                      }
                    }
                    FUN_1802229d8(lVar9);
                    bVar4 = false;
                  }
LAB_180131ccc:
                  uVar10 = DAT_180258908;
                  uVar1 = (int)uVar13 + 1;
                  uVar13 = (ulonglong)uVar1;
                } while (uVar1 < 6);
                if (bVar4) {
                  bVar4 = true;
                  puVar2 = &DAT_180247360;
                  if (iVar6 < 0xb000) {
                    puVar2 = &DAT_180247338;
                  }
                  *(undefined8 *)(param_1 + 0x170) = 0;
                  *(undefined8 *)(param_1 + 0x168) = 0;
                  *(undefined8 *)(param_1 + 0x180) = 0;
                  *(undefined8 *)(param_1 + 0x178) = 0;
                  *(undefined8 *)(param_1 + 400) = 0;
                  *(undefined8 *)(param_1 + 0x188) = 0;
                  *(undefined8 *)(param_1 + 0x1a0) = 0;
                  *(undefined8 *)(param_1 + 0x198) = 0;
                  uVar13 = 0;
                  *(undefined8 *)(param_1 + 0x1b0) = 0;
                  *(undefined8 *)(param_1 + 0x1a8) = 0;
                  *(undefined8 *)(param_1 + 0x1c0) = 0;
                  *(undefined8 *)(param_1 + 0x1b8) = 0;
                  *(undefined8 *)(param_1 + 0x1d0) = 0;
                  *(undefined8 *)(param_1 + 0x1c8) = 0;
                  *(undefined8 *)(param_1 + 0x1e0) = 0;
                  *(undefined8 *)(param_1 + 0x1d8) = 0;
                  *(undefined8 *)(param_1 + 0x1e8) = 0;
                  do {
                    if (!bVar4) goto LAB_180131ebc;
                    if (puVar2[uVar13] != 0) {
                      uVar7 = FUN_180222950(uVar10,puVar2[uVar13],u_RT_CUSTOM_1802381f0);
                      lVar9 = FUN_1802227d0(uVar10,puVar2[uVar13],u_RT_CUSTOM_1802381f0);
                      if (lVar9 != 0) {
                        uVar11 = (*(code *)puVar5)(0x180224000);
                        iVar6 = (*extraout_x11_10)(uVar11,lVar9,uVar7,0,
                                                   (undefined8 *)(param_1 + 0x168) + uVar13);
                        if (-1 < iVar6) {
                          FUN_1802229d8(lVar9);
                          goto LAB_180131dcc;
                        }
                      }
                      FUN_1802229d8(lVar9);
                      bVar4 = false;
                    }
LAB_180131dcc:
                    uVar1 = (int)uVar13 + 1;
                    uVar13 = (ulonglong)uVar1;
                  } while (uVar1 < 0x11);
                  if ((bVar4) &&
                     (auVar14 = FUN_1801fe720(*(undefined8 *)(param_1 + 0x250),
                                              *(undefined4 *)(param_1 + 600),DAT_180258908,1,
                                              &DAT_180247310,&PTR_PTR_1802472c0,param_1 + 0x230,
                                              param_1 + 0x228), (auVar14._0_8_ & 1) != 0)) {
                    lVar9 = 0;
                    bVar4 = true;
                    do {
                      uVar10 = DAT_180258908;
                      sVar3 = puVar2[lVar9];
                      if (sVar3 == 0) {
                        *(undefined8 *)(param_1 + 8 + lVar9 * 8) = 0;
                        *(undefined4 *)(param_1 + 0x90 + lVar9 * 4) = 0;
                      }
                      else {
                        uVar7 = FUN_180222950(DAT_180258908,sVar3,u_RT_CUSTOM_1802381f0);
                        auVar14 = FUN_1802227d0(uVar10,sVar3,u_RT_CUSTOM_1802381f0);
                        lVar12 = auVar14._0_8_;
                        if (lVar12 != 0) {
                          *(longlong *)(param_1 + 8 + lVar9 * 8) = lVar12;
                          *(undefined4 *)(param_1 + 0x90 + lVar9 * 4) = uVar7;
                        }
                        bVar4 = (bool)(lVar12 != 0 & bVar4);
                      }
                      lVar9 = lVar9 + 1;
                    } while (lVar9 != 0x11);
                    if (bVar4) {
                      return 1;
                    }
                    FUN_1801fe898(auVar14._0_8_,auVar14._8_8_,1,param_1 + 0x230,param_1 + 0x228);
                  }
LAB_180131ebc:
                  FUN_1801fe938();
                }
LAB_180131ec4:
                auVar14 = FUN_1801fe998();
              }
LAB_180131ecc:
              FUN_1801fe6b0(auVar14._0_8_,auVar14._8_8_,0x12,local_188);
              FUN_1801feb08(*(undefined8 *)(param_1 + 0x250),*(undefined4 *)(param_1 + 600),
                            *(undefined8 *)(param_1 + 0x238));
              goto LAB_180131f84;
            }
            (*(code *)puVar5)(0x180224000);
            (*extraout_x11_11)();
          }
          (*(code *)puVar5)(0x180224000);
          (*extraout_x11_12)();
        }
        (*(code *)puVar5)(0x180224000);
        (*extraout_x11_13)();
      }
      (*(code *)puVar5)(0x180224000);
      (*extraout_x11_14)();
    }
    (*(code *)puVar5)(0x180224000);
    (*extraout_x11_15)();
  }
LAB_180131f84:
  FUN_1801fe510(*(undefined8 *)(param_1 + 0x250));
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  return 0;
}

