/*
 * FUN_10071a58 at 10071a58
 * undefined FUN_10071a58(void)
 * Address ranges: 10071a58-10073743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

uint * FUN_10071a58(uint *param_1,uint *param_2,undefined4 param_3,short *param_4,ulonglong param_5,
                   ulonglong param_6)

{
  short *psVar1;
  short *psVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte bVar5;
  short sVar6;
  byte *pbVar7;
  uint3 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint *puVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint *extraout_w10;
  undefined4 *extraout_w11;
  uint *extraout_w14;
  uint *extraout_w14_00;
  uint *extraout_w14_01;
  uint *extraout_w14_02;
  uint *extraout_w14_03;
  uint *extraout_w15;
  uint *extraout_w15_00;
  uint *extraout_w15_01;
  ulonglong extraout_x15;
  ulonglong uVar23;
  uint *puVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  float fVar27;
  float extraout_s17;
  float extraout_s18;
  float extraout_s18_00;
  float extraout_s19;
  uint *local_120;
  undefined4 uStack_11c;
  uint local_118;
  uint *local_114;
  uint *local_110;
  uint *local_10c;
  uint *local_108;
  uint *local_104;
  uint *local_100;
  uint *local_fc;
  uint *local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  uint *local_d0;
  uint uStack_cc;
  uint *local_c8;
  uint *local_c4;
  uint *local_c0;
  uint *puStack_bc;
  undefined4 local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined8 uStack_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint *local_70;
  uint *puStack_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
  puVar14 = (uint *)param_6;
  sVar6 = *param_4;
  puVar13 = (uint *)(param_4 + 2);
  param_6 = param_6 & 0xffffffff;
  local_c0 = param_1;
  puStack_bc = param_2;
  local_b8 = param_3;
  local_70 = param_1;
  puStack_6c = param_2;
  local_68 = param_3;
  switch(sVar6) {
  case 1:
    uVar16 = FUN_10070c20(param_1,param_2,*puVar13,param_6);
    local_120 = (uint *)CONCAT31(local_120._1_3_,1);
    FUN_10070d50(uVar16,param_2,param_3,0,*(undefined4 *)(param_4 + 4),
                 *(undefined8 *)(param_2 + 0x90),*puVar13 >> 7 & 0x2000,*puVar13 >> 0x18 & 0xf);
    break;
  case 2:
  case 3:
    fVar27 = 1.0;
    if (sVar6 != 2) {
      fVar27 = -1.0;
    }
    uVar21 = *(byte *)((int)param_4 + 0xb) & 0xf;
    local_c8 = *(uint **)(&DAT_1012c880 + uVar21 * 8);
    uVar11 = *(byte *)((int)param_4 + 0xf) & 0xf;
    local_c4 = *(uint **)(&DAT_1012c880 + uVar11 * 8);
    local_c0 = (uint *)(*(float *)(&DAT_1012c884 + uVar11 * 8) * fVar27 +
                       *(float *)(&DAT_1012c884 + uVar21 * 8));
    uVar16 = FUN_10070c20(param_1,param_2,*puVar13,param_6);
    local_d0 = (uint *)0x0;
    uStack_cc = uStack_cc & 0xffffff00;
    local_120 = (uint *)((uint)local_120 & 0xffffff00);
    uVar16 = FUN_10070d50(uVar16,param_2,param_3,0,*(undefined4 *)(param_4 + 4),
                          (ulonglong)uStack_cc << 0x20,0,0);
    local_d0 = (uint *)0x0;
    uStack_cc = uStack_cc & 0xffffff00;
    local_120 = (uint *)((uint)local_120 & 0xffffff00);
    FUN_10070d50(uVar16,param_2,param_3,1,*(undefined4 *)(param_4 + 6),(ulonglong)uStack_cc << 0x20,
                 0,0);
    uVar21 = 0x80000000;
    if (sVar6 != 3) {
      uVar21 = 0;
    }
    bVar9 = (float)local_c0 != 0.0;
    param_2[0xa0] = uVar21 ^ param_2[0xa0];
    uVar21 = param_2[0x8d];
    if ((uVar21 != 0) || (bVar9)) {
      uVar11 = 0;
    }
    else {
      uVar11 = param_2[0x8c];
    }
    local_d0 = param_2 + 0x91;
    uVar10 = FUN_100efc98(0xe4,(char)*local_d0);
    if (((float)local_c8 == 1.0) && ((float)local_c4 == 1.0)) {
      local_110 = param_2 + 0x98;
      local_108 = (uint *)0x0;
      local_114 = param_2 + 0x90;
      local_120 = param_2;
      uStack_11c = param_3;
      local_118 = uVar11;
      local_10c = extraout_w14;
      FUN_100ef6a8(&local_120,0x1c);
    }
    else {
      puVar13 = param_2 + 0x90;
      uVar15 = FUN_100efd00(extraout_x15 & 0xffffffff);
      local_114 = puVar13;
      if ((float)local_c8 == (float)local_c4) {
        FUN_1006a420(uVar15,&local_90,param_2,uVar15 & 0xff);
        local_108 = (uint *)0x0;
        local_118 = 0;
        local_120 = param_2;
        uStack_11c = param_3;
        FUN_100ef6a8(&local_120,0x1c);
        local_110 = (uint *)(uVar10 & 0xff | 0x100);
        local_118 = uVar11 | 0x38;
        local_108 = &local_90;
        local_104 = (uint *)0x0;
        local_120 = param_2;
        uStack_11c = param_3;
        local_114 = puVar13;
        local_10c = puVar13;
        FUN_100ef6a8(&local_120,0x20);
      }
      else {
        puVar13 = local_c4;
        if ((float)local_c4 == 1.0) {
          puVar13 = local_c8;
        }
        FUN_1006a420(puVar13,uVar15,&local_90,param_2,uVar15 & 0xff);
        local_118 = uVar11 | 0x32;
        local_110 = &local_90;
        local_108 = extraout_w10;
        if (extraout_s18 == extraout_s19) {
          local_108 = extraout_w14_00;
        }
        local_104 = (uint *)0x0;
        local_10c = extraout_w14_00;
        if (extraout_s18 == extraout_s19) {
          local_10c = extraout_w10;
        }
        local_120 = param_2;
        uStack_11c = param_3;
        FUN_100ef6a8(&local_120,0x20);
      }
    }
    if (bVar9) {
      uVar15 = FUN_100efd00((char)*local_d0);
      FUN_1006a420(local_c0,uVar15,&local_90,param_2,uVar15 & 0xff);
      if (uVar21 == 0) {
        local_118 = param_2[0x8c];
      }
      else {
        local_118 = 0;
      }
      local_110 = (uint *)(uVar10 & 0xff | 0x100);
      local_108 = &local_90;
      local_104 = (uint *)0x0;
      local_120 = param_2;
      uStack_11c = param_3;
      local_114 = param_2 + 0x90;
      local_10c = param_2 + 0x90;
      FUN_100ef6a8(&local_120,0x20);
    }
    goto LAB_10071dbc;
  case 4:
    uVar16 = FUN_10070c20(param_1,param_2,*puVar13,param_6);
    if (param_2[0x8d] == 0) {
      uVar21 = param_2[0x8c];
    }
    else {
      uVar21 = 0;
    }
    FUN_10071500(uVar16,param_2,param_3,*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 6),
                 *(undefined4 *)(param_4 + 8));
    local_118 = uVar21 | 0x32;
    local_10c = param_2 + 0xa0;
    local_114 = param_2 + 0x90;
    local_108 = param_2 + 0xa8;
    local_110 = param_2 + 0x98;
    local_104 = (uint *)0x0;
    local_120 = param_2;
    uStack_11c = param_3;
    FUN_100ef6a8(&local_120,0x20);
    goto LAB_10072170;
  case 5:
    psVar1 = param_4 + 4;
    psVar2 = param_4 + 6;
    local_c4 = *(uint **)(&DAT_1012c884 + (*(byte *)((int)param_4 + 0xb) & 0xf) * 8);
    local_c8 = *(uint **)(&DAT_1012c884 + (*(byte *)((int)param_4 + 0xf) & 0xf) * 8);
    uVar16 = FUN_10070c20(param_1,param_2,*puVar13,param_6);
    if (param_2[0x8d] == 0) {
      uVar21 = param_2[0x8c];
    }
    else {
      uVar21 = 0;
    }
    if ((extraout_s18_00 == 1.0) && (extraout_s17 == 1.0)) {
      uVar8 = uStack_cc._1_3_;
      if (((float)local_c4 == 0.0) && ((float)local_c8 == 0.0)) {
        local_d0 = (uint *)0x0;
        uStack_cc = (uint)uStack_cc._1_3_ << 8;
        local_120 = (uint *)((uint)local_120._1_3_ << 8);
        uVar16 = FUN_10070d50(uVar16,param_2,param_3,0,*(undefined4 *)psVar1,
                              (ulonglong)uVar8 << 0x28,0,0);
        local_d0 = (uint *)0x0;
        uStack_cc = uStack_cc & 0xffffff00;
        local_120 = (uint *)((uint)local_120 & 0xffffff00);
        FUN_10070d50(uVar16,param_2,param_3,1,*(undefined4 *)psVar2,(ulonglong)uStack_cc << 0x20,0,0
                    );
        local_10c = param_2 + 0xa0;
        local_108 = (uint *)0x0;
        local_114 = param_2 + 0x90;
        local_110 = param_2 + 0x98;
        local_118 = uVar21 | 0x38;
        local_120 = param_2;
        uStack_11c = param_3;
        FUN_100ef6a8(&local_120,0x1c);
      }
      else if ((ABS((float)local_c4) == 1.0) && ((float)local_c8 == 0.0)) {
        local_d0 = (uint *)0x0;
        uStack_cc = (uint)uStack_cc._1_3_ << 8;
        local_120 = (uint *)((uint)local_120._1_3_ << 8);
        uVar16 = FUN_10070d50(uVar16,param_2,param_3,0,*(undefined4 *)psVar1,
                              (ulonglong)uVar8 << 0x28,0,0);
        local_d0 = (uint *)0x0;
        uStack_cc = uStack_cc & 0xffffff00;
        local_120 = (uint *)((uint)local_120 & 0xffffff00);
        FUN_10070d50(uVar16,param_2,param_3,1,*(undefined4 *)psVar2,(ulonglong)uStack_cc << 0x20,0,0
                    );
        local_10c = param_2 + 0xa0;
        local_108 = param_2 + 0xa8;
        local_104 = (uint *)0x0;
        local_114 = param_2 + 0x90;
        *(undefined8 *)(param_2 + 0xaa) = *(undefined8 *)(param_2 + 0xa2);
        *(undefined8 *)local_108 = *(undefined8 *)local_10c;
        *(undefined8 *)(param_2 + 0xae) = *(undefined8 *)(param_2 + 0xa6);
        *(undefined8 *)(param_2 + 0xac) = *(undefined8 *)(param_2 + 0xa4);
        uVar11 = 0x80000000;
        if (0.0 <= (float)local_c4) {
          uVar11 = 0;
        }
        *local_108 = uVar11 ^ *local_108;
        local_118 = uVar21 | 0x32;
        local_110 = param_2 + 0x98;
        local_120 = param_2;
        uStack_11c = param_3;
        FUN_100ef6a8(&local_120,0x20);
      }
      else {
        if ((ABS((float)local_c8) != 1.0) || ((float)local_c4 != 0.0)) goto LAB_100720a8;
        local_d0 = (uint *)0x0;
        uStack_cc = (uint)uStack_cc._1_3_ << 8;
        local_120 = (uint *)((uint)local_120._1_3_ << 8);
        uVar16 = FUN_10070d50(uVar16,param_2,param_3,0,*(undefined4 *)psVar1,
                              (ulonglong)uVar8 << 0x28,0,0);
        local_d0 = (uint *)0x0;
        uStack_cc = uStack_cc & 0xffffff00;
        local_120 = (uint *)((uint)local_120 & 0xffffff00);
        FUN_10070d50(uVar16,param_2,param_3,1,*(undefined4 *)psVar2,(ulonglong)uStack_cc << 0x20,0,0
                    );
        local_110 = param_2 + 0x98;
        local_108 = param_2 + 0xa8;
        local_104 = (uint *)0x0;
        local_10c = param_2 + 0xa0;
        *(undefined8 *)(param_2 + 0xaa) = *(undefined8 *)(param_2 + 0x9a);
        *(undefined8 *)local_108 = *(undefined8 *)local_110;
        *(undefined8 *)(param_2 + 0xae) = *(undefined8 *)(param_2 + 0x9e);
        *(undefined8 *)(param_2 + 0xac) = *(undefined8 *)(param_2 + 0x9c);
        uVar11 = 0x80000000;
        if (0.0 <= (float)local_c8) {
          uVar11 = 0;
        }
        *local_108 = uVar11 ^ *local_108;
        local_118 = uVar21 | 0x32;
        local_114 = param_2 + 0x90;
        local_120 = param_2;
        uStack_11c = param_3;
        FUN_100ef6a8(&local_120,0x20);
      }
    }
    else {
LAB_100720a8:
      FUN_100713d8(uVar16,param_2,param_3,*(undefined4 *)psVar1,*(undefined4 *)psVar2);
      local_10c = param_2 + 0xa0;
      local_108 = (uint *)0x0;
      local_114 = param_2 + 0x90;
      local_110 = param_2 + 0x98;
      local_118 = uVar21 | 0x38;
      local_120 = param_2;
      uStack_11c = param_3;
      FUN_100ef6a8(&local_120,0x1c);
    }
    goto LAB_10071dbc;
  default:
    goto switchD_10071ac4_caseD_6;
  case 8:
  case 9:
    uVar16 = FUN_10070c20(param_1,param_2,*puVar13,param_6);
    FUN_100713d8(uVar16,param_2,param_3,*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 6));
    uVar21 = 0x10;
    if (sVar6 != 8) {
      uVar21 = 0x11;
    }
    if (param_2[0x8d] == 0) {
      local_118 = param_2[0x8c];
    }
    else {
      local_118 = 0;
    }
    local_10c = param_2 + 0xa0;
    local_108 = (uint *)0x0;
    local_114 = param_2 + 0x90;
    local_110 = param_2 + 0x98;
    local_118 = local_118 | uVar21;
    local_120 = param_2;
    uStack_11c = param_3;
    FUN_100ef6a8(&local_120,0x1c);
    goto LAB_10071dbc;
  case 0x12:
    uVar11 = *(uint *)(param_4 + 4);
    uVar21 = uVar11 & 0xf000000;
    iVar18 = 0xc;
    if (uVar21 == 0x6000000) {
      iVar18 = 8;
    }
    uVar22 = *(undefined4 *)(iVar18 + (int)puVar13);
    uVar12 = *(undefined4 *)(param_4 + 6);
    if (uVar21 == 0x6000000) {
      uVar12 = *(undefined4 *)(param_4 + 8);
    }
    uVar16 = FUN_10070c20(param_1,param_2,*puVar13,param_6);
    if (uVar21 == 0x6000000) {
      uVar11 = uVar11 & 0xf0ffffff;
    }
    FUN_10071500(uVar16,param_2,param_3,uVar11,uVar12,uVar22);
    uVar21 = param_2[0x8d];
    uVar20 = (undefined1)param_2[0x91];
    local_b0 = FUN_100ee580(param_2,4,0);
    puVar13 = param_2 + 0xa8;
    uStack_ac = CONCAT31(uStack_ac._1_3_,uVar20);
    uStack_98 = 0xffffffff;
    uStack_94 = 0xffffffff;
    local_a0 = -1;
    uStack_9c = 0xffffffff;
    local_108 = (uint *)0x0;
    *puVar13 = *puVar13 ^ 0x80000000;
    local_110 = param_2 + 0xa0;
    local_114 = &local_b0;
    local_118 = 0;
    local_120 = param_2;
    uStack_11c = param_3;
    local_10c = puVar13;
    FUN_100ef6a8(&local_120,0x1c);
    *puVar13 = *puVar13 ^ 0x80000000;
    if (uVar21 == 0) {
      uVar21 = param_2[0x8c];
    }
    else {
      uVar21 = 0;
    }
    uVar11 = FUN_100efc98(0xe4,(undefined1)uStack_ac);
    local_100 = (uint *)0x0;
    local_110 = (uint *)(uVar11 & 0xff | 0x100);
    local_118 = uVar21 | 0x32;
    local_10c = &local_b0;
    local_120 = param_2;
    uStack_11c = param_3;
    local_114 = extraout_w15;
    local_108 = extraout_w14_01;
    local_104 = puVar13;
    FUN_100ef6a8(&local_120,0x24);
    goto LAB_10072170;
  case 0x40:
    uVar21 = *puVar13 & 0x1fff;
    local_d0 = (uint *)(*puVar13 >> 0x10 & 0xf);
    if (*(char *)(param_2[0x39] + 0x126) == '\x04') {
      puVar13 = (uint *)(param_4 + 4);
      uVar11 = *puVar13;
      puVar14 = (uint *)((uVar11 & 0x1fff) + 5 | 0x410100);
      puVar24 = puVar14;
      if ((uVar11 & 0x70000000) == 0) {
        param_1 = (uint *)FUN_10070b90(param_1,param_2,uVar11 & 0x1fff);
        puVar24 = param_1;
      }
      if ((int)param_6 == 0) {
        param_6 = FUN_10070b90(param_1,param_2,uVar21);
      }
      if ((uVar11 & 0xf000000) == 0xa000000) {
        FUN_10073a30(&local_c0,param_6 & 0xffffffff,puVar24,uVar11 >> 0x10 & 0xff,0xff,0);
      }
      else {
        local_108 = (uint *)&DAT_000000e4;
        local_104 = (uint *)0x0;
        local_110 = local_d0;
        local_114 = (uint *)param_6;
        local_118 = 0x36;
        local_120 = param_2;
        uStack_11c = param_3;
        local_10c = puVar14;
        FUN_100ef510(&local_120,0x20);
      }
    }
    else {
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)FUN_10070bd8(param_1,param_2,uVar21);
      }
      local_10c = (uint *)(uVar21 + 5 | 0x410100);
      local_108 = (uint *)&DAT_000000e4;
      local_104 = (uint *)0x0;
      local_110 = (uint *)0xf;
      local_118 = 0x2036;
      local_120 = param_2;
      uStack_11c = param_3;
      local_114 = puVar14;
      FUN_100ef510(&local_120,0x20);
    }
    goto LAB_100736cc;
  case 0x41:
    uVar21 = (*puVar13 & 0x1fff) + 5 | 0x410100;
    puVar14 = (uint *)FUN_100ee580(param_2,4,0);
    local_ec = 0;
    local_f4 = 0x80000000;
    local_f0 = 0x80000000;
    local_fc = (uint *)0x80000000;
    local_f8 = (uint *)0x80000000;
    local_100 = (uint *)0xe4;
    local_104 = (uint *)param_2[0x25];
    local_118 = 1;
    local_108 = (uint *)0x1a4;
    local_110 = (uint *)0x7;
    local_120 = param_2;
    uStack_11c = param_3;
    local_114 = puVar14;
    local_10c = (uint *)uVar21;
    FUN_100ef510(&local_120,0x38);
    local_100 = (uint *)0x55;
    local_fc = (uint *)0x0;
    local_118 = 0x3c;
    local_108 = (uint *)0x0;
    local_110 = (uint *)0x1;
    local_120 = param_2;
    uStack_11c = param_3;
    local_114 = puVar14;
    local_10c = puVar14;
    local_104 = puVar14;
    FUN_100ef510(&local_120,0x28);
    local_100 = (uint *)0xaa;
    local_fc = (uint *)0x0;
    local_108 = (uint *)0x0;
    local_110 = (uint *)0x1;
    local_118 = 0x3c;
    local_120 = param_2;
    uStack_11c = param_3;
    local_114 = puVar14;
    local_10c = puVar14;
    local_104 = puVar14;
    FUN_100ef510(&local_120,0x28);
    local_110 = (uint *)((uint)puVar14 | 0x10000000);
    local_10c = (uint *)0x0;
    local_114 = (uint *)0xffffffff;
    local_118 = 0x4000d;
    local_108 = (uint *)0x0;
    local_120 = param_2;
    uStack_11c = param_3;
    FUN_100ef510(&local_120,0x1c);
    goto LAB_100736cc;
  case 0x42:
    uVar11 = *puVar13;
    uVar21 = uVar11 & 0x1fff;
    if (*(char *)(param_2[0x39] + 0x126) == '\x04') {
      local_d0 = (uint *)(param_4 + 4);
      uVar10 = *local_d0;
      local_c8 = (uint *)((uint)((param_5 & 0xffffff) >> ((ulonglong)(uVar21 * 3) & 0x3f)) & 7);
      if ((uVar10 & 0x70000000) == 0) {
        param_1 = (uint *)FUN_10070b90(param_1,param_2,uVar10 & 0x1fff);
        puVar13 = param_1;
      }
      else {
        puVar13 = (uint *)((uVar10 & 0x1fff) + 5 | 0x410100);
      }
      uVar15 = FUN_10070b90(param_1,param_2,uVar21);
      uVar4 = uVar10 & 0xf000000;
      uVar25 = uVar15 & 0xffffffff;
      uVar19 = (ulonglong)(uVar10 >> 0x10 & 0xff);
      if (local_c8 == (uint *)0x0) {
        uVar4 = 0;
      }
      if (((undefined1 *)((int)local_c8 + -5) < (undefined1 *)0x2) &&
         (((uint)param_5 >> 0x19 & 1) != 0)) {
        uVar17 = FUN_100ee580(param_2,4,1);
        uVar23 = uVar17 & 0xffffffff;
      }
      else {
        uVar23 = 0;
        uVar17 = uVar15;
      }
      uVar10 = 0x9000000;
      if ((uVar4 + 0xf7000000 & 0xfeffffff) == 0) {
        if (puVar13 == (uint *)uVar15) {
          uVar10 = 0x9000000;
          uVar12 = FUN_100ee580(param_2,4,0);
        }
        else {
          uVar12 = 0;
        }
        uVar22 = 0xaa;
        if (uVar4 != uVar10) {
          uVar22 = 0xff;
        }
        uVar16 = FUN_10073a30(&local_c0,uVar25,puVar13,uVar19 & 0xffffffff,uVar22,uVar12);
        local_118 = CONCAT31(local_118._1_3_,0xe4);
        local_120 = (uint *)0x0;
        FUN_1006a490(uVar16,param_2,local_c8,uVar21,uVar25,uVar23,param_5,param_3);
      }
      else {
        local_118 = CONCAT31(local_118._1_3_,(char)uVar19);
        local_120 = puVar13;
        FUN_1006a490(uVar17,param_2,local_c8,uVar21,uVar25,uVar23,param_5,param_3);
      }
      pbVar7 = (byte *)((int)param_2 + ((int)uVar21 >> 3) + 0x9c);
      *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(uVar11 & 7));
      FUN_100ee638(param_2,uVar23);
      puVar13 = local_d0;
    }
    else {
      uVar15 = FUN_10070bd8(param_1,param_2,uVar21);
      local_120 = (uint *)0x0;
      local_d0 = (uint *)(uVar21 + 5 | 0x410100);
      uStack_cc = CONCAT31(uStack_cc._1_3_,0xe4);
      FUN_10071720(uVar15,param_2,param_3,uVar21,CONCAT44(uStack_cc,uVar21 + 5) | 0x410100,
                   uVar15 & 0xffffffff,param_5,0);
    }
    goto LAB_100736cc;
  case 0x43:
  case 0x44:
    uVar15 = (ulonglong)(*puVar13 & 0x1fff);
    uVar21 = *(uint *)(param_4 + 4);
    puVar13 = (uint *)FUN_10070bd8(param_1,param_2,uVar15);
    iVar18 = (int)uVar15;
    if (((param_5 & 0xffffff) >> ((ulonglong)(uint)(iVar18 * 3) & 0x3f) & 7) == 0) {
      uStack_cc = CONCAT31(uStack_cc._1_3_,0xe4);
      local_120 = (uint *)0x0;
      local_d0 = puVar13;
      FUN_10071720(puVar13,param_2,param_3,uVar15 & 0xffffffff,CONCAT44(uStack_cc,puVar13),puVar13,
                   param_5,0);
    }
    else {
      uVar15 = FUN_10070bd8(puVar13,param_2,uVar21 & 0x1fff);
      local_d0 = (uint *)(iVar18 + 5U | 0x410100);
      uStack_cc = CONCAT31(uStack_cc._1_3_,0xe4);
      local_120 = (uint *)uVar15;
      if (sVar6 != 0x44) {
        local_120 = (uint *)0x0;
      }
      FUN_10071720(uVar15,param_2,param_3,iVar18,CONCAT44(uStack_cc,iVar18 + 5U) | 0x410100,puVar13,
                   param_5,uVar15 & 0xffffffff);
      param_2[0x8d] = 0;
    }
    puVar13 = (uint *)(param_4 + 6);
    goto switchD_10071ac4_caseD_6;
  case 0x45:
  case 0x46:
  case 0x52:
    uVar15 = (ulonglong)(*puVar13 & 0x1fff);
    puVar13 = (uint *)FUN_10070bd8(param_1,param_2,uVar15);
    if (((param_5 & 0xffffff) >> ((ulonglong)(uint)((int)uVar15 * 3) & 0x3f) & 7) == 0) {
      uStack_cc = CONCAT31(uStack_cc._1_3_,0xe4);
      local_120 = (uint *)0x0;
      local_d0 = puVar13;
      FUN_10071720(puVar13,param_2,param_3,uVar15 & 0xffffffff,CONCAT44(uStack_cc,puVar13),puVar13,
                   param_5,0);
    }
    else {
      if (sVar6 == 0x45) {
        uVar20 = 0xe3;
      }
      else {
        uVar20 = 0xe4;
        if (sVar6 == 0x46) {
          uVar20 = 0xd9;
        }
      }
      local_d0 = (uint *)FUN_10070bd8(puVar13,param_2,*(uint *)(param_4 + 4) & 0x1fff);
      uStack_cc = CONCAT31(uStack_cc._1_3_,uVar20);
      local_120 = (uint *)0x0;
      FUN_10071720(local_d0,param_2,param_3,uVar15 & 0xffffffff,CONCAT44(uStack_cc,local_d0),puVar13
                   ,param_5,0);
    }
    break;
  case 0x47:
  case 0x49:
    break;
  case 0x48:
  case 0x54:
    uVar21 = *puVar13 & 0x1fff;
    puVar14 = (uint *)FUN_10070bd8(param_1,param_2,uVar21);
    if (sVar6 == 0x48 && ((param_5 & 0xffffff) >> ((ulonglong)(uVar21 * 3) & 0x3f) & 7) == 0) {
      uStack_cc = CONCAT31(uStack_cc._1_3_,0xe4);
      local_120 = (uint *)0x0;
      local_d0 = puVar14;
      FUN_10071720(puVar14,param_2,param_3,uVar21,CONCAT44(uStack_cc,puVar14),puVar14,param_5,0);
    }
    else {
      uVar16 = FUN_10070cc0(puVar14,&local_d0,param_2,*(undefined4 *)(param_4 + 4),0xf);
      local_120 = (uint *)((uint)local_120 & 0xffffff00);
      uVar16 = FUN_10070d50(uVar16,param_2,param_3,0,*(undefined4 *)(param_4 + 4),
                            CONCAT44(uStack_cc,local_d0),0,0);
      local_c0 = (uint *)(uVar21 + 5);
      uVar15 = ZEXT48(local_c0);
      local_c8 = (uint *)(uVar21 + 4);
      puVar24 = param_2 + 0x98;
      local_108 = puVar24;
      if (sVar6 == 0x48) {
        local_90 = FUN_100ee580(param_2,4,0);
        uStack_8c = CONCAT31(uStack_8c._1_3_,0xe4);
        uStack_78 = 0xffffffff;
        uStack_74 = 0xffffffff;
        local_80 = 0xffffffff;
        uStack_7c = 0xffffffff;
        FUN_100738b8(&local_70,&local_90,local_c8,uVar15 & 0xffffffff,0xffffffff);
        local_104 = (uint *)0x0;
        bVar5 = (byte)param_2[0x99];
        local_10c = (uint *)((bVar5 >> 4 & 3) << 2 | (bVar5 & 0x30 | 0x1000) >> 4 | bVar5 & 0xf0);
        local_110 = &local_90;
        local_114 = (uint *)0x10c;
        local_118 = 0x36;
        local_120 = param_2;
        uStack_11c = param_3;
        uVar16 = FUN_100ef6a8(&local_120,0x20);
        local_120 = (uint *)0x0;
        FUN_10071720(uVar16,param_2,param_3,uVar21,CONCAT44(uStack_8c,local_90),puVar14,param_5,0);
      }
      else {
        FUN_10070c20(uVar16,param_2,*puVar13,0);
        puVar13 = param_2 + 0x90;
        FUN_100738b8(&local_70,puVar13,local_c8,local_c0,0xffffffff);
        uStack_ac = uStack_ac & 0xffffff00;
        uStack_98 = 0xffffffff;
        uStack_94 = 0xffffffff;
        local_a0 = -1;
        uStack_9c = 0xffffffff;
        local_60 = CONCAT35(local_60._5_3_,0xe400000000);
        *puVar24 = param_2[0x90];
        *(undefined1 *)(param_2 + 0x99) = 2;
        param_2[0x9c] = 0xffffffff;
        param_2[0x9d] = 0xffffffff;
        param_2[0x9e] = 0xffffffff;
        param_2[0x9f] = 0xffffffff;
        local_b0 = 0x20010c00;
        local_90 = param_2[0x24];
        uStack_8c = CONCAT31(uStack_8c._1_3_,0xe4);
        local_50 = 0x7fffffff;
        uStack_4c = 0xffffffff;
        uStack_48 = 0xffffffff;
        local_44 = 0xffffffff;
        local_114 = (uint *)0x101;
        local_118 = 0xe;
        local_60 = CONCAT44(local_60._4_4_,local_90);
        local_80 = 0x3f800000;
        uStack_7c = 0xffffffff;
        uStack_78 = 0xffffffff;
        uStack_74 = 0xffffffff;
        local_100 = (uint *)0x0;
        local_10c = (uint *)0x100;
        local_120 = param_2;
        uStack_11c = param_3;
        local_110 = puVar13;
        local_104 = puVar24;
        FUN_100ef6a8(&local_120,0x24);
        local_108 = (uint *)&local_60;
        local_114 = (uint *)0x102;
        local_118 = 1;
        local_104 = (uint *)0x0;
        local_120 = param_2;
        uStack_11c = param_3;
        local_110 = puVar13;
        local_10c = puVar24;
        FUN_100ef6a8(&local_120,0x20);
        local_104 = &local_90;
        local_100 = (uint *)0x0;
        local_114 = &local_b0;
        local_118 = 0x37;
        local_10c = (uint *)0x100;
        local_120 = param_2;
        uStack_11c = param_3;
        local_110 = puVar24;
        local_108 = puVar24;
        FUN_100ef6a8(&local_120,0x24);
      }
    }
    break;
  case 0x4a:
  case 0x56:
    uVar21 = *puVar13 & 0x1fff;
    puVar14 = (uint *)FUN_10070bd8(param_1,param_2,uVar21);
    if (sVar6 == 0x4a && ((param_5 & 0xffffff) >> ((ulonglong)(uVar21 * 3) & 0x3f) & 7) == 0) {
      uStack_cc = CONCAT31(uStack_cc._1_3_,0xe4);
      local_120 = (uint *)0x0;
      local_d0 = puVar14;
      FUN_10071720(puVar14,param_2,param_3,uVar21,CONCAT44(uStack_cc,puVar14),puVar14,param_5,0);
    }
    else {
      uVar16 = FUN_10070cc0(puVar14,&local_d0,param_2,*(undefined4 *)(param_4 + 4),0xf);
      local_120 = (uint *)((uint)local_120 & 0xffffff00);
      uVar16 = FUN_10070d50(uVar16,param_2,param_3,0,*(undefined4 *)(param_4 + 4),
                            CONCAT44(uStack_cc,local_d0),0,0);
      local_c0 = param_2 + 0x90;
      if (sVar6 == 0x4a) {
        local_90 = FUN_100ee580(param_2,4,1);
        uStack_8c = CONCAT31(uStack_8c._1_3_,0xe4);
        uVar16 = 0xffffffffffffffff;
        uVar26 = 0xffffffffffffffff;
        local_60 = CONCAT44(uStack_8c,local_90);
      }
      else {
        FUN_10070c20(uVar16,param_2,*puVar13,0);
        uStack_88 = *(undefined8 *)(local_c0 + 2);
        local_60 = *(undefined8 *)local_c0;
        uVar26 = *(undefined8 *)(local_c0 + 6);
        uVar16 = *(undefined8 *)(local_c0 + 4);
      }
      uStack_48 = (undefined4)uVar26;
      local_44 = (undefined4)((ulonglong)uVar26 >> 0x20);
      local_50 = (int)uVar16;
      uStack_4c = (undefined4)((ulonglong)uVar16 >> 0x20);
      uStack_58 = uStack_88;
      FUN_100738b8(&local_70,&local_60,uVar21 + 3,uVar21 + 4,uVar21 + 5);
      if (sVar6 == 0x4a) {
        local_104 = (uint *)0x0;
        bVar5 = (byte)param_2[0x99];
        local_108 = param_2 + 0x98;
        local_10c = (uint *)(((uint)(bVar5 >> 6) | (uint)(bVar5 >> 6) << 2) << 2 |
                             (bVar5 | 0x4000) >> 6 | bVar5 & 0xc0);
        local_110 = (uint *)&local_60;
        local_114 = (uint *)0x108;
        local_118 = 0x36;
        local_120 = param_2;
        uStack_11c = param_3;
        uVar16 = FUN_100ef6a8(&local_120,0x20);
        uStack_cc = CONCAT31(uStack_cc._1_3_,0xe4);
        local_120 = (uint *)0x0;
        local_d0 = (uint *)local_60;
        FUN_10071720(uVar16,param_2,param_3,uVar21,CONCAT44(uStack_cc,(uint *)local_60),puVar14,
                     param_5,0);
      }
      else {
        uStack_8c = CONCAT31(uStack_8c._1_3_,0xe4);
        local_90 = param_2[0x24];
        uStack_74 = 0xffffffff;
        local_80 = 0x3f800000;
        uStack_7c = 0xffffffff;
        uStack_78 = 0xffffffff;
        local_10c = &local_90;
        local_108 = (uint *)0x0;
        local_110 = local_c0;
        local_114 = (uint *)0x108;
        local_118 = 0x36;
        local_120 = param_2;
        uStack_11c = param_3;
        FUN_100ef6a8(&local_120,0x1c);
      }
      FUN_100ee638(param_2,(uint *)local_60);
    }
    break;
  case 0x4c:
  case 0x4d:
    local_b0 = 0;
    uStack_ac = uStack_ac & 0xffffff00;
    uStack_98 = 0xffffffff;
    uStack_94 = 0xffffffff;
    local_a0 = -1;
    uStack_9c = 0xffffffff;
    local_c8 = (uint *)(*puVar13 & 0x1fff);
    if (((param_5 & 0xffffff) >> ((ulonglong)(uint)((int)local_c8 * 3) & 0x3f) & 7) != 0) {
      uVar16 = FUN_10070cc0(param_1,&local_d0,param_2,*(undefined4 *)(param_4 + 4),0xf);
      local_120 = (uint *)((uint)local_120 & 0xffffff00);
      uVar16 = FUN_10070d50(uVar16,param_2,param_3,0,*(undefined4 *)(param_4 + 4),
                            CONCAT44(uStack_cc,local_d0),0,0);
      FUN_10070c20(uVar16,param_2,*puVar13,0);
      local_c4 = param_2 + 0x90;
      local_c0 = (uint *)((int)local_c8 + 5);
      local_d0 = local_c8 + 1;
      puVar3 = (undefined1 *)((int)local_c8 + 3);
      FUN_100738b8(&local_70,local_c4,puVar3,local_d0,local_c0);
      uVar16 = FUN_100ee580(param_2,4,1);
      uStack_ac = CONCAT31(uStack_ac._1_3_,0xe4);
      local_114 = (uint *)uVar16;
      local_b0 = (uint)local_114;
      if (sVar6 == 0x4c) {
        uVar16 = FUN_10070cc0(uVar16,&local_d0,param_2,*(undefined4 *)(param_4 + 6),0xf);
        local_120 = (uint *)((uint)local_120 & 0xffffff00);
        FUN_10070d50(uVar16,param_2,param_3,1,*(undefined4 *)(param_4 + 6),
                     CONCAT44(uStack_cc,local_d0),0,0);
      }
      else {
        local_104 = (uint *)0x0;
        local_10c = (uint *)((uint)puVar3 | 0x410100);
        local_108 = (uint *)0xff;
        local_118 = 0x36;
        local_110 = (uint *)0x1;
        local_120 = param_2;
        uStack_11c = param_3;
        FUN_100ef510(&local_120,0x20);
        local_104 = (uint *)0x0;
        local_10c = (uint *)((uint)local_d0 | 0x410100);
        local_108 = (uint *)0xff;
        local_110 = (uint *)0x2;
        local_118 = 0x36;
        local_114 = (uint *)local_b0;
        local_120 = param_2;
        uStack_11c = param_3;
        FUN_100ef510(&local_120,0x20);
        local_104 = (uint *)0x0;
        local_10c = (uint *)((uint)local_c0 | 0x410100);
        local_108 = (uint *)0xff;
        local_110 = (uint *)0x4;
        local_118 = 0x36;
        local_114 = (uint *)local_b0;
        local_120 = param_2;
        uStack_11c = param_3;
        FUN_100ef510(&local_120,0x20);
        *(undefined8 *)(param_2 + 0xa2) = uStack_a8;
        *(ulonglong *)(param_2 + 0xa0) = CONCAT44(uStack_ac,local_b0);
        *(ulonglong *)(param_2 + 0xa6) = CONCAT44(uStack_94,uStack_98);
        *(ulonglong *)(param_2 + 0xa4) = CONCAT44(uStack_9c,local_a0);
      }
      puVar14 = local_c4;
      puVar24 = param_2 + 0xa0;
      local_108 = local_c4;
      local_104 = (uint *)0x1a4;
      local_110 = local_c4;
      local_10c = (uint *)0x1a4;
      local_118 = 0x10;
      local_114 = (uint *)0x108;
      local_100 = local_c4;
      local_fc = (uint *)0x0;
      local_120 = param_2;
      uStack_11c = param_3;
      FUN_100ef6a8(&local_120,0x28);
      local_fc = (uint *)0x0;
      local_104 = (uint *)(((byte)((byte)param_2[0xa1] >> 4) & 3) << 6 | (byte)param_2[0xa1] & 0x3f
                          | 0x100);
      local_10c = (uint *)0x1a4;
      local_108 = puVar14;
      local_110 = &local_b0;
      local_118 = 0x10;
      local_114 = (uint *)0x108;
      local_120 = param_2;
      uStack_11c = param_3;
      local_100 = puVar24;
      local_d0 = local_104;
      FUN_100ef6a8(&local_120,0x28);
      local_100 = &local_b0;
      local_fc = (uint *)0x0;
      local_108 = &local_b0;
      local_118 = 0;
      local_114 = (uint *)0x108;
      local_104 = (uint *)0x1ff;
      local_110 = &local_b0;
      local_10c = (uint *)0x1ff;
      local_120 = param_2;
      uStack_11c = param_3;
      FUN_100ef6a8(&local_120,0x28);
      local_100 = puVar14;
      local_fc = (uint *)0x0;
      local_108 = &local_b0;
      local_104 = (uint *)0x1ff;
      local_110 = &local_b0;
      local_10c = (uint *)0x1ff;
      local_118 = 0xe;
      local_114 = (uint *)0x108;
      local_120 = param_2;
      uStack_11c = param_3;
      FUN_100ef6a8(&local_120,0x28);
      local_f4 = 0;
      param_2[0xa0] = param_2[0xa0] ^ 0x80000000;
      local_fc = local_d0;
      local_104 = (uint *)0x1a4;
      local_100 = puVar14;
      local_108 = &local_b0;
      local_110 = &local_b0;
      local_10c = (uint *)0x1ff;
      local_114 = (uint *)0x107;
      local_118 = 0x32;
      local_120 = param_2;
      uStack_11c = param_3;
      local_f8 = puVar24;
      FUN_100ef6a8(&local_120,0x30);
      bVar5 = (byte)param_2[0x99];
      local_104 = (uint *)0x0;
      local_10c = (uint *)(((uint)(bVar5 >> 6) | (uint)(bVar5 >> 6) << 2) << 2 |
                           (bVar5 | 0x4000) >> 6 | bVar5 & 0xc0);
      local_110 = &local_b0;
      local_118 = 0x36;
      local_114 = (uint *)0x108;
      local_120 = param_2;
      uStack_11c = param_3;
      local_108 = puVar24;
      FUN_100ef6a8(&local_120,0x20);
      param_1 = (uint *)FUN_100ee638(param_2,local_b0);
    }
    uVar15 = FUN_10070bd8(param_1,param_2,local_c8);
    local_120 = (uint *)0x0;
    FUN_10071720(uVar15,param_2,param_3,local_c8,CONCAT44(uStack_ac,local_b0),uVar15 & 0xffffffff,
                 param_5,0);
    param_2[0x8d] = 0;
    iVar18 = 0xc;
    if (sVar6 != 0x4c) {
      iVar18 = 8;
    }
    puVar13 = (uint *)(iVar18 + (int)puVar13);
    goto switchD_10071ac4_caseD_6;
  case 0x50:
    uVar16 = FUN_10070c20(param_1,param_2,*puVar13,param_6);
    FUN_10071500(uVar16,param_2,param_3,*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 6),
                 *(undefined4 *)(param_4 + 8));
    puVar13 = param_2 + 0x91;
    uVar21 = param_2[0x8d];
    uVar20 = (undefined1)*puVar13;
    local_b0 = FUN_100ee580(param_2,4,0);
    uStack_ac = CONCAT31(uStack_ac._1_3_,uVar20);
    uStack_98 = 0xffffffff;
    uStack_94 = 0xffffffff;
    local_a0 = -1;
    uStack_9c = 0xffffffff;
    uVar15 = FUN_100efd00((char)*puVar13);
    FUN_1006a420(0x3f000000,uVar15,&local_90,param_2,uVar15 & 0xff);
    local_10c = param_2 + 0x98;
    local_108 = (uint *)0x0;
    local_110 = &local_90;
    local_114 = &local_b0;
    local_118 = 0x31;
    local_120 = param_2;
    uStack_11c = param_3;
    FUN_100ef6a8(&local_120,0x1c);
    if (uVar21 == 0) {
      uVar21 = param_2[0x8c];
    }
    else {
      uVar21 = 0;
    }
    puVar13 = param_2 + 0xa0;
    uVar11 = FUN_100efc98(0xe4,(undefined1)uStack_ac);
    local_100 = (uint *)0x0;
    local_110 = (uint *)(uVar11 & 0xff | 0x100);
    local_118 = uVar21 | 0x37;
    local_10c = &local_b0;
    local_120 = param_2;
    uStack_11c = param_3;
    local_114 = extraout_w15_01;
    local_108 = puVar13;
    local_104 = extraout_w14_03;
    FUN_100ef6a8(&local_120,0x24);
    goto LAB_10072170;
  case 0x53:
  case 0x55:
    uVar21 = *puVar13 & 0x1fff;
    local_d0 = (uint *)FUN_10070bd8(param_1,param_2,uVar21);
    uVar16 = FUN_10070cc0(local_d0,&local_c0,param_2,*(undefined4 *)(param_4 + 4),0xf);
    local_120 = (uint *)((uint)local_120 & 0xffffff00);
    uVar16 = FUN_10070d50(uVar16,param_2,param_3,0,*(undefined4 *)(param_4 + 4),
                          CONCAT44(puStack_bc,local_c0),0,0);
    FUN_10070c20(uVar16,param_2,*puVar13,0);
    local_c0 = param_2 + 0x90;
    FUN_100738b8(&local_70,local_c0,uVar21 + 5,0xffffffff,0xffffffff);
    if (sVar6 == 0x53) {
      local_90 = param_2[0x25];
      local_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_8c = CONCAT31(uStack_8c._1_3_,0xe4);
      local_108 = (uint *)0x0;
      local_10c = &local_90;
      local_110 = local_c0;
      local_118 = 0x36;
      local_114 = (uint *)0x106;
      local_120 = param_2;
      uStack_11c = param_3;
      FUN_100ef6a8(&local_120,0x1c);
      bVar5 = (byte)param_2[0x99];
      local_108 = param_2 + 0x98;
      local_104 = (uint *)0x0;
      local_10c = (uint *)(((uint)(bVar5 >> 6) | (uint)(bVar5 >> 6) << 2) << 2 |
                           (bVar5 | 0x4000) >> 6 | bVar5 & 0xc0);
      local_110 = local_c0;
      local_118 = 0x36;
      local_114 = (uint *)0x108;
      local_120 = param_2;
      uStack_11c = param_3;
      uVar16 = FUN_100ef6a8(&local_120,0x20);
      puStack_bc = (uint *)CONCAT31(puStack_bc._1_3_,0xe4);
      local_c0 = (uint *)param_2[0x90];
      local_120 = (uint *)0x0;
      FUN_10071720(uVar16,param_2,param_3,uVar21,CONCAT44(puStack_bc,local_c0),local_d0,param_5,0);
    }
    break;
  case 0x57:
    puVar14 = (uint *)FUN_10070b90(param_1,param_2,*puVar13 & 0x1fff);
    local_108 = (uint *)0x0;
    local_118 = 0xe;
    local_110 = (uint *)0x1;
    local_100 = (uint *)0x55;
    local_fc = (uint *)0x0;
    local_120 = param_2;
    uStack_11c = param_3;
    local_114 = puVar14;
    local_10c = puVar14;
    local_104 = puVar14;
    FUN_100ef510(&local_120,0x28);
    local_f8 = (uint *)0x0;
    local_118 = 1;
    local_100 = (uint *)0xe4;
    local_fc = (uint *)0x7fffffff;
    local_104 = (uint *)param_2[0x24];
    local_108 = (uint *)0x55;
    local_110 = (uint *)0x2;
    local_120 = param_2;
    uStack_11c = param_3;
    local_114 = puVar14;
    local_10c = puVar14;
    FUN_100ef510(&local_120,0x2c);
    local_fc = (uint *)param_2[0x24];
    local_f0 = 0;
    local_100 = (uint *)0x0;
    local_108 = (uint *)0x55;
    local_f8 = (uint *)&DAT_000000e4;
    local_114 = (uint *)0x20010c00;
    local_110 = (uint *)0x0;
    local_118 = 0x37;
    local_f4 = 0x3f800000;
    local_120 = param_2;
    uStack_11c = param_3;
    local_10c = puVar14;
    local_104 = puVar14;
    FUN_100ef510(&local_120,0x34);
LAB_100736cc:
    puVar13 = puVar13 + 1;
    goto LAB_100736d0;
  case 0x58:
    uVar16 = FUN_10070c20(param_1,param_2,*puVar13,param_6);
    FUN_10071500(uVar16,param_2,param_3,*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 6),
                 *(undefined4 *)(param_4 + 8));
    puVar13 = param_2 + 0x91;
    uVar21 = param_2[0x8d];
    uVar20 = (undefined1)*puVar13;
    local_b0 = FUN_100ee580(param_2,4,0);
    uStack_ac = CONCAT31(uStack_ac._1_3_,uVar20);
    uStack_98 = 0xffffffff;
    uStack_94 = 0xffffffff;
    local_a0 = -1;
    uStack_9c = 0xffffffff;
    uVar15 = FUN_100efd00((char)*puVar13);
    if ((uVar15 & 1) == 0) {
      uVar16 = 0x8000000080000000;
      uVar26 = 0x8000000080000000;
      local_90 = param_2[0x25];
    }
    else {
      local_90 = param_2[0x24];
      uVar16 = 0xffffffff80000000;
      uVar26 = 0xffffffffffffffff;
    }
    uStack_8c = CONCAT31(uStack_8c._1_3_,0xe4);
    local_10c = (uint *)&local_60;
    local_60 = CONCAT44(uStack_8c,local_90);
    local_108 = (uint *)0x0;
    local_114 = &local_b0;
    local_110 = param_2 + 0x98;
    local_118 = 1;
    uStack_58 = uStack_88;
    uStack_48 = (undefined4)uVar26;
    local_44 = (undefined4)((ulonglong)uVar26 >> 0x20);
    local_50 = (int)uVar16;
    uStack_4c = (undefined4)((ulonglong)uVar16 >> 0x20);
    local_120 = param_2;
    uStack_11c = param_3;
    FUN_100ef6a8(&local_120,0x1c);
    if (uVar21 == 0) {
      uVar21 = param_2[0x8c];
    }
    else {
      uVar21 = 0;
    }
    puVar13 = param_2 + 0xa0;
    uVar11 = FUN_100efc98(0xe4,(undefined1)uStack_ac);
    local_100 = (uint *)0x0;
    local_110 = (uint *)(uVar11 & 0xff | 0x100);
    local_118 = uVar21 | 0x37;
    local_10c = &local_b0;
    local_120 = param_2;
    uStack_11c = param_3;
    local_114 = extraout_w15_00;
    local_108 = extraout_w14_02;
    local_104 = puVar13;
    FUN_100ef6a8(&local_120,0x24);
LAB_10072170:
    puVar13 = (uint *)(param_4 + 10);
    goto switchD_10071ac4_caseD_6;
  case 0x59:
    uVar16 = FUN_10070c20(param_1,param_2,*puVar13,param_6);
    FUN_100713d8(uVar16,param_2,param_3,*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 6));
    uVar21 = param_2[0x8d];
    uVar11 = (uint)(byte)param_2[0x90];
    local_90 = FUN_100ee580(param_2,4,0);
    local_b0 = param_2[0x16];
    uStack_94 = 0xffffffff;
    local_a0 = uVar11 * 0x30 + 0xc0;
    uStack_78 = 0xffffffff;
    uStack_74 = 0xffffffff;
    local_80 = 0xffffffff;
    uStack_7c = 0xffffffff;
    local_50 = uVar11 * 0x30 + 200;
    local_108 = &local_b0;
    local_104 = (uint *)0x0;
    local_110 = &local_90;
    uStack_8c = CONCAT31(uStack_8c._1_3_,0x54);
    uStack_ac = CONCAT31(uStack_ac._1_3_,0x54);
    local_118 = 0xf;
    local_114 = (uint *)0x101;
    uStack_9c = 0xffffffff;
    uStack_98 = 0xffffffff;
    local_60._0_5_ = CONCAT14(0x54,local_b0);
    uStack_4c = 0xffffffff;
    uStack_48 = 0xffffffff;
    local_44 = 0xffffffff;
    local_120 = param_2;
    uStack_11c = param_3;
    local_10c = param_2 + 0xa0;
    FUN_100ef6a8(&local_120,0x20);
    local_108 = (uint *)&local_60;
    local_104 = (uint *)0x0;
    local_110 = &local_90;
    local_118 = 0xf;
    local_114 = (uint *)0x102;
    local_120 = param_2;
    uStack_11c = param_3;
    local_10c = param_2 + 0xa0;
    FUN_100ef6a8(&local_120,0x20);
    if (uVar21 == 0) {
      local_118 = param_2[0x8c];
    }
    else {
      local_118 = 0;
    }
    local_110 = param_2 + 0x98;
    local_108 = (uint *)0x0;
    local_10c = &local_90;
    local_120 = param_2;
    uStack_11c = param_3;
    local_114 = param_2 + 0x90;
    FUN_100ef6a8(&local_120,0x1c);
LAB_10071dbc:
    puVar13 = (uint *)(param_4 + 8);
    goto switchD_10071ac4_caseD_6;
  }
  puVar13 = (uint *)(param_4 + 6);
LAB_100736d0:
  param_2[0x8d] = 0;
switchD_10071ac4_caseD_6:
  uVar11 = param_2[0xb0];
  for (uVar21 = 0; (uVar11 != 0 && (uVar21 < 4)); uVar21 = uVar21 + 1) {
    param_2 = (uint *)FUN_100ee638(param_2,param_2[uVar21 + 0xb0]);
    *extraout_w11 = 0;
    uVar11 = param_2[uVar21 + 0xb1];
  }
  return puVar13;
}

