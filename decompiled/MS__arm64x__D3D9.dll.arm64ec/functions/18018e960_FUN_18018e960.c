/*
 * FUN_18018e960 at 18018e960
 * undefined FUN_18018e960(void)
 * Address ranges: 18018e960-18018f9a7;18018f9cc-18019001b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18018e960(ulonglong param_1,ulonglong param_2,int param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  code *pcVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined4 uVar17;
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
  code *extraout_x11_16;
  code *extraout_x11_17;
  code *extraout_x11_18;
  code *extraout_x11_19;
  code *extraout_x11_20;
  code *extraout_x11_21;
  code *extraout_x11_22;
  code *extraout_x11_23;
  code *extraout_x11_24;
  code *extraout_x11_25;
  code *extraout_x11_26;
  code *extraout_x11_27;
  code *extraout_x11_28;
  code *extraout_x11_29;
  code *extraout_x11_30;
  code *extraout_x11_31;
  code *extraout_x11_32;
  code *extraout_x11_33;
  code *extraout_x11_34;
  code *extraout_x11_35;
  code *extraout_x11_36;
  code *extraout_x11_37;
  code *extraout_x11_38;
  code *extraout_x11_39;
  longlong lVar18;
  undefined4 uVar19;
  longlong lVar20;
  undefined4 uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined8 in_stack_fffffffffffffc40;
  undefined8 in_stack_fffffffffffffc48;
  int local_3a0;
  undefined4 *local_390;
  undefined8 uStack_388;
  ulonglong local_380;
  ulonglong local_378;
  undefined4 **local_370;
  undefined4 **local_368;
  undefined4 *local_360 [2];
  longlong *local_350;
  uint local_348 [2];
  undefined4 local_340;
  undefined4 uStack_33c;
  int local_338;
  int local_334;
  uint local_330;
  int local_32c;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  char local_318;
  char local_317;
  int local_310;
  longlong local_308;
  longlong *local_300;
  longlong *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  int local_2d0;
  undefined4 uStack_2cc;
  undefined4 **local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 **local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  longlong local_268;
  undefined4 **ppuStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined *local_230;
  longlong local_228;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 *puStack_1ec;
  ulonglong uStack_1e4;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined **local_1b8;
  ulonglong uStack_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  ulonglong local_160 [5];
  undefined4 local_138;
  uint local_130;
  uint uStack_12c;
  undefined4 local_120;
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
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint local_70;
  
  uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffc40 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffc48 >> 0x20);
  local_308 = param_1 + 0x1c000;
  local_380 = param_1;
  local_378 = param_2;
  local_310 = param_3;
  FUN_180202728(*(undefined8 *)(param_1 + 0x1cf10),param_2,param_1);
  puVar9 = __hybrid_os_arm64x_dispatch_icall;
  lVar22 = 0;
  bVar11 = local_378 != 0;
  local_390 = (undefined4 *)0x0;
  if (bVar11) {
    local_390 = (undefined4 *)(local_378 - 0xe0);
  }
  local_370 = (undefined4 **)&DAT_00000130;
  if (bVar11) {
    local_370 = (undefined4 **)(local_378 + 0x50);
  }
  local_230 = &DAT_1802389d0;
  local_3a0 = *(int *)(&DAT_1802389d0 + (longlong)*(int *)local_370 * 4);
  local_360[0] = (undefined4 *)&DAT_00000060;
  if (bVar11) {
    local_360[0] = (undefined4 *)(local_378 - 0x80);
  }
  local_2e0 = (undefined4 **)&DAT_00000078;
  if (bVar11) {
    local_2e0 = (undefined4 **)(local_378 - 0x68);
  }
  lVar18 = (longlong)*local_2e0;
  local_350 = (longlong *)&DAT_00000118;
  if (bVar11) {
    local_350 = (longlong *)(local_378 + 0x38);
  }
  local_368 = *(undefined4 ***)(*local_350 + 0xda8);
  plVar2 = (longlong *)&DAT_00000120;
  if (bVar11) {
    plVar2 = (longlong *)(local_378 + 0x40);
  }
  local_300 = plVar2;
  if (*plVar2 == 0) goto LAB_18018eca4;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  cVar12 = (*extraout_x11)();
  if (cVar12 != '\0') {
    lVar23 = *plVar2;
    local_228 = lVar23;
    if (*(longlong *)(lVar23 + 0x78) == 0) goto LAB_18018eca4;
    uVar15 = (*(code *)puVar9)(0x180224000);
    (*extraout_x11_00)(uVar15,&local_80);
    if ((0x1c < local_70) || ((0x19800a00U >> (ulonglong)(local_70 & 0x1f) & 1) == 0))
    goto LAB_18018eca4;
    lVar22 = *(longlong *)(lVar23 + 0x80);
    lVar18 = 0x40;
    if (*(int *)(lVar23 + 0x2c) == 0x15) {
      lVar18 = 0x50;
    }
    local_3a0 = *(int *)(local_380 + lVar18);
    FUN_18019ce88(lVar23,0,0,0);
    if (*(longlong *)(lVar23 + 0x80) == 0) {
      if (*(longlong *)(lVar23 + 0x140) == 0) {
        FUN_18019c450(lVar23);
      }
      if (*(undefined4 ***)(local_228 + 0x140) != (undefined4 **)0x0) {
        lVar18 = *(longlong *)(local_228 + 0x78);
        local_368 = *(undefined4 ***)(local_228 + 0x140);
        goto LAB_18018eca4;
      }
    }
    plVar2 = local_350;
    FUN_180203380(*(undefined8 *)(local_308 + 0xf10),*local_350,1);
    if (((int)param_4[3] == 0) &&
       (local_3a0 == *(int *)(local_230 + (longlong)*(int *)local_370 * 4))) {
      local_368 = *(undefined4 ***)(*plVar2 + 0xda8);
      lVar18 = *(longlong *)(*plVar2 + 0xd88);
      goto LAB_18018eca4;
    }
  }
  lVar22 = 0;
  if (*(longlong *)(*local_350 + 0xd88) == 0) {
    FUN_180203380(*(undefined8 *)(local_308 + 0xf10),*local_350,1);
  }
  plVar2 = local_350;
  if (*(longlong *)(*local_350 + 0xd88) != 0) {
    uStack_288 = CONCAT35(uStack_288._5_3_,0x100000000);
    local_290 = (undefined4 **)0x0;
    uStack_2a8 = 0;
    local_2b0 = (undefined4 **)0x0;
    local_298 = 0;
    local_2a0 = 0;
    thunk_FUN_180223c20(&local_2a0,0,0,*(undefined4 *)(*local_300 + 0x24),
                        *(undefined4 *)(*local_300 + 0x28));
    puVar6 = (undefined4 *)&DAT_00000028;
    if (local_378 != 0) {
      puVar6 = (undefined4 *)(local_378 - 0xb8);
    }
    puVar3 = (undefined4 *)&DAT_00000024;
    if (local_378 != 0) {
      puVar3 = (undefined4 *)(local_378 - 0xbc);
    }
    thunk_FUN_180223c20(&local_2b0,0,0,*puVar3,*puVar6);
    puVar6 = local_360[0];
    if (*local_2e0 != (undefined4 *)*(longlong *)(*plVar2 + 0xd88)) {
      FUN_180198b40(local_360[0],1,1);
      lVar18 = *plVar2;
      FUN_1801982c8(puVar6,*(undefined8 *)(lVar18 + 0xd88),*(undefined8 *)(lVar18 + 0xd98));
    }
    lVar18 = 0;
    if (*local_300 != 0) {
      lVar18 = *local_300 + 0xe0;
    }
    uVar4 = 0xe0;
    if (local_378 != 0) {
      uVar4 = local_378;
    }
    uVar5 = 0;
    if (local_390 != (undefined4 *)0x0) {
      uVar5 = uVar4;
    }
    FUN_180196fa0(local_380,0,0,0,0,uVar5,lVar18,&local_2b0);
  }
  lVar18 = *(longlong *)(*local_350 + 0xd88);
  local_368 = *(undefined4 ***)(*local_350 + 0xda8);
  local_3a0 = *(int *)(local_230 + (longlong)*(int *)local_370 * 4);
LAB_18018eca4:
  local_160[1] = 0;
  local_160[0] = 0;
  local_160[3] = 0;
  local_160[2] = 0;
  local_160[4] = 0;
  local_138 = 0;
  if (lVar18 != 0) {
    (*(code *)puVar9)(0x180224000);
    (*extraout_x11_01)(lVar18,local_160);
  }
  local_390 = (undefined4 *)0x0;
  uStack_388 = local_160[0];
  iVar13 = thunk_FUN_180223d24(param_4 + 1);
  lVar23 = local_308;
  plVar2 = local_350;
  if (iVar13 == 0) {
    uStack_388 = param_4[2];
    local_390 = (undefined4 *)param_4[1];
  }
  if ((int)param_4[3] != 0) {
    lVar20 = *(longlong *)(*local_350 + 0xd88);
    uVar17 = 1;
    if (lVar18 == lVar20) {
      uVar17 = 2;
    }
    FUN_180203380(*(undefined8 *)(local_308 + 0xf10),*local_350,uVar17);
    uVar4 = local_380;
    local_300 = (longlong *)(ulonglong)(lVar18 == lVar20);
    if (*(longlong *)(*plVar2 + (longlong)local_300 * 8 + 0xd88) != 0) {
      puVar6 = (undefined4 *)&DAT_0000002c;
      if (*param_4 != 0) {
        puVar6 = (undefined4 *)(*param_4 + -0xb4);
      }
      FUN_1801b8940(local_380,*puVar6,local_160[2] & 0xffffffff,
                    *(undefined4 *)((longlong)param_4 + 0x1c));
      FUN_1801fec48(*(undefined8 *)(lVar23 + 0xf10),*(undefined4 *)(uVar4 + 0x28),&DAT_180238620,0,
                    0xffffffff,0);
      FUN_1801ff3a8(*(undefined8 *)(lVar23 + 0xf10),*(undefined4 *)(uVar4 + 0x28),&DAT_1802387c0,0);
      FUN_1801ff6a0(*(undefined8 *)(lVar23 + 0xf10),*(undefined4 *)(uVar4 + 0x28),&DAT_180238798);
      local_2b0 = (undefined4 **)0x0;
      local_2a0 = 0;
      local_290 = (undefined4 **)0x0;
      uStack_288 = 0;
      local_270 = 0;
      ppuStack_260 = local_368;
      uStack_258 = 0;
      local_250 = 0;
      local_248 = 0;
      lVar23 = *plVar2 + (longlong)local_300 * 8;
      local_280 = *(undefined8 *)(lVar23 + 0xd88);
      uStack_278 = *(undefined8 *)(lVar23 + 0xd98);
      uStack_2a8 = CONCAT44((float)(local_160[0] >> 0x20),(float)(local_160[0] & 0xffffffff));
      local_298 = CONCAT44((float)(local_160[0] >> 0x20),(float)(local_160[0] & 0xffffffff));
      lVar23 = 0x1f;
      if ((int)param_4[3] == 4) {
        lVar23 = 0x20;
      }
      local_268 = lVar18;
      FUN_180190800(uVar4,&local_2b0,*(undefined8 *)(uVar4 + lVar23 * 8 + 0x1cf20));
    }
    lVar18 = *local_350 + (longlong)local_300 * 8;
    local_368 = *(undefined4 ***)(lVar18 + 0xda8);
    lVar18 = *(longlong *)(lVar18 + 0xd88);
    local_3a0 = *(int *)(local_230 + (longlong)*(int *)local_370 * 4);
  }
  lVar23 = *(longlong *)(local_380 + 8);
  local_1b8 = &PTR_FUN_18022c6b0;
  uStack_1b0 = local_380;
  lVar20 = *local_350;
  lVar24 = *(longlong *)(local_308 + 0xf10);
  local_1f8 = *(undefined4 *)(lVar23 + 0xc);
  local_1f4 = *(undefined4 *)(lVar23 + 0x10);
  local_1f0 = *(undefined4 *)(lVar23 + 0x14);
  uStack_1e4 = uStack_388;
  puStack_1ec = local_390;
  local_1dc = *(undefined4 *)(&DAT_18022aa28 + (longlong)*(int *)(lVar23 + 0xca) * 4);
  local_1a8 = param_4;
  if ((lVar18 != 0) || (lVar22 != 0)) {
    lVar23 = lVar24 + (ulonglong)*(uint *)(lVar20 + 0x10) * 0x18c0;
    (*(code *)puVar9)(0x180224000);
    (*extraout_x11_02)(lVar18,&local_b0);
    uVar15 = (*(code *)puVar9)(0x180224000);
    (*extraout_x11_03)(uVar15,&local_130);
    FUN_1802014c0(lVar24,local_348,lVar20,&local_1f8,local_b0,local_ac,local_130,uStack_12c,
                  CONCAT44(uVar21,local_3a0),CONCAT44(uVar19,local_120));
    if ((local_348[0] == 0) && ((local_318 == '\0' && (local_317 == '\0')))) {
      if (lVar22 == 0) {
        auVar29 = (*(code *)puVar9)(0x180224000,*(undefined8 *)(lVar23 + 0x6b8),
                                    *(undefined8 *)(lVar20 + 0xd78));
        (*extraout_x11_05)(auVar29._0_8_,auVar29._8_8_,lVar18);
      }
      else {
        auVar29 = (*(code *)puVar9)(0x180225000);
        (*extraout_x11_04)(auVar29._0_8_,auVar29._8_8_,0,lVar22,0,local_3a0);
      }
      uVar14 = *(uint *)(lVar20 + 0x20);
      if (uVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(0xf004,0x18018efdc);
        (*pcVar10)();
      }
      uVar7 = 0;
      if (uVar14 != 0) {
        uVar7 = *(uint *)(lVar20 + 0x18) / uVar14;
      }
      uVar14 = *(uint *)(lVar20 + 0x24);
      if (uVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(0xf004,0x18018eff0);
        (*pcVar10)();
      }
      uVar8 = 0;
      if (uVar14 != 0) {
        uVar8 = *(uint *)(lVar20 + 0x1c) / uVar14;
      }
      uStack_288 = 0x3f8000003f800000;
      local_2b0 = *(undefined4 ***)(lVar20 + 0xd78);
      uStack_2a8 = *(longlong *)(lVar20 + 0xd80);
      local_390 = (undefined4 *)0x0;
      uStack_388 = CONCAT44(uVar8,uVar7);
      local_2a0 = CONCAT44(uVar8,uVar7);
      local_298 = CONCAT44(uVar8,uVar7);
      local_290 = &local_390;
      local_280 = 0;
    }
    else {
      local_370 = local_368;
      if (lVar22 != 0) {
        uVar15 = (*(code *)puVar9)(0x180225000);
        (*extraout_x11_06)(uVar15,lVar18,0,lVar22,0,local_3a0);
      }
      if (*(int *)(lVar20 + 0x2c) == 7) {
        uVar14 = *(uint *)(lVar20 + 0x10);
        local_378 = CONCAT44(local_378._4_4_,local_ac);
        local_380 = CONCAT44(local_380._4_4_,local_b0);
        lVar22 = lVar24 + (ulonglong)uVar14 * 0x18c0;
        local_390 = (undefined4 *)(lVar22 + 0x1000);
        if (*(char *)(lVar22 + 0x1f60) == '\0') {
          FUN_18021a878(lVar24,uVar14);
          *(undefined1 *)(local_390 + 0x3d8) = 1;
        }
        if (*(longlong *)(lVar22 + 0x1f08) != 0) {
          local_16c = 0x3f800000;
          local_180 = 0;
          local_170 = 0;
          local_178 = 0x43200000;
          uStack_174 = 0x43480000;
          FUN_1801ffba8(lVar24,uVar14,&local_180);
          FUN_1801fec48(lVar24,uVar14,&DAT_180238620,0,0xffffffff,0);
          FUN_1801ff3a8(lVar24,uVar14,&DAT_1802387c0,0);
          FUN_1801ff6a0(lVar24,uVar14,&DAT_180238798);
          FUN_1801fff80(lVar24,uVar14,5,*(undefined8 *)(lVar22 + 0xe88),
                        *(undefined8 *)(lVar22 + 0xe78),*(undefined8 *)(lVar22 + 0xd28),0);
          local_1a0 = 0;
          uStack_198 = 0;
          local_190 = 0;
          uStack_188 = 0;
          FUN_1802000e0(lVar24,uVar14,4,&local_1a0,0);
          local_2a0 = 0;
          uStack_2a8 = 0;
          local_290 = (undefined4 **)0x0;
          local_298 = 0;
          local_280 = 0;
          uStack_288 = 0;
          local_270 = 0;
          uStack_278 = 0;
          ppuStack_260 = (undefined4 **)0x0;
          local_268 = 0;
          local_250 = 0;
          uStack_258 = 0;
          uStack_240 = 0;
          local_248 = 0;
          local_238 = 0;
          local_2b0 = local_368;
          FUN_1801ffd80(lVar24,uVar14,0,0x10,&local_2b0);
          FUN_1801ffce0(lVar24,uVar14,1,1,lVar22 + 0xe90);
          local_1a0 = *(undefined8 *)(lVar22 + 0x1ef8);
          FUN_1802000e0(lVar24,uVar14,4,&local_1a0,0);
          local_370 = (undefined4 **)((ulonglong)local_370 & 0xffffffff00000000);
          local_368 = (undefined4 **)CONCAT44(local_368._4_4_,0x10);
          FUN_1801ffe20(lVar24,uVar14);
          FUN_1801fff08(lVar24,uVar14,0,0);
          uVar15 = (*(code *)puVar9)(0x180224000);
          iVar13 = (*extraout_x11_07)(uVar15,*(undefined8 *)(lVar22 + 0xe98),0,4,0,&local_390);
          if (-1 < iVar13) {
            fVar26 = (float)(local_380 & 0xffffffff);
            *local_390 = 0xbf800000;
            fVar25 = (float)(local_378 & 0xffffffff);
            local_390[1] = 0x3f800000;
            fVar27 = (fVar26 + 0.5) / fVar26;
            fVar28 = (fVar25 + 0.5) / fVar25;
            local_390[2] = 0.5 / fVar26;
            local_390[3] = 0.5 / fVar25;
            local_390[4] = 0x3f800000;
            local_390[5] = 0x3f800000;
            local_390[6] = fVar27;
            local_390[7] = 0.5 / fVar25;
            local_390[8] = 0xbf800000;
            local_390[9] = 0xbf800000;
            local_390[10] = 0.5 / fVar26;
            local_390[0xb] = fVar28;
            local_390[0xc] = 0x3f800000;
            local_390[0xd] = 0xbf800000;
            local_390[0xe] = fVar27;
            local_390[0xf] = fVar28;
            uVar15 = (*(code *)puVar9)(0x180224000);
            (*extraout_x11_08)(uVar15,*(undefined8 *)(lVar22 + 0xe98),0);
          }
          uVar15 = (*(code *)puVar9)(0x180224000);
          (*extraout_x11_09)(uVar15,4,0);
          local_218 = *(undefined8 *)(lVar22 + 0x1f10);
          local_208 = 0;
          uStack_200 = 0;
          local_210 = 0;
          FUN_1802000e0(lVar24,uVar14,4,&local_218,0);
          uVar15 = (*(code *)puVar9)(0x180224000);
          (*extraout_x11_10)(uVar15,4,0);
          local_1a0 = 0;
          FUN_1802000e0(lVar24,uVar14,4,&local_1a0,0);
          local_100 = *(undefined8 *)(lVar22 + 0x1f00);
          uStack_f8 = *(undefined8 *)(lVar22 + 0x1f28);
          local_f0 = *(undefined8 *)(lVar22 + 0x1f58);
          uVar15 = (*(code *)puVar9)(0x180224000);
          (*extraout_x11_11)(uVar15,0,3,&local_100);
          lVar18 = 0x1f38;
          uVar15 = (*(code *)puVar9)(0x180225000);
          (*extraout_x11_12)(uVar15,0,1,lVar22 + lVar18,0);
          uVar15 = (*(code *)puVar9)(0x180224000);
          (*extraout_x11_13)(uVar15,*(undefined8 *)(lVar22 + 0xd00),0,0);
          uVar15 = (*(code *)puVar9)(0x180224000);
          (*extraout_x11_14)(uVar15,0x28,0x19,1);
          uVar15 = (*(code *)puVar9)(0x180224000);
          (*extraout_x11_15)(uVar15,*(undefined8 *)(lVar22 + 0xd08),0,0);
          uVar15 = (*(code *)puVar9)(0x180224000);
          (*extraout_x11_16)(uVar15,1,0x19,1);
          uVar15 = (*(code *)puVar9)(0x180224000);
          (*extraout_x11_17)(uVar15,*(undefined8 *)(lVar22 + 0xd10),0,0);
          uVar15 = (*(code *)puVar9)(0x180224000);
          (*extraout_x11_18)(uVar15,0x28,0x19,1);
          uVar15 = (*(code *)puVar9)(0x180224000);
          (*extraout_x11_19)(uVar15,*(undefined8 *)(lVar22 + 8000),*(undefined8 *)(lVar22 + 0x1f30))
          ;
          local_e8 = 0;
          uStack_e0 = 0;
          local_d8 = 0;
          uVar15 = (*(code *)puVar9)(0x180224000);
          (*extraout_x11_20)(uVar15,0,3,&local_e8);
          local_218 = 0;
          local_210 = 0x4348000043a00000;
          local_208 = 0x3f80000000000000;
          FUN_1801ffba8(lVar24,uVar14,&local_218);
          FUN_1801fff80(lVar24,uVar14,5,*(undefined8 *)(lVar22 + 0xe88),
                        *(undefined8 *)(lVar22 + 0xe78),*(undefined8 *)(lVar22 + 0xe68),0);
          local_d0 = *(undefined8 *)(lVar22 + 0x1f10);
          uStack_c8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          FUN_1802000e0(lVar24,uVar14,4,&local_d0,0);
          local_2f0 = *(undefined8 *)(lVar22 + 0x1f28);
          local_2f8 = *(longlong **)(lVar22 + 0x1f00);
          local_2e8 = *(undefined8 *)(lVar22 + 0x1f48);
          FUN_1801ffd80(lVar24,uVar14,0,3,&local_2f8);
          local_380 = CONCAT44(local_380._4_4_,0x10);
          local_378 = local_378 & 0xffffffff00000000;
          FUN_1801ffe20(lVar24,uVar14);
          FUN_1801fff08(lVar24,uVar14,0,0);
          uVar15 = (*(code *)puVar9)(0x180224000);
          iVar13 = (*extraout_x11_21)(uVar15,*(undefined8 *)(lVar22 + 0xe98),0,4,0,local_360);
          if (-1 < iVar13) {
            *local_360[0] = 0xbf800000;
            local_360[0][1] = 0x3f800000;
            local_360[0][2] = 0xc2200000;
            local_360[0][3] = 0xc2280000;
            local_360[0][4] = 0x3f800000;
            local_360[0][5] = 0x3f800000;
            local_360[0][6] = 0x43480000;
            local_360[0][7] = 0xc2280000;
            local_360[0][8] = 0xbf800000;
            local_360[0][9] = 0xbf800000;
            local_360[0][10] = 0xc2200000;
            local_360[0][0xb] = 0x43720000;
            local_360[0][0xc] = 0x3f800000;
            local_360[0][0xd] = 0xbf800000;
            local_360[0][0xe] = 0x43480000;
            local_360[0][0xf] = 0x43720000;
            uVar15 = (*(code *)puVar9)(0x180224000);
            (*extraout_x11_22)(uVar15,*(undefined8 *)(lVar22 + 0xe98),0);
          }
          uVar15 = (*(code *)puVar9)(0x180224000);
          (*extraout_x11_23)(uVar15,4,0);
          local_370 = *(undefined4 ***)(lVar23 + 0x1f18);
          lVar18 = *(longlong *)(lVar23 + 0x1f08);
        }
      }
      if (local_318 != '\0') {
        local_2e0 = (undefined4 **)0x0;
        local_2d8 = 0;
        uVar15 = (*(code *)puVar9)(0x180224000);
        (*extraout_x11_24)(uVar15,*(undefined8 *)(lVar20 + 0xd80),&local_2e0);
      }
      if (*(int *)(lVar20 + 0x2c) != 7) {
        local_2b0 = (undefined4 **)local_348;
        uStack_2a8 = lVar23 + 0x6b0;
        uStack_288 = uStack_288 & 0xffffffff00000000;
        local_290 = local_370;
        local_2a0 = lVar20;
        local_298 = lVar18;
        FUN_180201970(lVar24,local_348,lVar20,&local_2b0);
        local_370 = local_290;
        lVar18 = local_298;
      }
      if ((((local_348[0] == 0) && (local_317 == '\0')) &&
          (local_330 - local_338 == local_320 - local_328)) &&
         (local_32c - local_334 == local_31c - local_324)) {
        local_2d0 = local_32c;
        uStack_2cc = 1;
        local_2d8 = (ulonglong)local_330 << 0x20;
        uVar15 = (*(code *)puVar9)(0x180225000);
        (*extraout_x11_25)(uVar15,*(undefined8 *)(lVar20 + 0xd78),0);
      }
      else {
        FUN_1801fec48(lVar24,*(undefined4 *)(lVar20 + 0x10),&DAT_180238620,0,0xffffffff,0);
        FUN_1801ff3a8(lVar24,*(undefined4 *)(lVar20 + 0x10),&DAT_1802387c0,0);
        FUN_1801ff6a0(lVar24,*(undefined4 *)(lVar20 + 0x10),&DAT_180238798);
        local_380 = CONCAT44(local_380._4_4_,0x10);
        local_378 = local_378 & 0xffffffff00000000;
        FUN_1801ffe20(lVar24,*(undefined4 *)(lVar20 + 0x10));
        FUN_1801fff08(lVar24,*(undefined4 *)(lVar20 + 0x10),0,0);
        uVar15 = (*(code *)puVar9)(0x180224000);
        iVar13 = (*extraout_x11_26)(uVar15,*(undefined8 *)(lVar23 + 0xea8),0,4,0,&local_2e0);
        if (-1 < iVar13) {
          FUN_180201840(lVar24,lVar20);
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(local_2e0,lVar23 + 0xeb0,0x1040);
        }
        FUN_1801fff80(lVar24,*(undefined4 *)(lVar20 + 0x10),5,*(undefined8 *)(lVar23 + 0xe80),
                      *(undefined8 *)(lVar23 + 0xe70),
                      *(undefined8 *)
                       (lVar23 + (ulonglong)(byte)(&DAT_180238828)[local_348[0]] * 8 + 0xd18),0);
        uVar15 = (*(code *)puVar9)(0x180224000);
        (*extraout_x11_27)(uVar15,2,1,lVar23 + 0xea8);
        uVar15 = (*(code *)puVar9)(0x180224000);
        (*extraout_x11_28)(uVar15,2,1,lVar23 + 0xea8);
        local_2f8 = (longlong *)0x0;
        local_2e8 = 0x3f80000000000000;
        local_2f0 = CONCAT44((float)uStack_12c,(float)local_130);
        FUN_1801ffba8(lVar24,*(undefined4 *)(lVar20 + 0x10),&local_2f8);
        local_1d8 = *(undefined8 *)(lVar20 + 0xd80);
        local_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1d0 = 0;
        FUN_1802000e0(lVar24,*(undefined4 *)(lVar20 + 0x10),4,&local_1d8,0);
        local_2e0 = local_370;
        local_2d8 = 0;
        FUN_1801ffd80(lVar24,*(undefined4 *)(lVar20 + 0x10),0,2,&local_2e0);
        if ((&DAT_180238868)[local_348[0]] == '\0') {
          uVar21 = 0;
          uVar19 = 0;
        }
        else {
          FUN_1801ffce0(lVar24,*(undefined4 *)(lVar20 + 0x10),1,1,lVar23 + 0xe90);
          (*(code *)puVar9)(0x180224000);
          (*extraout_x11_29)(lVar18,&local_2e0);
          uVar21 = (undefined4)local_2e0;
          uVar19 = local_2e0._4_4_;
        }
        uVar14 = 0;
        if (*(uint *)(lVar23 + 0xea0) + 4 < 0x401) {
          uVar14 = *(uint *)(lVar23 + 0xea0);
        }
        *(uint *)(lVar23 + 0xea0) = uVar14 + 4;
        uVar15 = (*(code *)puVar9)(0x180224000);
        uVar15 = (*extraout_x11_30)(uVar15,*(undefined8 *)(lVar23 + 0xe98),0);
        if (-1 < (int)uVar15) {
          FUN_180201bd0(uVar15,lVar20,local_348,local_228 + (ulonglong)uVar14 * 0x10,uVar21,uVar19);
          uVar15 = (*(code *)puVar9)(0x180224000);
          (*extraout_x11_31)(uVar15,*(undefined8 *)(lVar23 + 0xe98),0);
        }
        uVar15 = (*(code *)puVar9)(0x180224000);
        (*extraout_x11_32)(uVar15,4,uVar14);
      }
      local_2e0 = (undefined4 **)0x0;
      local_2d8 = 0;
      FUN_1801ffd80(lVar24,*(undefined4 *)(lVar20 + 0x10),0,2,&local_2e0);
      fVar26 = (float)(uint)((local_320 - local_328) * *(int *)(lVar20 + 0x20)) /
               (float)(int)(local_330 - local_338);
      local_2b0 = *(undefined4 ***)(lVar20 + 0xd78);
      uStack_2a8 = *(longlong *)(lVar20 + 0xd80);
      local_2a0 = CONCAT44(uStack_33c,local_340);
      fVar25 = (float)(uint)((local_31c - local_324) * *(int *)(lVar20 + 0x24)) /
               (float)(local_32c - local_334);
      local_298 = CONCAT44(uStack_12c,local_130);
      local_290 = (undefined4 **)&local_328;
      uStack_288 = CONCAT44(fVar25,fVar26);
      local_280 = CONCAT44((float)local_324 - (float)local_334 * fVar25,
                           (float)local_328 - (float)local_338 * fVar26);
    }
    (*(code *)puVar9)(0x180224000);
    (*extraout_x11_33)(&local_1b8,&local_2b0);
  }
  if ((*(char *)(lVar20 + 0xd6a) != '\0') && (*(longlong *)(lVar20 + 0xdb8) != 0)) {
    lVar22 = lVar24 + (ulonglong)*(uint *)(lVar20 + 0x10) * 0x18c0;
    uVar15 = (*(code *)puVar9)(0x180224000);
    uVar15 = (*extraout_x11_34)(uVar15,&local_80);
    FUN_180201e10(uVar15,lVar20,&puStack_1ec,local_80,uStack_7c,&local_2b0,&local_2e0);
    local_2e8 = 0x3f80000000000000;
    local_2f8 = (longlong *)local_2e0;
    local_2f0 = local_2d8;
    FUN_1801ffba8(lVar24,*(undefined4 *)(lVar20 + 0x10),&local_2f8);
    FUN_1801ff3a8(lVar24,*(undefined4 *)(lVar20 + 0x10),&DAT_1802387c0,0);
    FUN_1801ff6a0(lVar24,*(undefined4 *)(lVar20 + 0x10),&DAT_180238798);
    FUN_1801fff80(lVar24,*(undefined4 *)(lVar20 + 0x10),5,*(undefined8 *)(lVar22 + 0xe88),
                  *(undefined8 *)(lVar22 + 0xe78),*(undefined8 *)(lVar22 + 0xe58),0);
    local_1d8 = *(undefined8 *)(lVar20 + 0xd80);
    local_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d0 = 0;
    FUN_1802000e0(lVar24,*(undefined4 *)(lVar20 + 0x10),4,&local_1d8,0);
    local_380 = CONCAT44(local_380._4_4_,0x10);
    local_378 = local_378 & 0xffffffff00000000;
    FUN_1801ffe20(lVar24,*(undefined4 *)(lVar20 + 0x10));
    FUN_1801fff08(lVar24,*(undefined4 *)(lVar20 + 0x10),0,0);
    uVar14 = 0;
    if (*(uint *)(lVar22 + 0xea0) + 4 < 0x401) {
      uVar14 = *(uint *)(lVar22 + 0xea0);
    }
    *(uint *)(lVar22 + 0xea0) = uVar14 + 4;
    uVar15 = (*(code *)puVar9)(0x180224000);
    iVar13 = (*extraout_x11_35)(uVar15,*(undefined8 *)(lVar22 + 0xe98),0);
    if (-1 < iVar13) {
      puVar1 = (undefined8 *)(local_228 + (ulonglong)uVar14 * 0x10);
      puVar1[1] = uStack_2a8;
      *puVar1 = local_2b0;
      puVar1[3] = local_298;
      puVar1[2] = local_2a0;
      puVar1[5] = uStack_288;
      puVar1[4] = local_290;
      puVar1[7] = uStack_278;
      puVar1[6] = local_280;
      uVar15 = (*(code *)puVar9)(0x180224000);
      (*extraout_x11_36)(uVar15,*(undefined8 *)(lVar22 + 0xe98),0);
    }
    FUN_1801ffc68(lVar24,*(undefined4 *)(lVar20 + 0x10));
    if (*(longlong **)(lVar20 + 0xdd0) == (longlong *)0x0) {
      puVar16 = &DAT_180238450;
    }
    else {
      local_2d8 = 0;
      local_2e0 = (undefined4 **)*(longlong **)(lVar20 + 0xdd0);
      FUN_1801ffd80(lVar24,*(undefined4 *)(lVar20 + 0x10),0,2,&local_2e0);
      FUN_1801fec48(lVar24,*(undefined4 *)(lVar20 + 0x10),&DAT_180238340,0,0xffffffff,0);
      uVar15 = (*(code *)puVar9)(0x180224000);
      (*extraout_x11_37)(uVar15,4,uVar14);
      puVar16 = &DAT_180238230;
    }
    FUN_1801fec48(lVar24,*(undefined4 *)(lVar20 + 0x10),puVar16,0,0xffffffff,0);
    local_390 = *(undefined4 **)(lVar20 + 0xdc0);
    uStack_388 = 0;
    FUN_1801ffd80(lVar24,*(undefined4 *)(lVar20 + 0x10),0,2,&local_390);
    uVar15 = (*(code *)puVar9)(0x180224000);
    (*extraout_x11_38)(uVar15,4,uVar14);
    local_390 = (undefined4 *)0x0;
    uStack_388 = 0;
    FUN_1801ffd80(lVar24,*(undefined4 *)(lVar20 + 0x10),0,2,&local_390);
  }
  if (((local_310 == 0) && (*(char *)(lVar20 + 0xd6c) != '\0')) &&
     ((*(int *)(lVar20 + 0x3c) != 2 || (*(char *)(lVar20 + 0xd6d) == '\0')))) {
    uVar15 = 0x200;
  }
  else {
    uVar15 = 0;
  }
  uVar15 = (*(code *)puVar9)(0x180224000,*(undefined8 *)(lVar20 + 8),local_310,uVar15);
  uVar14 = (*extraout_x11_39)(uVar15,local_310);
  lVar22 = local_308;
  thunk_FUN_18022370c(*(longlong *)(local_308 + 0xf10) + 0x620);
  if (-((int)~uVar14 >> 0x1f) != 0) {
    FUN_180204018(*(undefined8 *)(lVar22 + 0xf10),*local_350);
  }
  return -((int)~uVar14 >> 0x1f);
}

