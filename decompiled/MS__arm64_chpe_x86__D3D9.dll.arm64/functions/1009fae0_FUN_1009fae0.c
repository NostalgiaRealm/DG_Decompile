/*
 * FUN_1009fae0 at 1009fae0
 * undefined FUN_1009fae0(void)
 * Address ranges: 1009fae0-100a1743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009fae0(uint param_1,uint *param_2,int param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint **ppuVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong extraout_x1;
  undefined1 uVar14;
  uint uVar15;
  undefined8 uVar16;
  uint local_460;
  int iStack_45c;
  int local_458;
  uint **local_454;
  uint **local_450;
  uint **local_44c;
  uint **local_448;
  uint **local_444;
  int *local_440;
  int *local_43c;
  undefined4 local_438;
  int local_420;
  char local_41c [4];
  uint local_418;
  uint **local_414;
  int *local_410;
  uint *local_40c;
  int *local_408;
  uint *local_400;
  undefined1 local_3fc;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  int local_3e0;
  undefined1 local_3dc;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  uint **local_3c0;
  undefined4 local_3b0;
  undefined1 local_3ac;
  undefined8 uStack_398;
  int local_390;
  undefined1 local_38c;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined4 *local_370;
  undefined4 *local_36c;
  uint *local_368;
  int local_360;
  undefined1 local_35c;
  undefined8 local_350;
  undefined8 uStack_348;
  int local_340;
  undefined1 local_33c;
  undefined8 local_330;
  undefined8 uStack_328;
  int local_320;
  undefined1 local_31c;
  undefined8 local_310;
  undefined8 uStack_308;
  int local_300;
  undefined1 local_2fc;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  int local_2e0;
  undefined1 local_2dc;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  int local_2c0;
  undefined1 local_2bc;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  int local_2a0;
  undefined1 local_29c;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  int local_280;
  undefined1 local_27c;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  int local_240;
  undefined1 local_23c;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  uint *local_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined1 local_1fc;
  undefined4 local_1f0;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined1 local_1dc;
  undefined4 local_1d0;
  undefined8 uStack_1cc;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined1 local_1bc;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined4 local_190;
  undefined8 uStack_18c;
  undefined4 uStack_184;
  int iStack_180;
  undefined1 local_17c;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint *local_e0;
  undefined1 local_dc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 uStack_50;
  undefined8 uStack_48;
  byte *pbVar5;
  
  local_41c[0] = '\0';
  local_414 = (uint **)(param_3 + 0x310);
  local_370 = (undefined4 *)(param_3 + 0x474);
  local_420 = param_4;
  local_418 = param_1;
  local_3c0 = local_414;
  local_36c = local_370;
  do {
    ppuVar9 = local_414;
    uVar15 = local_418;
    iVar8 = local_420;
    *local_414 = (uint *)0x0;
    *local_370 = 0xffffffff;
    puVar10 = (uint *)FUN_10096de0(local_418,param_2,param_3,local_420,local_41c);
    puVar13 = puVar10;
    if (puVar10 == param_2) {
      puVar3 = param_2 + 1;
      uVar12 = *param_2 & 0xffff;
      puVar13 = puVar3;
      switch(uVar12) {
      case 0:
        puVar13 = param_2 + 2;
        break;
      case 1:
        local_460 = (uint)local_460._1_3_ << 8;
        *local_36c = 0;
        puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,1,0,param_3,iVar8,0);
        puVar10 = (uint *)FUN_1009f8f8(uVar15,param_3,iVar8);
        break;
      case 2:
        local_460 = (uint)local_460._1_3_ << 8;
        puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,2,0,param_3,iVar8,0);
        local_460 = uVar15;
        local_454 = *(uint ***)(param_3 + 0x470);
        local_448 = (uint **)(param_3 + 0x3f0);
        local_44c = (uint **)(param_3 + 0x3c0);
        local_444 = (uint **)0x0;
        local_450 = ppuVar9;
        local_458 = iVar8;
        iStack_45c = param_3;
        puVar10 = (uint *)FUN_100a25f0(&local_460,0x20);
        break;
      case 3:
      case 0x12:
        break;
      case 4:
        local_460 = (uint)local_460._1_3_ << 8;
        puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,3,0,param_3,iVar8,0);
        local_440 = (int *)0x0;
        local_460 = uVar15;
        local_448 = (uint **)(param_3 + 0x3f0);
        local_44c = (uint **)(param_3 + 0x3c0);
        local_454 = (uint **)(*(uint *)(param_3 + 0x470) | 0x32);
        local_450 = ppuVar9;
        local_444 = (uint **)(param_3 + 0x420);
        local_458 = iVar8;
        iStack_45c = param_3;
        puVar10 = (uint *)FUN_100a25f0(&local_460,0x24);
        break;
      case 5:
        local_460 = (uint)local_460._1_3_ << 8;
        puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,2,0,param_3,iVar8,0);
        local_460 = uVar15;
        local_448 = (uint **)(param_3 + 0x3f0);
        local_44c = (uint **)(param_3 + 0x3c0);
        local_444 = (uint **)0x0;
        local_450 = ppuVar9;
        local_454 = (uint **)(*(uint *)(param_3 + 0x470) | 0x38);
        local_458 = iVar8;
        iStack_45c = param_3;
        puVar10 = (uint *)FUN_100a25f0(&local_460,0x20);
        break;
      case 6:
        local_460 = (uint)local_460._1_3_ << 8;
        puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,1,0,param_3,iVar8,1);
        uVar15 = param_3 + 0x18;
        local_340 = FUN_10121590(uVar15,4,0);
        local_33c = 2;
        uStack_328 = 0xffffffffffffffff;
        local_330 = 0xffffffffffffffff;
        iVar11 = FUN_10122f60(*(undefined4 *)(param_3 + 0x18));
        local_460 = uVar15;
        if (iVar11 == 0x40) {
          local_400 = *(uint **)(param_3 + 0xac);
          iStack_45c = iVar8;
          local_3f0 = 0x3f800000;
          uStack_3ec = 0x3f800000;
          local_3fc = 0xe4;
          local_44c = (uint **)(param_3 + 0x3c0);
          local_448 = (uint **)0x0;
          local_450 = &local_400;
          local_454 = (uint **)&local_340;
          local_458 = 0xe;
          uStack_3e8 = 0x3f800000;
          uStack_3e4 = 0x3f800000;
          FUN_10122c20(&local_460,0x1c);
        }
        else {
          local_450 = (uint **)(param_3 + 0x3c0);
          iStack_45c = iVar8;
          local_44c = (uint **)0x0;
          local_454 = (uint **)&local_340;
          local_458 = 0x81;
          FUN_10122c20(&local_460,0x18);
        }
        iVar8 = local_420;
        local_140 = *(undefined4 *)(param_3 + 0xa8);
        uStack_130 = 0xffffffff7fffffff;
        uStack_128 = 0xffffffffffffffff;
        uStack_110 = 0xffffffff7f800000;
        uStack_108 = 0xffffffffffffffff;
        local_2e0 = *(int *)(param_3 + 0xac);
        uStack_2d0 = 0x7cf0bdc2;
        uStack_2cc = 0x7cf0bdc2;
        local_13c = 0xe4;
        local_444 = (uint **)&local_140;
        local_440 = (int *)0x0;
        local_448 = (uint **)&local_340;
        local_450 = (uint **)&local_340;
        local_44c = (uint **)0x155;
        local_458 = 1;
        local_454 = (uint **)0x101;
        local_11c = 0xe4;
        local_2dc = 0xe4;
        uStack_2c8 = 0x7cf0bdc2;
        uStack_2c4 = 0x7cf0bdc2;
        iStack_45c = local_420;
        local_460 = uVar15;
        local_120 = local_140;
        FUN_10122c20(&local_460,0x24);
        local_444 = (uint **)&local_120;
        local_440 = (int *)0x0;
        local_448 = (uint **)&local_340;
        local_450 = (uint **)&local_340;
        iStack_45c = iVar8;
        local_44c = (uint **)0x100;
        local_458 = 0x20;
        local_454 = (uint **)0x101;
        local_460 = uVar15;
        FUN_10122c20(&local_460,0x24);
        local_454 = (uint **)(*(uint *)(param_3 + 0x470) | 0x37);
        local_43c = &local_340;
        local_458 = iVar8;
        local_438 = 0;
        local_444 = (uint **)&local_2e0;
        local_440 = (int *)0x155;
        local_448 = (uint **)&local_340;
        local_450 = local_414;
        local_44c = (uint **)0x100;
        local_460 = local_418;
        iStack_45c = param_3;
        puVar10 = (uint *)FUN_100a25f0(&local_460,0x2c);
        break;
      case 7:
        local_460 = CONCAT31(local_460._1_3_,1);
        puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,1,0,param_3,iVar8,1);
        uVar12 = param_3 + 0x18;
        local_320 = FUN_10121590(uVar12,4,0);
        local_31c = 2;
        local_450 = (uint **)(param_3 + 0x3c0);
        local_44c = (uint **)0x0;
        local_454 = (uint **)&local_320;
        local_458 = 0x44;
        uStack_308 = 0xffffffffffffffff;
        local_310 = 0xffffffffffffffff;
        iStack_45c = iVar8;
        local_460 = uVar12;
        FUN_10122c20(&local_460,0x18);
        local_100 = *(undefined4 *)(param_3 + 0xa8);
        iStack_45c = iVar8;
        uStack_2b0 = 0x7cf0bdc2;
        uStack_2ac = 0x7cf0bdc2;
        uStack_f0 = 0xffffffff7f800000;
        uStack_e8 = 0xffffffffffffffff;
        local_2c0 = *(int *)(param_3 + 0xac);
        local_fc = 0xe4;
        local_2bc = 0xe4;
        uStack_2a8 = 0x7cf0bdc2;
        uStack_2a4 = 0x7cf0bdc2;
        local_444 = (uint **)&local_100;
        local_440 = (int *)0x0;
        local_448 = (uint **)&local_320;
        local_450 = (uint **)&local_320;
        local_44c = (uint **)0x155;
        local_454 = (uint **)0x101;
        local_458 = 0x20;
        local_460 = uVar12;
        FUN_10122c20(&local_460,0x24);
        local_460 = uVar15;
        local_454 = (uint **)(*(uint *)(param_3 + 0x470) | 0x37);
        local_43c = &local_320;
        local_458 = iVar8;
        local_438 = 0;
        local_444 = (uint **)&local_2c0;
        local_440 = (int *)0x155;
        local_448 = (uint **)&local_320;
        local_450 = ppuVar9;
        local_44c = (uint **)0x100;
        iStack_45c = param_3;
        puVar10 = (uint *)FUN_100a25f0(&local_460,0x2c);
        break;
      case 8:
        local_460 = (uint)local_460._1_3_ << 8;
        puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,2,0,param_3,iVar8,0);
        local_460 = uVar15;
        local_440 = (int *)(param_3 + 0x3f0);
        local_448 = (uint **)(param_3 + 0x3c0);
        local_43c = (int *)0x0;
        local_444 = (uint **)((*(byte *)(param_3 + 0x3f4) >> 4 & 3) << 6 |
                              *(byte *)(param_3 + 0x3f4) & 0x3f | 0x100);
        local_44c = (uint **)((*(byte *)(param_3 + 0x3c4) >> 4 & 3) << 6 |
                              *(byte *)(param_3 + 0x3c4) & 0x3f | 0x100);
        local_450 = ppuVar9;
        local_454 = (uint **)(*(uint *)(param_3 + 0x470) | 0x10);
        local_458 = iVar8;
        iStack_45c = param_3;
        puVar10 = (uint *)FUN_100a25f0(&local_460,0x28);
        break;
      case 9:
        local_460 = (uint)local_460._1_3_ << 8;
        puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,2,0,param_3,iVar8,0);
        local_460 = uVar15;
        local_448 = (uint **)(param_3 + 0x3f0);
        local_44c = (uint **)(param_3 + 0x3c0);
        local_444 = (uint **)0x0;
        local_454 = (uint **)(*(uint *)(param_3 + 0x470) | 0x11);
        local_450 = ppuVar9;
        local_458 = iVar8;
        iStack_45c = param_3;
        puVar10 = (uint *)FUN_100a25f0(&local_460,0x20);
        break;
      case 10:
        local_460 = (uint)local_460._1_3_ << 8;
        puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,2,0,param_3,iVar8,0);
        local_460 = uVar15;
        local_448 = (uint **)(param_3 + 0x3f0);
        local_44c = (uint **)(param_3 + 0x3c0);
        local_444 = (uint **)0x0;
        local_454 = (uint **)(*(uint *)(param_3 + 0x470) | 0x33);
        local_450 = ppuVar9;
        local_458 = iVar8;
        iStack_45c = param_3;
        puVar10 = (uint *)FUN_100a25f0(&local_460,0x20);
        break;
      case 0xb:
        local_460 = (uint)local_460._1_3_ << 8;
        puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,2,0,param_3,iVar8,0);
        local_460 = uVar15;
        local_448 = (uint **)(param_3 + 0x3f0);
        local_44c = (uint **)(param_3 + 0x3c0);
        local_444 = (uint **)0x0;
        local_454 = (uint **)(*(uint *)(param_3 + 0x470) | 0x34);
        local_450 = ppuVar9;
        local_458 = iVar8;
        iStack_45c = param_3;
        puVar10 = (uint *)FUN_100a25f0(&local_460,0x20);
        break;
      case 0xc:
      case 0xd:
        local_460 = (uint)local_460._1_3_ << 8;
        puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,2,0,param_3,iVar8,0);
        uVar15 = param_3 + 0x18;
        uVar14 = *(undefined1 *)(param_3 + 0x314);
        local_e0 = (uint *)FUN_10121590(uVar15,4,0);
        local_2a0 = *(int *)(param_3 + 0xac);
        local_44c = (uint **)(param_3 + 0x3f0);
        uStack_c8 = 0xffffffffffffffff;
        local_d0 = 0xffffffffffffffff;
        local_450 = (uint **)(param_3 + 0x3c0);
        local_448 = (uint **)0x0;
        local_29c = 0xe4;
        uStack_290 = 0x3f800000;
        uStack_28c = 0x3f800000;
        local_458 = 0x1d;
        if (uVar12 != 0xd) {
          local_458 = 0x31;
        }
        local_454 = &local_e0;
        iStack_45c = iVar8;
        uStack_288 = 0x3f800000;
        uStack_284 = 0x3f800000;
        local_460 = uVar15;
        local_dc = uVar14;
        FUN_10122c20(&local_460,0x1c);
        uVar12 = FUN_10123210(0xe4,*(undefined1 *)(param_3 + 0x314));
        iStack_45c = iVar8;
        local_450 = (uint **)(uVar12 & 0xff | 0x100);
        local_448 = (uint **)&local_2a0;
        local_444 = (uint **)0x0;
        local_44c = &local_e0;
        local_458 = 1;
        local_454 = ppuVar9;
        local_460 = uVar15;
        puVar10 = (uint *)FUN_10122c20(&local_460,0x20);
        break;
      case 0xe:
        local_460 = (uint)local_460._1_3_ << 8;
        puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,1,0,param_3,iVar8,
                                       *(char *)(*(int *)(param_3 + 0x10) + 0x4a6c) == '\x01');
        local_448 = (uint **)0x0;
        local_460 = uVar15;
        local_44c = (uint **)(param_3 + 0x3c0);
        local_454 = (uint **)(*(uint *)(param_3 + 0x470) | 0x19);
        local_450 = ppuVar9;
        local_458 = iVar8;
        iStack_45c = param_3;
        puVar10 = (uint *)FUN_100a25f0(&local_460,0x1c);
        break;
      case 0xf:
        local_460 = CONCAT31(local_460._1_3_,1);
        puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,1,0,param_3,iVar8,1);
        uVar12 = param_3 + 0x18;
        local_300 = FUN_10121590(uVar12,4,0);
        local_2fc = 2;
        local_450 = (uint **)(param_3 + 0x3c0);
        local_44c = (uint **)0x0;
        local_454 = (uint **)&local_300;
        local_458 = 0x2f;
        uStack_2e8 = 0xffffffffffffffff;
        local_2f0 = 0xffffffffffffffff;
        iStack_45c = iVar8;
        local_460 = uVar12;
        FUN_10122c20(&local_460,0x18);
        local_c0 = *(undefined4 *)(param_3 + 0xa8);
        iStack_45c = iVar8;
        uStack_270 = 0xfcf0bdc2;
        uStack_26c = 0xfcf0bdc2;
        uStack_b0 = 0xffffffffff800000;
        uStack_a8 = 0xffffffffffffffff;
        local_280 = *(int *)(param_3 + 0xac);
        local_bc = 0xe4;
        local_27c = 0xe4;
        uStack_268 = 0xfcf0bdc2;
        uStack_264 = 0xfcf0bdc2;
        local_444 = (uint **)&local_c0;
        local_440 = (int *)0x0;
        local_448 = (uint **)&local_300;
        local_450 = (uint **)&local_300;
        local_44c = (uint **)0x155;
        local_454 = (uint **)0x101;
        local_458 = 0x20;
        local_460 = uVar12;
        FUN_10122c20(&local_460,0x24);
        local_460 = uVar15;
        local_454 = (uint **)(*(uint *)(param_3 + 0x470) | 0x37);
        local_43c = &local_300;
        local_458 = iVar8;
        local_438 = 0;
        local_444 = (uint **)&local_280;
        local_440 = (int *)0x155;
        local_448 = (uint **)&local_300;
        local_450 = ppuVar9;
        local_44c = (uint **)0x100;
        iStack_45c = param_3;
        puVar10 = (uint *)FUN_100a25f0(&local_460,0x2c);
        break;
      case 0x10:
        local_460 = (uint)local_460._1_3_ << 8;
        puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,1,0,param_3,iVar8,0);
        uVar12 = param_3 + 0x18;
        local_360 = FUN_10121590(uVar12,4,1);
        uVar16 = 0xffffffffffffffff;
        local_35c = 0xf;
        uStack_348 = 0xffffffffffffffff;
        local_350 = 0xffffffffffffffff;
        local_3b0 = FUN_10121590(uVar12,extraout_x1 & 0xffffffff,0);
        local_3ac = 3;
        uStack_1c0 = *(undefined4 *)(param_3 + 0xac);
        local_200 = *(undefined4 *)(param_3 + 0xa8);
        uStack_150 = 0;
        uStack_148 = 0;
        local_1f0 = 0x42fffe01;
        uStack_1ec = 0xffffffffffffffff;
        uStack_1cc = 0xffffffffffffffff;
        local_450 = (uint **)(param_3 + 0x3c0);
        local_1d0 = 0xc2fffe01;
        local_44c = (uint **)0x0;
        local_454 = (uint **)&local_360;
        uStack_1e4 = 0xffffffff;
        local_458 = 0x36;
        local_15c = 0xe4;
        local_1fc = 0xe4;
        local_1dc = 0xe4;
        uStack_1c4 = 0xffffffff;
        local_1bc = 0xe4;
        local_1b0 = 0;
        uStack_1a8 = 0x3f800000;
        uStack_1a4 = 0x3f800000;
        iStack_45c = iVar8;
        local_460 = uVar12;
        uStack_398 = uVar16;
        uStack_1e0 = local_200;
        local_160 = uStack_1c0;
        FUN_10122c20(&local_460,0x18);
        local_448 = (uint **)&local_160;
        local_444 = (uint **)0x0;
        local_44c = (uint **)&local_360;
        local_450 = (uint **)0x1e4;
        local_454 = (uint **)&local_3b0;
        local_458 = 0x1d;
        iStack_45c = iVar8;
        local_460 = uVar12;
        FUN_10122c20(&local_460,0x20);
        local_444 = (uint **)&local_160;
        local_440 = (int *)0x0;
        local_448 = (uint **)&local_360;
        local_44c = (uint **)0x140;
        local_450 = (uint **)&local_3b0;
        iStack_45c = iVar8;
        local_454 = (uint **)0x10c;
        local_458 = 0x39;
        local_460 = uVar12;
        FUN_10122c20(&local_460,0x24);
        local_444 = (uint **)&local_3b0;
        iStack_45c = iVar8;
        local_440 = (int *)0x0;
        local_448 = (uint **)0x1fe;
        local_44c = (uint **)&local_3b0;
        local_450 = (uint **)0x154;
        local_454 = (uint **)&local_3b0;
        local_458 = 1;
        local_460 = uVar12;
        FUN_10122c20(&local_460,0x24);
        local_444 = (uint **)&local_200;
        iStack_45c = iVar8;
        local_440 = (int *)0x0;
        local_448 = (uint **)&local_360;
        local_450 = (uint **)&local_3b0;
        local_44c = (uint **)0x1ff;
        local_458 = 0x33;
        local_454 = (uint **)0x108;
        local_460 = uVar12;
        FUN_10122c20(&local_460,0x24);
        local_444 = (uint **)&uStack_1e0;
        iStack_45c = iVar8;
        local_440 = (int *)0x0;
        local_448 = (uint **)&local_3b0;
        local_450 = (uint **)&local_3b0;
        local_44c = (uint **)0x1ff;
        local_458 = 0x34;
        local_454 = (uint **)0x108;
        local_460 = uVar12;
        FUN_10122c20(&local_460,0x24);
        local_448 = (uint **)&local_360;
        iStack_45c = iVar8;
        local_444 = (uint **)0x0;
        local_44c = (uint **)0x155;
        local_450 = (uint **)&local_3b0;
        local_458 = 0x2f;
        local_454 = (uint **)0x104;
        local_460 = uVar12;
        FUN_10122c20(&local_460,0x20);
        local_440 = &local_3b0;
        iStack_45c = iVar8;
        local_43c = (int *)0x0;
        local_448 = (uint **)&local_3b0;
        local_444 = (uint **)0x1ff;
        local_450 = (uint **)&local_3b0;
        local_44c = (uint **)0x1aa;
        local_458 = 0x38;
        local_454 = (uint **)0x104;
        local_460 = uVar12;
        FUN_10122c20(&local_460,0x28);
        local_448 = (uint **)&local_3b0;
        local_444 = (uint **)0x0;
        local_450 = (uint **)&local_3b0;
        local_44c = (uint **)0x1aa;
        local_458 = 0x19;
        local_454 = (uint **)0x104;
        iStack_45c = iVar8;
        local_460 = uVar12;
        FUN_10122c20(&local_460,0x20);
        local_44c = (uint **)&uStack_1c0;
        iStack_45c = iVar8;
        local_448 = (uint **)0x0;
        local_450 = (uint **)&local_360;
        local_458 = 0x36;
        local_454 = (uint **)0x10c;
        local_460 = uVar12;
        FUN_10122c20(&local_460,0x1c);
        local_440 = &local_3b0;
        iStack_45c = iVar8;
        local_43c = (int *)0x0;
        local_448 = (uint **)&local_3b0;
        local_444 = (uint **)0x1aa;
        local_44c = (uint **)0x155;
        local_450 = (uint **)&local_360;
        local_454 = (uint **)0x102;
        local_458 = 1;
        local_460 = uVar12;
        FUN_10122c20(&local_460,0x28);
        local_440 = &local_360;
        iStack_45c = iVar8;
        local_43c = (int *)0x0;
        local_444 = (uint **)0x154;
        local_448 = (uint **)&local_3b0;
        local_44c = (uint **)0x100;
        local_450 = (uint **)&local_360;
        local_454 = (uint **)0x103;
        local_458 = 1;
        local_460 = uVar12;
        FUN_10122c20(&local_460,0x28);
        local_460 = uVar15;
        local_454 = (uint **)(*(uint *)(param_3 + 0x470) | 0x36);
        local_448 = (uint **)&local_360;
        local_458 = iVar8;
        local_444 = (uint **)0x0;
        local_450 = ppuVar9;
        local_44c = (uint **)0x1d3;
        iStack_45c = param_3;
        FUN_100a25f0(&local_460,0x20);
        puVar10 = (uint *)FUN_10121648(uVar12,local_360);
        break;
      case 0x11:
        local_460 = (uint)local_460._1_3_ << 8;
        puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,2,0,param_3,iVar8,0);
        puVar10 = *local_3c0;
        if (((((uint)puVar10 >> 0x1e & 1) == 0) && (puVar10 != *(uint **)(param_3 + 0x3c0))) &&
           (puVar10 != *(uint **)(param_3 + 0x3f0))) {
          local_260 = *(undefined8 *)local_3c0;
          uStack_248 = *(undefined8 *)(local_3c0 + 6);
          uStack_250 = *(undefined8 *)(local_3c0 + 4);
          bVar7 = false;
          uVar15 = param_3 + 0x18;
          uStack_258 = *(undefined8 *)(local_3c0 + 2);
          puVar10 = puVar13;
        }
        else {
          uVar15 = param_3 + 0x18;
          bVar7 = true;
          local_220 = (uint *)FUN_10121590(uVar15,4,0);
          uStack_250 = 0xffffffffffffffff;
          uStack_248 = 0xffffffffffffffff;
          uStack_21c = CONCAT31(uStack_21c._1_3_,0xe4);
          local_260 = CONCAT44(uStack_21c,local_220);
          uStack_258 = uStack_218;
          puVar10 = local_220;
        }
        if ((*puVar3 >> 0x10 & 1) != 0) {
          local_400 = *(uint **)(param_3 + 0xa8);
          local_3f0 = 0x3f800000;
          local_3fc = 0xe4;
          uStack_3ec = 0xffffffff;
          uStack_3e8 = 0xffffffff;
          uStack_3e4 = 0xffffffff;
          local_44c = &local_400;
          local_448 = (uint **)0x0;
          local_450 = (uint **)&local_260;
          local_454 = (uint **)0x101;
          local_458 = 0x36;
          iStack_45c = local_420;
          local_460 = uVar15;
          puVar10 = (uint *)FUN_10122c20(&local_460,0x1c);
        }
        if ((*puVar3 >> 0x11 & 1) != 0) {
          if (bVar7) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(uint *)(param_3 + 0x470);
          }
          local_438 = 0;
          uVar12 = *(byte *)(param_3 + 0x3f4) >> 2 & 3;
          uVar6 = *(byte *)(param_3 + 0x3c4) >> 2 & 3;
          local_440 = (int *)(uVar12 | (uVar12 | (uVar12 | (uVar12 | 4) << 2) << 2) << 2);
          local_448 = (uint **)(uVar6 | (uVar6 | (uVar6 | (uVar6 | 4) << 2) << 2) << 2);
          local_454 = (uint **)(uVar15 | 0x38);
          local_44c = (uint **)&local_260;
          local_450 = (uint **)0x102;
          local_458 = local_420;
          local_460 = local_418;
          iStack_45c = param_3;
          local_444 = (uint **)(param_3 + 0x3c0U);
          local_43c = (int *)(param_3 + 0x3f0U);
          puVar10 = (uint *)FUN_100a25f0(&local_460,0x2c);
        }
        if ((*puVar3 >> 0x12 & 1) != 0) {
          if (bVar7) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(uint *)(param_3 + 0x470);
          }
          local_440 = (int *)0x0;
          uVar12 = *(byte *)(param_3 + 0x3c4) >> 4 & 3;
          local_448 = (uint **)(uVar12 | (uVar12 | (uVar12 | (uVar12 | 4) << 2) << 2) << 2);
          local_454 = (uint **)(uVar15 | 0x36);
          local_44c = (uint **)&local_260;
          local_450 = (uint **)0x104;
          local_458 = local_420;
          local_460 = local_418;
          iStack_45c = param_3;
          local_444 = (uint **)(param_3 + 0x3c0U);
          puVar10 = (uint *)FUN_100a25f0(&local_460,0x24);
        }
        if ((*puVar3 >> 0x13 & 1) != 0) {
          if (bVar7) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(uint *)(param_3 + 0x470);
          }
          local_440 = (int *)0x0;
          uVar12 = (uint)(*(byte *)(param_3 + 0x3f4) >> 6);
          local_448 = (uint **)(uVar12 | (uVar12 | (uVar12 | (uVar12 | 4) << 2) << 2) << 2);
          local_454 = (uint **)(uVar15 | 0x36);
          local_44c = (uint **)&local_260;
          local_450 = (uint **)0x108;
          local_458 = local_420;
          local_460 = local_418;
          iStack_45c = param_3;
          local_444 = (uint **)(param_3 + 0x3f0U);
          puVar10 = (uint *)FUN_100a25f0(&local_460,0x24);
        }
        if (bVar7) {
          local_454 = (uint **)(*(uint *)(param_3 + 0x470) | 0x36);
          local_44c = (uint **)&local_260;
          local_448 = (uint **)0x0;
          local_450 = local_414;
          local_458 = local_420;
          local_460 = local_418;
          iStack_45c = param_3;
          puVar10 = (uint *)FUN_100a25f0(&local_460,0x1c);
        }
        break;
      case 0x13:
        local_460 = (uint)local_460._1_3_ << 8;
        puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,1,0,param_3,iVar8,0);
        local_448 = (uint **)0x0;
        local_460 = uVar15;
        local_44c = (uint **)(param_3 + 0x3c0);
        local_450 = ppuVar9;
        local_454 = (uint **)(*(uint *)(param_3 + 0x470) | 0x1a);
        local_458 = iVar8;
        iStack_45c = param_3;
        puVar10 = (uint *)FUN_100a25f0(&local_460,0x1c);
        break;
      case 0x14:
      case 0x15:
        local_410 = (int *)(param_3 + 0x3f0);
        piVar1 = (int *)(param_3 + 0x3c0);
        if ((*puVar3 >> 0x10 & 1) == 0) {
          puVar2 = (uint *)(param_3 + 0x470);
        }
        else {
          local_460 = (uint)local_460._1_3_ << 8;
          puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0x10000,2,0,param_3,iVar8,0);
          local_40c = (uint *)(param_3 + 0x470);
          local_440 = (int *)0x0;
          local_460 = uVar15;
          local_454 = (uint **)(*local_40c | 0x11);
          local_458 = iVar8;
          local_444 = (uint **)local_410;
          local_450 = (uint **)0x101;
          local_44c = ppuVar9;
          iStack_45c = param_3;
          local_448 = (uint **)piVar1;
          puVar10 = (uint *)FUN_100a25f0(&local_460,0x24);
          puVar2 = local_40c;
        }
        iVar8 = local_420;
        if ((*puVar3 >> 0x11 & 1) != 0) {
          local_460 = local_460 & 0xffffff00;
          puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0x20000,2,1,param_3,local_420,0);
          local_454 = (uint **)(*puVar2 | 0x11);
          local_458 = iVar8;
          local_444 = (uint **)local_410;
          local_440 = (int *)0x0;
          local_44c = local_414;
          local_450 = (uint **)0x102;
          local_460 = local_418;
          iStack_45c = param_3;
          local_448 = (uint **)piVar1;
          puVar10 = (uint *)FUN_100a25f0(&local_460,0x24);
        }
        iVar8 = local_420;
        if ((*puVar3 >> 0x12 & 1) != 0) {
          local_460 = local_460 & 0xffffff00;
          puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0x40000,2,2,param_3,local_420,0);
          local_454 = (uint **)(*puVar2 | 0x11);
          local_458 = iVar8;
          local_444 = (uint **)local_410;
          local_440 = (int *)0x0;
          local_44c = local_414;
          local_450 = (uint **)0x104;
          local_460 = local_418;
          iStack_45c = param_3;
          local_448 = (uint **)piVar1;
          puVar10 = (uint *)FUN_100a25f0(&local_460,0x24);
        }
        iVar8 = local_420;
        if ((*puVar3 & 0x80000) != 0 && uVar12 == 0x14) {
          local_460 = local_460 & 0xffffff00;
          puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0x80000,2,3,param_3,local_420,0);
          local_454 = (uint **)(*puVar2 | 0x11);
          local_458 = iVar8;
          local_444 = (uint **)local_410;
          local_440 = (int *)0x0;
          local_44c = local_414;
          local_450 = (uint **)0x108;
          local_460 = local_418;
          iStack_45c = param_3;
          local_448 = (uint **)piVar1;
          puVar10 = (uint *)FUN_100a25f0(&local_460,0x24);
        }
        break;
      case 0x16:
      case 0x17:
      case 0x18:
        local_410 = (int *)(param_3 + 0x3f0);
        local_408 = (int *)(param_3 + 0x3c0);
        local_40c = puVar3;
        if ((*puVar3 >> 0x10 & 1) == 0) {
          puVar3 = (uint *)(param_3 + 0x470);
        }
        else {
          local_460 = (uint)local_460._1_3_ << 8;
          puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0x10000,2,0,param_3,iVar8,0);
          local_438 = 0;
          local_460 = uVar15;
          local_368 = (uint *)(param_3 + 0x470);
          local_440 = (int *)((*(byte *)(param_3 + 0x3f4) >> 4 & 3) << 6 |
                              *(byte *)(param_3 + 0x3f4) & 0x3f | 0x100);
          local_448 = (uint **)((*(byte *)(param_3 + 0x3c4) >> 4 & 3) << 6 |
                                *(byte *)(param_3 + 0x3c4) & 0x3f | 0x100);
          local_454 = (uint **)(*local_368 | 0x10);
          local_458 = iVar8;
          local_43c = local_410;
          local_444 = (uint **)local_408;
          local_450 = (uint **)0x101;
          local_44c = ppuVar9;
          iStack_45c = param_3;
          puVar10 = (uint *)FUN_100a25f0(&local_460,0x2c);
          puVar3 = local_368;
        }
        iVar8 = local_420;
        pbVar5 = (byte *)(param_3 + 0x3f4);
        pbVar4 = (byte *)(param_3 + 0x3c4);
        if ((*local_40c >> 0x11 & 1) != 0) {
          local_460 = local_460 & 0xffffff00;
          puVar13 = (uint *)FUN_1009f3e0(puVar10,local_40c,0x20000,2,1,param_3,local_420,0);
          local_440 = (int *)((*pbVar5 >> 4 & 3) << 6 | *pbVar5 & 0x3f | 0x100);
          local_448 = (uint **)((*pbVar4 >> 4 & 3) << 6 | *pbVar4 & 0x3f | 0x100);
          local_454 = (uint **)(*puVar3 | 0x10);
          local_458 = iVar8;
          local_43c = local_410;
          local_438 = 0;
          local_444 = (uint **)local_408;
          local_44c = local_414;
          local_450 = (uint **)0x102;
          local_460 = local_418;
          iStack_45c = param_3;
          puVar10 = (uint *)FUN_100a25f0(&local_460,0x2c);
        }
        iVar8 = local_420;
        if (((*local_40c >> 0x12 & 1) != 0) && (uVar12 - 0x16 < 2)) {
          local_460 = local_460 & 0xffffff00;
          puVar13 = (uint *)FUN_1009f3e0(puVar10,local_40c,0x40000,2,2,param_3,local_420,0);
          local_440 = (int *)((*pbVar5 >> 4 & 3) << 6 | *pbVar5 & 0x3f | 0x100);
          local_448 = (uint **)((*pbVar4 >> 4 & 3) << 6 | *pbVar4 & 0x3f | 0x100);
          local_454 = (uint **)(*puVar3 | 0x10);
          local_458 = iVar8;
          local_43c = local_410;
          local_438 = 0;
          local_444 = (uint **)local_408;
          local_44c = local_414;
          local_450 = (uint **)0x104;
          local_460 = local_418;
          iStack_45c = param_3;
          puVar10 = (uint *)FUN_100a25f0(&local_460,0x2c);
        }
        iVar8 = local_420;
        if ((*local_40c & 0x80000) != 0 && uVar12 == 0x16) {
          local_460 = local_460 & 0xffffff00;
          puVar13 = (uint *)FUN_1009f3e0(puVar10,local_40c,0x80000,2,3,param_3,local_420,0);
          local_440 = (int *)((*pbVar5 >> 4 & 3) << 6 | *pbVar5 & 0x3f | 0x100);
          local_448 = (uint **)((*pbVar4 >> 4 & 3) << 6 | *pbVar4 & 0x3f | 0x100);
          local_454 = (uint **)(*puVar3 | 0x10);
          local_458 = iVar8;
          local_43c = local_410;
          local_438 = 0;
          local_444 = (uint **)local_408;
          local_44c = local_414;
          local_450 = (uint **)0x108;
          local_460 = local_418;
          iStack_45c = param_3;
          puVar10 = (uint *)FUN_100a25f0(&local_460,0x2c);
        }
        break;
      default:
        if (uVar12 < 0x51) {
          if (uVar12 == 0x4e) {
            uVar12 = *puVar3;
            local_460 = (uint)local_460._1_3_ << 8;
            puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,1,0,param_3,iVar8,
                                           *(char *)(*(int *)(param_3 + 0x10) + 0x4a6c) == '\x01');
            local_3e0 = 0;
            local_3dc = 0;
            uStack_3c8 = 0xffffffffffffffff;
            local_3d0 = 0xffffffffffffffff;
            uVar15 = uVar12 & 0x80000;
            if ((uVar12 & 0x50000) == 0) {
              puVar10 = puVar13;
              if (uVar15 != 0) {
                local_400 = *(uint **)(param_3 + 0xa8);
                local_460 = param_3 + 0x18;
                uStack_3e4 = 0xffffffff;
                iStack_45c = iVar8;
                local_3f0 = 0x3f800000;
                local_3fc = 0xe4;
                uStack_3ec = 0xffffffff;
                uStack_3e8 = 0xffffffff;
                local_44c = &local_400;
                local_448 = (uint **)0x0;
                local_454 = (uint **)0x108;
                local_450 = ppuVar9;
                local_458 = 0x36;
                puVar10 = (uint *)FUN_10122c20(&local_460,0x1c);
              }
            }
            else {
              uVar6 = param_3 + 0x18;
              local_3e0 = FUN_10121590(uVar6,4,0);
              local_3dc = 0xf;
              local_3d0 = 0xffffffffffffffff;
              uStack_3c8 = 0xffffffffffffffff;
              local_450 = (uint **)(param_3 + 0x3c0);
              local_460 = uVar6;
              if (uVar15 == 0) {
                local_454 = (uint **)&local_3e0;
                local_44c = (uint **)0x0;
                local_458 = 0x36;
                iStack_45c = iVar8;
                FUN_10122c20(&local_460,0x18);
              }
              else if (((uint)*local_450 & 0x88000000) == 0) {
                local_3f0 = 0xffffffff;
                uStack_3ec = 0xffffffff;
                uStack_3e8 = 0xffffffff;
                uStack_3e4 = 0;
                local_400 = *(uint **)(param_3 + 0xac);
                iStack_45c = iVar8;
                local_3fc = 0xe4;
                local_44c = &local_400;
                local_448 = (uint **)0x0;
                local_454 = (uint **)&local_3e0;
                local_458 = 1;
                FUN_10122c20(&local_460,0x1c);
              }
              else {
                local_3f0 = 0;
                local_400 = *(uint **)(param_3 + 0xa8);
                uStack_3ec = 0xffffffff;
                uStack_3e8 = 0xffffffff;
                uStack_3e4 = 0xffffffff;
                local_448 = (uint **)0x0;
                iStack_45c = iVar8;
                local_3fc = 0xe4;
                local_458 = 0x36;
                local_454 = (uint **)0x107;
                local_44c = local_450;
                local_450 = (uint **)&local_3e0;
                FUN_10122c20(&local_460,0x1c);
                local_44c = &local_400;
                local_448 = (uint **)0x0;
                local_450 = (uint **)&local_3e0;
                local_458 = 0x36;
                local_454 = (uint **)0x108;
                iStack_45c = iVar8;
                local_460 = uVar6;
                FUN_10122c20(&local_460,0x1c);
              }
              if ((uVar12 >> 0x10 & 1) != 0) {
                local_448 = (uint **)&local_3e0;
                local_444 = (uint **)0x0;
                local_44c = (uint **)0x100;
                local_450 = (uint **)&local_3e0;
                local_454 = (uint **)0x101;
                local_458 = 0x41;
                iStack_45c = local_420;
                local_460 = uVar6;
                FUN_10122c20(&local_460,0x20);
              }
              local_450 = (uint **)(*(byte *)(param_3 + 0x314) & 0xd | 0x100);
              local_454 = (uint **)(*(uint *)(param_3 + 0x470) | 0x19);
              local_444 = (uint **)&local_3e0;
              local_440 = (int *)0x0;
              local_448 = (uint **)0x1e4;
              local_44c = local_414;
              local_458 = local_420;
              local_460 = local_418;
              iStack_45c = param_3;
              puVar10 = (uint *)FUN_100a25f0(&local_460,0x24);
            }
            if ((uVar12 >> 0x11 & 1) != 0) {
              uVar15 = param_3 + 0x18;
              if (local_3e0 == 0) {
                local_3e0 = FUN_10121590(uVar15,4,0);
                local_3dc = 0xf;
                local_3d0 = 0xffffffffffffffff;
                uStack_3c8 = 0xffffffffffffffff;
              }
              iVar8 = local_420;
              local_400 = *(uint **)(param_3 + 0xac);
              local_3fc = 0xe4;
              uStack_21c = CONCAT31(uStack_21c._1_3_,0xe4);
              uStack_3e8 = 0x7fffffff;
              uStack_3e4 = 0x7fffffff;
              local_3f0 = 0x7fffffff;
              uStack_3ec = 0x7fffffff;
              local_448 = &local_400;
              local_444 = (uint **)0x0;
              local_450 = (uint **)&local_3e0;
              local_458 = 1;
              local_454 = (uint **)0x102;
              iStack_45c = local_420;
              uStack_208 = 0x7f8000007f800000;
              local_210 = 0x7f8000007f800000;
              local_460 = uVar15;
              local_44c = (uint **)(param_3 + 0x3c0);
              local_220 = local_400;
              FUN_10122c20(&local_460,0x20);
              local_444 = &local_220;
              local_440 = (int *)0x0;
              local_448 = (uint **)&local_3e0;
              local_450 = (uint **)&local_3e0;
              iStack_45c = iVar8;
              local_44c = (uint **)0x155;
              local_458 = 0x27;
              local_454 = (uint **)0x102;
              local_460 = uVar15;
              FUN_10122c20(&local_460,0x24);
              local_444 = (uint **)&local_3e0;
              local_440 = (int *)0x0;
              local_448 = (uint **)0x155;
              local_450 = (uint **)&local_3e0;
              local_458 = 1;
              local_454 = (uint **)0x102;
              iStack_45c = iVar8;
              local_460 = uVar15;
              local_44c = (uint **)(param_3 + 0x3c0);
              FUN_10122c20(&local_460,0x24);
              local_448 = (uint **)&local_3e0;
              local_444 = (uint **)0x0;
              iStack_45c = iVar8;
              local_450 = local_3c0;
              local_44c = (uint **)0x155;
              local_458 = 0x1a;
              local_454 = (uint **)0x102;
              local_460 = uVar15;
              puVar10 = (uint *)FUN_10122c20(&local_460,0x20);
            }
          }
          else if (uVar12 == 0x4f) {
            local_460 = CONCAT31(local_460._1_3_,1);
            puVar13 = (uint *)FUN_1009f3e0(puVar10,puVar3,0xf0000,1,0,param_3,iVar8,1);
            uVar12 = param_3 + 0x18;
            local_390 = FUN_10121590(uVar12,4,0);
            local_38c = 0xf;
            local_1a0 = *(undefined4 *)(param_3 + 0xa8);
            uStack_378 = 0xffffffffffffffff;
            local_380 = 0xffffffffffffffff;
            uStack_90 = 0xffffffff00000017;
            uStack_88 = 0xffffffffffffffff;
            local_240 = *(int *)(param_3 + 0xac);
            local_190 = 0;
            local_170 = 0x7fffff00000000;
            local_168 = 0xffffff00;
            uStack_70 = 0xffffffff3f800000;
            uStack_68 = 0xffffffffffffffff;
            uStack_50 = 0xffffffffffffff81;
            uStack_48 = 0xffffffffffffffff;
            local_450 = (uint **)(param_3 + 0x3c0);
            local_44c = (uint **)0x0;
            local_454 = (uint **)&local_390;
            local_458 = 0x36;
            local_19c = 0xe4;
            uStack_18c = 0xffffffffffffffff;
            local_9c = 0xe4;
            uStack_184 = 0xffffffff;
            local_17c = 0xe4;
            local_164 = 0x3f800000;
            local_7c = 0xe4;
            local_5c = 0xe4;
            local_23c = 0xe4;
            uStack_230 = 0xff7fffff;
            uStack_22c = 0x3f800000;
            uStack_228 = 0xff7fffff;
            uStack_224 = 0x3f800000;
            iStack_45c = iVar8;
            local_460 = uVar12;
            iStack_180 = local_240;
            local_a0 = local_1a0;
            local_80 = local_1a0;
            local_60 = local_1a0;
            FUN_10122c20(&local_460,0x18);
            local_444 = (uint **)&local_1a0;
            local_440 = (int *)0x0;
            local_448 = (uint **)&local_390;
            local_44c = (uint **)0x1ff;
            local_450 = (uint **)&local_390;
            local_454 = (uint **)0x108;
            local_458 = 0x39;
            iStack_45c = iVar8;
            local_460 = uVar12;
            FUN_10122c20(&local_460,0x24);
            local_444 = (uint **)&local_a0;
            iStack_45c = iVar8;
            local_440 = (int *)0x0;
            local_448 = (uint **)&local_390;
            local_450 = (uint **)&local_390;
            local_44c = (uint **)0x100;
            local_458 = 0x55;
            local_454 = (uint **)0x101;
            local_460 = uVar12;
            FUN_10122c20(&local_460,0x24);
            local_448 = (uint **)&local_390;
            iStack_45c = iVar8;
            local_444 = (uint **)0x0;
            local_44c = (uint **)0x1aa;
            local_450 = (uint **)&local_390;
            local_454 = (uint **)0x104;
            local_458 = 0x2f;
            local_460 = uVar12;
            FUN_10122c20(&local_460,0x20);
            local_444 = (uint **)&iStack_180;
            iStack_45c = iVar8;
            local_440 = (int *)0x0;
            local_448 = (uint **)&local_390;
            local_44c = (uint **)0x1e4;
            local_450 = (uint **)&local_390;
            local_454 = (uint **)0x10e;
            local_458 = 1;
            local_460 = uVar12;
            FUN_10122c20(&local_460,0x24);
            local_444 = (uint **)&local_80;
            iStack_45c = iVar8;
            local_440 = (int *)0x0;
            local_448 = (uint **)&local_390;
            local_44c = (uint **)0x155;
            local_450 = (uint **)&local_390;
            local_454 = (uint **)0x102;
            local_458 = 0x3c;
            local_460 = uVar12;
            FUN_10122c20(&local_460,0x24);
            local_444 = (uint **)&local_60;
            iStack_45c = iVar8;
            local_440 = (int *)0x0;
            local_448 = (uint **)&local_390;
            local_450 = (uint **)&local_390;
            local_44c = (uint **)0x100;
            local_458 = 0x1e;
            local_454 = (uint **)0x101;
            local_460 = uVar12;
            FUN_10122c20(&local_460,0x24);
            local_448 = (uint **)&local_390;
            iStack_45c = iVar8;
            local_444 = (uint **)0x0;
            local_450 = (uint **)&local_390;
            local_44c = (uint **)0x100;
            local_458 = 0x2b;
            local_454 = (uint **)0x101;
            local_460 = uVar12;
            FUN_10122c20(&local_460,0x20);
            local_460 = uVar15;
            local_454 = (uint **)(*(uint *)(param_3 + 0x470) | 0x37);
            local_43c = &local_240;
            local_458 = iVar8;
            local_438 = 0;
            local_440 = &local_390;
            local_444 = (uint **)0x1e4;
            local_448 = (uint **)&local_390;
            local_450 = ppuVar9;
            local_44c = (uint **)0x1ff;
            iStack_45c = param_3;
            puVar10 = (uint *)FUN_100a25f0(&local_460,0x2c);
          }
        }
        else if (uVar12 < 0x52) {
          puVar13 = param_2 + 6;
        }
        else if (uVar12 == 0xfffe) {
          puVar13 = puVar3 + (*param_2 >> 0x10);
        }
        else if (uVar12 == 0xffff) {
          local_41c[0] = '\x01';
        }
      }
      iVar8 = local_420;
    }
    FUN_1009fa28(puVar10,param_3,iVar8);
    param_2 = puVar13;
  } while (local_41c[0] == '\0');
  return;
}

