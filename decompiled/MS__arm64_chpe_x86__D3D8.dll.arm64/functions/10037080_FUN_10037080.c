/*
 * FUN_10037080 at 10037080
 * undefined FUN_10037080(void)
 * Address ranges: 10037080-10037863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10037080(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined *puVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  short sVar9;
  bool bVar10;
  code *pcVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  ulonglong uVar17;
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
  uint uVar18;
  undefined1 auVar19 [16];
  code *local_190;
  int local_18c;
  int local_188;
  code *local_184;
  code *local_180;
  undefined8 *local_17c;
  int *local_178;
  int *local_174;
  undefined4 *local_170;
  int local_16c;
  int *local_168;
  undefined *local_160;
  undefined8 local_15c;
  undefined *local_154;
  undefined8 local_150;
  undefined *local_148;
  undefined8 local_144;
  undefined *local_13c;
  undefined8 local_138;
  undefined *local_130;
  undefined8 local_12c;
  undefined *local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
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
  
  iVar12 = FUN_100daef8(DAT_1013d010,&PTR_s_DGD3D11ROOT_10135160,0);
  piVar1 = (int *)(param_1 + 0x148);
  *piVar1 = iVar12;
  if (iVar12 == 0) {
    return 0;
  }
  piVar2 = (int *)(param_1 + 0x14c);
  local_48 = 0;
  local_168 = (int *)(param_1 + 0x150);
  local_18c = 0;
  uStack_68 = 0x100000001;
  local_70 = 0x100000001;
  local_50 = 8;
  *local_168 = iVar12 + *piVar2 * 0x1510 + 0x510;
  pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_160 = &DAT_10136034;
  local_154 = &DAT_10136034;
  local_15c = 0x400000004;
  local_150 = 0x400000004;
  local_144 = 0x400000004;
  local_138 = 0x400000004;
  local_12c = 0x400000004;
  local_120 = 0x400000004;
  local_60 = 0x10000001c;
  uStack_58 = 0;
  local_148 = &DAT_10136034;
  local_13c = &DAT_10136034;
  local_130 = &DAT_10136034;
  local_124 = &DAT_10136034;
  local_178 = piVar1;
  uVar13 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar12 = (*extraout_w11)(uVar13,&local_70,&local_160,&local_18c);
  if (-1 < iVar12) {
    local_108 = 0;
    local_118 = 0x40000001c;
    uStack_110 = 0xffffffff00000000;
    uVar13 = (*pcVar11)();
    iVar12 = (*extraout_w11_00)(uVar13,local_18c,&local_118,(undefined4 *)(param_1 + 0x13c));
    if (-1 < iVar12) {
      local_188 = 0;
      local_b0 = 8;
      local_d0 = 0x100000001;
      uStack_c8 = 0x600000001;
      local_c0 = 0x10000001c;
      uStack_b8 = 0;
      local_a8 = 4;
      local_170 = (undefined4 *)(param_1 + 0x13c);
      uVar13 = (*pcVar11)();
      iVar12 = (*extraout_w11_01)(uVar13,&local_d0,&local_160,&local_188);
      if (-1 < iVar12) {
        local_f0 = 0;
        local_100 = 0x90000001c;
        uStack_f8 = 0xffffffff00000000;
        uVar13 = (*pcVar11)();
        iVar12 = (*extraout_w11_02)(uVar13,local_188,&local_100,param_1 + 0x140);
        if (-1 < iVar12) {
          local_90 = 0x1c;
          uStack_88 = 8;
          local_80 = 0;
          uStack_98 = 0x100000001;
          local_a0 = 0x100000001;
          local_190 = (code *)0x0;
          uVar13 = (*pcVar11)();
          iVar12 = (*extraout_w11_03)(uVar13,&local_a0,&local_160,&local_190);
          if (-1 < iVar12) {
            local_d8 = 0;
            local_e8 = 0x80000001c;
            uStack_e0 = 0xffffffff00000000;
            uVar13 = (*pcVar11)();
            iVar12 = (*extraout_w11_04)(uVar13,local_190,&local_e8);
            if (-1 < iVar12) {
              local_174 = piVar2;
              uVar13 = (*pcVar11)();
              (*extraout_w11_05)(uVar13);
              uVar13 = (*pcVar11)();
              (*extraout_w11_06)(uVar13);
              uVar13 = (*pcVar11)();
              (*extraout_w11_07)(uVar13);
              local_16c = param_1 + 0x8c;
              puVar8 = *(undefined8 **)(*piVar1 + *piVar2 * 0x1510 + 0x520);
              puVar6 = &DAT_10135e68;
              if (puVar8 != (undefined8 *)0xa000) {
                puVar6 = &DAT_10135e40;
              }
              uVar17 = FUN_100d6f70(*piVar1,*piVar2,DAT_1013d010,0x12,puVar6,local_16c);
              uVar13 = DAT_1013d010;
              if ((uVar17 & 1) != 0) {
                local_180 = pcVar11;
                puVar7 = (undefined2 *)0x10135de0;
                if ((int)puVar8 < 0xb000) {
                  puVar7 = &DAT_10135dd0;
                }
                uVar18 = 0;
                *(undefined8 *)(param_1 + 0x120) = 0;
                *(undefined8 *)(param_1 + 0x118) = 0;
                bVar10 = true;
                *(undefined8 *)(param_1 + 0x128) = 0;
                local_190 = FUN_1011e7a0;
                local_188 = *piVar1 + *piVar2 * 0x1510 + 0x510;
                local_184 = pcVar11;
                local_18c = param_1;
                local_17c = puVar8;
                do {
                  if (!bVar10) goto LAB_1003772c;
                  sVar9 = puVar7[uVar18];
                  if (sVar9 != 0) {
                    uVar14 = FUN_100fde88(uVar13,sVar9,&DAT_1012e358);
                    iVar12 = FUN_100fdfa0(uVar13,puVar7[uVar18],&DAT_1012e358);
                    if (iVar12 != 0) {
                      uVar15 = (*local_184)();
                      iVar16 = (*extraout_w11_08)(uVar15,iVar12,uVar14,0);
                      if (-1 < iVar16) {
                        FUN_100fed00(iVar12);
                        goto LAB_100374f0;
                      }
                    }
                    FUN_100fed00(iVar12);
                    bVar10 = false;
                  }
LAB_100374f0:
                  uVar14 = DAT_1013d010;
                  uVar18 = uVar18 + 1;
                } while (uVar18 < 6);
                if (bVar10) {
                  puVar7 = (undefined2 *)0x10135e18;
                  if ((int)local_17c < 0xb000) {
                    puVar7 = &DAT_10135df0;
                  }
                  puVar8 = (undefined8 *)(local_18c + 0xd4);
                  bVar10 = true;
                  uVar18 = 0;
                  iVar12 = *local_174;
                  iVar16 = *local_178;
                  *(undefined8 *)(local_18c + 0xdc) = 0;
                  *puVar8 = 0;
                  *(undefined8 *)(local_18c + 0xec) = 0;
                  *(undefined8 *)(local_18c + 0xe4) = 0;
                  *(undefined8 *)(local_18c + 0xfc) = 0;
                  *(undefined8 *)(local_18c + 0xf4) = 0;
                  *(undefined8 *)(local_18c + 0x10c) = 0;
                  *(undefined8 *)(local_18c + 0x104) = 0;
                  *(undefined4 *)(local_18c + 0x114) = 0;
                  local_17c = (undefined8 *)(iVar16 + iVar12 * 0x1510 + 0x510);
                  local_184 = local_180;
                  local_180 = FUN_1011e7a0;
                  local_190 = (code *)(param_1 + 0x118);
                  do {
                    if (!bVar10) goto LAB_10037724;
                    sVar9 = puVar7[uVar18];
                    if (sVar9 != 0) {
                      uVar13 = FUN_100fde88(uVar14,sVar9,&DAT_1012e358);
                      iVar12 = FUN_100fdfa0(uVar14,puVar7[uVar18],&DAT_1012e358);
                      if (iVar12 != 0) {
                        uVar15 = (*local_184)();
                        iVar16 = (*extraout_w11_09)(uVar15,iVar12,uVar13,0);
                        if (-1 < iVar16) {
                          FUN_100fed00(iVar12);
                          goto LAB_10037608;
                        }
                      }
                      FUN_100fed00(iVar12);
                      bVar10 = false;
                    }
LAB_10037608:
                    iVar12 = local_18c;
                    pcVar11 = local_190;
                    uVar18 = uVar18 + 1;
                  } while (uVar18 < 0x11);
                  if (bVar10) {
                    pcVar3 = (code *)(local_18c + 0x134);
                    pcVar4 = (code *)(local_18c + 0x138);
                    auVar19 = FUN_100d7130(*local_178,*local_174,DAT_1013d010,1,&DAT_10135dc8,
                                           &DAT_10135d88,pcVar4,pcVar3);
                    if ((auVar19._0_8_ & 1) != 0) {
                      bVar10 = true;
                      uVar18 = 0;
                      local_190 = pcVar11;
                      local_184 = pcVar4;
                      local_180 = pcVar3;
                      local_17c = puVar8;
                      do {
                        uVar13 = DAT_1013d010;
                        sVar9 = puVar7[uVar18];
                        if (sVar9 == 0) {
                          iVar16 = iVar12 + uVar18 * 4;
                          *(undefined4 *)(iVar16 + 4) = 0;
                          *(undefined4 *)(iVar16 + 0x48) = 0;
                        }
                        else {
                          uVar14 = FUN_100fde88(DAT_1013d010,sVar9,&DAT_1012e358);
                          auVar19 = FUN_100fdfa0(uVar13,sVar9,&DAT_1012e358);
                          iVar16 = auVar19._0_4_;
                          if (iVar16 != 0) {
                            iVar5 = iVar12 + uVar18 * 4;
                            *(int *)(iVar5 + 4) = iVar16;
                            *(undefined4 *)(iVar5 + 0x48) = uVar14;
                          }
                          bVar10 = (bool)(iVar16 != 0 & bVar10);
                        }
                        uVar18 = uVar18 + 1;
                      } while (uVar18 < 0x11);
                      if (bVar10) {
                        return 1;
                      }
                      FUN_100d72c8(auVar19._0_8_,auVar19._8_8_,1,local_184,local_180);
                    }
                  }
LAB_10037724:
                  FUN_100d7398();
                }
LAB_1003772c:
                auVar19 = FUN_100d7410();
                FUN_100d70b0(auVar19._0_8_,auVar19._8_8_,0x12,local_16c);
              }
              FUN_100d7690(*local_178,*local_174,*local_170);
              goto LAB_10037828;
            }
            uVar13 = (*pcVar11)();
            (*extraout_w11_10)(uVar13);
          }
          uVar13 = (*pcVar11)();
          (*extraout_w11_11)(uVar13);
        }
        uVar13 = (*pcVar11)();
        (*extraout_w11_12)(uVar13);
      }
      uVar13 = (*pcVar11)();
      (*extraout_w11_13)(uVar13);
    }
    uVar13 = (*pcVar11)();
    (*extraout_w11_14)(uVar13);
  }
LAB_10037828:
  piVar1 = local_178;
  FUN_100dafb0(*local_178);
  *piVar1 = 0;
  *local_168 = 0;
  return 0;
}

