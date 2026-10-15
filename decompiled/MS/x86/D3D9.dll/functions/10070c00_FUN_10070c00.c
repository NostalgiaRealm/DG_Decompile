/*
 * FUN_10070c00 at 10070c00
 * undefined __thiscall FUN_10070c00(void * this, uint * param_1, int param_2, int * param_3)
 * Address ranges: 10070c00-10072518
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10070c00(void *this,uint *param_1,int param_2,int *param_3)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 extraout_ECX;
  int iVar4;
  undefined4 extraout_EDX;
  uint *puVar5;
  uint uVar6;
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
  char local_2d;
  uint *local_2c;
  uint local_28;
  uint *local_24;
  uint local_20;
  void *local_1c;
  char local_15;
  uint *local_14;
  
  local_d4 = param_2 + 0x18;
  local_2d = '\0';
  local_1c = this;
  do {
    *(undefined4 *)(param_2 + 0x310) = 0;
    local_14 = param_1;
    *(undefined4 *)(param_2 + 0x474) = 0xffffffff;
    puVar2 = FUN_1006a806(local_1c,param_1,param_2,param_3,&local_2d);
    if (puVar2 != param_1) goto switchD_10070c94_caseD_3;
    local_20 = *param_1;
    param_1 = param_1 + 1;
    local_28 = local_20 & 0xffff;
    puVar2 = param_1;
    local_2c = param_1;
    if (0x4e < local_28) {
      if (local_28 == 0x4f) {
        puVar2 = (uint *)FUN_10070ac1(param_1,0xf0000,1,0,param_2,param_3,'\x01','\x01');
        local_b0 = FUN_100c2e34(param_2 + 0x18,4,'\0');
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
        local_14 = (uint *)0x3f800000;
        local_3ac = 0x3f800000;
        local_28 = 0xff7fffff;
        local_3a8 = 0xff7fffff;
        local_24 = (uint *)0x3f800000;
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
        FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x36);
        FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x39);
        FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x55);
        FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x2f);
        FUN_100c3cfd((int *)(param_2 + 0x18),param_3,1);
        FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x3c);
        FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x1e);
        FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x2b);
        FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x37,
                     (uint *)(param_2 + 0x310),(uint *)0x1ff);
      }
      else if (local_28 == 0x51) {
        puVar2 = local_14 + 6;
      }
      else if (local_28 == 0xfffe) {
        puVar2 = param_1 + (local_20 >> 0x10);
      }
      else if (local_28 == 0xffff) {
        local_2d = '\x01';
      }
      goto switchD_10070c94_caseD_3;
    }
    if (local_28 == 0x4e) {
      local_14 = (uint *)*param_1;
      param_1 = (uint *)FUN_10070ac1(param_1,0xf0000,1,0,param_2,param_3,
                                     *(char *)(*(int *)(param_2 + 0x10) + 0x4a6c) == '\x01','\0');
      local_20 = (uint)local_14 & 0x80000;
      local_70 = 0;
      local_6c = 0;
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
          FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x36);
        }
      }
      else {
        local_70 = FUN_100c2e34(param_2 + 0x18,4,'\0');
        local_6c = 0xf;
        local_60 = 0xffffffff;
        local_54 = 0xffffffff;
        local_58 = 0xffffffff;
        local_5c = 0xffffffff;
        if (local_20 == 0) {
          FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x36);
        }
        else {
          local_4c = 0xe4;
          local_3c = 0xffffffff;
          local_38 = 0xffffffff;
          if ((*(uint *)(param_2 + 0x3c0) & 0x88000000) == 0) {
            local_50 = *(uint *)(param_2 + 0xac);
            local_40 = 0xffffffff;
            local_34 = 0;
            uVar6 = 1;
          }
          else {
            local_50 = *(uint *)(param_2 + 0xa8);
            local_20 = 0;
            local_40 = 0;
            local_34 = 0xffffffff;
            FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x36);
            uVar6 = 0x36;
          }
          FUN_100c3cfd((int *)(param_2 + 0x18),param_3,uVar6);
        }
        if (((uint)local_14 & 0x10000) != 0) {
          FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x41);
        }
        FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x19,
                     (uint *)(*(byte *)(param_2 + 0x314) & 0xd | 0x100),(uint *)(param_2 + 0x310));
      }
      puVar2 = param_1;
      if (((uint)local_14 & 0x20000) != 0) {
        if (local_70 == 0) {
          local_70 = FUN_100c2e34(param_2 + 0x18,4,'\0');
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
        FUN_100c3cfd((int *)(param_2 + 0x18),param_3,1);
        FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x27);
        FUN_100c3cfd((int *)(param_2 + 0x18),param_3,1);
        uVar6 = 0x1a;
        goto LAB_10071348;
      }
      goto switchD_10070c94_caseD_3;
    }
    switch(local_28) {
    case 0:
      puVar2 = local_14 + 2;
      break;
    case 1:
      *(undefined4 *)(param_2 + 0x474) = 0;
      puVar2 = (uint *)FUN_10070ac1(param_1,0xf0000,1,0,param_2,param_3,'\0','\0');
      FUN_10070b06(local_1c,param_2,param_3);
      break;
    case 2:
      param_1 = (uint *)FUN_10070ac1(param_1,0xf0000,2,0,param_2,param_3,'\0','\0');
      uVar6 = *(uint *)(param_2 + 0x470);
      goto LAB_10070d09;
    case 4:
      puVar2 = (uint *)FUN_10070ac1(param_1,0xf0000,3,0,param_2,param_3,'\0','\0');
      FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x32,
                   (uint *)(param_2 + 0x310),(uint *)(param_2 + 0x3c0));
      break;
    case 5:
      param_1 = (uint *)FUN_10070ac1(param_1,0xf0000,2,0,param_2,param_3,'\0','\0');
      uVar6 = *(uint *)(param_2 + 0x470) | 0x38;
      goto LAB_10070d09;
    case 6:
      param_1 = (uint *)FUN_10070ac1(param_1,0xf0000,1,0,param_2,param_3,'\x01','\0');
      local_100 = FUN_100c2e34(param_2 + 0x18,4,'\0');
      local_fc = 2;
      local_f0 = 0xffffffff;
      local_ec = 0xffffffff;
      local_e8 = 0xffffffff;
      local_e4 = 0xffffffff;
      iVar4 = FUN_100c3e1b(*(uint *)(param_2 + 0x18));
      if (iVar4 == 0x40) {
        local_50 = *(uint *)(param_2 + 0xac);
        local_14 = (uint *)0x3f800000;
        local_40 = 0x3f800000;
        local_28 = 0x3f800000;
        local_3c = 0x3f800000;
        local_24 = (uint *)0x3f800000;
        local_38 = 0x3f800000;
        local_2c = (uint *)0x3f800000;
        local_34 = 0x3f800000;
        local_4c = 0xe4;
        FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0xe);
      }
      else {
        FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x81);
      }
      local_1c0 = *(undefined4 *)(param_2 + 0xa8);
      local_1e0 = *(undefined4 *)(param_2 + 0xac);
      local_14 = (uint *)0x7cf0bdc2;
      local_1d0 = 0x7cf0bdc2;
      local_28 = 0x7cf0bdc2;
      local_1cc = 0x7cf0bdc2;
      local_24 = (uint *)0x7cf0bdc2;
      local_1c8 = 0x7cf0bdc2;
      local_2c = (uint *)0x7cf0bdc2;
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
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,1);
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x20);
      goto LAB_10070fa7;
    case 7:
      param_1 = (uint *)FUN_10070ac1(param_1,0xf0000,1,0,param_2,param_3,'\x01','\x01');
      local_120 = FUN_100c2e34(param_2 + 0x18,4,'\0');
      local_110 = 0xffffffff;
      local_10c = 0xffffffff;
      local_108 = 0xffffffff;
      local_104 = 0xffffffff;
      local_11c = 2;
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x44);
      local_200 = *(undefined4 *)(param_2 + 0xa8);
      local_220 = *(undefined4 *)(param_2 + 0xac);
      local_14 = (uint *)0x7cf0bdc2;
      local_210 = 0x7cf0bdc2;
      local_28 = 0x7cf0bdc2;
      local_20c = 0x7cf0bdc2;
      local_24 = (uint *)0x7cf0bdc2;
      local_208 = 0x7cf0bdc2;
      local_2c = (uint *)0x7cf0bdc2;
      local_204 = 0x7cf0bdc2;
      local_1fc = 0xe4;
      local_1f0 = 0x7f800000;
      local_1ec = 0xffffffff;
      local_1e8 = 0xffffffff;
      local_1e4 = 0xffffffff;
      local_21c = 0xe4;
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x20);
      goto LAB_10070fa7;
    case 8:
      puVar2 = (uint *)FUN_10070ac1(param_1,0xf0000,2,0,param_2,param_3,'\0','\0');
      FUN_100c4090(*(byte *)(param_2 + 0x3f4),0xa4);
      bVar1 = FUN_100c4090(*(byte *)(param_2 + 0x3c4),0xa4);
      FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x10,
                   (uint *)(param_2 + 0x310),(uint *)(bVar1 | 0x100));
      break;
    case 9:
      param_1 = (uint *)FUN_10070ac1(param_1,0xf0000,2,0,param_2,param_3,'\0','\0');
      uVar6 = *(uint *)(param_2 + 0x470) | 0x11;
      goto LAB_10070d09;
    case 10:
      param_1 = (uint *)FUN_10070ac1(param_1,0xf0000,2,0,param_2,param_3,'\0','\0');
      uVar6 = *(uint *)(param_2 + 0x470) | 0x33;
      goto LAB_10070d09;
    case 0xb:
      param_1 = (uint *)FUN_10070ac1(param_1,0xf0000,2,0,param_2,param_3,'\0','\0');
      uVar6 = *(uint *)(param_2 + 0x470) | 0x34;
LAB_10070d09:
      FUN_10072b96(local_1c,param_2,param_3,uVar6,(uint *)(param_2 + 0x310),
                   (uint *)(param_2 + 0x3c0));
      puVar2 = param_1;
      break;
    case 0xc:
    case 0xd:
      param_1 = (uint *)FUN_10070ac1(param_1,0xf0000,2,0,param_2,param_3,'\0','\0');
      local_15 = *(char *)(param_2 + 0x314);
      local_160 = FUN_100c2e34(param_2 + 0x18,4,'\0');
      local_15c = local_15;
      local_150 = 0xffffffff;
      local_14c = 0xffffffff;
      local_148 = 0xffffffff;
      local_144 = 0xffffffff;
      local_240 = *(undefined4 *)(param_2 + 0xac);
      local_14 = (uint *)0x3f800000;
      local_230 = 0x3f800000;
      local_24 = (uint *)0x3f800000;
      local_22c = 0x3f800000;
      local_2c = (uint *)0x3f800000;
      local_228 = 0x3f800000;
      local_20 = 0x3f800000;
      local_224 = 0x3f800000;
      local_23c = 0xe4;
      uVar6 = 0x31;
      if (local_28 == 0xd) {
        uVar6 = 0x1d;
      }
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,uVar6);
      FUN_100c40de(CONCAT31((int3)((uint)extraout_ECX >> 8),0xe4),
                   CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)(param_2 + 0x314)));
      uVar6 = 1;
LAB_10071348:
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,uVar6);
      puVar2 = param_1;
      break;
    case 0xe:
      param_1 = (uint *)FUN_10070ac1(param_1,0xf0000,1,0,param_2,param_3,
                                     *(char *)(*(int *)(param_2 + 0x10) + 0x4a6c) == '\x01','\0');
      puVar2 = (uint *)(param_2 + 0x3c0);
      uVar6 = *(uint *)(param_2 + 0x470) | 0x19;
      goto LAB_10071397;
    case 0xf:
      param_1 = (uint *)FUN_10070ac1(param_1,0xf0000,1,0,param_2,param_3,'\x01','\x01');
      local_140 = FUN_100c2e34(param_2 + 0x18,4,'\0');
      local_130 = 0xffffffff;
      local_12c = 0xffffffff;
      local_128 = 0xffffffff;
      local_124 = 0xffffffff;
      local_13c = 2;
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x2f);
      local_260 = *(undefined4 *)(param_2 + 0xa8);
      local_280 = *(undefined4 *)(param_2 + 0xac);
      local_20 = 0xfcf0bdc2;
      local_270 = 0xfcf0bdc2;
      local_14 = (uint *)0xfcf0bdc2;
      local_26c = 0xfcf0bdc2;
      local_28 = 0xfcf0bdc2;
      local_268 = 0xfcf0bdc2;
      local_24 = (uint *)0xfcf0bdc2;
      local_264 = 0xfcf0bdc2;
      local_25c = 0xe4;
      local_250 = 0xff800000;
      local_24c = 0xffffffff;
      local_248 = 0xffffffff;
      local_244 = 0xffffffff;
      local_27c = 0xe4;
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x20);
LAB_10070fa7:
      FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x37,
                   (uint *)(param_2 + 0x310),(uint *)0x100);
      puVar2 = param_1;
      break;
    case 0x10:
      puVar2 = (uint *)FUN_10070ac1(param_1,0xf0000,1,0,param_2,param_3,'\0','\0');
      local_d0 = FUN_100c2e34(param_2 + 0x18,4,'\x01');
      local_cc = 0xf;
      local_c0 = 0xffffffff;
      local_bc = 0xffffffff;
      local_b8 = 0xffffffff;
      local_b4 = 0xffffffff;
      local_90 = FUN_100c2e34(param_2 + 0x18,4,'\0');
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
      local_14 = (uint *)0x0;
      local_2d0 = 0;
      local_2c0 = *(undefined4 *)(param_2 + 0xa8);
      local_28 = 0x3f800000;
      local_2cc = 0;
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
      local_24 = (uint *)0x3f800000;
      local_2dc = 0xe4;
      local_2c8 = 0x3f800000;
      local_2c4 = 0x3f800000;
      local_2a0 = local_2c0;
      local_180 = local_2e0;
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x36);
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x1d);
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x39);
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,1);
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x33);
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x34);
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x2f);
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x38);
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x19);
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x36);
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,1);
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,1);
      FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x36,
                   (uint *)(param_2 + 0x310),(uint *)0x1d3);
      FUN_100c2ed2(param_2 + 0x18,local_d0);
      break;
    case 0x11:
      param_1 = (uint *)FUN_10070ac1(param_1,0xf0000,2,0,param_2,param_3,'\0','\0');
      puVar2 = (uint *)(param_2 + 0x310);
      uVar6 = *puVar2;
      if ((((uVar6 >> 0x1e & 1) == 0) && (uVar6 != *(uint *)(param_2 + 0x3c0))) &&
         (uVar6 != *(uint *)(param_2 + 0x3f0))) {
        local_15 = '\0';
      }
      else {
        local_15 = '\x01';
        local_50 = FUN_100c2e34(local_d4,4,'\0');
        local_4c = 0xe4;
        puVar2 = &local_50;
        local_40 = 0xffffffff;
        local_3c = 0xffffffff;
        local_38 = 0xffffffff;
        local_34 = 0xffffffff;
      }
      puVar3 = local_2c;
      puVar5 = local_400;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar2 = local_400;
      puVar5 = local_3e0;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      if ((*puVar3 & 0x10000) != 0) {
        local_50 = *(uint *)(param_2 + 0xa8);
        local_20 = 0x3f800000;
        local_40 = 0x3f800000;
        local_4c = 0xe4;
        local_3c = 0xffffffff;
        local_38 = 0xffffffff;
        local_34 = 0xffffffff;
        FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x36);
        puVar3 = local_2c;
      }
      if ((*puVar3 & 0x20000) != 0) {
        if (local_15 == '\0') {
          local_14 = *(uint **)(param_2 + 0x470);
        }
        else {
          local_14 = (uint *)0x0;
        }
        FUN_10072b96(local_1c,param_2,param_3,(uint)local_14 | 0x38,(uint *)0x102,local_3e0);
        puVar3 = local_2c;
      }
      if ((*puVar3 & 0x40000) != 0) {
        if (local_15 == '\0') {
          uVar6 = *(uint *)(param_2 + 0x470);
        }
        else {
          uVar6 = 0;
        }
        FUN_10072b96(local_1c,param_2,param_3,uVar6 | 0x36,(uint *)0x104,local_3e0);
        puVar3 = local_2c;
      }
      if ((*puVar3 & 0x80000) != 0) {
        if (local_15 == '\0') {
          uVar6 = *(uint *)(param_2 + 0x470);
        }
        else {
          uVar6 = 0;
        }
        FUN_10072b96(local_1c,param_2,param_3,uVar6 | 0x36,(uint *)0x108,local_3e0);
      }
      puVar2 = param_1;
      if (local_15 != '\0') {
        puVar2 = local_3e0;
        uVar6 = *(uint *)(param_2 + 0x470) | 0x36;
        goto LAB_10071397;
      }
      break;
    case 0x13:
      param_1 = (uint *)FUN_10070ac1(param_1,0xf0000,1,0,param_2,param_3,'\0','\0');
      puVar2 = (uint *)(param_2 + 0x3c0);
      uVar6 = *(uint *)(param_2 + 0x470) | 0x1a;
LAB_10071397:
      FUN_10072b96(local_1c,param_2,param_3,uVar6,(uint *)(param_2 + 0x310),puVar2);
      puVar2 = param_1;
      break;
    case 0x14:
    case 0x15:
      local_24 = (uint *)(param_2 + 0x470);
      local_14 = param_1;
      if ((*param_1 & 0x10000) != 0) {
        param_1 = (uint *)FUN_10070ac1(param_1,0x10000,2,0,param_2,param_3,'\0','\0');
        FUN_10072b96(local_1c,param_2,param_3,*local_24 | 0x11,(uint *)0x101,
                     (uint *)(param_2 + 0x310));
      }
      if ((*local_2c & 0x20000) != 0) {
        param_1 = (uint *)FUN_10070ac1(local_14,0x20000,2,1,param_2,param_3,'\0','\0');
        FUN_10072b96(local_1c,param_2,param_3,*local_24 | 0x11,(uint *)0x102,
                     (uint *)(param_2 + 0x310));
      }
      if ((*local_2c & 0x40000) != 0) {
        param_1 = (uint *)FUN_10070ac1(local_14,0x40000,2,2,param_2,param_3,'\0','\0');
        FUN_10072b96(local_1c,param_2,param_3,*local_24 | 0x11,(uint *)0x104,
                     (uint *)(param_2 + 0x310));
      }
      puVar2 = param_1;
      if (((*local_2c & 0x80000) != 0) && (local_28 == 0x14)) {
        puVar2 = (uint *)FUN_10070ac1(local_14,0x80000,2,3,param_2,param_3,'\0','\0');
        FUN_10072b96(local_1c,param_2,param_3,*local_24 | 0x11,(uint *)0x108,
                     (uint *)(param_2 + 0x310));
      }
      break;
    case 0x16:
    case 0x17:
    case 0x18:
      local_14 = param_1;
      if ((*param_1 & 0x10000) != 0) {
        param_1 = (uint *)FUN_10070ac1(param_1,0x10000,2,0,param_2,param_3,'\0','\0');
        FUN_100c4090(*(byte *)(param_2 + 0x3f4),0xa4);
        FUN_100c4090(*(byte *)(param_2 + 0x3c4),0xa4);
        FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x10,(uint *)0x101,
                     (uint *)(param_2 + 0x310));
      }
      if ((*local_2c & 0x20000) != 0) {
        param_1 = (uint *)FUN_10070ac1(local_14,0x20000,2,1,param_2,param_3,'\0','\0');
        FUN_100c4090(*(byte *)(param_2 + 0x3f4),0xa4);
        FUN_100c4090(*(byte *)(param_2 + 0x3c4),0xa4);
        FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x10,(uint *)0x102,
                     (uint *)(param_2 + 0x310));
      }
      if (((*local_2c & 0x40000) != 0) && ((local_28 == 0x17 || (local_28 == 0x16)))) {
        param_1 = (uint *)FUN_10070ac1(local_14,0x40000,2,2,param_2,param_3,'\0','\0');
        FUN_100c4090(*(byte *)(param_2 + 0x3f4),0xa4);
        FUN_100c4090(*(byte *)(param_2 + 0x3c4),0xa4);
        FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x10,(uint *)0x104,
                     (uint *)(param_2 + 0x310));
      }
      puVar2 = param_1;
      if (((*local_2c & 0x80000) != 0) && (local_28 == 0x16)) {
        puVar2 = (uint *)FUN_10070ac1(local_14,0x80000,2,3,param_2,param_3,'\0','\0');
        FUN_100c4090(*(byte *)(param_2 + 0x3f4),0xa4);
        FUN_100c4090(*(byte *)(param_2 + 0x3c4),0xa4);
        FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x10,(uint *)0x108,
                     (uint *)(param_2 + 0x310));
      }
    }
switchD_10070c94_caseD_3:
    param_1 = puVar2;
    FUN_10069345(param_2,param_3);
    if (local_2d != '\0') {
      return;
    }
  } while( true );
}

