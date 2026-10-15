/*
 * FUN_180203780 at 180203780
 * undefined FUN_180203780(void)
 * Address ranges: 180203780-180203e37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180203780(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 extraout_x1;
  undefined4 uVar11;
  undefined8 extraout_x8;
  uint uVar12;
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
  longlong local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined4 local_2b8;
  longlong local_2b0;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  undefined4 local_290;
  undefined4 local_288;
  undefined4 local_278;
  int local_264;
  undefined4 local_260;
  undefined4 local_250;
  int local_24c;
  int iStack_248;
  int local_244;
  int iStack_240;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [24];
  longlong local_a8;
  undefined1 auStack_a0 [88];
  longlong local_48;
  
  thunk_FUN_1802236f8(param_1 + 0x620);
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  local_2e0 = 0;
  if ((param_3 == 0) || (param_4 == 0)) {
LAB_180203828:
    local_2e0 = 0;
  }
  else {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    cVar4 = (*extraout_x11)(param_1);
    if (cVar4 != '\0') goto LAB_180203828;
    uVar8 = (*(code *)puVar2)(0x180224000);
    iVar6 = (*extraout_x11_00)(uVar8,param_4 + -1,&local_2e0);
    if (iVar6 < 0) goto LAB_180203828;
  }
  iVar6 = *(int *)((longlong)param_2 + 0x3c);
  if (param_3 - 2U < 2) {
    *(int *)((longlong)param_2 + 0x3c) = param_3;
    FUN_1802022d0(param_1,param_2,local_2e0,0);
    if (*(int *)((longlong)param_2 + 0x3c) != 3) {
      uVar8 = (*(code *)puVar2)(0x180224000);
      iVar7 = (*extraout_x11_10)(uVar8,1,local_2e0);
      goto LAB_180203c64;
    }
    uVar8 = thunk_FUN_180223d4c(*param_2,0xfffffff0);
    param_2[0x1a8] = uVar8;
    uVar8 = thunk_FUN_180223d4c(*param_2,0xffffffec);
    param_2[0x1a9] = uVar8;
    thunk_FUN_180224044(*param_2,param_2 + 0x1a6);
    if (local_2e0 == 0) {
      lVar9 = thunk_FUN_18022401c(param_2 + 0x1a6,2);
    }
    else {
      uVar8 = (*(code *)puVar2)(0x180224000);
      (*extraout_x11_02)(uVar8,auStack_a0);
      lVar9 = local_48;
    }
    puVar1 = (undefined8 *)((longlong)param_2 + 0xc54);
    local_250 = 0x68;
    *(undefined8 *)((longlong)param_2 + 0xc5c) = 0;
    *puVar1 = 0;
    *(undefined8 *)((longlong)param_2 + 0xc6c) = 0;
    *(undefined8 *)((longlong)param_2 + 0xc64) = 0;
    *(undefined8 *)((longlong)param_2 + 0xc7c) = 0;
    *(undefined8 *)((longlong)param_2 + 0xc74) = 0;
    *(undefined8 *)((longlong)param_2 + 0xc8c) = 0;
    *(undefined8 *)((longlong)param_2 + 0xc84) = 0;
    *(undefined8 *)((longlong)param_2 + 0xc9c) = 0;
    *(undefined8 *)((longlong)param_2 + 0xc94) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcac) = 0;
    *(undefined8 *)((longlong)param_2 + 0xca4) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcbc) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcb4) = 0;
    *(undefined8 *)((longlong)param_2 + 0xccc) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcc4) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcdc) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcd4) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcec) = 0;
    *(undefined8 *)((longlong)param_2 + 0xce4) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcfc) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcf4) = 0;
    *(undefined8 *)((longlong)param_2 + 0xd0c) = 0;
    *(undefined8 *)((longlong)param_2 + 0xd04) = 0;
    *(undefined8 *)((longlong)param_2 + 0xd1c) = 0;
    *(undefined8 *)((longlong)param_2 + 0xd14) = 0;
    *(undefined8 *)((longlong)param_2 + 0xd24) = 0;
    *(undefined4 *)((longlong)param_2 + 0xd2c) = 0;
    iVar6 = thunk_FUN_180223dec(lVar9,&local_250);
    if ((iVar6 != 0) && (iVar6 = thunk_FUN_180223fe0(&local_228,0xffffffff,puVar1), iVar6 != 0)) {
      *(undefined8 *)((longlong)param_2 + 0xc5c) = uStack_220;
      *puVar1 = local_228;
      *(undefined8 *)((longlong)param_2 + 0xc6c) = uStack_210;
      *(undefined8 *)((longlong)param_2 + 0xc64) = uStack_218;
      *(undefined8 *)((longlong)param_2 + 0xc7c) = uStack_200;
      *(undefined8 *)((longlong)param_2 + 0xc74) = local_208;
      *(undefined8 *)((longlong)param_2 + 0xc8c) = uStack_1f0;
      *(undefined8 *)((longlong)param_2 + 0xc84) = uStack_1f8;
      uVar8 = (*(code *)puVar2)(0x180224000);
      (*extraout_x11_03)(uVar8,&local_2a0);
      uStack_1d8 = *(undefined8 *)((longlong)param_2 + 0xc5c);
      local_1e0 = *puVar1;
      uStack_1c8 = *(undefined8 *)((longlong)param_2 + 0xc6c);
      uStack_1d0 = *(undefined8 *)((longlong)param_2 + 0xc64);
      local_2d8 = 0;
      local_110 = *(undefined8 *)((longlong)param_2 + 0xd24);
      uStack_1b8 = *(undefined8 *)((longlong)param_2 + 0xc7c);
      local_1c0 = *(undefined8 *)((longlong)param_2 + 0xc74);
      uStack_1a8 = *(undefined8 *)((longlong)param_2 + 0xc8c);
      uStack_1b0 = *(undefined8 *)((longlong)param_2 + 0xc84);
      local_108 = *(undefined4 *)((longlong)param_2 + 0xd2c);
      uStack_198 = *(undefined8 *)((longlong)param_2 + 0xc9c);
      local_1a0 = *(undefined8 *)((longlong)param_2 + 0xc94);
      uStack_188 = *(undefined8 *)((longlong)param_2 + 0xcac);
      uStack_190 = *(undefined8 *)((longlong)param_2 + 0xca4);
      uStack_178 = *(undefined8 *)((longlong)param_2 + 0xcbc);
      local_180 = *(undefined8 *)((longlong)param_2 + 0xcb4);
      uStack_168 = *(undefined8 *)((longlong)param_2 + 0xccc);
      uStack_170 = *(undefined8 *)((longlong)param_2 + 0xcc4);
      uStack_158 = *(undefined8 *)((longlong)param_2 + 0xcdc);
      local_160 = *(undefined8 *)((longlong)param_2 + 0xcd4);
      uStack_148 = *(undefined8 *)((longlong)param_2 + 0xcec);
      uStack_150 = *(undefined8 *)((longlong)param_2 + 0xce4);
      uStack_138 = *(undefined8 *)((longlong)param_2 + 0xcfc);
      local_140 = *(undefined8 *)((longlong)param_2 + 0xcf4);
      local_128 = *(undefined8 *)((longlong)param_2 + 0xd0c);
      uStack_130 = *(undefined8 *)((longlong)param_2 + 0xd04);
      uStack_118 = *(undefined8 *)((longlong)param_2 + 0xd1c);
      local_120 = *(undefined8 *)((longlong)param_2 + 0xd14);
      if (local_2e0 == 0) {
        iVar6 = 0;
        uVar8 = (*(code *)puVar2)(0x180224000);
        iVar7 = (*extraout_x11_04)(uVar8,0,&local_2d8);
        param_2 = param_2;
        param_1 = param_1;
        lVar3 = local_2e0;
        if (-1 < iVar7) {
          uVar8 = 0x180224000;
          local_2d0 = param_2;
          local_2b0 = param_1;
          do {
            uVar8 = (*(code *)puVar2)(local_2d8,uVar8);
            (*extraout_x11_05)(uVar8,auStack_100);
            param_2 = local_2d0;
            param_1 = local_2b0;
            lVar3 = local_2d8;
            if (local_a8 == lVar9) break;
            (*(code *)puVar2)();
            (*extraout_x11_06)();
            iVar6 = iVar6 + 1;
            uVar8 = (*(code *)puVar2)();
            iVar7 = (*extraout_x11_07)(uVar8,iVar6,&local_2d8);
            uVar8 = extraout_x1;
            param_2 = local_2d0;
            param_1 = local_2b0;
            lVar3 = local_2e0;
          } while (-1 < iVar7);
        }
        local_2e0 = lVar3;
        if (local_2e0 != 0) goto LAB_180203b1c;
      }
      else {
LAB_180203b1c:
        (*(code *)puVar2)();
        iVar6 = (*extraout_x11_08)(extraout_x8,&local_2a0,&local_2d0,0);
        if (iVar6 < 0) {
          local_2d0 = (undefined8 *)CONCAT44(uStack_29c,local_2a0);
          uStack_2c8 = uStack_298;
          local_2b8 = local_288;
        }
        if (uStack_2c8._4_4_ == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          if (uStack_2c8._4_4_ != 0) {
            uVar12 = (uint)uStack_2c8 / uStack_2c8._4_4_;
          }
        }
        local_128 = CONCAT44(local_128._4_4_,uVar12);
        uStack_138 = CONCAT44((undefined4)local_2d0,(undefined4)uStack_138);
        uStack_130 = CONCAT44(uStack_130._4_4_,local_2d0._4_4_);
        uVar11 = 0x580000;
        if (uVar12 == 0) {
          uVar11 = 0x180000;
        }
        uStack_198 = CONCAT44(uStack_198._4_4_,uVar11);
        thunk_FUN_180224058(&local_228,&local_1e0,0,4,0);
        thunk_FUN_180223dec(lVar9,&local_250);
        thunk_FUN_180223d60(*param_2,0xfffffff0,0x90000000);
        thunk_FUN_180223d60(*param_2,0xffffffec,0x40000);
        thunk_FUN_180224030(*param_2,0xfffffffffffffffe,local_24c,iStack_248,local_244 - local_24c,
                            iStack_240 - iStack_248,0x10);
      }
      if (local_2d8 != 0) {
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_09)();
        local_2e0 = 0;
      }
    }
  }
  else {
    if (iVar6 == 3) {
      if (*(short *)(param_2 + 0x193) != 0) {
        thunk_FUN_180224058((longlong)param_2 + 0xc54,(longlong)param_2 + 0xc54,0,0,0);
      }
      thunk_FUN_180223d60(*param_2,0xfffffff0,param_2[0x1a8]);
      thunk_FUN_180223d60(*param_2,0xffffffec,param_2[0x1a9]);
      thunk_FUN_180224030(*param_2,0,*(int *)(param_2 + 0x1a6),*(int *)((longlong)param_2 + 0xd34),
                          *(int *)(param_2 + 0x1a7) - *(int *)(param_2 + 0x1a6),
                          *(int *)((longlong)param_2 + 0xd3c) - *(int *)((longlong)param_2 + 0xd34),
                          0x214);
    }
    uVar8 = (*(code *)puVar2)(0x180224000);
    iVar7 = (*extraout_x11_01)(uVar8,0,0);
    *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
    FUN_1802022d0(param_1,param_2,local_2e0,0);
LAB_180203c64:
    if (iVar7 < 0) {
      *(int *)((longlong)param_2 + 0x3c) = iVar6;
      if ((param_3 == 2) && (local_2e0 != 0)) {
        lVar9 = local_2e0;
        (*(code *)puVar2)(0x180224000);
        iVar6 = (*extraout_x11_16)(lVar9,auStack_100);
        if ((iVar6 < 0) ||
           (uVar10 = thunk_FUN_180223d4c(*param_2,0xfffffff0), (uVar10 & 0x80c80000) != 0x80000000))
        goto LAB_180203dbc;
        thunk_FUN_180224044(*param_2,&local_2d0);
        iVar6 = thunk_FUN_180223c48(&local_2d0,auStack_c0);
        if (iVar6 == 0) goto LAB_180203dbc;
      }
      else {
LAB_180203dbc:
        FUN_1802022d0(param_1,param_2,local_2e0,0);
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_17)(param_1,param_2);
      }
      uVar8 = 0;
      goto LAB_180203df0;
    }
  }
  uVar8 = (*(code *)puVar2)(0x180224000);
  uVar8 = (*extraout_x11_11)(uVar8,&local_2a0);
  if ((-1 < (int)uVar8) && (local_264 - 3U < 2)) {
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_12)(param_1,param_2);
    uVar8 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_13)(uVar8,local_278,local_2a0,uStack_29c,local_290,local_260);
    (*(code *)puVar2)(0x180224000);
    uVar8 = (*extraout_x11_14)(param_1,param_2,0);
  }
  uVar5 = FUN_180202238(uVar8,param_2);
  *(undefined1 *)((longlong)param_2 + 0xd6e) = 0;
  *(undefined1 *)((longlong)param_2 + 0xd6d) = uVar5;
  (*(code *)puVar2)(0x180224000);
  (*extraout_x11_15)(param_1,param_2);
  uVar8 = 1;
LAB_180203df0:
  if (local_2e0 != 0) {
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_18)();
  }
  thunk_FUN_18022370c(param_1 + 0x620);
  return uVar8;
}

