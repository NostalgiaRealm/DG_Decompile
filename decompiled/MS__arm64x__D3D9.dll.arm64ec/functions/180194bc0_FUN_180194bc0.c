/*
 * FUN_180194bc0 at 180194bc0
 * undefined FUN_180194bc0(void)
 * Address ranges: 180194bc0-180195623
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180194bc0(ulonglong param_1,int *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  int local_1e0 [2];
  code *local_1d8;
  longlong local_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  undefined8 *local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 auStack_170 [256];
  undefined4 local_70;
  undefined4 uStack_6c;
  
  uVar10 = DAT_180258908;
  *(int **)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  auVar17 = FUN_1801fe488(uVar10);
  lVar13 = auVar17._0_8_;
  lVar8 = param_1 + 0x1c000;
  *(longlong *)(param_1 + 0x1cf10) = lVar13;
  if (lVar13 == 0) {
    return 0;
  }
  *(longlong *)(param_1 + 0x20) = lVar13;
  *(int **)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  if (param_4 == 6) {
LAB_180194c60:
    uVar11 = 0x1e0000001b;
    uVar10 = 0x1c0000001c;
LAB_180194c68:
    *(undefined8 *)(param_1 + 0x38) = uVar11;
    *(undefined8 *)(param_1 + 0x40) = uVar10;
  }
  else {
    if (param_4 == 0x15) {
      uVar11 = 0x1800000017;
      uVar10 = 0x1800000018;
      goto LAB_180194c68;
    }
    if (param_4 == 0x16) {
      uVar11 = 0xb00000009;
      uVar10 = 0xb0000000b;
      goto LAB_180194c68;
    }
    if (param_4 != 0x2a) goto LAB_180194c60;
    *(undefined8 *)(param_1 + 0x38) = 0x1e0000001b;
    *(undefined8 *)(param_1 + 0x40) = 0x1c0000001c;
    uVar11 = 0x1800000017;
    uVar10 = 0x1800000018;
  }
  *(undefined8 *)(param_1 + 0x48) = uVar11;
  *(undefined8 *)(param_1 + 0x50) = uVar10;
  uVar10 = FUN_180202728(lVar13,auVar17._8_8_,param_1);
  pcVar15 = (code *)__hybrid_os_arm64x_dispatch_icall;
  local_1e0[0] = *param_2;
  uVar7 = 5;
  if (local_1e0[0] != 3) {
    uVar7 = 0;
  }
  auVar4._8_4_ = uVar7;
  auVar4._0_8_ = uVar10;
  auVar4._12_4_ = 0;
  auVar17._8_4_ = uVar7;
  auVar17._0_8_ = uVar10;
  auVar17._12_4_ = 0;
  local_1c8 = CONCAT44(local_1c8._4_4_,uVar7);
  if (local_1e0[0] - 2U < 2) {
    puVar16 = &DAT_180238100;
LAB_180194cdc:
    uVar10 = 1;
  }
  else {
    if (local_1e0[0] == 1) {
      puVar16 = &DAT_180238104;
      goto LAB_180194cdc;
    }
    if (local_1e0[0] == 4) {
      puVar16 = &DAT_180238108;
      goto LAB_180194cdc;
    }
    puVar16 = &DAT_1802381c0;
    uVar10 = 3;
  }
  local_1a8 = (ulonglong)*(uint *)(param_1 + 0x28);
  lVar13 = *(longlong *)(param_1 + 0x1cf10);
  local_1d8 = (code *)(lVar13 + local_1a8 * 0x28);
  lVar12 = lVar13 + local_1a8 * 0x18c0;
  if ((local_1d8[0x2c] != (code)0x0) &&
     (iVar6 = *(int *)(local_1d8 + 0x28), *(int *)(local_1d8 + 0x28) = iVar6 + 1, auVar17 = auVar4,
     iVar6 == 0)) {
    if (local_1e0[0] == 3) {
      local_1d0 = 0;
    }
    else {
      local_1d0 = *(longlong *)(local_1d8 + 0x18);
    }
    *(undefined4 *)(lVar12 + 0x6d0) = 0;
    local_1b0 = *(longlong *)(lVar13 + 0x2e0);
    local_1b8 = (undefined8 *)(lVar12 + 0x6b8);
    local_1c0 = lVar12 + 0x6cc;
    (*pcVar15)(0x180225000);
    auVar17 = (*extraout_x11)(local_1d0,local_1c8 & 0xffffffff,0,0,puVar16,uVar10,7,lVar12 + 0x6b0,
                              local_1c0,local_1b8);
    if (auVar17._0_4_ < 0) {
      if (local_1e0[0] == 0) {
        (*pcVar15)(0x180225000);
        auVar17 = (*extraout_x11_02)(0,5,0,0,puVar16,uVar10,7,lVar12 + 0x6b0,local_1c0,local_1b8);
        if (-1 < auVar17._0_4_) {
          uVar10 = (*pcVar15)(0x180224000);
          auVar17 = (*extraout_x11_03)(uVar10,&DAT_1802387f8,lVar12 + 0x6c0);
          *(undefined4 *)(lVar12 + 0x6c8) = 5;
          goto LAB_180194eb8;
        }
      }
      *(int *)(local_1d8 + 0x28) = *(int *)(local_1d8 + 0x28) + -1;
    }
    else {
      uVar10 = (*pcVar15)(0x180224000);
      (*extraout_x11_00)(uVar10,&DAT_1802387f8,lVar12 + 0x6c0);
      *(undefined4 *)(lVar12 + 0x6c8) = (undefined4)local_1c8;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_1c8 & 0xffffffff;
      auVar17 = auVar5 << 0x40;
      if (local_1d0 != 0) {
        uVar10 = (*pcVar15)(0x180224000);
        auVar17 = (*extraout_x11_01)(uVar10,auStack_170);
        *(undefined4 *)(lVar12 + 0x6d0) = local_70;
        *(undefined4 *)(lVar12 + 0x6d4) = uStack_6c;
      }
      if ((*(longlong *)(lVar13 + 0x2d8) == 0) ||
         (auVar17 = FUN_180215108(FUN_180215228), (auVar17._0_8_ & 1) == 0)) {
        *(undefined8 *)(local_1d8 + 0x30) = 0;
      }
    }
  }
LAB_180194eb8:
  if (*(int *)(local_1d8 + 0x28) == 0) goto LAB_1801955e8;
  if (*(int *)(local_1d8 + 0x28) == 1) {
    (*pcVar15)(0x180224000);
    (*extraout_x11_04)();
    (*pcVar15)(0x180224000);
    (*extraout_x11_05)();
    local_1a0 = 0x200001050;
    uStack_198 = 0x1000000000004;
    local_190 = 0x105000000000;
    uVar10 = (*pcVar15)(0x180224000);
    iVar6 = (*extraout_x11_06)(uVar10,&local_1a0,0,lVar12 + 0xea8);
    if (-1 < iVar6) {
      uVar10 = (*pcVar15)(0x180224000);
      (*extraout_x11_07)(uVar10,4,local_1e0,4);
      *(bool *)(lVar13 + 0x67c) = local_1e0[0] != 0;
      if (local_1e0[0] == 0) {
LAB_180195040:
        uVar14 = local_1a8;
        uVar7 = (undefined4)local_1a8;
        uVar9 = FUN_1801fe590(lVar13,local_1a8 & 0xffffffff,*(undefined8 *)(lVar13 + 0x298),0x2b,
                              &DAT_18024c5b0,lVar12 + 0xd18);
        if ((uVar9 & 1) != 0) {
          auVar17 = FUN_1801fe720(lVar13,uVar14 & 0xffffffff,*(undefined8 *)(lVar13 + 0x298),2,
                                  &DAT_18024c678,&PTR_PTR_18024c610,lVar12 + 0xe70,lVar12 + 0xe80);
          if ((auVar17._0_8_ & 1) != 0) {
            local_188 = 0x200004000;
            uStack_180 = 0x1000000000001;
            local_178 = 0x1000000000;
            uVar10 = (*pcVar15)(0x180224000);
            auVar17 = (*extraout_x11_09)(uVar10,&local_188,0,lVar12 + 0xe98);
            if (-1 < auVar17._0_4_) {
              uVar10 = (*pcVar15)(0x180224000);
              auVar17 = (*extraout_x11_10)(uVar10,&DAT_1802385e8,lVar12 + 0xe90);
              if (-1 < auVar17._0_4_) {
                *(undefined8 *)(lVar12 + 0x708) = 0;
                *(undefined8 *)(lVar12 + 0x6e0) = 0;
                *(undefined8 *)(lVar12 + 0x6e8) = 0;
                *(undefined8 *)(lVar12 + 0x6f0) = 0xffffffff;
                *(undefined8 *)(lVar12 + 0xbc8) = 0;
                *(undefined8 *)(lVar12 + 0xbc0) = 0;
                *(undefined8 *)(lVar12 + 0xbd8) = 0;
                *(undefined8 *)(lVar12 + 0xbd0) = 0;
                *(undefined8 *)(lVar12 + 0x798) = 0;
                *(undefined8 *)(lVar12 + 0x790) = 0;
                *(undefined8 *)(lVar12 + 0x7a8) = 0;
                *(undefined8 *)(lVar12 + 0x7a0) = 0;
                *(undefined8 *)(lVar12 + 0x7b8) = 0;
                *(undefined8 *)(lVar12 + 0x7b0) = 0;
                *(undefined8 *)(lVar12 + 0x7c8) = 0;
                *(undefined8 *)(lVar12 + 0x7c0) = 0;
                *(undefined8 *)(lVar12 + 0x7d8) = 0;
                *(undefined8 *)(lVar12 + 2000) = 0;
                *(undefined8 *)(lVar12 + 0x7e8) = 0;
                *(undefined8 *)(lVar12 + 0x7e0) = 0;
                *(undefined8 *)(lVar12 + 0x7f8) = 0;
                *(undefined8 *)(lVar12 + 0x7f0) = 0;
                *(undefined8 *)(lVar12 + 0x808) = 0;
                *(undefined8 *)(lVar12 + 0x800) = 0;
                *(undefined8 *)(lVar12 + 0x878) = 0;
                *(undefined8 *)(lVar12 + 0x870) = 0;
                *(undefined8 *)(lVar12 + 0x888) = 0;
                *(undefined8 *)(lVar12 + 0x880) = 0;
                *(undefined8 *)(lVar12 + 0x898) = 0;
                *(undefined8 *)(lVar12 + 0x890) = 0;
                *(undefined8 *)(lVar12 + 0x8a8) = 0;
                *(undefined8 *)(lVar12 + 0x8a0) = 0;
                *(undefined8 *)(lVar12 + 0x8b8) = 0;
                *(undefined8 *)(lVar12 + 0x8b0) = 0;
                *(undefined8 *)(lVar12 + 0x8c8) = 0;
                *(undefined8 *)(lVar12 + 0x8c0) = 0;
                *(undefined8 *)(lVar12 + 0x8d8) = 0;
                *(undefined8 *)(lVar12 + 0x8d0) = 0;
                *(undefined8 *)(lVar12 + 0x8e8) = 0;
                *(undefined8 *)(lVar12 + 0x8e0) = 0;
                *(undefined8 *)(lVar12 + 0x8f8) = 0;
                *(undefined8 *)(lVar12 + 0x8f0) = 0;
                *(undefined8 *)(lVar12 + 0x908) = 0;
                *(undefined8 *)(lVar12 + 0x900) = 0;
                *(undefined8 *)(lVar12 + 0x918) = 0;
                *(undefined8 *)(lVar12 + 0x910) = 0;
                *(undefined8 *)(lVar12 + 0x928) = 0;
                *(undefined8 *)(lVar12 + 0x920) = 0;
                *(undefined8 *)(lVar12 + 0x938) = 0;
                *(undefined8 *)(lVar12 + 0x930) = 0;
                *(undefined8 *)(lVar12 + 0x948) = 0;
                *(undefined8 *)(lVar12 + 0x940) = 0;
                *(undefined8 *)(lVar12 + 0x958) = 0;
                *(undefined8 *)(lVar12 + 0x950) = 0;
                *(undefined8 *)(lVar12 + 0x968) = 0;
                *(undefined8 *)(lVar12 + 0x960) = 0;
                *(undefined8 *)(lVar12 + 0x978) = 0;
                *(undefined8 *)(lVar12 + 0x970) = 0;
                *(undefined8 *)(lVar12 + 0x988) = 0;
                *(undefined8 *)(lVar12 + 0x980) = 0;
                *(undefined8 *)(lVar12 + 0x998) = 0;
                *(undefined8 *)(lVar12 + 0x990) = 0;
                *(undefined8 *)(lVar12 + 0x9a8) = 0;
                *(undefined8 *)(lVar12 + 0x9a0) = 0;
                *(undefined8 *)(lVar12 + 0x9b8) = 0;
                *(undefined8 *)(lVar12 + 0x9b0) = 0;
                *(undefined8 *)(lVar12 + 0x9c8) = 0;
                *(undefined8 *)(lVar12 + 0x9c0) = 0;
                *(undefined8 *)(lVar12 + 0x9d8) = 0;
                *(undefined8 *)(lVar12 + 0x9d0) = 0;
                *(undefined8 *)(lVar12 + 0x9e8) = 0;
                *(undefined8 *)(lVar12 + 0x9e0) = 0;
                *(undefined8 *)(lVar12 + 0x9f8) = 0;
                *(undefined8 *)(lVar12 + 0x9f0) = 0;
                *(undefined8 *)(lVar12 + 0xa08) = 0;
                *(undefined8 *)(lVar12 + 0xa00) = 0;
                *(undefined8 *)(lVar12 + 0xa18) = 0;
                *(undefined8 *)(lVar12 + 0xa10) = 0;
                *(undefined8 *)(lVar12 + 0xa28) = 0;
                *(undefined8 *)(lVar12 + 0xa20) = 0;
                *(undefined8 *)(lVar12 + 0xa38) = 0;
                *(undefined8 *)(lVar12 + 0xa30) = 0;
                *(undefined8 *)(lVar12 + 0xa48) = 0;
                *(undefined8 *)(lVar12 + 0xa40) = 0;
                *(undefined8 *)(lVar12 + 0xa58) = 0;
                *(undefined8 *)(lVar12 + 0xa50) = 0;
                *(undefined8 *)(lVar12 + 0xa68) = 0;
                *(undefined8 *)(lVar12 + 0xa60) = 0;
                *(undefined8 *)(lVar12 + 0xb88) = 0;
                *(undefined8 *)(lVar12 + 0xb80) = 0;
                *(undefined8 *)(lVar12 + 0xb90) = 0;
                *(undefined4 *)(lVar12 + 0xb98) = 0;
                *(undefined8 *)(lVar12 + 0xba0) = 0;
                *(undefined8 *)(lVar12 + 0xba8) = 0;
                *(undefined8 *)(lVar12 + 0xbb0) = 0;
                *(undefined8 *)(lVar12 + 3000) = 0;
                *(undefined8 *)(lVar12 + 0xbe0) = 0;
                *(undefined4 *)(lVar12 + 0xea0) = 0;
                *(longlong *)(lVar12 + 0xc08) = lVar13;
                *(undefined4 *)(lVar12 + 0xc10) = uVar7;
                *(longlong *)(lVar12 + 0xc28) = lVar13;
                *(undefined4 *)(lVar12 + 0xc30) = uVar7;
                *(longlong *)(lVar12 + 0xc48) = lVar13;
                *(undefined4 *)(lVar12 + 0xc50) = uVar7;
                *(longlong *)(lVar12 + 0xc68) = lVar13;
                *(undefined4 *)(lVar12 + 0xc70) = uVar7;
                *(longlong *)(lVar12 + 0xc88) = lVar13;
                *(undefined4 *)(lVar12 + 0xc90) = uVar7;
                *(longlong *)(lVar12 + 0xca8) = lVar13;
                *(undefined4 *)(lVar12 + 0xcb0) = uVar7;
                *(longlong *)(lVar12 + 0xcc8) = lVar13;
                *(undefined4 *)(lVar12 + 0xcd0) = uVar7;
                *(longlong *)(lVar12 + 0xce8) = lVar13;
                *(undefined4 *)(lVar12 + 0xcf0) = uVar7;
                goto LAB_1801951e8;
              }
              auVar17 = FUN_1801febb8(lVar13,uVar14 & 0xffffffff,*(undefined8 *)(lVar12 + 0xe98));
              *(undefined8 *)(lVar12 + 0xe98) = 0;
            }
            auVar17 = FUN_1801fe898(auVar17._0_8_,auVar17._8_8_,2,lVar12 + 0xe70,lVar12 + 0xe80);
          }
          FUN_1801fe6b0(auVar17._0_8_,auVar17._8_8_,0x2b,lVar12 + 0xd18);
        }
      }
      else {
        uVar10 = *(undefined8 *)(lVar13 + 0x298);
        local_1b8 = (undefined8 *)(lVar12 + 0xcf8);
        local_1d8 = pcVar15;
        bVar3 = true;
        *(undefined8 *)(lVar12 + 0xd00) = 0;
        *local_1b8 = 0;
        *(undefined8 *)(lVar12 + 0xd10) = 0;
        *(undefined8 *)(lVar12 + 0xd08) = 0;
        uVar14 = 0;
        local_1d0 = lVar8;
        local_1c8 = param_1;
        local_1c0 = lVar13;
        do {
          param_1 = local_1c8;
          lVar13 = local_1c0;
          pcVar15 = local_1d8;
          lVar8 = local_1d0;
          if (!bVar3) goto LAB_180195330;
          uVar7 = FUN_180222950(uVar10,(&DAT_18024c670)[uVar14],u_RT_CUSTOM_1802381f0);
          lVar8 = FUN_1802227d0(uVar10,(&DAT_18024c670)[uVar14],u_RT_CUSTOM_1802381f0);
          if (lVar8 == 0) {
LAB_18019501c:
            bVar3 = false;
          }
          else {
            uVar11 = (*local_1d8)();
            iVar6 = (*extraout_x11_08)(uVar11,lVar8,uVar7,0,local_1b8 + uVar14);
            if (iVar6 < 0) goto LAB_18019501c;
          }
          FUN_1802229d8(lVar8);
          uVar1 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar1;
        } while (uVar1 < 4);
        param_1 = local_1c8;
        lVar13 = local_1c0;
        pcVar15 = local_1d8;
        lVar8 = local_1d0;
        if (bVar3) goto LAB_180195040;
      }
LAB_180195330:
      FUN_1801fe9f8();
      (*pcVar15)(0x180224000);
      (*extraout_x11_12)();
    }
    FUN_1802002e0(lVar13,local_1a8 & 0xffffffff);
  }
  else {
LAB_1801951e8:
    bVar3 = true;
    lVar13 = *(longlong *)(lVar8 + 0xf10);
    uVar14 = 0;
    *(ulonglong *)(param_1 + 0x30) = lVar13 + (ulonglong)*(uint *)(param_1 + 0x28) * 0x28 + 0x18;
    local_1a8 = param_1 + 0x1c000;
    local_1b0 = lVar13 + (ulonglong)*(uint *)(param_1 + 0x28) * 0x18c0 + 0x6b0;
    *(longlong *)(param_1 + 0x1cf18) = local_1b0;
    local_1d8 = (code *)(param_1 + 0x1cf20);
    *(undefined8 *)(param_1 + 0x1cf28) = 0;
    *(undefined8 *)local_1d8 = 0;
    *(undefined8 *)(param_1 + 0x1cf38) = 0;
    *(undefined8 *)(param_1 + 0x1cf30) = 0;
    uVar10 = DAT_180258908;
    *(undefined8 *)(param_1 + 0x1cf48) = 0;
    *(undefined8 *)(param_1 + 0x1cf40) = 0;
    *(undefined8 *)(param_1 + 0x1cf58) = 0;
    *(undefined8 *)(param_1 + 0x1cf50) = 0;
    *(undefined8 *)(param_1 + 0x1cf68) = 0;
    *(undefined8 *)(param_1 + 0x1cf60) = 0;
    *(undefined8 *)(param_1 + 0x1cf78) = 0;
    *(undefined8 *)(param_1 + 0x1cf70) = 0;
    *(undefined8 *)(param_1 + 0x1cf88) = 0;
    *(undefined8 *)(param_1 + 0x1cf80) = 0;
    *(undefined8 *)(param_1 + 0x1cf98) = 0;
    *(undefined8 *)(param_1 + 0x1cf90) = 0;
    *(undefined8 *)(param_1 + 0x1cfa8) = 0;
    *(undefined8 *)(param_1 + 0x1cfa0) = 0;
    *(undefined8 *)(param_1 + 0x1cfb8) = 0;
    *(undefined8 *)(param_1 + 0x1cfb0) = 0;
    *(undefined8 *)(param_1 + 0x1cfc8) = 0;
    *(undefined8 *)(param_1 + 0x1cfc0) = 0;
    *(undefined8 *)(param_1 + 0x1cfd8) = 0;
    *(undefined8 *)(param_1 + 0x1cfd0) = 0;
    *(undefined8 *)(param_1 + 0x1cfe8) = 0;
    *(undefined8 *)(param_1 + 0x1cfe0) = 0;
    *(undefined8 *)(param_1 + 0x1cff8) = 0;
    *(undefined8 *)(param_1 + 0x1cff0) = 0;
    *(undefined8 *)(param_1 + 0x1d008) = 0;
    *(undefined8 *)(param_1 + 0x1d000) = 0;
    *(undefined8 *)(param_1 + 0x1d018) = 0;
    *(undefined8 *)(param_1 + 0x1d010) = 0;
    *(undefined8 *)(param_1 + 0x1d028) = 0;
    *(undefined8 *)(param_1 + 0x1d020) = 0;
    *(undefined8 *)(param_1 + 0x1d038) = 0;
    *(undefined8 *)(param_1 + 0x1d030) = 0;
    *(undefined8 *)(param_1 + 0x1d048) = 0;
    *(undefined8 *)(param_1 + 0x1d040) = 0;
    *(undefined8 *)(param_1 + 0x1d058) = 0;
    *(undefined8 *)(param_1 + 0x1d050) = 0;
    local_1d0 = lVar8;
    local_1c8 = param_1;
    do {
      param_1 = local_1c8;
      lVar8 = local_1d0;
      if (!bVar3) goto LAB_1801955d0;
      if ((&DAT_180248090)[uVar14] != 0) {
        uVar7 = FUN_180222950(uVar10,(&DAT_180248090)[uVar14],u_RT_CUSTOM_1802381f0);
        lVar8 = FUN_1802227d0(uVar10,(&DAT_180248090)[uVar14],u_RT_CUSTOM_1802381f0);
        if (lVar8 != 0) {
          uVar11 = (*pcVar15)(0x180224000);
          iVar6 = (*extraout_x11_11)(uVar11,lVar8,uVar7,0,local_1d8 + uVar14 * 8);
          if (-1 < iVar6) {
            auVar17 = FUN_1802229d8(lVar8);
            goto LAB_18019536c;
          }
        }
        auVar17 = FUN_1802229d8(lVar8);
        bVar3 = false;
      }
LAB_18019536c:
      param_1 = local_1c8;
      lVar8 = local_1d0;
      uVar1 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar1;
    } while (uVar1 < 0x28);
    if (bVar3) {
      local_1c0 = local_1c8 + 0x1d000;
      auVar17 = FUN_1801fe720(*(undefined8 *)(local_1d0 + 0xf10),*(undefined4 *)(local_1c8 + 0x28),
                              DAT_180258908,1,&DAT_180248080,&PTR_PTR_180248070,local_1c8 + 0x1d060,
                              local_1c8 + 0x1d068);
      uVar14 = local_1a8;
      if ((auVar17._0_8_ & 1) != 0) {
        local_188 = 0xd0;
        uStack_180 = 4;
        local_178 = 0xd000000000;
        uVar10 = (*pcVar15)(0x180224000);
        auVar17 = (*extraout_x11_13)(uVar10,&local_188,0,param_1 + 120000);
        if (-1 < auVar17._0_4_) {
          local_1b0 = param_1 + 0x1d000;
          local_1a0 = 0x4000;
          uStack_198 = 1;
          local_190 = 0x4000000000;
          uVar10 = (*pcVar15)(0x180224000);
          iVar6 = (*extraout_x11_14)(uVar10,&local_1a0,0,param_1 + 0x1d4b8);
          if (-1 < iVar6) {
            uVar9 = FUN_1801b83b8(param_1);
            if ((uVar9 & 1) != 0) {
              FUN_1801b8590(param_1);
              local_1e0[0] = 0;
              uVar10 = (*pcVar15)(0x180224000);
              (*extraout_x11_17)(uVar10,0x1e,local_1e0);
              lVar12 = *(longlong *)(lVar8 + 0xf10);
              uVar1 = *(uint *)(param_1 + 0x28);
              lVar13 = *(longlong *)(uVar14 + 0xf18);
              *(longlong *)(param_1 + 0x1d4d8) = lVar12;
              *(uint *)(param_1 + 0x1d4e0) = uVar1;
              *(ulonglong *)(param_1 + 0x1d4e8) = lVar12 + (ulonglong)uVar1 * 0x18c0 + 0x6b0;
              *(longlong *)(param_1 + 0x1d088) = lVar12;
              *(uint *)(param_1 + 0x1d090) = uVar1;
              cVar2 = *(char *)(*(longlong *)(param_1 + 8) + 0x1f8);
              *(undefined1 *)(param_1 + 0x1d0b0) = 0;
              *(longlong *)(param_1 + 0x1d0a8) = lVar13;
              if (((cVar2 == '\0') && (*(int *)(lVar13 + 0x20) == 0x1002)) &&
                 (iVar6 = *(int *)(lVar13 + 0x24),
                 (((iVar6 == 0x15dd || iVar6 == 0x15d8) || iVar6 == 0x1636) || iVar6 == 0x67df) ||
                 iVar6 == 0x1638)) {
                *(undefined1 *)(param_1 + 0x1d0b0) = 1;
              }
              uVar14 = FUN_180215108(FUN_180215388);
              if ((uVar14 & 1) == 0) {
                *(undefined8 *)(lVar12 + (ulonglong)uVar1 * 0x28 + 0x38) = 0;
              }
              thunk_FUN_18022370c(*(longlong *)(lVar8 + 0xf10) + 0x620);
              return 1;
            }
            FUN_180190760(param_1);
            (*pcVar15)(0x180224000);
            (*extraout_x11_15)();
            *(undefined8 *)(param_1 + 0x1d4b8) = 0;
          }
          (*pcVar15)(0x180224000);
          auVar17 = (*extraout_x11_16)();
          *(undefined8 *)(param_1 + 120000) = 0;
        }
        auVar17 = FUN_1801fe898(auVar17._0_8_,auVar17._8_8_,1,param_1 + 0x1d060,local_1c0 + 0x68);
      }
    }
LAB_1801955d0:
    FUN_1801fe6b0(auVar17._0_8_,auVar17._8_8_,0x28,local_1d8);
    FUN_1802003a0(*(undefined8 *)(lVar8 + 0xf10),*(undefined4 *)(param_1 + 0x28));
  }
LAB_1801955e8:
  thunk_FUN_18022370c(*(longlong *)(lVar8 + 0xf10) + 0x620);
  uVar10 = *(undefined8 *)(lVar8 + 0xf10);
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_1801fe510(uVar10);
  *(undefined8 *)(lVar8 + 0xf10) = 0;
  return 0;
}

