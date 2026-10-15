/*
 * FUN_180077660 at 180077660
 * undefined FUN_180077660(void)
 * Address ranges: 180077660-180078e7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180077660(undefined8 param_1,uint *param_2,longlong param_3,undefined8 param_4)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  uint *puVar13;
  undefined8 extraout_x1;
  undefined8 uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  undefined4 uVar20;
  uint extraout_w14;
  undefined4 *extraout_x14;
  uint *in_stack_fffffffffffffb80;
  uint7 uVar21;
  char local_450 [8];
  uint *local_448;
  undefined4 local_440;
  undefined1 local_43c;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  uint local_420;
  uint local_410;
  undefined1 local_40c;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined4 local_3f0;
  undefined1 local_3ec;
  undefined8 uStack_3d8;
  uint local_3d0;
  undefined1 local_3cc;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  uint *local_3b0;
  uint local_3a0;
  undefined1 local_39c;
  undefined8 local_390;
  undefined8 uStack_388;
  byte *local_380;
  undefined4 local_370;
  undefined1 local_36c;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined4 local_330;
  undefined1 local_32c;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined4 local_310;
  undefined1 local_30c;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  undefined1 local_2ec;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
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
  undefined4 local_290;
  undefined1 local_28c;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined1 local_26c;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined1 local_22c;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined1 local_20c;
  undefined4 local_200;
  undefined8 uStack_1fc;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  undefined1 local_1ec;
  undefined4 local_1e0;
  undefined8 uStack_1dc;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined1 local_1cc;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined4 local_1a0;
  undefined8 uStack_19c;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined1 local_18c;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 local_16c;
  undefined8 local_160;
  undefined8 uStack_158;
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
  undefined4 local_f0;
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
  
  local_450[0] = '\0';
  local_448 = (uint *)(param_3 + 800);
  puVar1 = (uint *)(param_3 + 0x3d0);
  puVar2 = (uint *)(param_3 + 0x400);
  do {
    puVar15 = local_448;
    *(undefined4 *)(param_3 + 0x484) = 0xffffffff;
    *local_448 = 0;
    puVar11 = (uint *)FUN_180070150(param_1,param_2,param_3,param_4,local_450);
    if (puVar11 != param_2) {
      uVar19 = *(uint *)(param_3 + 0x484);
      if (uVar19 != 0xffffffff) {
        local_440 = *(undefined4 *)(param_3 + 0x2c4);
        local_43c = (undefined1)(uVar19 >> 0x10);
        uStack_428 = 0xffffffff;
        uStack_424 = 0xffffffff;
        local_430 = 0xffffffff;
        uStack_42c = 0xffffffff;
        bVar8 = (uVar19 & 0xf000000) == 0xd000000;
        lVar3 = 0x380;
        if (bVar8) {
          lVar3 = 0x3b0;
        }
        lVar4 = 0x3b0;
        if (bVar8) {
          lVar4 = 0x380;
        }
        FUN_1800f58b8(param_3 + 0x20,param_4,0x37,param_3 + 0x350,&local_440,lVar4 + param_3,
                      lVar3 + param_3,0);
        FUN_1800f4370(param_3 + 0x20,*(undefined4 *)(param_3 + 800));
        *puVar15 = 0;
      }
      goto LAB_180078e54;
    }
    puVar16 = param_2 + 1;
    uVar19 = *param_2 & 0xffff;
    uVar21 = (uint7)((ulonglong)in_stack_fffffffffffffb80 >> 8);
    puVar13 = puVar16;
    local_420 = uVar19;
    puVar17 = puVar1;
    switch(uVar19) {
    case 0:
      puVar13 = param_2 + 2;
      break;
    case 1:
      *(undefined4 *)(param_3 + 0x484) = 0;
      in_stack_fffffffffffffb80 = (uint *)((ulonglong)uVar21 << 8);
      puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,1,0,param_3,param_4,0,
                                      in_stack_fffffffffffffb80);
      iVar10 = *(int *)(param_3 + 0x484);
      if ((iVar10 == -1) || (iVar10 == 0)) {
        uVar19 = 0x1b;
        if (*local_448 != *(uint *)(param_3 + 0x238)) {
          uVar19 = 0x36;
        }
        FUN_1800796a8(param_1,param_3,param_4,uVar19 | *(uint *)(param_3 + 0x480),local_448,puVar1,0
                     );
      }
      else {
        local_440 = *(undefined4 *)(param_3 + 0x2c4);
        uStack_428 = 0xffffffff;
        uStack_424 = 0xffffffff;
        local_430 = 0xffffffff;
        uStack_42c = 0xffffffff;
        local_43c = (undefined1)((uint)iVar10 >> 0x10);
        uVar12 = FUN_1800f5ea8(0xe4,*(undefined1 *)(param_3 + 0x324));
        if ((extraout_w14 & 0xf000000) == 0xd000000) {
          in_stack_fffffffffffffb80 = puVar1;
          FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x37,puVar15,&local_440
                        ,uVar12 & 0xff | 0x100,puVar15,puVar1,0);
        }
        else {
          FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x37,puVar15,&local_440
                        ,puVar1,uVar12 & 0xff | 0x100,puVar15,0);
          in_stack_fffffffffffffb80 = puVar15;
        }
      }
      *(undefined4 *)(param_3 + 0x484) = 0xffffffff;
      break;
    case 2:
      in_stack_fffffffffffffb80 = (uint *)((ulonglong)uVar21 << 8);
      puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,2,0,param_3,param_4,0,
                                      in_stack_fffffffffffffb80);
      uVar19 = *(uint *)(param_3 + 0x480);
      goto LAB_1800778d4;
    case 3:
    case 0x12:
      break;
    case 4:
      puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,3,0,param_3,param_4,0,
                                      (ulonglong)uVar21 << 8);
      in_stack_fffffffffffffb80 = (uint *)0x0;
      FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x32,puVar15,puVar1,puVar2,
                    param_3 + 0x430,0);
      break;
    case 5:
      in_stack_fffffffffffffb80 = (uint *)((ulonglong)uVar21 << 8);
      puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,2,0,param_3,param_4,0,
                                      in_stack_fffffffffffffb80);
      uVar19 = *(uint *)(param_3 + 0x480) | 0x38;
      goto LAB_1800778d4;
    case 6:
      puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,1,0,param_3,param_4,1,
                                      (ulonglong)uVar21 << 8);
      local_370 = FUN_1800f42d0(param_3 + 0x20,4,0);
      local_36c = 2;
      uStack_358 = 0xffffffffffffffff;
      local_360 = 0xffffffffffffffff;
      iVar10 = func_0x000180213038(*(undefined4 *)(param_3 + 0x20));
      if (iVar10 == 0x40) {
        local_440 = *(undefined4 *)(param_3 + 0xbc);
        local_430 = 0x3f800000;
        uStack_42c = 0x3f800000;
        uStack_428 = 0x3f800000;
        uStack_424 = 0x3f800000;
        local_43c = 0xe4;
        FUN_1800f58b8(param_3 + 0x20,param_4,0xe,&local_370,&local_440,puVar1,0);
      }
      else {
        FUN_1800f58b8(param_3 + 0x20,param_4,0x81,&local_370,puVar1,0);
      }
      local_170 = *(undefined4 *)(param_3 + 0xb8);
      local_2f0 = *(undefined4 *)(param_3 + 0xbc);
      local_2e0 = 0x7cf0bdc2;
      uStack_2dc = 0x7cf0bdc2;
      local_2d8 = 0x7cf0bdc2;
      uStack_2d4 = 0x7cf0bdc2;
      local_160 = 0xffffffff7fffffff;
      uStack_158 = 0xffffffffffffffff;
      local_16c = 0xe4;
      local_140 = 0xffffffff7f800000;
      uStack_138 = 0xffffffffffffffff;
      local_14c = 0xe4;
      local_2ec = 0xe4;
      local_150 = local_170;
      FUN_1800f58b8(param_3 + 0x20,param_4,1,0x101,&local_370,0x155,&local_370,&local_170,0);
      FUN_1800f58b8(param_3 + 0x20,param_4,0x20,0x101,&local_370,0x100,&local_370,&local_150,0);
      in_stack_fffffffffffffb80 = (uint *)0x155;
      FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x37,local_448,0x100,
                    &local_370,&local_2f0,0x155,&local_370,0);
      break;
    case 7:
      puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,1,0,param_3,param_4,1,
                                      CONCAT71(uVar21,1));
      local_330 = FUN_1800f42d0(param_3 + 0x20,4,0);
      local_32c = 2;
      uStack_318 = 0xffffffffffffffff;
      local_320 = 0xffffffffffffffff;
      FUN_1800f58b8(param_3 + 0x20,param_4,0x44,&local_330,puVar1,0);
      local_130 = *(undefined4 *)(param_3 + 0xb8);
      local_2d0 = *(undefined4 *)(param_3 + 0xbc);
      local_12c = 0xe4;
      local_2cc = 0xe4;
      local_2c0 = 0x7cf0bdc2;
      uStack_2bc = 0x7cf0bdc2;
      local_120 = 0xffffffff7f800000;
      uStack_118 = 0xffffffffffffffff;
      local_2b8 = 0x7cf0bdc2;
      uStack_2b4 = 0x7cf0bdc2;
      FUN_1800f58b8(param_3 + 0x20,param_4,0x20,0x101,&local_330,0x155,&local_330,&local_130,0);
      in_stack_fffffffffffffb80 = (uint *)0x155;
      FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x37,puVar15,0x100,
                    &local_330,&local_2d0,0x155,&local_330,0);
      break;
    case 8:
      puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,2,0,param_3,param_4,0,
                                      (ulonglong)uVar21 << 8);
      in_stack_fffffffffffffb80 = puVar2;
      FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x10,puVar15,
                    (*(byte *)(param_3 + 0x3d4) >> 4 & 3) << 6 | *(byte *)(param_3 + 0x3d4) & 0x3f |
                    0x100,puVar1,
                    (*(byte *)(param_3 + 0x404) >> 4 & 3) << 6 | *(byte *)(param_3 + 0x404) & 0x3f |
                    0x100,puVar2,0);
      break;
    case 9:
      in_stack_fffffffffffffb80 = (uint *)((ulonglong)uVar21 << 8);
      puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,2,0,param_3,param_4,0,
                                      in_stack_fffffffffffffb80);
      uVar19 = 0x11;
      goto LAB_180077cb8;
    case 10:
      in_stack_fffffffffffffb80 = (uint *)((ulonglong)uVar21 << 8);
      puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,2,0,param_3,param_4,0,
                                      in_stack_fffffffffffffb80);
      uVar19 = 0x33;
      goto LAB_180077cb8;
    case 0xb:
      in_stack_fffffffffffffb80 = (uint *)((ulonglong)uVar21 << 8);
      puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,2,0,param_3,param_4,0,
                                      in_stack_fffffffffffffb80);
      uVar19 = 0x34;
LAB_180077cb8:
      uVar19 = *(uint *)(param_3 + 0x480) | uVar19;
LAB_1800778d4:
      FUN_1800796a8(param_1,param_3,param_4,uVar19,puVar15,puVar1,puVar2,0);
      break;
    case 0xc:
    case 0xd:
      in_stack_fffffffffffffb80 = (uint *)((ulonglong)uVar21 << 8);
      puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,2,0,param_3,param_4,0,
                                      in_stack_fffffffffffffb80);
      uVar7 = *(undefined1 *)(param_3 + 0x324);
      local_110 = FUN_1800f42d0(param_3 + 0x20,4,0);
      local_10c = uVar7;
      local_2b0 = *(uint *)(param_3 + 0xbc);
      uStack_f8 = 0xffffffffffffffff;
      local_100 = 0xffffffffffffffff;
      local_2ac = 0xe4;
      uVar20 = 0x1d;
      if (uVar19 != 0xd) {
        uVar20 = 0x31;
      }
      local_2a0 = 0x3f800000;
      uStack_29c = 0x3f800000;
      local_298 = 0x3f800000;
      uStack_294 = 0x3f800000;
      FUN_1800f58b8(param_3 + 0x20,param_4,uVar20,&local_110,puVar1,puVar2,0);
      bVar9 = FUN_1800f5ea8(0xe4,*(undefined1 *)(param_3 + 0x324));
      puVar11 = &local_2b0;
      puVar16 = (uint *)((ulonglong)bVar9 | 0x100);
      puVar18 = &local_110;
      uVar14 = 1;
LAB_180078dc0:
      FUN_1800f58b8(param_3 + 0x20,param_4,uVar14,puVar15,puVar16,puVar18,puVar11,0,
                    in_stack_fffffffffffffb80);
      break;
    case 0xe:
      in_stack_fffffffffffffb80 = (uint *)((ulonglong)uVar21 << 8);
      puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,1,0,param_3,param_4,
                                      *(char *)(*(longlong *)(param_3 + 0x10) + 0x4a6c) == '\x01',
                                      in_stack_fffffffffffffb80);
      uVar19 = 0x19;
      goto LAB_180077e20;
    case 0xf:
      puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,1,0,param_3,param_4,1,
                                      CONCAT71(uVar21,1));
      local_310 = FUN_1800f42d0(param_3 + 0x20,4,0);
      local_30c = 2;
      uStack_2f8 = 0xffffffffffffffff;
      local_300 = 0xffffffffffffffff;
      FUN_1800f58b8(param_3 + 0x20,param_4,0x2f,&local_310,puVar1,0);
      local_f0 = *(undefined4 *)(param_3 + 0xb8);
      local_290 = *(undefined4 *)(param_3 + 0xbc);
      local_ec = 0xe4;
      local_28c = 0xe4;
      local_280 = 0xfcf0bdc2;
      uStack_27c = 0xfcf0bdc2;
      local_e0 = 0xffffffffff800000;
      uStack_d8 = 0xffffffffffffffff;
      local_278 = 0xfcf0bdc2;
      uStack_274 = 0xfcf0bdc2;
      FUN_1800f58b8(param_3 + 0x20,param_4,0x20,0x101,&local_310,0x155,&local_310,&local_f0,0);
      in_stack_fffffffffffffb80 = (uint *)0x155;
      FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x37,puVar15,0x100,
                    &local_310,&local_290,0x155,&local_310,0);
      break;
    case 0x10:
      puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,1,0,param_3,param_4,0,
                                      (ulonglong)uVar21 << 8);
      local_3a0 = FUN_1800f42d0(param_3 + 0x20,4,1);
      uVar14 = 0xffffffffffffffff;
      local_39c = 0xf;
      uStack_388 = 0xffffffffffffffff;
      local_390 = 0xffffffffffffffff;
      local_3f0 = FUN_1800f42d0(param_3 + 0x20,extraout_x1,0);
      local_210 = *(undefined4 *)(param_3 + 0xb8);
      local_230 = *(undefined4 *)(param_3 + 0xbc);
      local_3ec = 3;
      local_200 = 0x42fffe01;
      local_22c = 0xe4;
      local_1e0 = 0xc2fffe01;
      local_220 = 0;
      uStack_218 = 0;
      local_20c = 0xe4;
      uStack_1fc = 0xffffffffffffffff;
      local_1f4 = 0xffffffff;
      local_1ec = 0xe4;
      uStack_1dc = 0xffffffffffffffff;
      local_1d4 = 0xffffffff;
      local_1cc = 0xe4;
      local_1c0 = 0;
      local_1b8 = 0x3f800000;
      uStack_1b4 = 0x3f800000;
      uStack_3d8 = uVar14;
      uStack_1f0 = local_210;
      uStack_1d0 = local_230;
      FUN_1800f58b8(param_3 + 0x20,param_4,0x36,&local_3a0,puVar1,0);
      FUN_1800f58b8(param_3 + 0x20,param_4,0x1d,&local_3f0,0x1e4,&local_3a0,&local_230,0);
      FUN_1800f58b8(param_3 + 0x20,param_4,0x39,0x10c,&local_3f0,0x140,&local_3a0,&local_230,0);
      FUN_1800f58b8(param_3 + 0x20,param_4,1,&local_3f0,0x154,&local_3f0,0x1fe,&local_3f0,0);
      FUN_1800f58b8(param_3 + 0x20,param_4,0x33,0x108,&local_3f0,0x1ff,&local_3a0,&local_210,0);
      FUN_1800f58b8(param_3 + 0x20,param_4,0x34,0x108,&local_3f0,0x1ff,&local_3f0,&uStack_1f0,0);
      FUN_1800f58b8(param_3 + 0x20,param_4,0x2f,0x104,&local_3f0,0x155,&local_3a0,0);
      FUN_1800f58b8(param_3 + 0x20,param_4,0x38,0x104,&local_3f0,0x1aa,&local_3f0,0x1ff,&local_3f0,0
                   );
      FUN_1800f58b8(param_3 + 0x20,param_4,0x19,0x104,&local_3f0,0x1aa,&local_3f0,0);
      FUN_1800f58b8(param_3 + 0x20,param_4,0x36,0x10c,&local_3a0,&uStack_1d0,0);
      FUN_1800f58b8(param_3 + 0x20,param_4,1,0x102,&local_3a0,0x155,&local_3f0,0x1aa,&local_3f0,0);
      in_stack_fffffffffffffb80 = &local_3a0;
      FUN_1800f58b8(param_3 + 0x20,param_4,1,0x103,&local_3a0,0x100,&local_3f0,0x154,
                    in_stack_fffffffffffffb80,0);
      FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x36,puVar15,0x1d3,
                    &local_3a0,0);
      FUN_1800f4370(param_3 + 0x20,local_3a0);
      break;
    case 0x11:
      in_stack_fffffffffffffb80 = (uint *)((ulonglong)uVar21 << 8);
      puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,2,0,param_3,param_4,0,
                                      in_stack_fffffffffffffb80);
      uVar19 = *puVar15;
      if ((((uVar19 >> 0x1e & 1) == 0) && (uVar19 != *puVar1)) && (uVar19 != *puVar2)) {
        local_250 = *(undefined8 *)puVar15;
        uStack_238 = *(undefined8 *)(puVar15 + 6);
        uStack_240 = *(undefined8 *)(puVar15 + 4);
        bVar8 = false;
        uStack_248 = *(undefined8 *)(puVar15 + 2);
      }
      else {
        bVar8 = true;
        local_350 = FUN_1800f42d0(param_3 + 0x20,4,0);
        uStack_240 = 0xffffffffffffffff;
        uStack_238 = 0xffffffffffffffff;
        uStack_34c = CONCAT31(uStack_34c._1_3_,0xe4);
        local_250 = CONCAT44(uStack_34c,local_350);
        uStack_248 = uStack_348;
      }
      if ((param_2[1] >> 0x10 & 1) != 0) {
        local_440 = *(undefined4 *)(param_3 + 0xb8);
        local_430 = 0x3f800000;
        local_43c = 0xe4;
        uStack_42c = 0xffffffff;
        uStack_428 = 0xffffffff;
        uStack_424 = 0xffffffff;
        FUN_1800f58b8(param_3 + 0x20,param_4,0x36,0x101,&local_250,&local_440,0);
      }
      if ((param_2[1] >> 0x11 & 1) != 0) {
        if (bVar8) {
          uVar19 = 0;
        }
        else {
          uVar19 = *(uint *)(param_3 + 0x480);
        }
        uVar5 = *(byte *)(param_3 + 0x404) >> 2 & 3;
        uVar6 = *(byte *)(param_3 + 0x3d4) >> 2 & 3;
        in_stack_fffffffffffffb80 =
             (uint *)((ulonglong)(uVar5 | (uVar5 | (uVar5 | 4) << 2) << 2) << 2 | (ulonglong)uVar5);
        FUN_1800796a8(param_1,param_3,param_4,uVar19 | 0x38,0x102,&local_250,
                      (uVar6 | (uVar6 | (uVar6 | 4) << 2) << 2) << 2 | uVar6,puVar1,
                      in_stack_fffffffffffffb80,puVar2,0);
      }
      if ((param_2[1] >> 0x12 & 1) != 0) {
        if (bVar8) {
          uVar19 = 0;
        }
        else {
          uVar19 = *(uint *)(param_3 + 0x480);
        }
        in_stack_fffffffffffffb80 = (uint *)0x0;
        uVar5 = *(byte *)(param_3 + 0x3d4) >> 4 & 3;
        FUN_1800796a8(param_1,param_3,param_4,uVar19 | 0x36,0x104,&local_250,
                      (uVar5 | (uVar5 | (uVar5 | 4) << 2) << 2) << 2 | uVar5,puVar1,0);
      }
      if ((param_2[1] >> 0x13 & 1) != 0) {
        if (bVar8) {
          uVar19 = 0;
        }
        else {
          uVar19 = *(uint *)(param_3 + 0x480);
        }
        in_stack_fffffffffffffb80 = (uint *)0x0;
        uVar5 = (uint)(*(byte *)(param_3 + 0x404) >> 6);
        FUN_1800796a8(param_1,param_3,param_4,uVar19 | 0x36,0x108,&local_250,
                      (uVar5 | (uVar5 | (uVar5 | 4) << 2) << 2) << 2 | uVar5,puVar2,0);
      }
      if (bVar8) {
        uVar19 = 0x36;
        puVar15 = local_448;
        puVar17 = (uint *)&local_250;
        goto LAB_180077e20;
      }
      break;
    case 0x13:
      in_stack_fffffffffffffb80 = (uint *)((ulonglong)uVar21 << 8);
      puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,1,0,param_3,param_4,0,
                                      in_stack_fffffffffffffb80);
      uVar19 = 0x1a;
LAB_180077e20:
      FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | uVar19,puVar15,puVar17,0);
      break;
    case 0x14:
    case 0x15:
      if ((param_2[1] >> 0x10 & 1) != 0) {
        puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0x10000,2,0,param_3,param_4,0,
                                        (ulonglong)uVar21 << 8);
        in_stack_fffffffffffffb80 = (uint *)0x0;
        puVar11 = (uint *)FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x11,
                                        0x101,puVar15,puVar1,puVar2,0);
      }
      if ((param_2[1] >> 0x11 & 1) != 0) {
        puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0x20000,2,1,param_3,param_4,0,
                                        (ulonglong)in_stack_fffffffffffffb80 & 0xffffffffffffff00);
        in_stack_fffffffffffffb80 = (uint *)0x0;
        puVar11 = (uint *)FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x11,
                                        0x102,local_448,puVar1,puVar2,0);
      }
      if ((param_2[1] >> 0x12 & 1) != 0) {
        puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0x40000,2,2,param_3,param_4,0,
                                        (ulonglong)in_stack_fffffffffffffb80 & 0xffffffffffffff00);
        in_stack_fffffffffffffb80 = (uint *)0x0;
        puVar11 = (uint *)FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x11,
                                        0x104,local_448,puVar1,puVar2,0);
      }
      if (((param_2[1] >> 0x13 & 1) != 0) && (local_420 == 0x14)) {
        puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0x80000,2,3,param_3,param_4,0,
                                        (ulonglong)in_stack_fffffffffffffb80 & 0xffffffffffffff00);
        in_stack_fffffffffffffb80 = (uint *)0x0;
        FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x11,0x108,local_448,
                      puVar1,puVar2,0);
      }
      break;
    case 0x16:
    case 0x17:
    case 0x18:
      local_3b0 = puVar16;
      if ((param_2[1] >> 0x10 & 1) != 0) {
        puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0x10000,2,0,param_3,param_4,0,
                                        (ulonglong)uVar21 << 8);
        in_stack_fffffffffffffb80 =
             (uint *)((ulonglong)((*(byte *)(param_3 + 0x404) >> 4 & 3) << 6) |
                      (ulonglong)*(byte *)(param_3 + 0x404) & 0x3f | 0x100);
        puVar11 = (uint *)FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x10,
                                        0x101,puVar15,
                                        (*(byte *)(param_3 + 0x3d4) >> 4 & 3) << 6 |
                                        *(byte *)(param_3 + 0x3d4) & 0x3f | 0x100,puVar1,
                                        in_stack_fffffffffffffb80,puVar2,0);
      }
      if ((param_2[1] >> 0x11 & 1) != 0) {
        puVar13 = (uint *)FUN_180077158(puVar11,local_3b0,0x20000,2,1,param_3,param_4,0,
                                        (ulonglong)in_stack_fffffffffffffb80 & 0xffffffffffffff00);
        in_stack_fffffffffffffb80 =
             (uint *)((ulonglong)((*(byte *)(param_3 + 0x404) >> 4 & 3) << 6) |
                      (ulonglong)*(byte *)(param_3 + 0x404) & 0x3f | 0x100);
        puVar11 = (uint *)FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x10,
                                        0x102,local_448,
                                        (*(byte *)(param_3 + 0x3d4) >> 4 & 3) << 6 |
                                        *(byte *)(param_3 + 0x3d4) & 0x3f | 0x100,puVar1,
                                        in_stack_fffffffffffffb80,puVar2,0);
      }
      if (((param_2[1] >> 0x12 & 1) != 0) &&
         ((local_420 == 0x17 || (local_380 = (byte *)(param_3 + 0x404), local_420 == 0x16)))) {
        local_380 = (byte *)(param_3 + 0x404);
        puVar13 = (uint *)FUN_180077158(puVar11,local_3b0,0x40000,2,2,param_3,param_4,0,
                                        (ulonglong)in_stack_fffffffffffffb80 & 0xffffffffffffff00);
        in_stack_fffffffffffffb80 =
             (uint *)((ulonglong)((*local_380 >> 4 & 3) << 6) | (ulonglong)*local_380 & 0x3f | 0x100
                     );
        puVar11 = (uint *)FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x10,
                                        0x104,local_448,
                                        (*(byte *)(param_3 + 0x3d4) >> 4 & 3) << 6 |
                                        *(byte *)(param_3 + 0x3d4) & 0x3f | 0x100,puVar1,
                                        in_stack_fffffffffffffb80,puVar2,0);
      }
      if (((param_2[1] >> 0x13 & 1) != 0) && (local_420 == 0x16)) {
        puVar13 = (uint *)FUN_180077158(puVar11,local_3b0,0x80000,2,3,param_3,param_4,0,
                                        (ulonglong)in_stack_fffffffffffffb80 & 0xffffffffffffff00);
        in_stack_fffffffffffffb80 =
             (uint *)((ulonglong)((*(byte *)(param_3 + 0x404) >> 4 & 3) << 6) |
                      (ulonglong)*(byte *)(param_3 + 0x404) & 0x3f | 0x100);
        FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x10,0x108,local_448,
                      (*(byte *)(param_3 + 0x3d4) >> 4 & 3) << 6 | *(byte *)(param_3 + 0x3d4) & 0x3f
                      | 0x100,puVar1,in_stack_fffffffffffffb80,puVar2,0);
      }
      break;
    default:
      if (uVar19 == 0x4e) {
        in_stack_fffffffffffffb80 = (uint *)((ulonglong)uVar21 << 8);
        uVar5 = param_2[1];
        puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,1,0,param_3,param_4,
                                        *(char *)(*(longlong *)(param_3 + 0x10) + 0x4a6c) == '\x01',
                                        in_stack_fffffffffffffb80);
        local_410 = 0;
        local_40c = 0;
        uStack_3f8 = 0xffffffffffffffff;
        local_400 = 0xffffffffffffffff;
        uVar19 = uVar5 & 0x80000;
        if ((uVar5 & 0x50000) == 0) {
          if (uVar19 != 0) {
            local_440 = *(undefined4 *)(param_3 + 0xb8);
            local_430 = 0x3f800000;
            uStack_424 = 0xffffffff;
            local_43c = 0xe4;
            uStack_42c = 0xffffffff;
            uStack_428 = 0xffffffff;
            FUN_1800f58b8(param_3 + 0x20,param_4,0x36,0x108,puVar15,&local_440,0);
          }
        }
        else {
          local_410 = FUN_1800f42d0(param_3 + 0x20,4,0);
          local_40c = 0xf;
          local_400 = 0xffffffffffffffff;
          uStack_3f8 = 0xffffffffffffffff;
          if (uVar19 == 0) {
            FUN_1800f58b8(param_3 + 0x20,param_4,0x36,&local_410,puVar1,0);
          }
          else {
            if ((*puVar1 & 0x88000000) == 0) {
              local_440 = *(undefined4 *)(param_3 + 0xbc);
              local_430 = 0xffffffff;
              uStack_42c = 0xffffffff;
              uStack_428 = 0xffffffff;
              uStack_424 = 0;
              puVar15 = &local_410;
              uVar14 = 1;
              local_43c = 0xe4;
              puVar11 = puVar1;
            }
            else {
              local_440 = *(undefined4 *)(param_3 + 0xb8);
              local_430 = 0;
              uStack_42c = 0xffffffff;
              uStack_428 = 0xffffffff;
              uStack_424 = 0xffffffff;
              local_43c = 0xe4;
              FUN_1800f58b8(param_3 + 0x20,param_4,0x36,0x107,&local_410,puVar1,0);
              puVar11 = &local_410;
              puVar15 = (uint *)0x108;
              uVar14 = 0x36;
            }
            FUN_1800f58b8(param_3 + 0x20,param_4,uVar14,puVar15,puVar11,&local_440,0);
          }
          if ((uVar5 >> 0x10 & 1) != 0) {
            FUN_1800f58b8(param_3 + 0x20,param_4,0x41,0x101,&local_410,0x100,&local_410,0);
          }
          in_stack_fffffffffffffb80 = (uint *)0x0;
          FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x19,
                        (ulonglong)*(byte *)(param_3 + 0x324) & 0xd | 0x100,local_448,0x1e4,
                        &local_410,0);
        }
        if ((uVar5 >> 0x11 & 1) != 0) {
          if (local_410 == 0) {
            local_410 = FUN_1800f42d0(param_3 + 0x20,4,0);
            local_40c = 0xf;
            local_400 = 0xffffffffffffffff;
            uStack_3f8 = 0xffffffffffffffff;
          }
          local_440 = *(undefined4 *)(param_3 + 0xbc);
          local_43c = 0xe4;
          uStack_34c = CONCAT31(uStack_34c._1_3_,0xe4);
          uStack_428 = 0x7fffffff;
          uStack_424 = 0x7fffffff;
          local_430 = 0x7fffffff;
          uStack_42c = 0x7fffffff;
          uStack_338 = 0x7f8000007f800000;
          local_340 = 0x7f8000007f800000;
          local_350 = local_440;
          FUN_1800f58b8(param_3 + 0x20,param_4,1,0x102,&local_410,puVar1,&local_440,0);
          FUN_1800f58b8(param_3 + 0x20,param_4,0x27,0x102,&local_410,0x155,&local_410,&local_350,0);
          in_stack_fffffffffffffb80 = (uint *)0x0;
          FUN_1800f58b8(param_3 + 0x20,param_4,1,0x102,&local_410,puVar1,0x155,&local_410,0);
          puVar11 = &local_410;
          puVar18 = (undefined4 *)0x155;
          puVar15 = (uint *)0x102;
          uVar14 = 0x1a;
          puVar16 = local_448;
          goto LAB_180078dc0;
        }
        break;
      }
      if (uVar19 == 0x4f) {
        puVar13 = (uint *)FUN_180077158(puVar11,puVar16,0xf0000,1,0,param_3,param_4,1,
                                        CONCAT71(uVar21,1));
        local_3d0 = FUN_1800f42d0(param_3 + 0x20,4,0);
        local_3cc = 0xf;
        local_1b0 = *(undefined4 *)(param_3 + 0xb8);
        local_270 = *(undefined4 *)(param_3 + 0xbc);
        local_c0 = 0xffffffff00000017;
        uStack_b8 = 0xffffffffffffffff;
        local_180 = 0x7fffff00000000;
        local_178 = 0xffffff00;
        uStack_3b8 = 0xffffffffffffffff;
        local_3c0 = 0xffffffffffffffff;
        local_a0 = 0xffffffff3f800000;
        uStack_98 = 0xffffffffffffffff;
        local_80 = 0xffffffffffffff81;
        uStack_78 = 0xffffffffffffffff;
        local_1ac = 0xe4;
        local_1a0 = 0;
        uStack_19c = 0xffffffffffffffff;
        local_cc = 0xe4;
        local_194 = 0xffffffff;
        local_18c = 0xe4;
        local_174 = 0x3f800000;
        local_ac = 0xe4;
        local_8c = 0xe4;
        local_26c = 0xe4;
        local_260 = 0xff7fffff;
        uStack_25c = 0x3f800000;
        local_258 = 0xff7fffff;
        uStack_254 = 0x3f800000;
        uStack_190 = local_270;
        local_d0 = local_1b0;
        local_b0 = local_1b0;
        local_90 = local_1b0;
        FUN_1800f58b8(param_3 + 0x20,param_4,0x36,&local_3d0,puVar1,0);
        FUN_1800f58b8(param_3 + 0x20,param_4,0x39,0x108,&local_3d0,0x1ff,&local_3d0,&local_1b0,0);
        FUN_1800f58b8(param_3 + 0x20,param_4,0x55,0x101,&local_3d0,0x100,&local_3d0,&local_d0,0);
        FUN_1800f58b8(param_3 + 0x20,param_4,0x2f,0x104,&local_3d0,0x1aa,&local_3d0,0);
        FUN_1800f58b8(param_3 + 0x20,param_4,1,0x10e,&local_3d0,0x1e4,&local_3d0,&uStack_190,0);
        FUN_1800f58b8(param_3 + 0x20,param_4,0x3c,0x102,&local_3d0,0x155,&local_3d0,&local_b0,0);
        FUN_1800f58b8(param_3 + 0x20,param_4,0x1e,0x101,&local_3d0,0x100,&local_3d0,&local_90,0);
        FUN_1800f58b8(param_3 + 0x20,param_4,0x2b,0x101,&local_3d0,0x100,&local_3d0,0);
        in_stack_fffffffffffffb80 = &local_3d0;
        FUN_1800796a8(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x37,puVar15,0x1ff,
                      &local_3d0,0x1e4,in_stack_fffffffffffffb80,&local_270,0);
        break;
      }
      if (uVar19 == 0x51) {
        puVar13 = param_2 + 6;
        break;
      }
      if (uVar19 == 0xfffe) {
        puVar13 = param_2 + (ulonglong)(*param_2 >> 0x10) + 1;
        break;
      }
      if (uVar19 != 0xffff) break;
      local_450[0] = '\x01';
      puVar11 = puVar16;
      goto LAB_180078dd4;
    }
    puVar11 = puVar13;
LAB_180078dd4:
    uVar19 = *(uint *)(param_3 + 0x484);
    if (uVar19 != 0xffffffff) {
      local_350 = *(undefined4 *)(param_3 + 0x2c4);
      uStack_34c = CONCAT31(uStack_34c._1_3_,(char)(uVar19 >> 0x10));
      uStack_338 = 0xffffffffffffffff;
      local_340 = 0xffffffffffffffff;
      bVar8 = (uVar19 & 0xf000000) == 0xd000000;
      lVar3 = 0x380;
      if (bVar8) {
        lVar3 = 0x3b0;
      }
      lVar4 = 0x3b0;
      if (bVar8) {
        lVar4 = 0x380;
      }
      FUN_1800f58b8(param_3 + 0x20,param_4,0x37,param_3 + 0x350,&local_350,lVar4 + param_3,
                    lVar3 + param_3,0);
      FUN_1800f4370(param_3 + 0x20,*local_448);
      *extraout_x14 = 0;
    }
LAB_180078e54:
    param_2 = puVar11;
    if (local_450[0] != '\0') {
      return;
    }
  } while( true );
}

