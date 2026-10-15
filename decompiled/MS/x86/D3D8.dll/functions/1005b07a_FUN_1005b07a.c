/*
 * FUN_1005b07a at 1005b07a
 * undefined __thiscall FUN_1005b07a(void * this, uint * param_1, int param_2, int * param_3)
 * Address ranges: 1005b07a-1005c965
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005b07a(void *this,uint *param_1,int param_2,int *param_3)

{
  uint *puVar1;
  void *pvVar2;
  byte bVar3;
  undefined4 extraout_ECX;
  int iVar4;
  undefined4 extraout_EDX;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint local_400 [8];
  uint local_3e0 [8];
  undefined4 local_3c0;
  undefined1 local_3bc;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined1 local_39c;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined1 local_37c;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined1 local_35c;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined1 local_33c;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined1 local_31c;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  uint local_300;
  undefined1 local_2fc;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined1 local_2dc;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined1 local_2bc;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined1 local_29c;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined1 local_27c;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined1 local_25c;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined1 local_23c;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined1 local_21c;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined1 local_1fc;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined1 local_1bc;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined1 local_17c;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  uint local_160;
  char local_15c;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  uint local_140;
  undefined1 local_13c;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  uint local_120;
  undefined1 local_11c;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  uint local_100;
  undefined1 local_fc;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_d4;
  uint local_d0;
  undefined1 local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_b0;
  undefined1 local_ac;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90;
  undefined1 local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  undefined1 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined1 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  uint *local_28;
  uint local_24;
  uint local_20;
  void *local_1c;
  char local_15;
  uint *local_14;
  
  local_d4 = param_2 + 0x18;
  local_1c = this;
switchD_1005b0d0_caseD_3:
  do {
    while( true ) {
      local_14 = param_1;
      param_1 = local_14 + 1;
      local_24 = *local_14 & 0xffff;
      local_28 = param_1;
      if (local_24 < 0x4f) break;
      if (local_24 == 0x4f) {
        param_1 = FUN_1005ac75(param_1,0xf0000,1,0,param_2,'\x01','\x01');
        local_b0 = FUN_100a05ed(param_2 + 0x18,4,'\0');
        local_3a0 = *(undefined4 *)(param_2 + 0xa8);
        local_310 = 0;
        local_344 = 0x3f800000;
        local_36c = 0xffffffff;
        local_368 = 0xffffffff;
        local_364 = 0xffffffff;
        local_38c = 0xffffffff;
        local_388 = 0xffffffff;
        local_384 = 0xffffffff;
        local_20 = 0xff7fffff;
        local_3b0 = 0xff7fffff;
        local_2c = 0x3f800000;
        local_3ac = 0x3f800000;
        local_14 = (uint *)0xff7fffff;
        local_3a8 = 0xff7fffff;
        local_24 = 0x3f800000;
        local_3a4 = 0x3f800000;
        local_a0 = 0xffffffff;
        local_9c = 0xffffffff;
        local_98 = 0xffffffff;
        local_94 = 0xffffffff;
        local_30c = 0xffffffff;
        local_308 = 0xffffffff;
        local_304 = 0xffffffff;
        local_32c = 0xffffffff;
        local_328 = 0xffffffff;
        local_324 = 0xffffffff;
        local_3c0 = *(undefined4 *)(param_2 + 0xac);
        local_ac = 0xf;
        local_31c = 0xe4;
        local_33c = 0xe4;
        local_330 = 0x17;
        local_35c = 0xe4;
        local_350 = 0;
        local_34c = 0x7fffff;
        local_348 = 0xffffff00;
        local_37c = 0xe4;
        local_370 = 0x3f800000;
        local_39c = 0xe4;
        local_390 = 0xffffff81;
        local_3bc = 0xe4;
        local_380 = local_3a0;
        local_360 = local_3c0;
        local_340 = local_3a0;
        local_320 = local_3a0;
        FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x36);
        FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x39);
        FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x55);
        FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x2f);
        FUN_100a14a8((int *)(param_2 + 0x18),param_3,1);
        FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x3c);
        FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x1e);
        FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x2b);
        FUN_1005cedf(local_1c,param_2,param_3,*(uint *)(param_2 + 0x3e0) | 0x37,
                     (uint *)(param_2 + 0x280),(uint *)0x1ff);
      }
      else if (local_24 == 0x51) {
        param_1 = local_14 + 6;
      }
      else if (local_24 == 0xfffe) {
        param_1 = param_1 + (*local_14 >> 0x10);
      }
      else if (local_24 == 0xffff) {
        return;
      }
    }
    if (local_24 != 0x4e) goto switchD_1005b0d0_switchD;
    local_14 = (uint *)*param_1;
    param_1 = FUN_1005ac75(param_1,0xf0000,1,0,param_2,
                           *(char *)(*(int *)(param_2 + 0x10) + 0x4854) == '\x01','\0');
    local_70 = 0;
    local_6c = 0;
    local_20 = (uint)local_14 & 0x80000;
    local_60 = 0xffffffff;
    local_5c = 0xffffffff;
    local_58 = 0xffffffff;
    local_54 = 0xffffffff;
    if (((uint)local_14 & 0x50000) == 0) {
      if (local_20 != 0) {
        local_50 = *(uint *)(param_2 + 0xa8);
        local_20 = 0x3f800000;
        local_40 = 0x3f800000;
        local_4c = 0xe4;
        local_3c = 0xffffffff;
        local_38 = 0xffffffff;
        local_34 = 0xffffffff;
        FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x36);
      }
    }
    else {
      local_70 = FUN_100a05ed(param_2 + 0x18,4,'\0');
      local_6c = 0xf;
      local_60 = 0xffffffff;
      local_54 = 0xffffffff;
      local_58 = 0xffffffff;
      local_5c = 0xffffffff;
      if (local_20 == 0) {
        FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x36);
      }
      else {
        local_4c = 0xe4;
        local_3c = 0xffffffff;
        local_38 = 0xffffffff;
        if ((*(uint *)(param_2 + 0x330) & 0x88000000) == 0) {
          local_50 = *(uint *)(param_2 + 0xac);
          local_40 = 0xffffffff;
          local_34 = 0;
          uVar7 = 1;
        }
        else {
          local_50 = *(uint *)(param_2 + 0xa8);
          local_20 = 0;
          local_40 = 0;
          local_34 = 0xffffffff;
          FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x36);
          uVar7 = 0x36;
        }
        FUN_100a14a8((int *)(param_2 + 0x18),param_3,uVar7);
      }
      if (((uint)local_14 & 0x10000) != 0) {
        FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x41);
      }
      FUN_1005cedf(local_1c,param_2,param_3,*(uint *)(param_2 + 0x3e0) | 0x19,
                   (uint *)(*(byte *)(param_2 + 0x284) & 0xd | 0x100),(uint *)(param_2 + 0x280));
    }
  } while (((uint)local_14 & 0x20000) == 0);
  if (local_70 == 0) {
    local_70 = FUN_100a05ed(param_2 + 0x18,4,'\0');
    local_6c = 0xf;
    local_60 = 0xffffffff;
    local_54 = 0xffffffff;
    local_58 = 0xffffffff;
    local_5c = 0xffffffff;
  }
  local_300 = *(uint *)(param_2 + 0xac);
  local_2f0 = 0x7f800000;
  local_2ec = 0x7f800000;
  local_2e8 = 0x7f800000;
  local_2e4 = 0x7f800000;
  local_4c = 0xe4;
  local_40 = 0x7fffffff;
  local_3c = 0x7fffffff;
  local_38 = 0x7fffffff;
  local_34 = 0x7fffffff;
  local_2fc = 0xe4;
  local_50 = local_300;
  FUN_100a14a8((int *)(param_2 + 0x18),param_3,1);
  FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x27);
  FUN_100a14a8((int *)(param_2 + 0x18),param_3,1);
  uVar7 = 0x1a;
  goto LAB_1005b7ab;
switchD_1005b0d0_switchD:
  switch(local_24) {
  case 0:
    param_1 = local_14 + 2;
    goto switchD_1005b0d0_caseD_3;
  case 1:
    *(undefined4 *)(param_2 + 0x3e4) = 0;
    param_1 = FUN_1005ac75(param_1,0xf0000,1,0,param_2,'\0','\0');
    uVar7 = 0x36;
    if (*(int *)(param_2 + 0x280) == *(int *)(param_2 + 0x224)) {
      uVar7 = 0x1b;
    }
    uVar7 = uVar7 | *(uint *)(param_2 + 0x3e0);
    goto LAB_1005b122;
  case 2:
    param_1 = FUN_1005ac75(param_1,0xf0000,2,0,param_2,'\0','\0');
    uVar7 = *(uint *)(param_2 + 0x3e0);
    break;
  default:
    goto switchD_1005b0d0_caseD_3;
  case 4:
    param_1 = FUN_1005ac75(param_1,0xf0000,3,0,param_2,'\0','\0');
    puVar6 = (uint *)(param_2 + 0x330);
    puVar5 = (uint *)(param_2 + 0x280);
    uVar7 = *(uint *)(param_2 + 0x3e0) | 0x32;
    goto LAB_1005b1b8;
  case 5:
    param_1 = FUN_1005ac75(param_1,0xf0000,2,0,param_2,'\0','\0');
    uVar7 = *(uint *)(param_2 + 0x3e0) | 0x38;
    break;
  case 6:
    param_1 = FUN_1005ac75(param_1,0xf0000,1,0,param_2,'\x01','\0');
    local_100 = FUN_100a05ed(param_2 + 0x18,4,'\0');
    local_fc = 2;
    local_f0 = 0xffffffff;
    local_ec = 0xffffffff;
    local_e8 = 0xffffffff;
    local_e4 = 0xffffffff;
    iVar4 = FUN_100a15c6(*(uint *)(param_2 + 0x18));
    if (iVar4 == 0x40) {
      local_50 = *(uint *)(param_2 + 0xac);
      local_14 = (uint *)0x3f800000;
      local_40 = 0x3f800000;
      local_24 = 0x3f800000;
      local_3c = 0x3f800000;
      local_28 = (uint *)0x3f800000;
      local_38 = 0x3f800000;
      local_2c = 0x3f800000;
      local_34 = 0x3f800000;
      local_4c = 0xe4;
      FUN_100a14a8((int *)(param_2 + 0x18),param_3,0xe);
    }
    else {
      FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x81);
    }
    local_1c0 = *(undefined4 *)(param_2 + 0xa8);
    local_1e0 = *(undefined4 *)(param_2 + 0xac);
    local_2c = 0x7cf0bdc2;
    local_1d0 = 0x7cf0bdc2;
    local_14 = (uint *)0x7cf0bdc2;
    local_1cc = 0x7cf0bdc2;
    local_24 = 0x7cf0bdc2;
    local_1c8 = 0x7cf0bdc2;
    local_28 = (uint *)0x7cf0bdc2;
    local_1c4 = 0x7cf0bdc2;
    local_19c = 0xe4;
    local_190 = 0x7fffffff;
    local_18c = 0xffffffff;
    local_188 = 0xffffffff;
    local_184 = 0xffffffff;
    local_1bc = 0xe4;
    local_1b0 = 0x7f800000;
    local_1ac = 0xffffffff;
    local_1a8 = 0xffffffff;
    local_1a4 = 0xffffffff;
    local_1dc = 0xe4;
    local_1a0 = local_1c0;
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,1);
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x20);
    goto LAB_1005b40c;
  case 7:
    param_1 = FUN_1005ac75(param_1,0xf0000,1,0,param_2,'\x01','\x01');
    local_120 = FUN_100a05ed(param_2 + 0x18,4,'\0');
    local_110 = 0xffffffff;
    local_10c = 0xffffffff;
    local_108 = 0xffffffff;
    local_104 = 0xffffffff;
    local_11c = 2;
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x44);
    local_200 = *(undefined4 *)(param_2 + 0xa8);
    local_220 = *(undefined4 *)(param_2 + 0xac);
    local_2c = 0x7cf0bdc2;
    local_210 = 0x7cf0bdc2;
    local_14 = (uint *)0x7cf0bdc2;
    local_20c = 0x7cf0bdc2;
    local_24 = 0x7cf0bdc2;
    local_208 = 0x7cf0bdc2;
    local_28 = (uint *)0x7cf0bdc2;
    local_204 = 0x7cf0bdc2;
    local_1fc = 0xe4;
    local_1f0 = 0x7f800000;
    local_1ec = 0xffffffff;
    local_1e8 = 0xffffffff;
    local_1e4 = 0xffffffff;
    local_21c = 0xe4;
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x20);
    goto LAB_1005b40c;
  case 8:
    param_1 = FUN_1005ac75(param_1,0xf0000,2,0,param_2,'\0','\0');
    FUN_100a183b(*(byte *)(param_2 + 0x364),0xa4);
    bVar3 = FUN_100a183b(*(byte *)(param_2 + 0x334),0xa4);
    FUN_1005cedf(local_1c,param_2,param_3,*(uint *)(param_2 + 0x3e0) | 0x10,
                 (uint *)(param_2 + 0x280),(uint *)(bVar3 | 0x100));
    goto switchD_1005b0d0_caseD_3;
  case 9:
    param_1 = FUN_1005ac75(param_1,0xf0000,2,0,param_2,'\0','\0');
    uVar7 = *(uint *)(param_2 + 0x3e0) | 0x11;
    break;
  case 10:
    param_1 = FUN_1005ac75(param_1,0xf0000,2,0,param_2,'\0','\0');
    uVar7 = *(uint *)(param_2 + 0x3e0) | 0x33;
    break;
  case 0xb:
    param_1 = FUN_1005ac75(param_1,0xf0000,2,0,param_2,'\0','\0');
    uVar7 = *(uint *)(param_2 + 0x3e0) | 0x34;
    break;
  case 0xc:
  case 0xd:
    param_1 = FUN_1005ac75(param_1,0xf0000,2,0,param_2,'\0','\0');
    local_15 = *(char *)(param_2 + 0x284);
    local_160 = FUN_100a05ed(param_2 + 0x18,4,'\0');
    local_15c = local_15;
    local_150 = 0xffffffff;
    local_14c = 0xffffffff;
    local_148 = 0xffffffff;
    local_144 = 0xffffffff;
    local_240 = *(undefined4 *)(param_2 + 0xac);
    local_2c = 0x3f800000;
    local_230 = 0x3f800000;
    local_14 = (uint *)0x3f800000;
    local_22c = 0x3f800000;
    local_28 = (uint *)0x3f800000;
    local_228 = 0x3f800000;
    local_20 = 0x3f800000;
    local_224 = 0x3f800000;
    local_23c = 0xe4;
    uVar7 = 0x31;
    if (local_24 == 0xd) {
      uVar7 = 0x1d;
    }
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,uVar7);
    FUN_100a1889(CONCAT31((int3)((uint)extraout_ECX >> 8),0xe4),
                 CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)(param_2 + 0x284)));
    uVar7 = 1;
LAB_1005b7ab:
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,uVar7);
    goto switchD_1005b0d0_caseD_3;
  case 0xe:
    param_1 = FUN_1005ac75(param_1,0xf0000,1,0,param_2,
                           *(char *)(*(int *)(param_2 + 0x10) + 0x4854) == '\x01','\0');
    uVar7 = *(uint *)(param_2 + 0x3e0) | 0x19;
    goto LAB_1005b122;
  case 0xf:
    param_1 = FUN_1005ac75(param_1,0xf0000,1,0,param_2,'\x01','\x01');
    local_140 = FUN_100a05ed(param_2 + 0x18,4,'\0');
    local_130 = 0xffffffff;
    local_12c = 0xffffffff;
    local_128 = 0xffffffff;
    local_124 = 0xffffffff;
    local_13c = 2;
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x2f);
    local_260 = *(undefined4 *)(param_2 + 0xa8);
    local_280 = *(undefined4 *)(param_2 + 0xac);
    local_20 = 0xfcf0bdc2;
    local_270 = 0xfcf0bdc2;
    local_2c = 0xfcf0bdc2;
    local_26c = 0xfcf0bdc2;
    local_14 = (uint *)0xfcf0bdc2;
    local_268 = 0xfcf0bdc2;
    local_24 = 0xfcf0bdc2;
    local_264 = 0xfcf0bdc2;
    local_25c = 0xe4;
    local_250 = 0xff800000;
    local_24c = 0xffffffff;
    local_248 = 0xffffffff;
    local_244 = 0xffffffff;
    local_27c = 0xe4;
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x20);
LAB_1005b40c:
    puVar5 = (uint *)(param_2 + 0x280);
    puVar6 = (uint *)0x100;
    uVar7 = *(uint *)(param_2 + 0x3e0) | 0x37;
LAB_1005b422:
    FUN_1005cedf(local_1c,param_2,param_3,uVar7,puVar5,puVar6);
    goto switchD_1005b0d0_caseD_3;
  case 0x10:
    param_1 = FUN_1005ac75(param_1,0xf0000,1,0,param_2,'\0','\0');
    local_d0 = FUN_100a05ed(param_2 + 0x18,4,'\x01');
    local_cc = 0xf;
    local_c0 = 0xffffffff;
    local_bc = 0xffffffff;
    local_b8 = 0xffffffff;
    local_b4 = 0xffffffff;
    local_90 = FUN_100a05ed(param_2 + 0x18,4,'\0');
    local_2e0 = *(undefined4 *)(param_2 + 0xac);
    local_80 = 0xffffffff;
    local_7c = 0xffffffff;
    local_78 = 0xffffffff;
    local_74 = 0xffffffff;
    local_170 = 0;
    local_16c = 0;
    local_168 = 0;
    local_164 = 0;
    local_290 = 0x42fffe01;
    local_2b0 = 0xc2fffe01;
    local_20 = 0;
    local_2d0 = 0;
    local_2c = 0;
    local_14 = (uint *)0x3f800000;
    local_2cc = 0;
    local_2c0 = *(undefined4 *)(param_2 + 0xa8);
    local_24 = 0x3f800000;
    local_2c8 = 0x3f800000;
    local_8c = 3;
    local_17c = 0xe4;
    local_29c = 0xe4;
    local_28c = 0xffffffff;
    local_288 = 0xffffffff;
    local_284 = 0xffffffff;
    local_2bc = 0xe4;
    local_2ac = 0xffffffff;
    local_2a8 = 0xffffffff;
    local_2a4 = 0xffffffff;
    local_2dc = 0xe4;
    local_2c4 = 0x3f800000;
    local_2a0 = local_2c0;
    local_180 = local_2e0;
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x36);
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x1d);
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x39);
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,1);
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x33);
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x34);
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x2f);
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x38);
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x19);
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x36);
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,1);
    FUN_100a14a8((int *)(param_2 + 0x18),param_3,1);
    FUN_1005cedf(local_1c,param_2,param_3,*(uint *)(param_2 + 0x3e0) | 0x36,
                 (uint *)(param_2 + 0x280),(uint *)0x1d3);
    FUN_100a068b(param_2 + 0x18,local_d0);
    goto switchD_1005b0d0_caseD_3;
  case 0x11:
    param_1 = FUN_1005ac75(param_1,0xf0000,2,0,param_2,'\0','\0');
    puVar5 = (uint *)(param_2 + 0x280);
    uVar7 = *puVar5;
    if ((((uVar7 >> 0x1e & 1) == 0) && (uVar7 != *(uint *)(param_2 + 0x330))) &&
       (uVar7 != *(uint *)(param_2 + 0x360))) {
      local_15 = '\0';
    }
    else {
      local_15 = '\x01';
      local_50 = FUN_100a05ed(local_d4,4,'\0');
      local_4c = 0xe4;
      puVar5 = &local_50;
      local_40 = 0xffffffff;
      local_3c = 0xffffffff;
      local_38 = 0xffffffff;
      local_34 = 0xffffffff;
    }
    puVar6 = local_400;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = local_400;
    puVar6 = local_3e0;
    for (iVar4 = 8; puVar1 = local_28, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    if ((*local_28 & 0x10000) != 0) {
      local_50 = *(uint *)(param_2 + 0xa8);
      local_20 = 0x3f800000;
      local_40 = 0x3f800000;
      local_4c = 0xe4;
      local_3c = 0xffffffff;
      local_38 = 0xffffffff;
      local_34 = 0xffffffff;
      FUN_100a14a8((int *)(param_2 + 0x18),param_3,0x36);
    }
    if ((*puVar1 & 0x20000) != 0) {
      if (local_15 == '\0') {
        local_14 = *(uint **)(param_2 + 0x3e0);
      }
      else {
        local_14 = (uint *)0x0;
      }
      FUN_1005cedf(local_1c,param_2,param_3,(uint)local_14 | 0x38,(uint *)0x102,local_3e0);
    }
    pvVar2 = local_1c;
    if ((*local_28 & 0x40000) != 0) {
      if (local_15 == '\0') {
        uVar7 = *(uint *)(param_2 + 0x3e0);
      }
      else {
        uVar7 = 0;
      }
      FUN_1005cedf(local_1c,param_2,param_3,uVar7 | 0x36,(uint *)0x104,local_3e0);
    }
    if ((*local_28 & 0x80000) != 0) {
      if (local_15 == '\0') {
        uVar7 = *(uint *)(param_2 + 0x3e0);
      }
      else {
        uVar7 = 0;
      }
      FUN_1005cedf(pvVar2,param_2,param_3,uVar7 | 0x36,(uint *)0x108,local_3e0);
    }
    if (local_15 != '\0') {
      FUN_1005cedf(local_1c,param_2,param_3,*(uint *)(param_2 + 0x3e0) | 0x36,
                   (uint *)(param_2 + 0x280),local_3e0);
    }
    goto switchD_1005b0d0_caseD_3;
  case 0x13:
    param_1 = FUN_1005ac75(param_1,0xf0000,1,0,param_2,'\0','\0');
    uVar7 = *(uint *)(param_2 + 0x3e0) | 0x1a;
LAB_1005b122:
    FUN_1005cedf(local_1c,param_2,param_3,uVar7,(uint *)(param_2 + 0x280),(uint *)(param_2 + 0x330))
    ;
    goto switchD_1005b0d0_caseD_3;
  case 0x14:
  case 0x15:
    local_14 = param_1;
    if ((*param_1 & 0x10000) != 0) {
      param_1 = FUN_1005ac75(param_1,0x10000,2,0,param_2,'\0','\0');
      FUN_1005cedf(local_1c,param_2,param_3,*(uint *)(param_2 + 0x3e0) | 0x11,(uint *)0x101,
                   (uint *)(param_2 + 0x280));
    }
    if ((*local_28 & 0x20000) != 0) {
      param_1 = FUN_1005ac75(local_14,0x20000,2,1,param_2,'\0','\0');
      FUN_1005cedf(local_1c,param_2,param_3,*(uint *)(param_2 + 0x3e0) | 0x11,(uint *)0x102,
                   (uint *)(param_2 + 0x280));
    }
    if ((*local_28 & 0x40000) != 0) {
      param_1 = FUN_1005ac75(local_14,0x40000,2,2,param_2,'\0','\0');
      FUN_1005cedf(local_1c,param_2,param_3,*(uint *)(param_2 + 0x3e0) | 0x11,(uint *)0x104,
                   (uint *)(param_2 + 0x280));
    }
    if (((*local_28 & 0x80000) == 0) || (local_24 != 0x14)) goto switchD_1005b0d0_caseD_3;
    param_1 = FUN_1005ac75(local_14,0x80000,2,3,param_2,'\0','\0');
    puVar6 = (uint *)(param_2 + 0x280);
    puVar5 = (uint *)0x108;
    uVar7 = *(uint *)(param_2 + 0x3e0) | 0x11;
LAB_1005b1b8:
    FUN_1005cedf(local_1c,param_2,param_3,uVar7,puVar5,puVar6);
    goto switchD_1005b0d0_caseD_3;
  case 0x16:
  case 0x17:
  case 0x18:
    local_14 = param_1;
    if ((*param_1 & 0x10000) != 0) {
      param_1 = FUN_1005ac75(param_1,0x10000,2,0,param_2,'\0','\0');
      FUN_100a183b(*(byte *)(param_2 + 0x364),0xa4);
      FUN_100a183b(*(byte *)(param_2 + 0x334),0xa4);
      FUN_1005cedf(local_1c,param_2,param_3,*(uint *)(param_2 + 0x3e0) | 0x10,(uint *)0x101,
                   (uint *)(param_2 + 0x280));
    }
    if ((*local_28 & 0x20000) != 0) {
      param_1 = FUN_1005ac75(local_14,0x20000,2,1,param_2,'\0','\0');
      FUN_100a183b(*(byte *)(param_2 + 0x364),0xa4);
      FUN_100a183b(*(byte *)(param_2 + 0x334),0xa4);
      FUN_1005cedf(local_1c,param_2,param_3,*(uint *)(param_2 + 0x3e0) | 0x10,(uint *)0x102,
                   (uint *)(param_2 + 0x280));
    }
    if (((*local_28 & 0x40000) != 0) && ((local_24 == 0x17 || (local_24 == 0x16)))) {
      param_1 = FUN_1005ac75(local_14,0x40000,2,2,param_2,'\0','\0');
      FUN_100a183b(*(byte *)(param_2 + 0x364),0xa4);
      FUN_100a183b(*(byte *)(param_2 + 0x334),0xa4);
      FUN_1005cedf(local_1c,param_2,param_3,*(uint *)(param_2 + 0x3e0) | 0x10,(uint *)0x104,
                   (uint *)(param_2 + 0x280));
    }
    if (((*local_28 & 0x80000) == 0) || (local_24 != 0x16)) goto switchD_1005b0d0_caseD_3;
    param_1 = FUN_1005ac75(local_14,0x80000,2,3,param_2,'\0','\0');
    FUN_100a183b(*(byte *)(param_2 + 0x364),0xa4);
    FUN_100a183b(*(byte *)(param_2 + 0x334),0xa4);
    puVar6 = (uint *)(param_2 + 0x280);
    puVar5 = (uint *)0x108;
    uVar7 = *(uint *)(param_2 + 0x3e0) | 0x10;
    goto LAB_1005b422;
  }
  FUN_1005cedf(local_1c,param_2,param_3,uVar7,(uint *)(param_2 + 0x280),(uint *)(param_2 + 0x330));
  goto switchD_1005b0d0_caseD_3;
}

