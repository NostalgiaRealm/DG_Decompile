/*
 * FUN_100804b8 at 100804b8
 * undefined FUN_100804b8(void)
 * Address ranges: 100804b8-10082123
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100804b8(uint *param_1,uint *param_2,int param_3,int param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint **ppuVar3;
  byte *pbVar4;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulonglong extraout_x1;
  undefined1 uVar12;
  uint *puVar13;
  uint extraout_w14;
  undefined8 uVar14;
  uint *local_430;
  int iStack_42c;
  int local_428;
  uint *local_424;
  uint **local_420;
  uint **local_41c;
  uint **local_418;
  uint **local_414;
  uint *local_410;
  uint *local_40c;
  undefined4 local_408;
  int local_3f0;
  uint *local_3ec;
  uint *local_3e8;
  uint *local_3e4;
  uint *local_3e0;
  undefined1 local_3dc;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  uint local_3c0;
  undefined1 local_3bc;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined4 local_3a0;
  undefined1 local_39c;
  undefined8 uStack_388;
  uint local_380;
  undefined1 local_37c;
  undefined8 local_370;
  undefined8 uStack_368;
  uint local_360;
  undefined1 local_35c;
  undefined8 local_350;
  undefined8 uStack_348;
  uint local_340;
  undefined1 local_33c;
  undefined8 local_330;
  undefined8 uStack_328;
  uint local_320;
  undefined1 local_31c;
  undefined8 local_310;
  undefined8 uStack_308;
  uint local_300;
  undefined1 local_2fc;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  uint local_2e0;
  undefined1 local_2dc;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  uint local_2c0;
  undefined1 local_2bc;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  uint local_2a0;
  undefined1 local_29c;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  uint local_280;
  undefined1 local_27c;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  uint local_240;
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
  undefined4 local_184;
  uint local_180;
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
  
  local_3f0 = param_4;
  local_3ec = param_1;
  do {
    puVar13 = param_2;
    puVar6 = puVar13 + 1;
    uVar11 = *puVar13 & 0xffff;
    param_2 = puVar6;
    switch(uVar11) {
    case 0:
      param_2 = puVar13 + 2;
      break;
    case 1:
      local_430 = (uint *)((uint)local_430._1_3_ << 8);
      *(undefined4 *)(param_3 + 0x3e4) = 0;
      param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,1,0,param_3,param_7,0);
      local_420 = (uint **)(param_3 + 0x280);
      local_41c = (uint **)(param_3 + 0x330);
      local_418 = (uint **)0x0;
      uVar11 = 0x1b;
      if (*local_420 != (uint *)*(uint *)(param_3 + 0x224)) {
        uVar11 = 0x36;
      }
      local_424 = (uint *)(uVar11 | *(uint *)(param_3 + 0x3e0));
      local_428 = local_3f0;
      local_430 = local_3ec;
      iStack_42c = param_3;
      param_1 = (uint *)FUN_10082c98(&local_430,0x1c);
      break;
    case 2:
      local_430 = (uint *)((uint)local_430._1_3_ << 8);
      param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,2,0,param_3,param_7,0);
      local_414 = (uint **)0x0;
      local_424 = *(uint **)(param_3 + 0x3e0);
      local_420 = (uint **)(param_3 + 0x280);
      local_418 = (uint **)(param_3 + 0x360);
      local_41c = (uint **)(param_3 + 0x330);
      local_428 = local_3f0;
      local_430 = local_3ec;
      iStack_42c = param_3;
      param_1 = (uint *)FUN_10082c98(&local_430,0x20);
      break;
    case 3:
    case 0x12:
      break;
    case 4:
      local_430 = (uint *)((uint)local_430._1_3_ << 8);
      param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,3,0,param_3,param_7,0);
      local_420 = (uint **)(param_3 + 0x280);
      local_418 = (uint **)(param_3 + 0x360);
      local_424 = (uint *)(*(uint *)(param_3 + 0x3e0) | 0x32);
      local_41c = (uint **)(param_3 + 0x330);
      local_414 = (uint **)(param_3 + 0x390);
      local_410 = (uint *)0x0;
      local_428 = local_3f0;
      local_430 = local_3ec;
      iStack_42c = param_3;
      param_1 = (uint *)FUN_10082c98(&local_430,0x24);
      break;
    case 5:
      local_430 = (uint *)((uint)local_430._1_3_ << 8);
      param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,2,0,param_3,param_7,0);
      local_414 = (uint **)0x0;
      local_420 = (uint **)(param_3 + 0x280);
      local_418 = (uint **)(param_3 + 0x360);
      local_41c = (uint **)(param_3 + 0x330);
      local_424 = (uint *)(*(uint *)(param_3 + 0x3e0) | 0x38);
      local_428 = local_3f0;
      local_430 = local_3ec;
      iStack_42c = param_3;
      param_1 = (uint *)FUN_10082c98(&local_430,0x20);
      break;
    case 6:
      local_430 = (uint *)((uint)local_430._1_3_ << 8);
      param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,1,0,param_3,param_7,1);
      puVar6 = (uint *)(param_3 + 0x18);
      local_340 = FUN_100ee580(puVar6,4,0);
      local_33c = 2;
      uStack_328 = 0xffffffffffffffff;
      local_330 = 0xffffffffffffffff;
      iVar10 = FUN_100ef9e8(*(undefined4 *)(param_3 + 0x18));
      local_430 = puVar6;
      if (iVar10 == 0x40) {
        local_3e0 = *(uint **)(param_3 + 0xac);
        local_3d0 = 0x3f800000;
        uStack_3cc = 0x3f800000;
        local_3dc = 0xe4;
        local_41c = (uint **)(param_3 + 0x330);
        local_418 = (uint **)0x0;
        local_420 = &local_3e0;
        local_424 = &local_340;
        local_428 = 0xe;
        uStack_3c8 = 0x3f800000;
        uStack_3c4 = 0x3f800000;
        iStack_42c = local_3f0;
        FUN_100ef6a8(&local_430,0x1c);
      }
      else {
        local_420 = (uint **)(param_3 + 0x330);
        local_41c = (uint **)0x0;
        local_424 = &local_340;
        local_428 = 0x81;
        iStack_42c = local_3f0;
        FUN_100ef6a8(&local_430,0x18);
      }
      iVar10 = local_3f0;
      local_140 = *(undefined4 *)(param_3 + 0xa8);
      uStack_130 = 0xffffffff7fffffff;
      uStack_128 = 0xffffffffffffffff;
      uStack_110 = 0xffffffff7f800000;
      uStack_108 = 0xffffffffffffffff;
      local_2e0 = *(uint *)(param_3 + 0xac);
      uStack_2d0 = 0x7cf0bdc2;
      uStack_2cc = 0x7cf0bdc2;
      local_13c = 0xe4;
      local_414 = (uint **)&local_140;
      local_410 = (uint *)0x0;
      local_418 = (uint **)&local_340;
      local_420 = (uint **)&local_340;
      local_41c = (uint **)0x155;
      local_428 = 1;
      local_424 = (uint *)0x101;
      local_11c = 0xe4;
      local_2dc = 0xe4;
      uStack_2c8 = 0x7cf0bdc2;
      uStack_2c4 = 0x7cf0bdc2;
      iStack_42c = local_3f0;
      local_430 = puVar6;
      local_120 = local_140;
      FUN_100ef6a8(&local_430,0x24);
      local_414 = (uint **)&local_120;
      local_410 = (uint *)0x0;
      local_418 = (uint **)&local_340;
      local_420 = (uint **)&local_340;
      iStack_42c = iVar10;
      local_41c = (uint **)0x100;
      local_428 = 0x20;
      local_424 = (uint *)0x101;
      local_430 = puVar6;
      FUN_100ef6a8(&local_430,0x24);
      local_420 = (uint **)(param_3 + 0x280);
      local_41c = (uint **)0x100;
      local_424 = (uint *)(*(uint *)(param_3 + 0x3e0) | 0x37);
      local_40c = &local_340;
      local_428 = iVar10;
      local_408 = 0;
      local_414 = (uint **)&local_2e0;
      local_410 = (uint *)0x155;
      local_418 = (uint **)&local_340;
      local_430 = local_3ec;
      iStack_42c = param_3;
      param_1 = (uint *)FUN_10082c98(&local_430,0x2c);
      break;
    case 7:
      local_430 = (uint *)CONCAT31(local_430._1_3_,1);
      param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,1,0,param_3,param_7,1);
      puVar6 = (uint *)(param_3 + 0x18);
      local_320 = FUN_100ee580(puVar6,4,0);
      iVar10 = local_3f0;
      local_31c = 2;
      local_420 = (uint **)(param_3 + 0x330);
      local_41c = (uint **)0x0;
      local_424 = &local_320;
      local_428 = 0x44;
      uStack_308 = 0xffffffffffffffff;
      local_310 = 0xffffffffffffffff;
      iStack_42c = local_3f0;
      local_430 = puVar6;
      FUN_100ef6a8(&local_430,0x18);
      local_100 = *(undefined4 *)(param_3 + 0xa8);
      iStack_42c = iVar10;
      uStack_2b0 = 0x7cf0bdc2;
      uStack_2ac = 0x7cf0bdc2;
      uStack_f0 = 0xffffffff7f800000;
      uStack_e8 = 0xffffffffffffffff;
      local_2c0 = *(uint *)(param_3 + 0xac);
      local_fc = 0xe4;
      local_2bc = 0xe4;
      uStack_2a8 = 0x7cf0bdc2;
      uStack_2a4 = 0x7cf0bdc2;
      local_414 = (uint **)&local_100;
      local_410 = (uint *)0x0;
      local_418 = (uint **)&local_320;
      local_420 = (uint **)&local_320;
      local_41c = (uint **)0x155;
      local_424 = (uint *)0x101;
      local_428 = 0x20;
      local_430 = puVar6;
      FUN_100ef6a8(&local_430,0x24);
      local_420 = (uint **)(param_3 + 0x280);
      local_424 = (uint *)(*(uint *)(param_3 + 0x3e0) | 0x37);
      local_40c = &local_320;
      local_428 = iVar10;
      local_408 = 0;
      local_414 = (uint **)&local_2c0;
      local_410 = (uint *)0x155;
      local_418 = (uint **)&local_320;
      local_41c = (uint **)0x100;
      local_430 = local_3ec;
      iStack_42c = param_3;
      param_1 = (uint *)FUN_10082c98(&local_430,0x2c);
      break;
    case 8:
      local_430 = (uint *)((uint)local_430._1_3_ << 8);
      param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,2,0,param_3,param_7,0);
      local_40c = (uint *)0x0;
      local_420 = (uint **)(param_3 + 0x280);
      local_410 = (uint *)(param_3 + 0x360);
      local_418 = (uint **)(param_3 + 0x330);
      local_414 = (uint **)((*(byte *)(param_3 + 0x364) >> 4 & 3) << 6 |
                            *(byte *)(param_3 + 0x364) & 0x3f | 0x100);
      local_41c = (uint **)((*(byte *)(param_3 + 0x334) >> 4 & 3) << 6 |
                            *(byte *)(param_3 + 0x334) & 0x3f | 0x100);
      local_424 = (uint *)(*(uint *)(param_3 + 0x3e0) | 0x10);
      local_428 = local_3f0;
      local_430 = local_3ec;
      iStack_42c = param_3;
      param_1 = (uint *)FUN_10082c98(&local_430,0x28);
      break;
    case 9:
      local_430 = (uint *)((uint)local_430._1_3_ << 8);
      param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,2,0,param_3,param_7,0);
      local_414 = (uint **)0x0;
      local_420 = (uint **)(param_3 + 0x280);
      local_418 = (uint **)(param_3 + 0x360);
      local_424 = (uint *)(*(uint *)(param_3 + 0x3e0) | 0x11);
      local_41c = (uint **)(param_3 + 0x330);
      local_428 = local_3f0;
      local_430 = local_3ec;
      iStack_42c = param_3;
      param_1 = (uint *)FUN_10082c98(&local_430,0x20);
      break;
    case 10:
      local_430 = (uint *)((uint)local_430._1_3_ << 8);
      param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,2,0,param_3,param_7,0);
      local_414 = (uint **)0x0;
      local_420 = (uint **)(param_3 + 0x280);
      local_418 = (uint **)(param_3 + 0x360);
      local_424 = (uint *)(*(uint *)(param_3 + 0x3e0) | 0x33);
      local_41c = (uint **)(param_3 + 0x330);
      local_428 = local_3f0;
      local_430 = local_3ec;
      iStack_42c = param_3;
      param_1 = (uint *)FUN_10082c98(&local_430,0x20);
      break;
    case 0xb:
      local_430 = (uint *)((uint)local_430._1_3_ << 8);
      param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,2,0,param_3,param_7,0);
      local_414 = (uint **)0x0;
      local_420 = (uint **)(param_3 + 0x280);
      local_418 = (uint **)(param_3 + 0x360);
      local_424 = (uint *)(*(uint *)(param_3 + 0x3e0) | 0x34);
      local_41c = (uint **)(param_3 + 0x330);
      local_428 = local_3f0;
      local_430 = local_3ec;
      iStack_42c = param_3;
      param_1 = (uint *)FUN_10082c98(&local_430,0x20);
      break;
    case 0xc:
    case 0xd:
      local_430 = (uint *)((uint)local_430._1_3_ << 8);
      param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,2,0,param_3,param_7,0);
      puVar6 = (uint *)(param_3 + 0x18);
      uVar12 = *(undefined1 *)(param_3 + 0x284);
      local_e0 = (uint *)FUN_100ee580(puVar6,4,0);
      iVar10 = local_3f0;
      local_2a0 = *(uint *)(param_3 + 0xac);
      local_41c = (uint **)(param_3 + 0x360);
      uStack_c8 = 0xffffffffffffffff;
      local_d0 = 0xffffffffffffffff;
      local_420 = (uint **)(param_3 + 0x330);
      local_418 = (uint **)0x0;
      local_29c = 0xe4;
      uStack_290 = 0x3f800000;
      uStack_28c = 0x3f800000;
      local_428 = 0x1d;
      if (uVar11 != 0xd) {
        local_428 = 0x31;
      }
      local_424 = (uint *)&local_e0;
      iStack_42c = local_3f0;
      uStack_288 = 0x3f800000;
      uStack_284 = 0x3f800000;
      local_430 = puVar6;
      local_dc = uVar12;
      FUN_100ef6a8(&local_430,0x1c);
      uVar11 = FUN_100efc98(0xe4,*(undefined1 *)(param_3 + 0x284));
      iStack_42c = iVar10;
      local_420 = (uint **)(uVar11 & 0xff | 0x100);
      local_418 = (uint **)&local_2a0;
      local_414 = (uint **)0x0;
      local_41c = &local_e0;
      local_428 = 1;
      local_430 = puVar6;
      local_424 = (uint *)extraout_w14;
      param_1 = (uint *)FUN_100ef6a8(&local_430,0x20);
      break;
    case 0xe:
      local_430 = (uint *)((uint)local_430._1_3_ << 8);
      param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,1,0,param_3,param_7,
                                     *(char *)(*(int *)(param_3 + 0x10) + 0x4854) == '\x01');
      local_420 = (uint **)(param_3 + 0x280);
      local_41c = (uint **)(param_3 + 0x330);
      local_424 = (uint *)(*(uint *)(param_3 + 0x3e0) | 0x19);
      local_418 = (uint **)0x0;
      local_428 = local_3f0;
      local_430 = local_3ec;
      iStack_42c = param_3;
      param_1 = (uint *)FUN_10082c98(&local_430,0x1c);
      break;
    case 0xf:
      local_430 = (uint *)CONCAT31(local_430._1_3_,1);
      param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,1,0,param_3,param_7,1);
      puVar6 = (uint *)(param_3 + 0x18);
      local_300 = FUN_100ee580(puVar6,4,0);
      iVar10 = local_3f0;
      local_2fc = 2;
      local_420 = (uint **)(param_3 + 0x330);
      local_41c = (uint **)0x0;
      local_424 = &local_300;
      local_428 = 0x2f;
      uStack_2e8 = 0xffffffffffffffff;
      local_2f0 = 0xffffffffffffffff;
      iStack_42c = local_3f0;
      local_430 = puVar6;
      FUN_100ef6a8(&local_430,0x18);
      local_c0 = *(undefined4 *)(param_3 + 0xa8);
      iStack_42c = iVar10;
      uStack_270 = 0xfcf0bdc2;
      uStack_26c = 0xfcf0bdc2;
      uStack_b0 = 0xffffffffff800000;
      uStack_a8 = 0xffffffffffffffff;
      local_280 = *(uint *)(param_3 + 0xac);
      local_bc = 0xe4;
      local_27c = 0xe4;
      uStack_268 = 0xfcf0bdc2;
      uStack_264 = 0xfcf0bdc2;
      local_414 = (uint **)&local_c0;
      local_410 = (uint *)0x0;
      local_418 = (uint **)&local_300;
      local_420 = (uint **)&local_300;
      local_41c = (uint **)0x155;
      local_424 = (uint *)0x101;
      local_428 = 0x20;
      local_430 = puVar6;
      FUN_100ef6a8(&local_430,0x24);
      local_420 = (uint **)(param_3 + 0x280);
      local_424 = (uint *)(*(uint *)(param_3 + 0x3e0) | 0x37);
      local_40c = &local_300;
      local_428 = iVar10;
      local_408 = 0;
      local_414 = (uint **)&local_280;
      local_410 = (uint *)0x155;
      local_418 = (uint **)&local_300;
      local_41c = (uint **)0x100;
      local_430 = local_3ec;
      iStack_42c = param_3;
      param_1 = (uint *)FUN_10082c98(&local_430,0x2c);
      break;
    case 0x10:
      local_430 = (uint *)((uint)local_430._1_3_ << 8);
      param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,1,0,param_3,param_7,0);
      puVar6 = (uint *)(param_3 + 0x18);
      local_360 = FUN_100ee580(puVar6,4,1);
      uVar14 = 0xffffffffffffffff;
      local_35c = 0xf;
      uStack_348 = 0xffffffffffffffff;
      local_350 = 0xffffffffffffffff;
      local_3a0 = FUN_100ee580(puVar6,extraout_x1 & 0xffffffff,0);
      iVar10 = local_3f0;
      local_39c = 3;
      uStack_1c0 = *(undefined4 *)(param_3 + 0xac);
      local_200 = *(undefined4 *)(param_3 + 0xa8);
      uStack_150 = 0;
      uStack_148 = 0;
      local_1f0 = 0x42fffe01;
      local_1b0 = 0;
      uStack_1c4 = 0xffffffff;
      uStack_1e4 = 0xffffffff;
      local_420 = (uint **)(param_3 + 0x330);
      local_1d0 = 0xc2fffe01;
      local_41c = (uint **)0x0;
      local_424 = &local_360;
      local_428 = 0x36;
      local_15c = 0xe4;
      local_1fc = 0xe4;
      uStack_1ec = 0xffffffffffffffff;
      local_1dc = 0xe4;
      uStack_1cc = 0xffffffffffffffff;
      local_1bc = 0xe4;
      uStack_1a8 = 0x3f800000;
      uStack_1a4 = 0x3f800000;
      iStack_42c = local_3f0;
      local_430 = puVar6;
      uStack_388 = uVar14;
      uStack_1e0 = local_200;
      local_160 = uStack_1c0;
      FUN_100ef6a8(&local_430,0x18);
      local_418 = (uint **)&local_160;
      local_414 = (uint **)0x0;
      local_41c = (uint **)&local_360;
      local_420 = (uint **)0x1e4;
      local_424 = &local_3a0;
      local_428 = 0x1d;
      iStack_42c = iVar10;
      local_430 = puVar6;
      FUN_100ef6a8(&local_430,0x20);
      local_414 = (uint **)&local_160;
      local_410 = (uint *)0x0;
      local_418 = (uint **)&local_360;
      local_41c = (uint **)0x140;
      local_420 = (uint **)&local_3a0;
      local_424 = (uint *)0x10c;
      local_428 = 0x39;
      iStack_42c = iVar10;
      local_430 = puVar6;
      FUN_100ef6a8(&local_430,0x24);
      local_414 = (uint **)&local_3a0;
      iStack_42c = iVar10;
      local_410 = (uint *)0x0;
      local_418 = (uint **)0x1fe;
      local_41c = (uint **)&local_3a0;
      local_420 = (uint **)0x154;
      local_424 = &local_3a0;
      local_428 = 1;
      local_430 = puVar6;
      FUN_100ef6a8(&local_430,0x24);
      local_414 = (uint **)&local_200;
      iStack_42c = iVar10;
      local_410 = (uint *)0x0;
      local_418 = (uint **)&local_360;
      local_420 = (uint **)&local_3a0;
      local_41c = (uint **)0x1ff;
      local_428 = 0x33;
      local_424 = (uint *)0x108;
      local_430 = puVar6;
      FUN_100ef6a8(&local_430,0x24);
      local_414 = (uint **)&uStack_1e0;
      iStack_42c = iVar10;
      local_410 = (uint *)0x0;
      local_418 = (uint **)&local_3a0;
      local_420 = (uint **)&local_3a0;
      local_41c = (uint **)0x1ff;
      local_428 = 0x34;
      local_424 = (uint *)0x108;
      local_430 = puVar6;
      FUN_100ef6a8(&local_430,0x24);
      local_418 = (uint **)&local_360;
      iStack_42c = iVar10;
      local_414 = (uint **)0x0;
      local_41c = (uint **)0x155;
      local_420 = (uint **)&local_3a0;
      local_428 = 0x2f;
      local_424 = (uint *)0x104;
      local_430 = puVar6;
      FUN_100ef6a8(&local_430,0x20);
      local_410 = &local_3a0;
      iStack_42c = iVar10;
      local_40c = (uint *)0x0;
      local_418 = (uint **)&local_3a0;
      local_414 = (uint **)0x1ff;
      local_420 = (uint **)&local_3a0;
      local_41c = (uint **)0x1aa;
      local_428 = 0x38;
      local_424 = (uint *)0x104;
      local_430 = puVar6;
      FUN_100ef6a8(&local_430,0x28);
      local_418 = (uint **)&local_3a0;
      local_414 = (uint **)0x0;
      local_420 = (uint **)&local_3a0;
      local_41c = (uint **)0x1aa;
      local_428 = 0x19;
      local_424 = (uint *)0x104;
      iStack_42c = iVar10;
      local_430 = puVar6;
      FUN_100ef6a8(&local_430,0x20);
      local_41c = (uint **)&uStack_1c0;
      iStack_42c = iVar10;
      local_418 = (uint **)0x0;
      local_420 = (uint **)&local_360;
      local_428 = 0x36;
      local_424 = (uint *)0x10c;
      local_430 = puVar6;
      FUN_100ef6a8(&local_430,0x1c);
      local_410 = &local_3a0;
      iStack_42c = iVar10;
      local_40c = (uint *)0x0;
      local_418 = (uint **)&local_3a0;
      local_414 = (uint **)0x1aa;
      local_41c = (uint **)0x155;
      local_420 = (uint **)&local_360;
      local_428 = 1;
      local_424 = (uint *)0x102;
      local_430 = puVar6;
      FUN_100ef6a8(&local_430,0x28);
      local_410 = &local_360;
      iStack_42c = iVar10;
      local_40c = (uint *)0x0;
      local_414 = (uint **)0x154;
      local_418 = (uint **)&local_3a0;
      local_41c = (uint **)0x100;
      local_420 = (uint **)&local_360;
      local_428 = 1;
      local_424 = (uint *)0x103;
      local_430 = puVar6;
      FUN_100ef6a8(&local_430,0x28);
      local_420 = (uint **)(param_3 + 0x280);
      local_424 = (uint *)(*(uint *)(param_3 + 0x3e0) | 0x36);
      local_418 = (uint **)&local_360;
      local_428 = iVar10;
      local_414 = (uint **)0x0;
      local_41c = (uint **)0x1d3;
      local_430 = local_3ec;
      iStack_42c = param_3;
      FUN_10082c98(&local_430,0x20);
      param_1 = (uint *)FUN_100ee638(puVar6,local_360);
      break;
    case 0x11:
      local_430 = (uint *)((uint)local_430._1_3_ << 8);
      param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,2,0,param_3,param_7,0);
      local_3e8 = (uint *)(param_3 + 0x280);
      uVar11 = *local_3e8;
      if ((((uVar11 >> 0x1e & 1) == 0) && (uVar11 != *(uint *)(param_3 + 0x330))) &&
         (uVar11 != *(uint *)(param_3 + 0x360))) {
        local_260 = *(undefined8 *)(param_3 + 0x280);
        uStack_248 = *(undefined8 *)(param_3 + 0x298);
        uStack_250 = *(undefined8 *)(param_3 + 0x290);
        bVar9 = false;
        puVar13 = (uint *)(param_3 + 0x18);
        uStack_258 = *(undefined8 *)(param_3 + 0x288);
        param_1 = param_2;
      }
      else {
        puVar13 = (uint *)(param_3 + 0x18);
        bVar9 = true;
        local_220 = (uint *)FUN_100ee580(puVar13,4,0);
        uStack_250 = 0xffffffffffffffff;
        uStack_248 = 0xffffffffffffffff;
        uStack_21c = CONCAT31(uStack_21c._1_3_,0xe4);
        local_260 = CONCAT44(uStack_21c,local_220);
        uStack_258 = uStack_218;
        param_1 = local_220;
      }
      if ((*puVar6 >> 0x10 & 1) != 0) {
        local_3e0 = *(uint **)(param_3 + 0xa8);
        local_3d0 = 0x3f800000;
        local_3dc = 0xe4;
        uStack_3cc = 0xffffffff;
        uStack_3c8 = 0xffffffff;
        uStack_3c4 = 0xffffffff;
        local_41c = &local_3e0;
        local_418 = (uint **)0x0;
        local_420 = (uint **)&local_260;
        local_424 = (uint *)0x101;
        local_428 = 0x36;
        iStack_42c = local_3f0;
        local_430 = puVar13;
        param_1 = (uint *)FUN_100ef6a8(&local_430,0x1c);
      }
      puVar13 = (uint *)(param_3 + 0x3e0);
      if ((*puVar6 >> 0x11 & 1) == 0) {
        puVar1 = (uint *)(param_3 + 0x334);
      }
      else {
        if (bVar9) {
          uVar11 = 0;
        }
        else {
          uVar11 = *puVar13;
        }
        local_408 = 0;
        local_3e4 = (uint *)(param_3 + 0x334);
        uVar7 = *(byte *)(param_3 + 0x364) >> 2 & 3;
        uVar8 = *(byte *)local_3e4 >> 2 & 3;
        local_410 = (uint *)(uVar7 | (uVar7 | (uVar7 | (uVar7 | 4) << 2) << 2) << 2);
        local_418 = (uint **)(uVar8 | (uVar8 | (uVar8 | (uVar8 | 4) << 2) << 2) << 2);
        local_424 = (uint *)(uVar11 | 0x38);
        local_41c = (uint **)&local_260;
        local_420 = (uint **)0x102;
        local_428 = local_3f0;
        local_430 = local_3ec;
        iStack_42c = param_3;
        local_414 = (uint **)(param_3 + 0x330);
        local_40c = (uint *)(param_3 + 0x360);
        param_1 = (uint *)FUN_10082c98(&local_430,0x2c);
        puVar1 = local_3e4;
      }
      if ((*puVar6 >> 0x12 & 1) != 0) {
        if (bVar9) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(uint *)(param_3 + 0x3e0);
        }
        local_410 = (uint *)0x0;
        uVar7 = (byte)((byte)*puVar1 >> 4) & 3;
        local_418 = (uint **)(uVar7 | (uVar7 | (uVar7 | (uVar7 | 4) << 2) << 2) << 2);
        local_424 = (uint *)(uVar11 | 0x36);
        local_41c = (uint **)&local_260;
        local_420 = (uint **)0x104;
        local_428 = local_3f0;
        local_430 = local_3ec;
        iStack_42c = param_3;
        local_414 = (uint **)(param_3 + 0x330);
        param_1 = (uint *)FUN_10082c98(&local_430,0x24);
      }
      if ((*puVar6 >> 0x13 & 1) != 0) {
        if (bVar9) {
          uVar11 = 0;
        }
        else {
          uVar11 = *puVar13;
        }
        local_410 = (uint *)0x0;
        uVar7 = (uint)(*(byte *)(param_3 + 0x364) >> 6);
        local_418 = (uint **)(uVar7 | (uVar7 | (uVar7 | (uVar7 | 4) << 2) << 2) << 2);
        local_424 = (uint *)(uVar11 | 0x36);
        local_41c = (uint **)&local_260;
        local_420 = (uint **)0x108;
        local_428 = local_3f0;
        local_430 = local_3ec;
        iStack_42c = param_3;
        local_414 = (uint **)(param_3 + 0x360);
        param_1 = (uint *)FUN_10082c98(&local_430,0x24);
      }
      if (bVar9) {
        local_424 = (uint *)(*puVar13 | 0x36);
        local_41c = (uint **)&local_260;
        local_418 = (uint **)0x0;
        local_420 = (uint **)local_3e8;
        local_428 = local_3f0;
        local_430 = local_3ec;
        iStack_42c = param_3;
        param_1 = (uint *)FUN_10082c98(&local_430,0x1c);
      }
      break;
    case 0x13:
      local_430 = (uint *)((uint)local_430._1_3_ << 8);
      param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,1,0,param_3,param_7,0);
      local_420 = (uint **)(param_3 + 0x280);
      local_41c = (uint **)(param_3 + 0x330);
      local_424 = (uint *)(*(uint *)(param_3 + 0x3e0) | 0x1a);
      local_418 = (uint **)0x0;
      local_428 = local_3f0;
      local_430 = local_3ec;
      iStack_42c = param_3;
      param_1 = (uint *)FUN_10082c98(&local_430,0x1c);
      break;
    case 0x14:
    case 0x15:
      puVar13 = (uint *)(param_3 + 0x360);
      puVar1 = (uint *)(param_3 + 0x330);
      ppuVar3 = (uint **)(param_3 + 0x280);
      if ((*puVar6 >> 0x10 & 1) != 0) {
        local_430 = (uint *)((uint)local_430._1_3_ << 8);
        param_2 = (uint *)FUN_10080008(param_1,puVar6,0x10000,2,0,param_3,param_7,0);
        local_410 = (uint *)0x0;
        local_424 = (uint *)(*(uint *)(param_3 + 0x3e0) | 0x11);
        local_420 = (uint **)0x101;
        local_428 = local_3f0;
        local_430 = local_3ec;
        iStack_42c = param_3;
        local_41c = ppuVar3;
        local_418 = (uint **)puVar1;
        local_414 = (uint **)puVar13;
        param_1 = (uint *)FUN_10082c98(&local_430,0x24);
      }
      puVar2 = (uint *)(param_3 + 0x3e0);
      if ((*puVar6 >> 0x11 & 1) != 0) {
        local_430 = (uint *)((uint)local_430 & 0xffffff00);
        param_2 = (uint *)FUN_10080008(param_1,puVar6,0x20000,2,1,param_3,param_7,0);
        local_410 = (uint *)0x0;
        local_424 = (uint *)(*puVar2 | 0x11);
        local_420 = (uint **)0x102;
        local_428 = local_3f0;
        local_430 = local_3ec;
        iStack_42c = param_3;
        local_41c = ppuVar3;
        local_418 = (uint **)puVar1;
        local_414 = (uint **)puVar13;
        param_1 = (uint *)FUN_10082c98(&local_430,0x24);
      }
      if ((*puVar6 >> 0x12 & 1) != 0) {
        local_430 = (uint *)((uint)local_430 & 0xffffff00);
        param_2 = (uint *)FUN_10080008(param_1,puVar6,0x40000,2,2,param_3,param_7,0);
        local_410 = (uint *)0x0;
        local_424 = (uint *)(*puVar2 | 0x11);
        local_420 = (uint **)0x104;
        local_428 = local_3f0;
        local_430 = local_3ec;
        iStack_42c = param_3;
        local_41c = ppuVar3;
        local_418 = (uint **)puVar1;
        local_414 = (uint **)puVar13;
        param_1 = (uint *)FUN_10082c98(&local_430,0x24);
      }
      if ((*puVar6 & 0x80000) != 0 && uVar11 == 0x14) {
        local_430 = (uint *)((uint)local_430 & 0xffffff00);
        param_2 = (uint *)FUN_10080008(param_1,puVar6,0x80000,2,3,param_3,param_7,0);
        local_410 = (uint *)0x0;
        local_424 = (uint *)(*puVar2 | 0x11);
        local_420 = (uint **)0x108;
        local_428 = local_3f0;
        local_430 = local_3ec;
        iStack_42c = param_3;
        local_41c = ppuVar3;
        local_418 = (uint **)puVar1;
        local_414 = (uint **)puVar13;
        param_1 = (uint *)FUN_10082c98(&local_430,0x24);
      }
      break;
    case 0x16:
    case 0x17:
    case 0x18:
      local_3e8 = (uint *)(param_3 + 0x360);
      local_3e4 = (uint *)(param_3 + 0x330);
      ppuVar3 = (uint **)(param_3 + 0x280);
      if ((*puVar6 >> 0x10 & 1) != 0) {
        local_430 = (uint *)((uint)local_430._1_3_ << 8);
        param_2 = (uint *)FUN_10080008(param_1,puVar6,0x10000,2,0,param_3,param_7,0);
        local_408 = 0;
        local_410 = (uint *)((*(byte *)(param_3 + 0x364) >> 4 & 3) << 6 |
                             *(byte *)(param_3 + 0x364) & 0x3f | 0x100);
        local_418 = (uint **)((*(byte *)(param_3 + 0x334) >> 4 & 3) << 6 |
                              *(byte *)(param_3 + 0x334) & 0x3f | 0x100);
        local_424 = (uint *)(*(uint *)(param_3 + 0x3e0) | 0x10);
        local_40c = local_3e8;
        local_414 = (uint **)local_3e4;
        local_420 = (uint **)0x101;
        local_428 = local_3f0;
        local_430 = local_3ec;
        iStack_42c = param_3;
        local_41c = ppuVar3;
        param_1 = (uint *)FUN_10082c98(&local_430,0x2c);
      }
      pbVar5 = (byte *)(param_3 + 0x364);
      pbVar4 = (byte *)(param_3 + 0x334);
      puVar13 = (uint *)(param_3 + 0x3e0);
      if ((*puVar6 >> 0x11 & 1) != 0) {
        local_430 = (uint *)((uint)local_430 & 0xffffff00);
        param_2 = (uint *)FUN_10080008(param_1,puVar6,0x20000,2,1,param_3,param_7,0);
        local_408 = 0;
        local_410 = (uint *)((*pbVar5 >> 4 & 3) << 6 | *pbVar5 & 0x3f | 0x100);
        local_418 = (uint **)((*pbVar4 >> 4 & 3) << 6 | *pbVar4 & 0x3f | 0x100);
        local_424 = (uint *)(*puVar13 | 0x10);
        local_40c = local_3e8;
        local_414 = (uint **)local_3e4;
        local_420 = (uint **)0x102;
        local_428 = local_3f0;
        local_430 = local_3ec;
        iStack_42c = param_3;
        local_41c = ppuVar3;
        param_1 = (uint *)FUN_10082c98(&local_430,0x2c);
      }
      if (((*puVar6 >> 0x12 & 1) != 0) && (uVar11 - 0x16 < 2)) {
        local_430 = (uint *)((uint)local_430 & 0xffffff00);
        param_2 = (uint *)FUN_10080008(param_1,puVar6,0x40000,2,2,param_3,param_7,0);
        local_408 = 0;
        local_410 = (uint *)((*pbVar5 >> 4 & 3) << 6 | *pbVar5 & 0x3f | 0x100);
        local_418 = (uint **)((*pbVar4 >> 4 & 3) << 6 | *pbVar4 & 0x3f | 0x100);
        local_424 = (uint *)(*puVar13 | 0x10);
        local_40c = local_3e8;
        local_414 = (uint **)local_3e4;
        local_420 = (uint **)0x104;
        local_428 = local_3f0;
        local_430 = local_3ec;
        iStack_42c = param_3;
        local_41c = ppuVar3;
        param_1 = (uint *)FUN_10082c98(&local_430,0x2c);
      }
      if ((*puVar6 & 0x80000) != 0 && uVar11 == 0x16) {
        local_430 = (uint *)((uint)local_430 & 0xffffff00);
        param_2 = (uint *)FUN_10080008(param_1,puVar6,0x80000,2,3,param_3,param_7,0);
        local_408 = 0;
        local_410 = (uint *)((*pbVar5 >> 4 & 3) << 6 | *pbVar5 & 0x3f | 0x100);
        local_418 = (uint **)((*pbVar4 >> 4 & 3) << 6 | *pbVar4 & 0x3f | 0x100);
        local_424 = (uint *)(*puVar13 | 0x10);
        local_40c = local_3e8;
        local_414 = (uint **)local_3e4;
        local_420 = (uint **)0x108;
        local_428 = local_3f0;
        local_430 = local_3ec;
        iStack_42c = param_3;
        local_41c = ppuVar3;
        param_1 = (uint *)FUN_10082c98(&local_430,0x2c);
      }
      break;
    default:
      if (uVar11 < 0x51) {
        if (uVar11 == 0x4e) {
          uVar7 = *puVar6;
          local_430 = (uint *)((uint)local_430._1_3_ << 8);
          param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,1,0,param_3,param_7,
                                         *(char *)(*(int *)(param_3 + 0x10) + 0x4854) == '\x01');
          local_3c0 = 0;
          local_3bc = 0;
          uStack_3a8 = 0xffffffffffffffff;
          local_3b0 = 0xffffffffffffffff;
          uVar11 = uVar7 & 0x80000;
          if ((uVar7 & 0x50000) == 0) {
            param_1 = param_2;
            if (uVar11 != 0) {
              local_3e0 = *(uint **)(param_3 + 0xa8);
              local_420 = (uint **)(param_3 + 0x280);
              local_430 = (uint *)(param_3 + 0x18);
              local_3d0 = 0x3f800000;
              local_3dc = 0xe4;
              uStack_3cc = 0xffffffff;
              uStack_3c8 = 0xffffffff;
              uStack_3c4 = 0xffffffff;
              local_41c = &local_3e0;
              local_418 = (uint **)0x0;
              local_424 = (uint *)0x108;
              local_428 = 0x36;
              iStack_42c = local_3f0;
              param_1 = (uint *)FUN_100ef6a8(&local_430,0x1c);
            }
          }
          else {
            puVar6 = (uint *)(param_3 + 0x18);
            local_3c0 = FUN_100ee580(puVar6,4,0);
            iVar10 = local_3f0;
            local_3bc = 0xf;
            local_3b0 = 0xffffffffffffffff;
            uStack_3a8 = 0xffffffffffffffff;
            local_420 = (uint **)(param_3 + 0x330);
            local_430 = puVar6;
            if (uVar11 == 0) {
              local_424 = &local_3c0;
              local_41c = (uint **)0x0;
              local_428 = 0x36;
              iStack_42c = local_3f0;
              FUN_100ef6a8(&local_430,0x18);
            }
            else if (((uint)*local_420 & 0x88000000) == 0) {
              local_3e0 = *(uint **)(param_3 + 0xac);
              local_3dc = 0xe4;
              local_3d0 = 0xffffffff;
              uStack_3cc = 0xffffffff;
              uStack_3c8 = 0xffffffff;
              uStack_3c4 = 0;
              local_41c = &local_3e0;
              local_418 = (uint **)0x0;
              local_424 = &local_3c0;
              local_428 = 1;
              iStack_42c = local_3f0;
              FUN_100ef6a8(&local_430,0x1c);
            }
            else {
              local_3d0 = 0;
              local_3e0 = *(uint **)(param_3 + 0xa8);
              uStack_3cc = 0xffffffff;
              uStack_3c8 = 0xffffffff;
              local_418 = (uint **)0x0;
              iStack_42c = local_3f0;
              local_3dc = 0xe4;
              uStack_3c4 = 0xffffffff;
              local_428 = 0x36;
              local_424 = (uint *)0x107;
              local_41c = local_420;
              local_420 = (uint **)&local_3c0;
              FUN_100ef6a8(&local_430,0x1c);
              local_41c = &local_3e0;
              local_418 = (uint **)0x0;
              local_420 = (uint **)&local_3c0;
              local_428 = 0x36;
              local_424 = (uint *)0x108;
              iStack_42c = iVar10;
              local_430 = puVar6;
              FUN_100ef6a8(&local_430,0x1c);
            }
            if ((uVar7 >> 0x10 & 1) != 0) {
              local_418 = (uint **)&local_3c0;
              local_414 = (uint **)0x0;
              local_41c = (uint **)0x100;
              local_420 = (uint **)&local_3c0;
              local_424 = (uint *)0x101;
              local_428 = 0x41;
              iStack_42c = local_3f0;
              local_430 = puVar6;
              FUN_100ef6a8(&local_430,0x20);
            }
            local_41c = (uint **)(param_3 + 0x280);
            local_420 = (uint **)(*(byte *)(param_3 + 0x284) & 0xd | 0x100);
            local_424 = (uint *)(*(uint *)(param_3 + 0x3e0) | 0x19);
            local_414 = (uint **)&local_3c0;
            local_410 = (uint *)0x0;
            local_418 = (uint **)0x1e4;
            local_428 = local_3f0;
            local_430 = local_3ec;
            iStack_42c = param_3;
            param_1 = (uint *)FUN_10082c98(&local_430,0x24);
          }
          if ((uVar7 >> 0x11 & 1) != 0) {
            puVar6 = (uint *)(param_3 + 0x18);
            if (local_3c0 == 0) {
              local_3c0 = FUN_100ee580(puVar6,4,0);
              local_3bc = 0xf;
              local_3b0 = 0xffffffffffffffff;
              uStack_3a8 = 0xffffffffffffffff;
            }
            iVar10 = local_3f0;
            local_3e0 = *(uint **)(param_3 + 0xac);
            local_3dc = 0xe4;
            uStack_21c = CONCAT31(uStack_21c._1_3_,0xe4);
            uStack_3c8 = 0x7fffffff;
            uStack_3c4 = 0x7fffffff;
            local_3d0 = 0x7fffffff;
            uStack_3cc = 0x7fffffff;
            local_418 = &local_3e0;
            local_414 = (uint **)0x0;
            local_420 = (uint **)&local_3c0;
            local_428 = 1;
            local_424 = (uint *)0x102;
            iStack_42c = local_3f0;
            uStack_208 = 0x7f8000007f800000;
            local_210 = 0x7f8000007f800000;
            local_430 = puVar6;
            local_41c = (uint **)(param_3 + 0x330);
            local_220 = local_3e0;
            FUN_100ef6a8(&local_430,0x20);
            local_414 = &local_220;
            local_410 = (uint *)0x0;
            local_418 = (uint **)&local_3c0;
            local_420 = (uint **)&local_3c0;
            iStack_42c = iVar10;
            local_41c = (uint **)0x155;
            local_428 = 0x27;
            local_424 = (uint *)0x102;
            local_430 = puVar6;
            FUN_100ef6a8(&local_430,0x24);
            local_414 = (uint **)&local_3c0;
            local_410 = (uint *)0x0;
            local_418 = (uint **)0x155;
            local_420 = (uint **)&local_3c0;
            local_428 = 1;
            local_424 = (uint *)0x102;
            iStack_42c = iVar10;
            local_430 = puVar6;
            local_41c = (uint **)(param_3 + 0x330);
            FUN_100ef6a8(&local_430,0x24);
            local_418 = (uint **)&local_3c0;
            local_414 = (uint **)0x0;
            local_420 = (uint **)(param_3 + 0x280);
            local_41c = (uint **)0x155;
            local_428 = 0x1a;
            local_424 = (uint *)0x102;
            iStack_42c = iVar10;
            local_430 = puVar6;
            param_1 = (uint *)FUN_100ef6a8(&local_430,0x20);
          }
        }
        else if (uVar11 == 0x4f) {
          local_430 = (uint *)CONCAT31(local_430._1_3_,1);
          param_2 = (uint *)FUN_10080008(param_1,puVar6,0xf0000,1,0,param_3,param_7,1);
          puVar6 = (uint *)(param_3 + 0x18);
          local_380 = FUN_100ee580(puVar6,4,0);
          iVar10 = local_3f0;
          local_37c = 0xf;
          local_1a0 = *(undefined4 *)(param_3 + 0xa8);
          local_184 = 0xffffffff;
          uStack_368 = 0xffffffffffffffff;
          local_370 = 0xffffffffffffffff;
          uStack_90 = 0xffffffff00000017;
          uStack_88 = 0xffffffffffffffff;
          local_240 = *(uint *)(param_3 + 0xac);
          local_170 = 0x7fffff00000000;
          local_168 = 0xffffff00;
          uStack_70 = 0xffffffff3f800000;
          uStack_68 = 0xffffffffffffffff;
          uStack_50 = 0xffffffffffffff81;
          uStack_48 = 0xffffffffffffffff;
          local_420 = (uint **)(param_3 + 0x330);
          local_41c = (uint **)0x0;
          local_424 = &local_380;
          local_428 = 0x36;
          local_19c = 0xe4;
          local_190 = 0;
          uStack_18c = 0xffffffffffffffff;
          local_9c = 0xe4;
          local_17c = 0xe4;
          local_164 = 0x3f800000;
          local_7c = 0xe4;
          local_5c = 0xe4;
          local_23c = 0xe4;
          uStack_230 = 0xff7fffff;
          uStack_22c = 0x3f800000;
          uStack_228 = 0xff7fffff;
          uStack_224 = 0x3f800000;
          iStack_42c = local_3f0;
          local_430 = puVar6;
          local_180 = local_240;
          local_a0 = local_1a0;
          local_80 = local_1a0;
          local_60 = local_1a0;
          FUN_100ef6a8(&local_430,0x18);
          local_414 = (uint **)&local_1a0;
          local_410 = (uint *)0x0;
          local_418 = (uint **)&local_380;
          local_420 = (uint **)&local_380;
          iStack_42c = iVar10;
          local_41c = (uint **)0x1ff;
          local_424 = (uint *)0x108;
          local_428 = 0x39;
          local_430 = puVar6;
          FUN_100ef6a8(&local_430,0x24);
          local_414 = (uint **)&local_a0;
          iStack_42c = iVar10;
          local_410 = (uint *)0x0;
          local_418 = (uint **)&local_380;
          local_420 = (uint **)&local_380;
          local_41c = (uint **)0x100;
          local_428 = 0x55;
          local_424 = (uint *)0x101;
          local_430 = puVar6;
          FUN_100ef6a8(&local_430,0x24);
          local_418 = (uint **)&local_380;
          iStack_42c = iVar10;
          local_414 = (uint **)0x0;
          local_41c = (uint **)0x1aa;
          local_420 = (uint **)&local_380;
          local_424 = (uint *)0x104;
          local_428 = 0x2f;
          local_430 = puVar6;
          FUN_100ef6a8(&local_430,0x20);
          local_414 = (uint **)&local_180;
          iStack_42c = iVar10;
          local_410 = (uint *)0x0;
          local_418 = (uint **)&local_380;
          local_420 = (uint **)&local_380;
          local_41c = (uint **)0x1e4;
          local_424 = (uint *)0x10e;
          local_428 = 1;
          local_430 = puVar6;
          FUN_100ef6a8(&local_430,0x24);
          local_414 = (uint **)&local_80;
          iStack_42c = iVar10;
          local_410 = (uint *)0x0;
          local_418 = (uint **)&local_380;
          local_41c = (uint **)0x155;
          local_420 = (uint **)&local_380;
          local_424 = (uint *)0x102;
          local_428 = 0x3c;
          local_430 = puVar6;
          FUN_100ef6a8(&local_430,0x24);
          local_414 = (uint **)&local_60;
          iStack_42c = iVar10;
          local_410 = (uint *)0x0;
          local_418 = (uint **)&local_380;
          local_420 = (uint **)&local_380;
          local_41c = (uint **)0x100;
          local_428 = 0x1e;
          local_424 = (uint *)0x101;
          local_430 = puVar6;
          FUN_100ef6a8(&local_430,0x24);
          local_418 = (uint **)&local_380;
          iStack_42c = iVar10;
          local_414 = (uint **)0x0;
          local_420 = (uint **)&local_380;
          local_41c = (uint **)0x100;
          local_428 = 0x2b;
          local_424 = (uint *)0x101;
          local_430 = puVar6;
          FUN_100ef6a8(&local_430,0x20);
          local_420 = (uint **)(param_3 + 0x280);
          local_41c = (uint **)0x1ff;
          local_424 = (uint *)(*(uint *)(param_3 + 0x3e0) | 0x37);
          local_40c = &local_240;
          local_428 = iVar10;
          local_408 = 0;
          local_410 = &local_380;
          local_418 = (uint **)&local_380;
          local_414 = (uint **)0x1e4;
          local_430 = local_3ec;
          iStack_42c = param_3;
          param_1 = (uint *)FUN_10082c98(&local_430,0x2c);
        }
      }
      else if (uVar11 < 0x52) {
        param_2 = puVar13 + 6;
      }
      else if (uVar11 == 0xfffe) {
        param_2 = puVar6 + (*puVar13 >> 0x10);
      }
      else if (uVar11 == 0xffff) {
        return;
      }
    }
  } while( true );
}

