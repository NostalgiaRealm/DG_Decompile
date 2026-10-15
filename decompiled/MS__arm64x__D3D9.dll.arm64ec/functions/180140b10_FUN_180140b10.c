/*
 * FUN_180140b10 at 180140b10
 * undefined FUN_180140b10(void)
 * Address ranges: 180140b10-180141247
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180140b10(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 extraout_x1;
  longlong lVar9;
  longlong lVar10;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  ulonglong uVar11;
  uint uVar12;
  undefined *puVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  longlong *local_5f0;
  undefined8 local_5e8;
  uint local_5e0;
  undefined8 local_5d8;
  undefined1 local_5d0;
  longlong local_5a0;
  longlong lStack_598;
  undefined8 local_590;
  undefined1 local_588;
  longlong local_580;
  longlong local_578;
  undefined8 local_570;
  undefined1 local_568;
  longlong local_560;
  undefined *local_558;
  longlong local_550;
  longlong lStack_548;
  undefined8 local_540;
  undefined1 local_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined1 local_518;
  undefined8 local_510;
  longlong local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  longlong local_4d0;
  undefined8 uStack_4c8;
  longlong local_4c0;
  longlong lStack_4b8;
  ulonglong local_4b0 [6];
  undefined1 *local_480;
  undefined8 local_478;
  undefined4 local_470 [4];
  uint local_460;
  undefined1 local_45c;
  undefined1 local_45b;
  undefined1 auStack_45a [66];
  undefined8 local_418;
  undefined4 local_410;
  longlong local_400;
  undefined4 local_3f8;
  undefined1 local_3f4;
  undefined1 local_3f3;
  int local_3d0 [76];
  ulonglong local_2a0;
  undefined4 local_298;
  uint auStack_294 [35];
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar12 = *(uint *)(param_1 + 0x10);
  local_508 = param_1 + 0x50;
  lVar10 = *(longlong *)(param_1 + 8);
  lVar9 = *(longlong *)(param_1 + 0x38);
  uVar11 = *(ulonglong *)(param_1 + 0x40);
  local_588 = 1;
  local_560 = *(longlong *)(param_1 + 0x18) + 0x18;
  *param_2 = 0;
  param_2[1] = 0;
  puVar13 = (undefined *)(lVar10 + (ulonglong)uVar12 * 0x18c0);
  local_590 = 0x100;
  local_510 = param_3;
  local_5a0 = FUN_1802229a8(0x100);
  iVar4 = *(int *)(puVar13 + 0x6d0);
  lStack_598 = local_5a0;
  if (((uint)local_510 >> 8 & 1) == 0) {
    local_4d0 = local_560;
    uStack_4c8 = local_510;
    lStack_4b8 = local_508;
    uVar12 = 0x10050;
    if (*(int *)(puVar13 + 0x6cc) < 0xb000) {
      uVar12 = 0x10040;
    }
    local_4c0 = lVar9;
    FUN_180222c50(local_470,0,0x430);
    local_3f4 = 1;
    local_400 = uVar11 + 4;
    local_3d0[2] = 0;
    local_3d0[3] = 0;
    local_3d0[0] = 0;
    local_3d0[1] = 0;
    local_3d0[6] = 0;
    local_3d0[7] = 0;
    local_3d0[4] = 0;
    local_3d0[5] = 0;
    local_3f8 = *(undefined4 *)(param_1 + 0x48);
    local_3d0[10] = 0;
    local_3d0[0xb] = 0;
    local_3d0[8] = 0;
    local_3d0[9] = 0;
    local_3d0[0xe] = 0;
    local_3d0[0xf] = 0;
    local_3d0[0xc] = 0;
    local_3d0[0xd] = 0;
    local_3d0[0x12] = 0;
    local_3d0[0x13] = 0;
    local_3d0[0x10] = 0;
    local_3d0[0x11] = 0;
    local_3d0[0x16] = 0;
    local_3d0[0x17] = 0;
    local_3d0[0x14] = 0;
    local_3d0[0x15] = 0;
    local_3d0[0x1a] = 0;
    local_3d0[0x1b] = 0;
    local_3d0[0x18] = 0;
    local_3d0[0x19] = 0;
    local_3d0[0x1e] = 0;
    local_3d0[0x1f] = 0;
    local_3d0[0x1c] = 0;
    local_3d0[0x1d] = 0;
    local_3f3 = *(undefined1 *)(param_1 + 0x4d);
    local_3d0[0x22] = 0;
    local_3d0[0x23] = 0;
    local_3d0[0x20] = 0;
    local_3d0[0x21] = 0;
    local_3d0[0x26] = 0;
    local_3d0[0x27] = 0;
    local_3d0[0x24] = 0;
    local_3d0[0x25] = 0;
    local_3d0[0x2a] = 0;
    local_3d0[0x2b] = 0;
    local_3d0[0x28] = 0;
    local_3d0[0x29] = 0;
    local_3d0[0x2e] = 0;
    local_3d0[0x2f] = 0;
    local_3d0[0x2c] = 0;
    local_3d0[0x2d] = 0;
    local_3d0[0x32] = 0;
    local_3d0[0x33] = 0;
    local_3d0[0x30] = 0;
    local_3d0[0x31] = 0;
    local_3d0[0x36] = 0;
    local_3d0[0x37] = 0;
    local_3d0[0x34] = 0;
    local_3d0[0x35] = 0;
    local_3d0[0x3a] = 0;
    local_3d0[0x3b] = 0;
    local_3d0[0x38] = 0;
    local_3d0[0x39] = 0;
    local_3d0[0x3e] = 0;
    local_3d0[0x3f] = 0;
    local_3d0[0x3c] = 0;
    local_3d0[0x3d] = 0;
    local_3d0[0x42] = 0;
    local_3d0[0x43] = 0;
    local_3d0[0x40] = 0;
    local_3d0[0x41] = 0;
    local_3d0[0x46] = 0;
    local_3d0[0x47] = 0;
    local_3d0[0x44] = 0;
    local_3d0[0x45] = 0;
    local_3d0[0x4a] = 0;
    local_3d0[0x4b] = 0;
    local_3d0[0x48] = 0;
    local_3d0[0x49] = 0;
    local_298 = 0;
    auStack_294[0] = 0;
    local_2a0 = 0;
    auStack_294[3] = 0;
    auStack_294[4] = 0;
    auStack_294[1] = 0;
    auStack_294[2] = 0;
    auStack_294[7] = 0;
    auStack_294[8] = 0;
    auStack_294[5] = 0;
    auStack_294[6] = 0;
    auStack_294[0xb] = 0;
    auStack_294[0xc] = 0;
    auStack_294[9] = 0;
    auStack_294[10] = 0;
    auStack_294[0xf] = 0;
    auStack_294[0x10] = 0;
    auStack_294[0xd] = 0;
    auStack_294[0xe] = 0;
    auStack_294[0x13] = 0;
    auStack_294[0x14] = 0;
    auStack_294[0x11] = 0;
    auStack_294[0x12] = 0;
    auStack_294[0x17] = 0;
    auStack_294[0x18] = 0;
    auStack_294[0x15] = 0;
    auStack_294[0x16] = 0;
    auStack_294[0x1b] = 0;
    auStack_294[0x1c] = 0;
    auStack_294[0x19] = 0;
    auStack_294[0x1a] = 0;
    auStack_294[0x1f] = 0;
    auStack_294[0x20] = 0;
    auStack_294[0x1d] = 0;
    auStack_294[0x1e] = 0;
    uStack_208 = 0;
    uStack_204 = 0;
    auStack_294[0x21] = 0;
    auStack_294[0x22] = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_200 = 0;
    uStack_1fc = 0;
    local_1f0 = 0;
    uStack_1ec = 0;
    local_1e8 = 0;
    uVar5 = FUN_180213038(uVar12);
    local_45b = uVar5 < 0x50;
    local_4e0 = 0;
    local_4b0[5] = 0;
    local_4b0[4] = 0;
    local_4b0[1] = 0;
    local_4b0[3] = 0;
    local_4b0[2] = 0;
    local_4b0[0] = (ulonglong)uVar12;
    local_480 = auStack_45a;
    local_4d8 = 0;
    local_478 = 0x40;
    local_500 = 0x43425844;
    uStack_4f8 = 0;
    local_4f0 = 0x100000000;
    uStack_4e8 = 0x300000000;
    local_45c = iVar4 == 0x1002;
    uVar7 = FUN_180214fe8(&local_5a0,&local_500,0x2c);
    *(int *)(local_5a0 + 0x20) = (int)lStack_598 - (int)local_5a0;
    uVar8 = FUN_18018aff0(uVar7,&local_5a0,&local_4d0);
    lVar10 = local_5a0;
    if ((uVar8 & 1) != 0) {
      *(int *)(local_5a0 + 0x24) = (int)lStack_598 - (int)local_5a0;
      iVar4 = FUN_180181500(uVar8,&local_5a0,&local_4d0);
      lVar10 = local_5a0;
      if (iVar4 != 0) {
        local_538 = 1;
        *(int *)(local_5a0 + 0x28) = (int)lStack_598 - (int)local_5a0;
        local_540 = 0x200;
        local_550 = FUN_1802229a8(0x200);
        lStack_548 = local_550;
        uVar6 = FUN_1802130a8(&local_550,local_4b0[0] & 0xffffffff);
        FUN_1802132f0(local_4b0[0] & 0xffffffff,&local_550,0);
        local_530 = 0;
        uStack_528 = 0;
        local_520 = 0x80;
        local_518 = 1;
        uVar7 = FUN_1802229a8(0x80);
        uVar8 = (ulonglong)local_500 >> 0x20;
        local_418 = 0x41040000110400;
        uStack_208 = 0;
        auStack_294[0x21] = 0;
        auStack_294[0x22] = 0;
        uVar12 = 1;
        uVar14 = 0;
        local_3d0[2] = 0;
        local_3d0[3] = 0;
        local_3d0[0] = 0;
        local_3d0[1] = 0;
        local_3d0[6] = 0;
        local_3d0[7] = 0;
        local_3d0[4] = 0;
        local_3d0[5] = 0;
        local_3d0[10] = 0;
        local_3d0[0xb] = 0;
        local_3d0[8] = 0;
        local_3d0[9] = 0;
        local_3d0[0xe] = 0;
        local_3d0[0xf] = 0;
        local_3d0[0xc] = 0;
        local_3d0[0xd] = 0;
        local_3d0[0x32] = 0;
        local_3d0[0x33] = 0;
        local_3d0[0x30] = 0;
        local_3d0[0x31] = 0;
        local_3d0[0x36] = 0;
        local_3d0[0x37] = 0;
        local_3d0[0x34] = 0;
        local_3d0[0x35] = 0;
        local_3d0[0x3a] = 0;
        local_3d0[0x3b] = 0;
        local_3d0[0x38] = 0;
        local_3d0[0x39] = 0;
        local_3d0[0x3e] = 0;
        local_3d0[0x3f] = 0;
        local_3d0[0x3c] = 0;
        local_3d0[0x3d] = 0;
        local_3d0[0x42] = 0;
        local_3d0[0x43] = 0;
        local_3d0[0x40] = 0;
        local_3d0[0x41] = 0;
        local_3d0[0x46] = 0;
        local_3d0[0x47] = 0;
        local_3d0[0x44] = 0;
        local_3d0[0x45] = 0;
        local_3d0[0x4a] = 0;
        local_3d0[0x4b] = 0;
        local_3d0[0x48] = 0;
        local_3d0[0x49] = 0;
        local_298 = 0;
        auStack_294[0] = 0;
        local_2a0 = 0;
        auStack_294[3] = 0;
        auStack_294[4] = 0;
        auStack_294[1] = 0;
        auStack_294[2] = 0;
        auStack_294[7] = 0;
        auStack_294[8] = 0;
        auStack_294[5] = 0;
        auStack_294[6] = 0;
        auStack_294[0xb] = 0;
        auStack_294[0xc] = 0;
        auStack_294[9] = 0;
        auStack_294[10] = 0;
        auStack_294[0xf] = 0;
        auStack_294[0x10] = 0;
        auStack_294[0xd] = 0;
        auStack_294[0xe] = 0;
        auStack_294[0x13] = 0;
        auStack_294[0x14] = 0;
        auStack_294[0x11] = 0;
        auStack_294[0x12] = 0;
        auStack_294[0x17] = 0;
        auStack_294[0x18] = 0;
        auStack_294[0x15] = 0;
        auStack_294[0x16] = 0;
        auStack_294[0x1b] = 0;
        auStack_294[0x1c] = 0;
        auStack_294[0x19] = 0;
        auStack_294[0x1a] = 0;
        auStack_294[0x1f] = 0;
        auStack_294[0x20] = 0;
        auStack_294[0x1d] = 0;
        auStack_294[0x1e] = 0;
        uStack_1fc = 0x210803;
        uStack_1f8 = 0x110803;
        uStack_204 = 0x410803;
        uStack_200 = 0x310803;
        uStack_1ec = 0x210804;
        local_1e8 = 0x110804;
        uStack_1f4 = 0x410804;
        local_1f0 = 0x310804;
        local_410 = 0x20000d00;
        local_500 = CONCAT44((uint)uVar8 & 0xffffff00,0xffffffff);
        local_3d0[0x12] = 0;
        local_3d0[0x13] = 0;
        local_3d0[0x10] = 0;
        local_3d0[0x11] = 0;
        local_3d0[0x16] = 0;
        local_3d0[0x17] = 0;
        local_3d0[0x14] = 0;
        local_3d0[0x15] = 0;
        local_3d0[0x1a] = 0;
        local_3d0[0x1b] = 0;
        local_3d0[0x18] = 0;
        local_3d0[0x19] = 0;
        local_3d0[0x1e] = 0;
        local_3d0[0x1f] = 0;
        local_3d0[0x1c] = 0;
        local_3d0[0x1d] = 0;
        local_3d0[0x22] = 0;
        local_3d0[0x23] = 0;
        local_3d0[0x20] = 0;
        local_3d0[0x21] = 0;
        local_3d0[0x26] = 0;
        local_3d0[0x27] = 0;
        local_3d0[0x24] = 0;
        local_3d0[0x25] = 0;
        local_3d0[0x2a] = 0;
        local_3d0[0x2b] = 0;
        local_3d0[0x28] = 0;
        local_3d0[0x29] = 0;
        local_3d0[0x2e] = 0;
        local_3d0[0x2f] = 0;
        local_3d0[0x2c] = 0;
        local_3d0[0x2d] = 0;
        uStack_68 = uStack_4f8;
        local_70 = local_500;
        uStack_58 = 0xffffffffffffffff;
        uStack_60 = 0xffffffffffffffff;
        lVar9 = local_4c0;
        local_530 = uVar7;
        uStack_528 = uVar7;
        do {
          cVar1 = ((char *)(lVar9 + uVar14))[0x10];
          if ((cVar1 != '\0') && (*(char *)(lVar9 + uVar14) != -1)) {
            uVar7 = FUN_18018acd8(param_1 + 0x20,&local_4d0,&local_530,uVar14,cVar1,0);
            uVar12 = (uint)uVar7 & 0xff & uVar12;
            lVar9 = local_4c0;
          }
          uVar5 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar5;
        } while (uVar5 < 0x10);
        local_2a0 = uVar11 & 0xffffff0000000000;
        uVar7 = FUN_18018ad80(uVar7,&local_4d0,&local_530,0xffffffff);
        if (*(char *)(local_4c0 + 0x4a6c) == '\x02') {
          FUN_180181cb8(uVar7,&local_4d0);
        }
        else if ((*(char *)(local_4c0 + 0x4a6c) == '\x03') &&
                (FUN_180181cb8(uVar7,&local_4d0), *(char *)(local_4c0 + 0x4884) != '\0')) {
          if (uVar12 == 0) {
            uVar12 = 0;
            local_558 = puVar13;
            do {
              if (local_3d0[uVar12] != 0) {
                auStack_294[uVar12] = uVar12 | local_460 << 0xe | 0x420300;
                local_5e0 = FUN_180213268(0xe4,*(undefined1 *)(local_4c0 + (ulonglong)uVar12 + 0x10)
                                         );
                local_5d8 = 0;
                local_5f0 = (longlong *)CONCAT44(local_5f0._4_4_,0xf);
                local_5e0 = local_5e0 & 0xff;
                local_5e8 = CONCAT44(local_5e8._4_4_,local_3d0[uVar12]);
                FUN_180214c88(local_4b0,&local_530,0x36);
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < 0x10);
            local_470[local_460] = 0x10;
            local_460 = local_460 + 1;
            puVar13 = local_558;
          }
          else {
            auStack_294[2] = (uint)local_3d0._8_8_;
            auStack_294[3] = SUB84(local_3d0._8_8_,4);
            auStack_294[0] = (uint)local_3d0._0_8_;
            auStack_294[1] = SUB84(local_3d0._0_8_,4);
            auStack_294[6] = (uint)local_3d0._24_8_;
            auStack_294[7] = SUB84(local_3d0._24_8_,4);
            auStack_294[4] = (uint)local_3d0._16_8_;
            auStack_294[5] = SUB84(local_3d0._16_8_,4);
            auStack_294[10] = (uint)local_3d0._40_8_;
            auStack_294[0xb] = SUB84(local_3d0._40_8_,4);
            auStack_294[8] = (uint)local_3d0._32_8_;
            auStack_294[9] = SUB84(local_3d0._32_8_,4);
            auStack_294[0xe] = (uint)local_3d0._56_8_;
            auStack_294[0xf] = SUB84(local_3d0._56_8_,4);
            auStack_294[0xc] = (uint)local_3d0._48_8_;
            auStack_294[0xd] = SUB84(local_3d0._48_8_,4);
            uStack_208 = CONCAT31(uStack_208._1_3_,1);
          }
        }
        if (*(char *)(local_4c0 + 0x40) == '\0') {
          local_298 = 0;
        }
        else {
          local_298 = FUN_180213760(local_4b0,4,1);
        }
        FUN_18018b7c8(param_1 + 0x20,local_400,&local_4d0,&local_530);
        local_580 = 0;
        local_578 = 0;
        local_570 = 0x80;
        local_568 = 1;
        local_580 = FUN_1802229a8(0x80);
        local_578 = local_580;
        uVar7 = FUN_180184548(param_1 + 0x20,local_400,&local_4d0,&local_580);
        FUN_18018d8b0(uVar7,&local_4d0,&local_530);
        FUN_180214c88(local_4b0,&local_530,0x3e,0,&local_5f0,0);
        uVar7 = FUN_180214fe8(&local_530,local_580,local_578 - local_580);
        uVar7 = FUN_18018dc20(uVar7,&local_550,&local_4d0);
        uVar7 = FUN_180182600(uVar7,&local_4d0,&local_550);
        uVar7 = FUN_18018db00(uVar7,&local_550,&local_4d0);
        FUN_180181910(uVar7,&local_550,&local_4d0);
        if (local_478._1_1_ != '\0') {
          FUN_180215058(&local_550,2,0x2000068,local_478._1_1_,&local_5f0,0);
        }
        uVar11 = 0;
        if (local_460 != 0) {
          do {
            local_5e8 = CONCAT44(local_5e8._4_4_,4);
            local_5f0 = (longlong *)CONCAT44(local_5f0._4_4_,local_470[uVar11]);
            FUN_180215058(&local_550,4,0x4000069,uVar11,&local_5f0,0x10);
            uVar12 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar12;
          } while (uVar12 < local_460);
        }
        FUN_180213108(&local_550,&local_530,uVar6);
        lVar9 = local_550;
        FUN_180214fe8(&local_5a0,local_550,lStack_548 - local_550);
        FUN_1802229d8(local_580);
        FUN_1802229d8(local_530);
        FUN_1802229d8(lVar9);
        FUN_180212ef0(&local_5a0);
        lVar10 = local_5a0;
        uVar7 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                          (0x180224000,*(undefined8 *)(puVar13 + 0x6b0),extraout_x1,
                           lStack_598 - local_5a0);
        (*extraout_x11_02)(uVar7,lVar10);
      }
    }
    goto LAB_180141220;
  }
  auVar15 = FUN_180180638(param_1 + 0x20,local_510,lVar9,local_560,0x10050,&local_5a0);
  lVar10 = local_5a0;
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if ((auVar15._0_8_ & 1) == 0) goto LAB_180141220;
  local_558 = __hybrid_os_arm64x_dispatch_icall;
  uVar7 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                    (0x180224000,*(undefined8 *)(puVar13 + 0x6b0),auVar15._8_8_,
                     lStack_598 - local_5a0);
  iVar3 = (*extraout_x11)(uVar7,lVar10);
  if (iVar3 < 0) goto LAB_180141220;
  local_568 = 1;
  local_570 = 0x100;
  local_580 = FUN_1802229a8(0x100);
  local_5d8 = CONCAT71(local_5d8._1_7_,*(undefined1 *)(param_1 + 0x4d));
  local_5f0 = &local_580;
  local_5e8 = 0;
  local_5d0 = iVar4 == 0x1002;
  local_578 = local_580;
  auVar15 = FUN_180180830(param_1 + 0x20,local_510,lVar9,*(undefined4 *)(param_1 + 0x48),local_560,
                          uVar11,local_508,0x20050);
  lVar9 = local_580;
  if ((auVar15._0_8_ & 1) == 0) {
LAB_180140c84:
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_01)();
    *param_2 = 0;
  }
  else {
    uVar7 = (*(code *)puVar2)(0x180224000,*(undefined8 *)(puVar13 + 0x6b0),auVar15._8_8_,
                              local_578 - local_580);
    iVar4 = (*extraout_x11_00)(uVar7,lVar9);
    if (iVar4 < 0) goto LAB_180140c84;
  }
  FUN_1802229d8(lVar9);
LAB_180141220:
  FUN_1802229d8(lVar10);
  return param_2;
}

