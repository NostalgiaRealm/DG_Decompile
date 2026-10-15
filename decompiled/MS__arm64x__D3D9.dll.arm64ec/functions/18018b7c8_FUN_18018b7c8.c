/*
 * FUN_18018b7c8 at 18018b7c8
 * undefined FUN_18018b7c8(void)
 * Address ranges: 18018b7c8-18018d463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18018b7c8(undefined8 param_1,uint *param_2,longlong param_3,undefined8 param_4)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined8 extraout_x1;
  uint *puVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint *local_4a0;
  uint *local_498;
  uint *local_490;
  uint *local_488;
  uint *local_480;
  uint *local_478;
  undefined8 local_470;
  char local_450 [8];
  longlong local_448;
  uint *local_440;
  undefined8 local_438;
  uint local_430;
  undefined8 local_428;
  uint *local_420;
  uint local_410;
  undefined1 local_40c;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  uint *local_3f0;
  uint local_3e0;
  undefined1 local_3dc;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  uint local_3c0;
  undefined1 local_3bc;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  uint local_3a0;
  undefined1 local_39c;
  undefined8 local_390;
  undefined8 uStack_388;
  uint local_380;
  undefined1 local_37c;
  undefined8 local_370;
  undefined8 uStack_368;
  uint local_360;
  undefined4 uStack_35c;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  uint local_340;
  undefined1 local_33c;
  undefined8 local_330;
  undefined8 uStack_328;
  uint *local_320;
  uint local_310;
  undefined1 local_30c;
  undefined8 local_300;
  undefined8 uStack_2f8;
  uint local_2f0;
  undefined1 local_2ec;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  uint local_2d0;
  undefined1 local_2cc;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  uint local_2b0;
  undefined1 local_2ac;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  uint local_290;
  undefined1 local_28c;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  uint local_250;
  undefined1 local_24c;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  uint local_230;
  undefined1 local_22c;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined1 local_20c;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined4 local_1e0;
  undefined8 uStack_1dc;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined1 local_1cc;
  undefined4 local_1c0;
  undefined8 uStack_1bc;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined1 local_1ac;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined1 local_18c;
  undefined4 local_180;
  undefined8 uStack_17c;
  undefined4 local_174;
  uint uStack_170;
  undefined1 local_16c;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined8 local_100;
  undefined8 uStack_f8;
  uint local_f0;
  undefined1 local_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_420 = (uint *)(param_3 + 800);
  local_450[0] = '\0';
  local_440 = (uint *)(param_3 + 0x400);
  local_320 = (uint *)(param_3 + 0x430);
  puVar1 = (uint *)(param_3 + 0x3d0);
  local_448 = param_3;
  local_438 = param_4;
  local_428 = param_1;
  do {
    puVar15 = local_420;
    uVar7 = local_428;
    uVar6 = local_438;
    lVar5 = local_448;
    *(undefined4 *)(local_448 + 0x484) = 0xffffffff;
    *local_420 = 0;
    puVar12 = (uint *)FUN_180183070(local_428,param_2,local_448,local_438,local_450);
    if (puVar12 == param_2) {
      puVar14 = param_2 + 1;
      local_430 = *param_2 & 0xffff;
      switch(local_430) {
      case 0:
        puVar14 = param_2 + 2;
        break;
      case 1:
        *(undefined4 *)(lVar5 + 0x484) = 0;
        local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
        puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,1,0,lVar5,uVar6,0);
        uVar16 = *(uint *)(lVar5 + 0x484);
        if ((uVar16 == 0xffffffff) || (uVar16 == 0)) {
          local_490 = (uint *)0x0;
          local_4a0 = local_420;
          uVar16 = 0x1b;
          if (*local_420 != *(uint *)(local_448 + 0x238)) {
            uVar16 = 0x36;
          }
          local_498 = puVar1;
          FUN_18018dcf8(local_428,local_448,local_438,uVar16 | *(uint *)(local_448 + 0x480),
                        &local_4a0,0x18);
        }
        else {
          local_410 = *(uint *)(lVar5 + 0x2c4);
          uStack_3f8 = 0xffffffff;
          uStack_3f4 = 0xffffffff;
          local_400 = 0xffffffff;
          uStack_3fc = 0xffffffff;
          local_40c = (undefined1)(uVar16 >> 0x10);
          uVar13 = FUN_180213268(0xe4,*(undefined1 *)(lVar5 + 0x324));
          puVar12 = (uint *)(uVar13 & 0xff | 0x100);
          uVar3 = *(uint *)(lVar5 + 0x480) | 0x37;
          local_498 = &local_410;
          if ((uVar16 & 0xf000000) == 0xd000000) {
            local_478 = (uint *)0x0;
            local_488 = puVar15;
            local_4a0 = puVar15;
            local_490 = puVar12;
            local_480 = puVar1;
            FUN_18018dcf8(uVar7,lVar5,uVar6,uVar3,&local_4a0,0x30);
          }
          else {
            local_480 = puVar15;
            local_478 = (uint *)0x0;
            local_4a0 = puVar15;
            local_490 = puVar1;
            local_488 = puVar12;
            FUN_18018dcf8(uVar7,lVar5,uVar6,uVar3,&local_4a0,0x30);
          }
        }
        *(undefined4 *)(local_448 + 0x484) = 0xffffffff;
        break;
      case 2:
        local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
        puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,2,0,lVar5,uVar6,0);
        local_4a0 = puVar15;
        local_490 = local_440;
        local_488 = (uint *)0x0;
        local_498 = puVar1;
        FUN_18018dcf8(uVar7,lVar5,uVar6,*(undefined4 *)(lVar5 + 0x480),&local_4a0,0x20);
        break;
      case 3:
      case 0x12:
        break;
      case 4:
        local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
        puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,3,0,lVar5,uVar6,0);
        local_4a0 = puVar15;
        local_488 = local_320;
        local_480 = (uint *)0x0;
        local_490 = local_440;
        local_498 = puVar1;
        FUN_18018dcf8(uVar7,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x32,&local_4a0,0x28);
        break;
      case 5:
        local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
        puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,2,0,lVar5,uVar6,0);
        local_4a0 = puVar15;
        local_490 = local_440;
        local_488 = (uint *)0x0;
        local_498 = puVar1;
        FUN_18018dcf8(uVar7,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x38,&local_4a0,0x20);
        break;
      case 6:
        local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
        puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,1,0,lVar5,uVar6,1);
        local_340 = FUN_180213760(lVar5 + 0x20,4,0);
        local_33c = 2;
        uStack_328 = 0xffffffffffffffff;
        local_330 = 0xffffffffffffffff;
        iVar11 = FUN_180213038(*(undefined4 *)(lVar5 + 0x20));
        if (iVar11 == 0x40) {
          local_410 = *(uint *)(lVar5 + 0xbc);
          local_400 = 0x3f800000;
          uStack_3fc = 0x3f800000;
          uStack_3f8 = 0x3f800000;
          uStack_3f4 = 0x3f800000;
          local_490 = (uint *)0x0;
          local_40c = 0xe4;
          local_4a0 = &local_410;
          local_498 = puVar1;
          FUN_180214e10(lVar5 + 0x20,uVar6,0xe,&local_340,&local_4a0,0x18);
        }
        else {
          local_498 = (uint *)0x0;
          local_4a0 = puVar1;
          FUN_180214e10(lVar5 + 0x20,uVar6,0x81,&local_340,&local_4a0,0x10);
        }
        uVar6 = local_438;
        lVar5 = local_448;
        local_2c0 = 0x7cf0bdc2;
        uStack_2bc = 0x7cf0bdc2;
        local_2b8 = 0x7cf0bdc2;
        uStack_2b4 = 0x7cf0bdc2;
        local_140 = 0xffffffff7fffffff;
        uStack_138 = 0xffffffffffffffff;
        local_120 = 0xffffffff7f800000;
        uStack_118 = 0xffffffffffffffff;
        local_488 = &local_150;
        local_480 = (uint *)0x0;
        local_150 = *(undefined4 *)(local_448 + 0xb8);
        local_2d0 = *(uint *)(local_448 + 0xbc);
        local_490 = &local_340;
        local_4a0 = &local_340;
        local_14c = 0xe4;
        local_12c = 0xe4;
        local_498 = (uint *)0x155;
        local_2cc = 0xe4;
        local_130 = local_150;
        FUN_180214e10(local_448 + 0x20,local_438,1,0x101,&local_4a0,0x28);
        local_488 = &local_130;
        local_480 = (uint *)0x0;
        local_490 = &local_340;
        local_4a0 = &local_340;
        local_498 = (uint *)0x100;
        FUN_180214e10(lVar5 + 0x20,uVar6,0x20,0x101,&local_4a0,0x28);
        local_478 = &local_340;
        local_470 = 0;
        local_488 = &local_2d0;
        local_480 = (uint *)0x155;
        local_490 = &local_340;
        local_4a0 = local_420;
        local_498 = (uint *)&DAT_00000100;
        FUN_18018dcf8(local_428,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x37,&local_4a0,0x38);
        break;
      case 7:
        local_4a0 = (uint *)CONCAT71(local_4a0._1_7_,1);
        puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,1,0,lVar5,uVar6,1);
        local_310 = FUN_180213760(lVar5 + 0x20,4,0);
        local_30c = 2;
        uStack_2f8 = 0xffffffffffffffff;
        local_300 = 0xffffffffffffffff;
        local_498 = (uint *)0x0;
        local_4a0 = puVar1;
        FUN_180214e10(lVar5 + 0x20,uVar6,0x44,&local_310,&local_4a0,0x10);
        local_110 = *(undefined4 *)(lVar5 + 0xb8);
        local_2b0 = *(uint *)(lVar5 + 0xbc);
        local_2a0 = 0x7cf0bdc2;
        uStack_29c = 0x7cf0bdc2;
        local_10c = 0xe4;
        local_2ac = 0xe4;
        local_100 = 0xffffffff7f800000;
        uStack_f8 = 0xffffffffffffffff;
        local_488 = &local_110;
        local_480 = (uint *)0x0;
        local_490 = &local_310;
        local_4a0 = &local_310;
        local_498 = (uint *)0x155;
        local_298 = 0x7cf0bdc2;
        uStack_294 = 0x7cf0bdc2;
        FUN_180214e10(lVar5 + 0x20,uVar6,0x20,0x101,&local_4a0,0x28);
        local_478 = &local_310;
        local_470 = 0;
        local_488 = &local_2b0;
        local_480 = (uint *)0x155;
        local_490 = &local_310;
        local_4a0 = puVar15;
        local_498 = (uint *)&DAT_00000100;
        FUN_18018dcf8(uVar7,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x37,&local_4a0,0x38);
        break;
      case 8:
        local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
        puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,2,0,lVar5,uVar6,0);
        local_488 = (uint *)((ulonglong)((*(byte *)(lVar5 + 0x404) >> 4 & 3) << 6) |
                             (ulonglong)*(byte *)(lVar5 + 0x404) & 0x3f | 0x100);
        local_498 = (uint *)((ulonglong)((*(byte *)(lVar5 + 0x3d4) >> 4 & 3) << 6) |
                             (ulonglong)*(byte *)(lVar5 + 0x3d4) & 0x3f | 0x100);
        local_4a0 = puVar15;
        local_480 = local_440;
        local_478 = (uint *)0x0;
        local_490 = puVar1;
        FUN_18018dcf8(uVar7,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x10,&local_4a0,0x30);
        break;
      case 9:
        local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
        puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,2,0,lVar5,uVar6,0);
        local_4a0 = puVar15;
        local_490 = local_440;
        local_488 = (uint *)0x0;
        local_498 = puVar1;
        FUN_18018dcf8(uVar7,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x11,&local_4a0,0x20);
        break;
      case 10:
        local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
        puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,2,0,lVar5,uVar6,0);
        local_4a0 = puVar15;
        local_490 = local_440;
        local_488 = (uint *)0x0;
        local_498 = puVar1;
        FUN_18018dcf8(uVar7,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x33,&local_4a0,0x20);
        break;
      case 0xb:
        local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
        puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,2,0,lVar5,uVar6,0);
        local_4a0 = puVar15;
        local_490 = local_440;
        local_488 = (uint *)0x0;
        local_498 = puVar1;
        FUN_18018dcf8(uVar7,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x34,&local_4a0,0x20);
        break;
      case 0xc:
      case 0xd:
        local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
        puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,2,0,lVar5,uVar6,0);
        uVar8 = *(undefined1 *)(lVar5 + 0x324);
        local_f0 = FUN_180213760(lVar5 + 0x20,4,0);
        local_ec = uVar8;
        local_230 = *(uint *)(lVar5 + 0xbc);
        local_220 = 0x3f800000;
        uStack_21c = 0x3f800000;
        local_22c = 0xe4;
        uVar17 = 0x1d;
        if (local_430 != 0xd) {
          uVar17 = 0x31;
        }
        uStack_d8 = 0xffffffffffffffff;
        local_e0 = 0xffffffffffffffff;
        local_218 = 0x3f800000;
        uStack_214 = 0x3f800000;
        local_490 = (uint *)0x0;
        local_498 = local_440;
        local_4a0 = puVar1;
        FUN_180214e10(lVar5 + 0x20,uVar6,uVar17,&local_f0,&local_4a0,0x18);
        bVar10 = FUN_180213268(0xe4,*(undefined1 *)(lVar5 + 0x324));
        local_4a0 = (uint *)((ulonglong)bVar10 | 0x100);
        local_490 = &local_230;
        local_488 = (uint *)0x0;
        local_498 = &local_f0;
        FUN_180214e10(lVar5 + 0x20,uVar6,1,puVar15,&local_4a0,0x20);
        break;
      case 0xe:
        local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
        puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,1,0,lVar5,uVar6,
                                        *(char *)(*(longlong *)(lVar5 + 0x10) + 0x4a6c) == '\x01');
        local_490 = (uint *)0x0;
        local_4a0 = puVar15;
        local_498 = puVar1;
        FUN_18018dcf8(uVar7,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x19,&local_4a0,0x18);
        break;
      case 0xf:
        local_4a0 = (uint *)CONCAT71(local_4a0._1_7_,1);
        puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,1,0,lVar5,uVar6,1);
        local_2f0 = FUN_180213760(lVar5 + 0x20,4,0);
        local_2ec = 2;
        uStack_2d8 = 0xffffffffffffffff;
        local_2e0 = 0xffffffffffffffff;
        local_498 = (uint *)0x0;
        local_4a0 = puVar1;
        FUN_180214e10(lVar5 + 0x20,uVar6,0x2f,&local_2f0,&local_4a0,0x10);
        local_d0 = *(undefined4 *)(lVar5 + 0xb8);
        local_290 = *(uint *)(lVar5 + 0xbc);
        local_280 = 0xfcf0bdc2;
        uStack_27c = 0xfcf0bdc2;
        local_cc = 0xe4;
        local_28c = 0xe4;
        local_c0 = 0xffffffffff800000;
        uStack_b8 = 0xffffffffffffffff;
        local_488 = &local_d0;
        local_480 = (uint *)0x0;
        local_490 = &local_2f0;
        local_4a0 = &local_2f0;
        local_498 = (uint *)0x155;
        local_278 = 0xfcf0bdc2;
        uStack_274 = 0xfcf0bdc2;
        FUN_180214e10(lVar5 + 0x20,uVar6,0x20,0x101,&local_4a0,0x28);
        local_478 = &local_2f0;
        local_470 = 0;
        local_488 = &local_290;
        local_480 = (uint *)0x155;
        local_490 = &local_2f0;
        local_4a0 = puVar15;
        local_498 = (uint *)&DAT_00000100;
        FUN_18018dcf8(uVar7,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x37,&local_4a0,0x38);
        break;
      case 0x10:
        local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
        puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,1,0,lVar5,uVar6,0);
        local_380 = FUN_180213760(lVar5 + 0x20,4,1);
        uVar18 = 0xffffffffffffffff;
        uVar19 = 0xffffffffffffffff;
        local_37c = 0xf;
        uStack_368 = 0xffffffffffffffff;
        local_370 = 0xffffffffffffffff;
        local_3c0 = FUN_180213760(lVar5 + 0x20,extraout_x1,0);
        local_1f0 = *(undefined4 *)(lVar5 + 0xb8);
        local_210 = *(undefined4 *)(lVar5 + 0xbc);
        local_3bc = 3;
        local_1e0 = 0x42fffe01;
        local_20c = 0xe4;
        local_1c0 = 0xc2fffe01;
        local_200 = 0;
        uStack_1f8 = 0;
        local_1ec = 0xe4;
        uStack_1dc = 0xffffffffffffffff;
        local_1d4 = 0xffffffff;
        local_1cc = 0xe4;
        uStack_1bc = 0xffffffffffffffff;
        local_1b4 = 0xffffffff;
        local_1ac = 0xe4;
        local_1a0 = 0;
        local_198 = 0x3f800000;
        uStack_194 = 0x3f800000;
        local_498 = (uint *)0x0;
        local_4a0 = puVar1;
        local_3b0 = uVar18;
        uStack_3a8 = uVar19;
        uStack_1d0 = local_1f0;
        uStack_1b0 = local_210;
        FUN_180214e10(lVar5 + 0x20,uVar6,0x36,&local_380,&local_4a0,0x10);
        local_490 = &local_210;
        local_488 = (uint *)0x0;
        local_498 = &local_380;
        local_4a0 = (uint *)0x1e4;
        FUN_180214e10(lVar5 + 0x20,uVar6,0x1d,&local_3c0,&local_4a0,0x20);
        local_488 = &local_210;
        local_480 = (uint *)0x0;
        local_490 = &local_380;
        local_498 = (uint *)0x140;
        local_4a0 = &local_3c0;
        FUN_180214e10(lVar5 + 0x20,uVar6,0x39,0x10c,&local_4a0,0x28);
        local_488 = &local_3c0;
        local_480 = (uint *)0x0;
        local_490 = (uint *)0x1fe;
        local_498 = &local_3c0;
        local_4a0 = (uint *)0x154;
        FUN_180214e10(lVar5 + 0x20,uVar6,1,&local_3c0,&local_4a0,0x28);
        local_488 = &local_1f0;
        local_480 = (uint *)0x0;
        local_490 = &local_380;
        local_4a0 = &local_3c0;
        local_498 = (uint *)0x1ff;
        FUN_180214e10(lVar5 + 0x20,uVar6,0x33,0x108,&local_4a0,0x28);
        local_488 = &uStack_1d0;
        local_480 = (uint *)0x0;
        local_490 = &local_3c0;
        local_4a0 = &local_3c0;
        local_498 = (uint *)0x1ff;
        FUN_180214e10(lVar5 + 0x20,uVar6,0x34,0x108,&local_4a0,0x28);
        local_490 = &local_380;
        local_488 = (uint *)0x0;
        local_498 = (uint *)0x155;
        local_4a0 = &local_3c0;
        FUN_180214e10(lVar5 + 0x20,uVar6,0x2f,0x104,&local_4a0,0x20);
        local_480 = &local_3c0;
        local_478 = (uint *)0x0;
        local_490 = &local_3c0;
        local_488 = (uint *)0x1ff;
        local_4a0 = &local_3c0;
        local_498 = (uint *)0x1aa;
        FUN_180214e10(lVar5 + 0x20,uVar6,0x38,0x104,&local_4a0,0x30);
        local_490 = &local_3c0;
        local_488 = (uint *)0x0;
        local_4a0 = &local_3c0;
        local_498 = (uint *)0x1aa;
        FUN_180214e10(lVar5 + 0x20,uVar6,0x19,0x104,&local_4a0,0x20);
        local_498 = &uStack_1b0;
        local_490 = (uint *)0x0;
        local_4a0 = &local_380;
        FUN_180214e10(lVar5 + 0x20,uVar6,0x36,0x10c,&local_4a0,0x18);
        local_480 = &local_3c0;
        local_478 = (uint *)0x0;
        local_490 = &local_3c0;
        local_488 = (uint *)0x1aa;
        local_498 = (uint *)0x155;
        local_4a0 = &local_380;
        FUN_180214e10(lVar5 + 0x20,uVar6,1,0x102,&local_4a0,0x30);
        local_480 = &local_380;
        local_478 = (uint *)0x0;
        local_488 = (uint *)0x154;
        local_490 = &local_3c0;
        local_498 = (uint *)0x100;
        local_4a0 = &local_380;
        FUN_180214e10(lVar5 + 0x20,uVar6,1,0x103,&local_4a0,0x30);
        local_490 = &local_380;
        local_488 = (uint *)0x0;
        local_4a0 = puVar15;
        local_498 = (uint *)0x1d3;
        FUN_18018dcf8(uVar7,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x36,&local_4a0,0x20);
        FUN_180213800(lVar5 + 0x20,local_380);
        break;
      case 0x11:
        local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
        puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,2,0,lVar5,uVar6,0);
        uVar16 = *puVar15;
        if ((((uVar16 >> 0x1e & 1) == 0) && (uVar16 != *puVar1)) && (uVar16 != *local_440)) {
          local_270 = *(undefined8 *)puVar15;
          uStack_258 = *(undefined8 *)(puVar15 + 6);
          uStack_260 = *(undefined8 *)(puVar15 + 4);
          bVar9 = false;
          uStack_268 = *(undefined8 *)(puVar15 + 2);
        }
        else {
          bVar9 = true;
          local_360 = FUN_180213760(local_448 + 0x20,4,0);
          uStack_260 = 0xffffffffffffffff;
          uStack_258 = 0xffffffffffffffff;
          uStack_35c = CONCAT31(uStack_35c._1_3_,0xe4);
          local_270 = CONCAT44(uStack_35c,local_360);
          uStack_268 = uStack_358;
        }
        if ((param_2[1] >> 0x10 & 1) != 0) {
          local_400 = 0x3f800000;
          local_410 = *(uint *)(local_448 + 0xb8);
          local_40c = 0xe4;
          uStack_3fc = 0xffffffff;
          uStack_3f8 = 0xffffffff;
          uStack_3f4 = 0xffffffff;
          local_498 = &local_410;
          local_490 = (uint *)0x0;
          local_4a0 = (uint *)&local_270;
          FUN_180214e10(local_448 + 0x20,local_438,0x36,0x101,&local_4a0,0x18);
        }
        if ((param_2[1] >> 0x11 & 1) != 0) {
          if (bVar9) {
            uVar16 = 0;
          }
          else {
            uVar16 = *(uint *)(local_448 + 0x480);
          }
          uVar3 = *(byte *)(local_448 + 0x404) >> 2 & 3;
          uVar4 = *(byte *)(local_448 + 0x3d4) >> 2 & 3;
          local_480 = (uint *)((ulonglong)(uVar3 | (uVar3 | (uVar3 | 4) << 2) << 2) << 2 |
                              (ulonglong)uVar3);
          local_490 = (uint *)((ulonglong)(uVar4 | (uVar4 | (uVar4 | 4) << 2) << 2) << 2 |
                              (ulonglong)uVar4);
          local_478 = local_440;
          local_470 = 0;
          local_498 = (uint *)&local_270;
          local_4a0 = (uint *)0x102;
          local_488 = puVar1;
          FUN_18018dcf8(local_428,local_448,local_438,uVar16 | 0x38,&local_4a0,0x38);
        }
        if ((param_2[1] >> 0x12 & 1) != 0) {
          if (bVar9) {
            uVar16 = 0;
          }
          else {
            uVar16 = *(uint *)(local_448 + 0x480);
          }
          local_480 = (uint *)0x0;
          uVar3 = *(byte *)(local_448 + 0x3d4) >> 4 & 3;
          local_490 = (uint *)((ulonglong)(uVar3 | (uVar3 | (uVar3 | 4) << 2) << 2) << 2 |
                              (ulonglong)uVar3);
          local_498 = (uint *)&local_270;
          local_4a0 = (uint *)0x104;
          local_488 = puVar1;
          FUN_18018dcf8(local_428,local_448,local_438,uVar16 | 0x36,&local_4a0,0x28);
        }
        if ((param_2[1] >> 0x13 & 1) != 0) {
          if (bVar9) {
            uVar16 = 0;
          }
          else {
            uVar16 = *(uint *)(local_448 + 0x480);
          }
          uVar3 = (uint)(*(byte *)(local_448 + 0x404) >> 6);
          local_490 = (uint *)((ulonglong)(uVar3 | (uVar3 | (uVar3 | 4) << 2) << 2) << 2 |
                              (ulonglong)uVar3);
          local_488 = local_440;
          local_480 = (uint *)0x0;
          local_498 = (uint *)&local_270;
          local_4a0 = (uint *)0x108;
          FUN_18018dcf8(local_428,local_448,local_438,uVar16 | 0x36,&local_4a0,0x28);
        }
        if (bVar9) {
          local_498 = (uint *)&local_270;
          local_490 = (uint *)0x0;
          local_4a0 = local_420;
          FUN_18018dcf8(local_428,local_448,local_438,*(uint *)(local_448 + 0x480) | 0x36,&local_4a0
                        ,0x18);
        }
        break;
      case 0x13:
        local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
        puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,1,0,lVar5,uVar6,0);
        local_490 = (uint *)0x0;
        local_4a0 = puVar15;
        local_498 = puVar1;
        FUN_18018dcf8(uVar7,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x1a,&local_4a0,0x18);
        break;
      case 0x14:
      case 0x15:
        local_3f0 = puVar14;
        if ((param_2[1] >> 0x10 & 1) != 0) {
          local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
          puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0x10000,2,0,lVar5,uVar6,0);
          local_480 = (uint *)0x0;
          local_488 = local_440;
          local_4a0 = (uint *)&DAT_00000101;
          local_498 = puVar15;
          local_490 = puVar1;
          puVar12 = (uint *)FUN_18018dcf8(uVar7,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x11,
                                          &local_4a0,0x28);
        }
        uVar6 = local_438;
        lVar5 = local_448;
        if ((param_2[1] >> 0x11 & 1) != 0) {
          local_4a0 = (uint *)((ulonglong)local_4a0 & 0xffffffffffffff00);
          puVar14 = (uint *)FUN_18018b280(puVar12,local_3f0,0x20000,2,1,local_448,local_438,0);
          local_488 = local_440;
          local_480 = (uint *)0x0;
          local_498 = local_420;
          local_4a0 = (uint *)0x102;
          local_490 = puVar1;
          puVar12 = (uint *)FUN_18018dcf8(local_428,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x11,
                                          &local_4a0,0x28);
        }
        uVar6 = local_438;
        lVar2 = local_448;
        if ((param_2[1] >> 0x12 & 1) != 0) {
          local_4a0 = (uint *)((ulonglong)local_4a0 & 0xffffffffffffff00);
          puVar14 = (uint *)FUN_18018b280(puVar12,local_3f0,0x40000,2,2,local_448,local_438,0);
          local_488 = local_440;
          local_480 = (uint *)0x0;
          local_498 = local_420;
          local_4a0 = (uint *)0x104;
          local_490 = puVar1;
          puVar12 = (uint *)FUN_18018dcf8(local_428,lVar2,uVar6,*(uint *)(lVar5 + 0x480) | 0x11,
                                          &local_4a0,0x28);
        }
        uVar6 = local_438;
        lVar2 = local_448;
        if (((param_2[1] >> 0x13 & 1) != 0) && (local_430 == 0x14)) {
          local_4a0 = (uint *)((ulonglong)local_4a0 & 0xffffffffffffff00);
          puVar14 = (uint *)FUN_18018b280(puVar12,local_3f0,0x80000,2,3,local_448,local_438,0);
          local_488 = local_440;
          local_480 = (uint *)0x0;
          local_498 = local_420;
          local_4a0 = (uint *)0x108;
          local_490 = puVar1;
          FUN_18018dcf8(local_428,lVar2,uVar6,*(uint *)(lVar5 + 0x480) | 0x11,&local_4a0,0x28);
        }
        break;
      case 0x16:
      case 0x17:
      case 0x18:
        local_3f0 = puVar14;
        if ((param_2[1] >> 0x10 & 1) != 0) {
          local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
          puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0x10000,2,0,lVar5,uVar6,0);
          local_470 = 0;
          local_480 = (uint *)((ulonglong)((*(byte *)(lVar5 + 0x404) >> 4 & 3) << 6) |
                               (ulonglong)*(byte *)(lVar5 + 0x404) & 0x3f | 0x100);
          local_490 = (uint *)((ulonglong)((*(byte *)(lVar5 + 0x3d4) >> 4 & 3) << 6) |
                               (ulonglong)*(byte *)(lVar5 + 0x3d4) & 0x3f | 0x100);
          local_478 = local_440;
          local_4a0 = (uint *)&DAT_00000101;
          local_498 = puVar15;
          local_488 = puVar1;
          puVar12 = (uint *)FUN_18018dcf8(uVar7,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x10,
                                          &local_4a0,0x38);
        }
        uVar6 = local_438;
        lVar5 = local_448;
        if ((param_2[1] >> 0x11 & 1) != 0) {
          local_4a0 = (uint *)((ulonglong)local_4a0 & 0xffffffffffffff00);
          puVar14 = (uint *)FUN_18018b280(puVar12,local_3f0,0x20000,2,1,local_448,local_438,0);
          local_490 = (uint *)((ulonglong)((*(byte *)(lVar5 + 0x3d4) >> 4 & 3) << 6) |
                               (ulonglong)*(byte *)(lVar5 + 0x3d4) & 0x3f | 0x100);
          local_480 = (uint *)((ulonglong)((*(byte *)(lVar5 + 0x404) >> 4 & 3) << 6) |
                               (ulonglong)*(byte *)(lVar5 + 0x404) & 0x3f | 0x100);
          local_478 = local_440;
          local_470 = 0;
          local_498 = local_420;
          local_4a0 = (uint *)0x102;
          local_488 = puVar1;
          puVar12 = (uint *)FUN_18018dcf8(local_428,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x10,
                                          &local_4a0,0x38);
        }
        lVar2 = local_448;
        if (((param_2[1] >> 0x12 & 1) != 0) &&
           ((local_430 == 0x17 || (lVar5 = local_448, local_430 == 0x16)))) {
          local_4a0 = (uint *)((ulonglong)local_4a0 & 0xffffffffffffff00);
          puVar14 = (uint *)FUN_18018b280(puVar12,local_3f0,0x40000,2,2,local_448,local_438,0);
          local_480 = (uint *)((ulonglong)((*(byte *)(lVar5 + 0x404) >> 4 & 3) << 6) |
                               (ulonglong)*(byte *)(lVar5 + 0x404) & 0x3f | 0x100);
          local_490 = (uint *)((ulonglong)((*(byte *)(lVar5 + 0x3d4) >> 4 & 3) << 6) |
                               (ulonglong)*(byte *)(lVar5 + 0x3d4) & 0x3f | 0x100);
          local_478 = local_440;
          local_470 = 0;
          local_498 = local_420;
          local_4a0 = (uint *)0x104;
          local_488 = puVar1;
          puVar12 = (uint *)FUN_18018dcf8(local_428,lVar2,local_438,*(uint *)(lVar5 + 0x480) | 0x10,
                                          &local_4a0,0x38);
        }
        uVar6 = local_438;
        lVar5 = local_448;
        if (((param_2[1] >> 0x13 & 1) != 0) && (local_430 == 0x16)) {
          local_4a0 = (uint *)((ulonglong)local_4a0 & 0xffffffffffffff00);
          puVar14 = (uint *)FUN_18018b280(puVar12,local_3f0,0x80000,2,3,local_448,local_438,0);
          local_480 = (uint *)((ulonglong)((*(byte *)(lVar5 + 0x404) >> 4 & 3) << 6) |
                               (ulonglong)*(byte *)(lVar5 + 0x404) & 0x3f | 0x100);
          local_490 = (uint *)((ulonglong)((*(byte *)(lVar5 + 0x3d4) >> 4 & 3) << 6) |
                               (ulonglong)*(byte *)(lVar5 + 0x3d4) & 0x3f | 0x100);
          local_478 = local_440;
          local_470 = 0;
          local_498 = local_420;
          local_4a0 = (uint *)0x108;
          local_488 = puVar1;
          FUN_18018dcf8(local_428,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x10,&local_4a0,0x38);
        }
        break;
      default:
        if (local_430 == 0x4e) {
          local_4a0 = (uint *)((ulonglong)local_4a0._1_7_ << 8);
          uVar3 = param_2[1];
          puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,1,0,lVar5,uVar6,
                                          *(char *)(*(longlong *)(lVar5 + 0x10) + 0x4a6c) == '\x01')
          ;
          local_3e0 = 0;
          local_3dc = 0;
          uStack_3c8 = 0xffffffffffffffff;
          local_3d0 = 0xffffffffffffffff;
          uVar16 = uVar3 & 0x80000;
          if ((uVar3 & 0x50000) == 0) {
            if (uVar16 != 0) {
              local_410 = *(uint *)(lVar5 + 0xb8);
              local_400 = 0x3f800000;
              uStack_3f4 = 0xffffffff;
              local_490 = (uint *)0x0;
              local_40c = 0xe4;
              uStack_3fc = 0xffffffff;
              uStack_3f8 = 0xffffffff;
              local_498 = &local_410;
              local_4a0 = puVar15;
              FUN_180214e10(lVar5 + 0x20,uVar6,0x36,0x108,&local_4a0,0x18);
            }
          }
          else {
            local_3e0 = FUN_180213760(lVar5 + 0x20,4,0);
            local_3dc = 0xf;
            lVar2 = lVar5 + 0x20;
            local_3d0 = 0xffffffffffffffff;
            uStack_3c8 = 0xffffffffffffffff;
            if (uVar16 == 0) {
              local_498 = (uint *)0x0;
              local_4a0 = puVar1;
              FUN_180214e10(lVar2,uVar6,0x36,&local_3e0,&local_4a0,0x10);
            }
            else if ((*puVar1 & 0x88000000) == 0) {
              local_410 = *(uint *)(lVar5 + 0xbc);
              local_400 = 0xffffffff;
              uStack_3fc = 0xffffffff;
              uStack_3f8 = 0xffffffff;
              uStack_3f4 = 0;
              local_490 = (uint *)0x0;
              local_40c = 0xe4;
              local_498 = &local_410;
              local_4a0 = puVar1;
              FUN_180214e10(lVar2,uVar6,1,&local_3e0,&local_4a0,0x18);
            }
            else {
              local_410 = *(uint *)(lVar5 + 0xb8);
              local_400 = 0;
              uStack_3fc = 0xffffffff;
              uStack_3f8 = 0xffffffff;
              uStack_3f4 = 0xffffffff;
              local_490 = (uint *)0x0;
              local_40c = 0xe4;
              local_4a0 = &local_3e0;
              local_498 = puVar1;
              FUN_180214e10(lVar2,uVar6,0x36,0x107,&local_4a0,0x18);
              local_498 = &local_410;
              local_490 = (uint *)0x0;
              local_4a0 = &local_3e0;
              FUN_180214e10(lVar5 + 0x20,uVar6,0x36,0x108,&local_4a0,0x18);
            }
            if ((uVar3 >> 0x10 & 1) != 0) {
              local_490 = &local_3e0;
              local_488 = (uint *)0x0;
              local_498 = (uint *)0x100;
              local_4a0 = &local_3e0;
              FUN_180214e10(local_448 + 0x20,local_438,0x41,0x101,&local_4a0,0x20);
            }
            local_4a0 = (uint *)((ulonglong)*(byte *)(local_448 + 0x324) & 0xd | 0x100);
            local_488 = &local_3e0;
            local_480 = (uint *)0x0;
            local_490 = (uint *)0x1e4;
            local_498 = local_420;
            FUN_18018dcf8(local_428,local_448,local_438,*(uint *)(local_448 + 0x480) | 0x19,
                          &local_4a0,0x28);
          }
          if ((uVar3 >> 0x11 & 1) != 0) {
            if (local_3e0 == 0) {
              local_3e0 = FUN_180213760(local_448 + 0x20,4,0);
              local_3dc = 0xf;
              local_3d0 = 0xffffffffffffffff;
              uStack_3c8 = 0xffffffffffffffff;
            }
            uVar6 = local_438;
            lVar5 = local_448;
            local_40c = 0xe4;
            uStack_35c = CONCAT31(uStack_35c._1_3_,0xe4);
            uStack_3f8 = 0x7fffffff;
            uStack_3f4 = 0x7fffffff;
            local_400 = 0x7fffffff;
            uStack_3fc = 0x7fffffff;
            local_490 = &local_410;
            local_410 = *(uint *)(local_448 + 0xbc);
            local_488 = (uint *)0x0;
            local_4a0 = &local_3e0;
            uStack_348 = 0x7f8000007f800000;
            local_350 = 0x7f8000007f800000;
            local_498 = puVar1;
            local_360 = local_410;
            FUN_180214e10(local_448 + 0x20,local_438,1,0x102,&local_4a0,0x20);
            local_488 = &local_360;
            local_480 = (uint *)0x0;
            local_490 = &local_3e0;
            local_4a0 = &local_3e0;
            local_498 = (uint *)0x155;
            FUN_180214e10(lVar5 + 0x20,uVar6,0x27,0x102,&local_4a0,0x28);
            local_488 = &local_3e0;
            local_480 = (uint *)0x0;
            local_490 = (uint *)0x155;
            local_4a0 = &local_3e0;
            local_498 = puVar1;
            FUN_180214e10(lVar5 + 0x20,uVar6,1,0x102,&local_4a0,0x28);
            local_490 = &local_3e0;
            local_488 = (uint *)0x0;
            local_4a0 = local_420;
            local_498 = (uint *)0x155;
            FUN_180214e10(lVar5 + 0x20,uVar6,0x1a,0x102,&local_4a0,0x20);
          }
          break;
        }
        if (local_430 == 0x4f) {
          local_4a0 = (uint *)CONCAT71(local_4a0._1_7_,1);
          puVar14 = (uint *)FUN_18018b280(puVar12,puVar14,0xf0000,1,0,lVar5,uVar6,1);
          local_3a0 = FUN_180213760(lVar5 + 0x20,4,0);
          local_39c = 0xf;
          local_190 = *(undefined4 *)(lVar5 + 0xb8);
          local_250 = *(uint *)(lVar5 + 0xbc);
          local_a0 = 0xffffffff00000017;
          uStack_98 = 0xffffffffffffffff;
          local_160 = 0x7fffff00000000;
          local_158 = 0xffffff00;
          uStack_388 = 0xffffffffffffffff;
          local_390 = 0xffffffffffffffff;
          local_80 = 0xffffffff3f800000;
          uStack_78 = 0xffffffffffffffff;
          local_60 = 0xffffffffffffff81;
          uStack_58 = 0xffffffffffffffff;
          local_18c = 0xe4;
          local_180 = 0;
          uStack_17c = 0xffffffffffffffff;
          local_ac = 0xe4;
          local_174 = 0xffffffff;
          local_16c = 0xe4;
          local_154 = 0x3f800000;
          local_8c = 0xe4;
          local_6c = 0xe4;
          local_24c = 0xe4;
          local_240 = 0xff7fffff;
          uStack_23c = 0x3f800000;
          local_238 = 0xff7fffff;
          uStack_234 = 0x3f800000;
          local_498 = (uint *)0x0;
          local_4a0 = puVar1;
          uStack_170 = local_250;
          local_b0 = local_190;
          local_90 = local_190;
          local_70 = local_190;
          FUN_180214e10(lVar5 + 0x20,uVar6,0x36,&local_3a0,&local_4a0,0x10);
          local_488 = &local_190;
          local_480 = (uint *)0x0;
          local_490 = &local_3a0;
          local_498 = (uint *)0x1ff;
          local_4a0 = &local_3a0;
          FUN_180214e10(lVar5 + 0x20,uVar6,0x39,0x108,&local_4a0,0x28);
          local_488 = &local_b0;
          local_480 = (uint *)0x0;
          local_490 = &local_3a0;
          local_4a0 = &local_3a0;
          local_498 = (uint *)0x100;
          FUN_180214e10(lVar5 + 0x20,uVar6,0x55,0x101,&local_4a0,0x28);
          local_490 = &local_3a0;
          local_488 = (uint *)0x0;
          local_498 = (uint *)0x1aa;
          local_4a0 = &local_3a0;
          FUN_180214e10(lVar5 + 0x20,uVar6,0x2f,0x104,&local_4a0,0x20);
          local_488 = &uStack_170;
          local_480 = (uint *)0x0;
          local_490 = &local_3a0;
          local_498 = (uint *)0x1e4;
          local_4a0 = &local_3a0;
          FUN_180214e10(lVar5 + 0x20,uVar6,1,0x10e,&local_4a0,0x28);
          local_488 = &local_90;
          local_480 = (uint *)0x0;
          local_490 = &local_3a0;
          local_498 = (uint *)0x155;
          local_4a0 = &local_3a0;
          FUN_180214e10(lVar5 + 0x20,uVar6,0x3c,0x102,&local_4a0,0x28);
          local_488 = &local_70;
          local_480 = (uint *)0x0;
          local_490 = &local_3a0;
          local_4a0 = &local_3a0;
          local_498 = (uint *)0x100;
          FUN_180214e10(lVar5 + 0x20,uVar6,0x1e,0x101,&local_4a0,0x28);
          local_490 = &local_3a0;
          local_488 = (uint *)0x0;
          local_4a0 = &local_3a0;
          local_498 = (uint *)0x100;
          FUN_180214e10(lVar5 + 0x20,uVar6,0x2b,0x101,&local_4a0,0x20);
          local_478 = &local_250;
          local_470 = 0;
          local_480 = &local_3a0;
          local_488 = (uint *)0x1e4;
          local_490 = &local_3a0;
          local_4a0 = puVar15;
          local_498 = (uint *)0x1ff;
          FUN_18018dcf8(uVar7,lVar5,uVar6,*(uint *)(lVar5 + 0x480) | 0x37,&local_4a0,0x38);
          break;
        }
        if (local_430 == 0x51) {
          puVar14 = param_2 + 6;
          break;
        }
        if (local_430 == 0xfffe) {
          puVar14 = param_2 + (ulonglong)(*param_2 >> 0x10) + 1;
          break;
        }
        if (local_430 != 0xffff) break;
        local_450[0] = '\x01';
        goto LAB_18018d3a8;
      }
LAB_18018d3a8:
      lVar5 = local_448;
      uVar16 = *(uint *)(local_448 + 0x484);
      param_2 = puVar14;
      if (uVar16 != 0xffffffff) {
        local_360 = *(uint *)(local_448 + 0x2c4);
        local_488 = (uint *)0x0;
        uStack_35c = CONCAT31(uStack_35c._1_3_,(char)(uVar16 >> 0x10));
        uStack_348 = 0xffffffffffffffff;
        local_350 = 0xffffffffffffffff;
        bVar9 = (uVar16 & 0xf000000) == 0xd000000;
        lVar2 = 0x380;
        if (bVar9) {
          lVar2 = 0x3b0;
        }
        local_490 = (uint *)(lVar2 + local_448);
        lVar2 = 0x3b0;
        if (bVar9) {
          lVar2 = 0x380;
        }
        local_498 = (uint *)(lVar2 + local_448);
        local_4a0 = &local_360;
        FUN_180214e10(local_448 + 0x20,local_438,0x37,local_448 + 0x350,&local_4a0,0x20);
        puVar15 = local_420;
        FUN_180213800(lVar5 + 0x20,*local_420);
        *puVar15 = 0;
      }
    }
    else {
      uVar16 = *(uint *)(lVar5 + 0x484);
      param_2 = puVar12;
      if (uVar16 != 0xffffffff) {
        local_410 = *(uint *)(lVar5 + 0x2c4);
        local_488 = (uint *)0x0;
        local_40c = (undefined1)(uVar16 >> 0x10);
        uStack_3f8 = 0xffffffff;
        uStack_3f4 = 0xffffffff;
        local_400 = 0xffffffff;
        uStack_3fc = 0xffffffff;
        bVar9 = (uVar16 & 0xf000000) == 0xd000000;
        lVar2 = 0x380;
        if (bVar9) {
          lVar2 = 0x3b0;
        }
        local_490 = (uint *)(lVar2 + lVar5);
        lVar2 = 0x3b0;
        if (bVar9) {
          lVar2 = 0x380;
        }
        local_498 = (uint *)(lVar2 + lVar5);
        local_4a0 = &local_410;
        FUN_180214e10(lVar5 + 0x20,uVar6,0x37,lVar5 + 0x350,&local_4a0,0x20);
        FUN_180213800(lVar5 + 0x20,*(undefined4 *)(lVar5 + 800));
        *puVar15 = 0;
      }
    }
    if (local_450[0] != '\0') {
      return;
    }
  } while( true );
}

