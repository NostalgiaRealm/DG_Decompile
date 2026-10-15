/*
 * FUN_100472c8 at 100472c8
 * undefined FUN_100472c8(void)
 * Address ranges: 100472c8-10048f47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100472c8(uint *param_1,uint param_2,uint param_3,char param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint *puVar19;
  undefined8 uVar20;
  ulonglong extraout_x1;
  ulonglong uVar21;
  undefined4 *puVar22;
  char *pcVar23;
  ulonglong uVar24;
  char *pcVar25;
  undefined1 auVar26 [16];
  uint *local_120;
  uint uStack_11c;
  uint local_118;
  uint *local_114;
  uint local_110;
  uint *local_10c;
  uint *local_108;
  uint *local_104;
  uint *local_100;
  uint *local_fc;
  uint *local_f8;
  uint *local_f4;
  uint *local_f0;
  uint *local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  uint local_c0;
  byte local_bc;
  uint *local_b8;
  uint *local_b4;
  char local_b0;
  char local_af;
  uint *local_ac;
  int *local_a8;
  uint local_a4;
  uint *local_a0;
  uint *local_9c;
  uint *local_98;
  uint *local_94;
  uint *local_90;
  uint *local_8c;
  int *local_88;
  byte local_84;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  uint *local_6c;
  uint *local_68;
  int *local_64;
  char *local_60;
  int *local_5c;
  uint *local_58;
  uint *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  
  local_64 = (int *)(param_3 + 0x180);
  if (((*(uint *)(*local_64 + 0x44) >> 0x14 & 1) == 0) || (*(char *)(param_3 + 0x192) == '\0')) {
    local_af = '\0';
  }
  else {
    local_af = '\x01';
  }
  puVar1 = (uint *)(param_3 + 0x10);
  local_b0 = param_4;
  local_a0 = (uint *)FUN_10079948(puVar1,3,1);
  local_b8 = (uint *)0x0;
  local_94 = local_a0;
  FUN_10046e90(param_1,param_2,param_3);
  local_74 = (uint *)(param_3 + 0x158);
  local_6c = (uint *)(param_3 + 0x154);
  local_100 = (uint *)*local_74;
  local_108 = (uint *)*local_6c;
  local_fc = (uint *)0x12345678;
  local_104 = (uint *)0xff;
  local_10c._0_1_ = 8;
  local_110 = 2;
  local_114 = (uint *)0x36;
  local_120 = param_1;
  uStack_11c = param_3;
  local_118 = param_2;
  FUN_100450d8(&local_120,0x28);
  piVar8 = local_64;
  local_a4 = 0;
  puVar2 = (undefined4 *)(param_3 + 0x150);
  puVar3 = (undefined4 *)(param_3 + 0x14c);
  puVar4 = (undefined4 *)(param_3 + 0x148);
  puVar22 = (undefined4 *)(param_3 + 0x144);
  pcVar23 = (char *)(param_3 + 0xb0);
  if (*(char *)(param_3 + 0x192) == '\0') {
    pcVar25 = (char *)(param_3 + 0x5c);
    local_60 = pcVar25;
    if (*pcVar25 == '\0') {
      local_e8 = *puVar2;
      local_e4 = 0x12345678;
      local_f0 = (uint *)*puVar3;
      local_ec = (uint *)0xa4;
      local_f4 = (uint *)*puVar4;
      local_10c = (uint *)CONCAT31(local_10c._1_3_,7);
      local_fc = (uint *)*puVar22;
      local_f8 = (uint *)0xa4;
      local_100 = (uint *)0xa0;
      local_108 = *(uint **)pcVar23;
      local_104 = (uint *)0xa4;
      local_110 = 2;
      local_114 = (uint *)0x2032;
      local_120 = param_1;
      uStack_11c = param_3;
      local_118 = param_2;
      FUN_100450d8(&local_120,0x40);
    }
    else {
      puVar13 = (uint *)FUN_10079948(puVar1,3,1);
      local_ec = (uint *)*puVar2;
      local_e8 = 0;
      local_f4 = (uint *)*puVar3;
      local_f0 = (uint *)0x1a4;
      local_f8 = (uint *)*puVar4;
      local_100 = (uint *)*puVar22;
      local_fc = (uint *)0x1a4;
      local_108 = (uint *)0x1a4;
      local_104 = (uint *)0xa0;
      local_10c = *(uint **)pcVar23;
      local_110 = 7;
      local_118 = 0x2032;
      local_120 = puVar1;
      uStack_11c = param_2;
      local_114 = puVar13;
      FUN_1007a868(&local_120,0x3c);
      local_104 = (uint *)0xa4;
      local_110 = 2;
      local_100 = (uint *)0x12345678;
      local_114 = (uint *)0x36;
      local_10c = (uint *)CONCAT31(local_10c._1_3_,7);
      local_120 = param_1;
      uStack_11c = param_3;
      local_118 = param_2;
      local_108 = puVar13;
      FUN_100450d8(&local_120,0x24);
      FUN_10079a60(puVar1,puVar13);
      pcVar25 = local_60;
    }
  }
  else {
    local_58 = local_6c;
    local_54 = local_74;
    local_ec = (uint *)*puVar2;
    local_a8 = local_64;
    local_e8 = 0;
    local_f4 = (uint *)*puVar3;
    local_f0 = (uint *)0xa4;
    local_f8 = (uint *)*puVar4;
    local_100 = (uint *)*puVar22;
    local_fc = (uint *)0xa4;
    local_108 = (uint *)0xa4;
    local_104 = (uint *)0xa0;
    local_10c = *(uint **)pcVar23;
    local_110 = 7;
    local_118 = 0x32;
    local_114 = local_a0;
    local_120 = puVar1;
    uStack_11c = param_2;
    local_60 = pcVar23;
    local_50 = puVar4;
    local_4c = puVar22;
    FUN_1007a868(&local_120,0x3c);
    local_6c = (uint *)0x7;
    uVar18 = *(uint *)(*piVar8 + 0x28) & 0xe00000;
    while (uVar18 == 0) {
      local_6c = (uint *)((int)local_6c + -1);
      uVar18 = *(uint *)(*piVar8 + 0x28) >> (ulonglong)((int)local_6c * 3 & 0x1f) & 7;
    }
    if ((*(uint *)(param_3 + 0x17c) >> 2 & 1) == 0) {
      local_64 = (int *)0x0;
    }
    else {
      local_64 = (int *)FUN_10049090(param_1,param_2,param_3);
    }
    local_90 = (uint *)0x0;
    local_5c = local_a8;
    local_c0 = param_3;
    local_78 = param_1;
    do {
      uVar18 = (int)local_90 * 3;
      local_a0 = local_90;
      if ((*(uint *)(*local_5c + 0x28) >> (ulonglong)(uVar18 & 0x1f) & 7) != 0) {
        uVar11 = FUN_10079948(puVar1,1,1);
        local_100 = (uint *)0x0;
        local_104 = (uint *)((int)(local_a0 + 0xe7) * 4);
        puVar7 = (uint *)((uint)(local_a0 + 0xe7) & 3);
        local_7c = (uint *)(local_c0 + 0xbc);
        local_108 = (uint *)(uint)(byte)puVar7[0x4027b06];
        local_10c = (uint *)*local_7c;
        local_118 = 0x36;
        local_110 = 1;
        local_120 = puVar1;
        uStack_11c = param_2;
        local_114 = (uint *)uVar11;
        local_80 = puVar7;
        FUN_1007a868(&local_120,0x24);
        puVar19 = (uint *)(uVar11 | 0x10000000);
        puVar13 = (uint *)(local_c0 + 0xb4);
        local_74 = (uint *)(*(uint *)(*local_a8 + 0x24) >> (ulonglong)(uVar18 & 0x1f) & 7);
        local_ac = puVar19;
        local_70 = puVar13;
        local_68 = puVar19;
        if (local_74 == (uint *)0x3) {
          puVar12 = (uint *)FUN_10079948(puVar1,3,1);
          local_f8 = (uint *)0x0;
          local_118 = 0x36;
          local_10c = (uint *)(*puVar13 | 0x40000000);
          local_104 = (uint *)0x6b0;
          local_108 = (uint *)0x1a4;
          local_110 = 7;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar12;
          local_100 = puVar19;
          local_fc = puVar7;
          uVar20 = FUN_1007a868(&local_120,0x2c);
LAB_10047cb0:
          local_b4 = (uint *)0x0;
          local_9c = (uint *)0x0;
          local_98 = (uint *)0x0;
        }
        else {
          if (local_74 == (uint *)&DAT_00000004) {
            puVar12 = (uint *)FUN_10079948(puVar1,3,1);
            local_f8 = (uint *)0x0;
            local_118 = 0x36;
            local_10c = (uint *)(*puVar13 | 0x40000000);
            local_104 = (uint *)0x6a0;
            local_108 = (uint *)0x1a4;
            local_110 = 7;
            local_120 = puVar1;
            uStack_11c = param_2;
            local_114 = puVar12;
            local_100 = puVar19;
            local_fc = puVar7;
            uVar20 = FUN_1007a868(&local_120,0x2c);
            goto LAB_10047cb0;
          }
          puVar12 = (uint *)FUN_10079948(puVar1,3,1);
          local_f0 = (uint *)0x0;
          local_118 = 0;
          local_104 = (uint *)(*puVar13 | 0xc0000000);
          local_fc = (uint *)0x6a0;
          local_100 = (uint *)0x1a4;
          local_108 = (uint *)0x1a4;
          local_10c = *(uint **)(local_c0 + 0x130);
          local_110 = 7;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar12;
          local_f8 = puVar19;
          local_f4 = puVar7;
          local_8c = puVar12;
          FUN_1007a868(&local_120,0x34);
          puVar13 = (uint *)FUN_10079948(puVar1,1,1);
          local_fc = (uint *)0xa4;
          local_108 = (uint *)0xa4;
          local_104 = (uint *)0xffffffff;
          local_110 = 1;
          local_118 = 0x10;
          local_f8 = (uint *)0xffffffff;
          local_f4 = (uint *)0x0;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar13;
          local_10c = puVar12;
          local_100 = puVar12;
          local_98 = puVar13;
          FUN_1007a868(&local_120,0x30);
          local_108 = (uint *)0x0;
          local_104 = (uint *)0x0;
          local_110 = 1;
          local_118 = 0x4b;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar13;
          local_10c = puVar13;
          FUN_1007a868(&local_120,0x20);
          local_b4 = (uint *)0x0;
          if (local_b0 != '\0') {
            if ((*(uint *)(*local_a8 + 0x24) >> (ulonglong)((uint)(local_a0 + 6) & 0x1f) & 1) == 0)
            {
              uVar21 = 1;
              auVar26 = FUN_10079948(puVar1,1,1);
              puVar14 = auVar26._0_4_;
              uVar17 = FUN_10079948(puVar1,auVar26._8_8_ & 0xffffffff,uVar21 & 0xffffffff);
              local_88 = (int *)FUN_10079948(puVar1,1,1);
              puVar12 = local_7c;
              local_f8 = (uint *)((uint)puVar13 | 0x80000000);
              local_f4 = (uint *)0x0;
              local_f0 = (uint *)0x0;
              local_104 = (uint *)0x67c;
              local_118 = 0;
              local_10c = (uint *)(*local_7c | 0x40000000);
              local_108 = (uint *)0x0;
              local_110 = 1;
              local_120 = puVar1;
              uStack_11c = param_2;
              local_114 = puVar14;
              local_100 = puVar19;
              local_fc = puVar7;
              FUN_1007a868(&local_120,0x34);
              local_f0 = (uint *)0x0;
              local_100 = (uint *)0x0;
              local_fc = (uint *)0x67c;
              local_104 = (uint *)(*puVar12 | 0x40000000);
              local_108 = (uint *)0x0;
              local_110 = 1;
              local_118 = 0xe;
              local_120 = puVar1;
              uStack_11c = param_2;
              local_114 = puVar14;
              local_10c = puVar14;
              local_f8 = puVar19;
              local_f4 = puVar7;
              FUN_1007a868(&local_120,0x34);
              local_f8 = (uint *)0x0;
              local_100 = (uint *)0xe4;
              local_fc = (uint *)0x7f800000;
              puVar2 = (undefined4 *)(local_c0 + 0xa0);
              local_104 = (uint *)*puVar2;
              local_108 = (uint *)0x0;
              local_110 = 1;
              local_118 = 0x27;
              local_120 = puVar1;
              uStack_11c = param_2;
              local_114 = (uint *)uVar17;
              local_10c = puVar14;
              FUN_1007a868(&local_120,0x2c);
              local_104 = (uint *)*puVar2;
              local_f8 = (uint *)0x0;
              local_100 = (uint *)0xe4;
              local_fc = (uint *)0x0;
              local_108 = (uint *)0x0;
              local_110 = 1;
              local_118 = 0x1d;
              local_114 = (uint *)local_88;
              local_120 = puVar1;
              uStack_11c = param_2;
              local_10c = puVar14;
              FUN_1007a868(&local_120,0x2c);
              local_100 = (uint *)0x0;
              local_fc = (uint *)0x0;
              local_110 = 1;
              local_108 = (uint *)0x0;
              local_104 = (uint *)local_88;
              local_118 = 1;
              local_120 = puVar1;
              uStack_11c = param_2;
              local_114 = (uint *)uVar17;
              local_10c = (uint *)uVar17;
              FUN_1007a868(&local_120,0x28);
              local_100 = (uint *)0x0;
              local_fc = (uint *)0x0;
              local_110 = 1;
              local_118 = 1;
              local_108 = (uint *)0x0;
              local_120 = puVar1;
              uStack_11c = param_2;
              local_114 = puVar14;
              local_10c = puVar14;
              local_104 = (uint *)uVar17;
              FUN_1007a868(&local_120,0x28);
              FUN_10079a60(puVar1,uVar17);
              FUN_10079a60(puVar1,local_88);
              FUN_10079a60(puVar1,auVar26._0_8_ & 0xffffffff);
              local_b4 = (uint *)0x0;
              puVar13 = puVar14;
            }
            else {
              puVar19 = puVar13;
              if ((*(uint *)(*local_a8 + 0x44) >> 0x14 & 1) == 0) {
                FUN_10079a60(puVar1,puVar13);
                local_b4 = (uint *)0x0;
                puVar19 = local_b4;
              }
              local_b4 = puVar19;
              local_98 = (uint *)0x0;
            }
          }
          puVar19 = (uint *)FUN_10079948(puVar1,3,0);
          uVar18 = local_c0;
          local_d8 = 0;
          uStack_d4 = 0;
          local_e0 = 0;
          uStack_dc = 0;
          local_e4 = 0x3f800000;
          local_104 = *(uint **)(local_c0 + 0xa4);
          local_f4 = (uint *)0x0;
          local_f0 = (uint *)0x0;
          local_100 = (uint *)0x1e4;
          local_fc = (uint *)0x0;
          local_f8 = (uint *)0x3f800000;
          local_e8 = 0x1e4;
          local_110 = 3;
          local_118 = 0x32;
          local_108 = (uint *)0x0;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar19;
          local_10c = puVar13;
          local_ec = local_104;
          local_a0 = puVar19;
          FUN_1007a868(&local_120,0x50);
          local_110 = 4;
          local_118 = 0x38;
          local_100 = (uint *)0x0;
          local_fc = (uint *)0x0;
          local_108 = (uint *)0x0;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar19;
          local_10c = puVar13;
          local_104 = puVar13;
          FUN_1007a868(&local_120,0x28);
          puVar13 = (uint *)FUN_10079948(puVar1,1,1);
          local_f4 = local_80;
          local_f0 = (uint *)0x0;
          local_104 = (uint *)(*local_70 | 0x40000000);
          local_110 = 1;
          local_10c = local_a0;
          local_fc = (uint *)0x6c4;
          local_f8 = local_ac;
          local_100 = (uint *)0xa4;
          local_108 = (uint *)0xa4;
          local_118 = 0x10;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar13;
          local_9c = puVar13;
          uVar20 = FUN_1007a868(&local_120,0x34);
          if ((*(uint *)(*local_a8 + 0x24) >> (ulonglong)((uint)(local_90 + 6) & 0x1f) & 1) == 0) {
            if (local_b0 == '\0') {
              if (*puVar1 == 0x10040) {
                local_f8 = (uint *)0x0;
                local_108 = (uint *)0xe4;
                local_10c = *(uint **)(uVar18 + 0xa0);
                local_fc = (uint *)0x0;
                local_104 = (uint *)0x3f800000;
                local_110 = 1;
                local_118 = 0xe;
                local_120 = puVar1;
                uStack_11c = param_2;
                local_114 = puVar13;
                local_100 = puVar13;
                FUN_1007a868(&local_120,0x2c);
              }
              else {
                local_108 = (uint *)0x0;
                local_104 = (uint *)0x0;
                local_118 = 0x81;
                local_110 = 1;
                local_120 = puVar1;
                uStack_11c = param_2;
                local_114 = puVar13;
                local_10c = puVar13;
                FUN_1007a868(&local_120,0x20);
              }
              puVar13 = local_9c;
              local_10c = *(uint **)(uVar18 + 0xa0);
              local_f8 = (uint *)0x0;
              local_108 = (uint *)0xe4;
              local_104 = (uint *)0x42000000;
              local_110 = 1;
              local_118 = 0x33;
              local_114 = local_9c;
              local_100 = local_9c;
              local_fc = (uint *)0x0;
              local_120 = puVar1;
              uStack_11c = param_2;
              FUN_1007a868(&local_120,0x2c);
              local_10c = *(uint **)(uVar18 + 0xa0);
              local_f8 = (uint *)0x0;
              local_100 = puVar13;
              local_fc = (uint *)0x0;
              local_108 = (uint *)0xe4;
              local_104 = (uint *)0x0;
              local_110 = 1;
              local_118 = 0x34;
              local_114 = puVar13;
              local_120 = puVar1;
              uStack_11c = param_2;
              uVar20 = FUN_1007a868(&local_120,0x2c);
            }
          }
          else {
            local_104 = *(uint **)(uVar18 + 0xa0);
            local_f8 = (uint *)0x0;
            local_100 = (uint *)0xe4;
            local_fc = (uint *)&DAT_3f800000;
            local_110 = 1;
            local_108 = (uint *)0x0;
            local_118 = 0x34;
            local_120 = puVar1;
            uStack_11c = param_2;
            local_114 = puVar13;
            local_10c = puVar13;
            FUN_1007a868(&local_120,0x2c);
            if (*puVar1 == 0x10040) {
              local_10c = *(uint **)(uVar18 + 0xa0);
              local_f8 = (uint *)0x0;
              local_fc = (uint *)0x0;
              local_104 = (uint *)&DAT_3f800000;
              local_110 = 1;
              local_118 = 0xe;
              local_108 = (uint *)0xe4;
              local_120 = puVar1;
              uStack_11c = param_2;
              local_114 = puVar13;
              local_100 = puVar13;
              uVar20 = FUN_1007a868(&local_120,0x2c);
            }
            else {
              local_108 = (uint *)0x0;
              local_104 = (uint *)0x0;
              local_118 = 0x81;
              local_110 = 1;
              local_120 = puVar1;
              uStack_11c = param_2;
              local_114 = puVar13;
              local_10c = puVar13;
              uVar20 = FUN_1007a868(&local_120,0x20);
            }
          }
          puVar12 = local_8c;
          if (local_98 != (uint *)0x0) {
            if ((local_b8 == (uint *)0x0) && ((*(uint *)(*local_a8 + 0x44) >> 0x14 & 1) != 0)) {
              local_114 = (uint *)FUN_10079948(puVar1,3,1);
              local_108 = (uint *)0xa4;
              local_100 = (uint *)0xa4;
              local_fc = (uint *)0x0;
              local_110 = 7;
              local_118 = 0x57;
              local_120 = puVar1;
              uStack_11c = param_2;
              local_10c = local_114;
              local_104 = local_114;
              local_b8 = local_114;
              FUN_1007a868(&local_120,0x28);
            }
            uVar18 = FUN_10079948(puVar1,1,0);
            local_f4 = (uint *)0x0;
            local_f0 = (uint *)0x0;
            local_fc = local_80;
            local_f8 = local_98;
            local_10c = (uint *)(*local_7c | 0x40000000);
            local_110 = 1;
            local_104 = (uint *)0x67c;
            local_100 = local_ac;
            local_108 = (uint *)0xe4;
            local_118 = 0x1d;
            local_120 = puVar1;
            uStack_11c = param_2;
            local_114 = (uint *)uVar18;
            FUN_1007a868(&local_120,0x34);
            local_110 = uVar18 | 0x10000000;
            local_10c = (uint *)0x1;
            local_114 = (uint *)0xffffffff;
            local_118 = 0x4001f;
            local_108 = (uint *)0x0;
            local_120 = puVar1;
            uStack_11c = param_2;
            uVar20 = FUN_1007a868(&local_120,0x1c);
            puVar12 = local_8c;
          }
        }
        uVar18 = local_c0;
        local_bc = *(byte *)(local_c0 + 0x188) & 4;
        if ((*(byte *)(local_c0 + 0x188) & 4) == 0) {
          local_a0 = (uint *)0x0;
LAB_10047d60:
          FUN_10045410(uVar20,param_2,local_c0,puVar12);
        }
        else {
          bVar9 = true;
          puVar13 = (uint *)FUN_10079948(puVar1,3,1);
          uVar20 = FUN_10048f58(puVar13,uVar18,param_2,local_90,puVar13,puVar12);
          if ((local_74 != (uint *)0x2) && ((*(uint *)(*local_a8 + 0x44) >> 0x14 & 1) == 0)) {
            uVar20 = FUN_10079a60(puVar1,puVar12);
            puVar12 = (uint *)0x0;
            bVar9 = false;
          }
          uVar20 = FUN_10045410(uVar20,param_2,local_c0,puVar13);
          local_a0 = puVar13;
          if (bVar9) goto LAB_10047d60;
        }
        FUN_10079a60(puVar1,local_98);
        local_8c = (uint *)0x0;
        if (local_74 == (uint *)0x2) {
          uVar21 = 1;
          puVar14 = (uint *)FUN_10079948(puVar1,1,1);
          puVar15 = (uint *)FUN_10079948(puVar1,extraout_x1 & 0xffffffff,uVar21 & 0xffffffff);
          puVar7 = local_70;
          puVar19 = local_80;
          puVar13 = local_ac;
          local_f0 = (uint *)0x0;
          local_f8 = local_ac;
          local_f4 = local_80;
          local_104 = (uint *)(*local_70 | 0x40000000);
          local_108 = (uint *)0xa4;
          local_100 = (uint *)0xa4;
          local_fc = (uint *)0x6b0;
          local_110 = 1;
          local_118 = 0x10;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar14;
          local_10c = puVar12;
          local_74 = puVar15;
          FUN_1007a868(&local_120,0x34);
          local_f0 = (uint *)0x0;
          local_f4 = (uint *)0xa4;
          local_100 = puVar13;
          local_fc = puVar19;
          local_10c = (uint *)(*puVar7 | 0x40000000);
          local_108 = (uint *)0xa4;
          local_104 = (uint *)0x69c;
          local_110 = 1;
          local_118 = 0x1d;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar15;
          local_f8 = puVar14;
          FUN_1007a868(&local_120,0x34);
          puVar7 = local_7c;
          local_f0 = (uint *)0x0;
          local_f8 = puVar13;
          local_f4 = puVar19;
          local_118 = 0;
          local_104 = (uint *)(*local_7c | 0xc0000000);
          local_108 = (uint *)0x0;
          local_100 = (uint *)0x0;
          local_fc = (uint *)0x6ac;
          local_110 = 1;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar14;
          local_10c = puVar14;
          FUN_1007a868(&local_120,0x34);
          local_f0 = (uint *)0x0;
          local_f8 = puVar13;
          local_f4 = puVar19;
          local_104 = (uint *)(*puVar7 | 0x40000000);
          local_108 = (uint *)0x0;
          local_100 = (uint *)0x0;
          local_fc = (uint *)0x6c0;
          local_110 = 1;
          local_118 = 0x200e;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar14;
          local_10c = puVar14;
          uVar20 = FUN_1007a868(&local_120,0x34);
          uVar18 = local_c0;
          local_110 = CONCAT31(local_110._1_3_,1);
          local_120 = puVar14;
          local_8c = puVar14;
          FUN_10047178(uVar20,param_2,local_c0,puVar14,*puVar7 | 0x40000000,0x68c,puVar13,puVar19);
          puVar13 = local_74;
          local_f8 = (uint *)0xe4;
          local_fc = *(uint **)(uVar18 + 0xa0);
          local_f0 = (uint *)0x0;
          local_f4 = (uint *)&DAT_3f800000;
          local_108 = (uint *)0x0;
          local_100 = (uint *)0x0;
          local_110 = 1;
          local_10c = local_74;
          local_118 = 0x37;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar14;
          local_104 = puVar14;
          FUN_1007a868(&local_120,0x34);
          FUN_10079a60(puVar1,puVar13);
          local_88 = (int *)(uVar18 + 0xa0);
        }
        else {
          local_88 = (int *)(local_c0 + 0xa0);
        }
        uVar18 = *local_58;
        uVar11 = *local_54;
        if ((*(uint *)(*local_a8 + 0x24) >> (ulonglong)((uint)(local_90 + 6) & 0x1f) & 1) != 0) {
          uVar11 = 0x630;
          uVar18 = *local_70;
        }
        uVar6 = *(uint *)(*local_a8 + 0x44) >> 0x17 & 1;
        uVar16 = FUN_10079948(puVar1,1,1);
        local_118 = uVar6 << 0xd | 0x10;
        local_104 = (uint *)local_64;
        local_10c = local_a0;
        if (local_bc == 0) {
          local_104 = (uint *)*(int **)(local_c0 + 0x134);
          local_10c = puVar12;
        }
        local_10c = (uint *)((uint)local_10c | 0x80000000);
        local_100 = (uint *)0xa4;
        local_fc = (uint *)0x0;
        local_108 = (uint *)0xa4;
        local_110 = 1;
        local_120 = puVar1;
        uStack_11c = param_2;
        local_114 = (uint *)uVar16;
        FUN_1007a868(&local_120,0x28);
        if (uVar6 == 0) {
          local_f8 = (uint *)0x0;
          local_100 = (uint *)0x0;
          local_fc = (uint *)0x0;
          local_110 = 1;
          local_104 = (uint *)*local_88;
          local_108 = (uint *)0x0;
          local_118 = 0x34;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = (uint *)uVar16;
          local_10c = (uint *)uVar16;
          FUN_1007a868(&local_120,0x2c);
        }
        if ((*(uint *)(*(int *)(local_c0 + 0x180) + 0x44) >> 0x14 & 1) == 0) {
          FUN_10079a60(puVar1,puVar12);
          puVar12 = (uint *)0x0;
        }
        FUN_10079a60(puVar1,local_a0);
        puVar13 = (uint *)FUN_10079948(puVar1,3,1);
        local_f8 = (uint *)0x0;
        local_108 = (uint *)0x1a4;
        local_fc = (uint *)0x0;
        local_110 = 7;
        local_118 = 0x38;
        local_120 = puVar1;
        uStack_11c = param_2;
        local_114 = puVar13;
        local_10c = (uint *)uVar18;
        local_104 = (uint *)uVar11;
        local_100 = (uint *)uVar16;
        FUN_1007a868(&local_120,0x2c);
        FUN_10079a60(puVar1,uVar16);
        local_118 = 0x38;
        local_f4 = local_80;
        local_f0 = (uint *)0x0;
        local_104 = (uint *)(*(uint *)(local_c0 + 0xb4) | 0x40000000);
        local_fc = (uint *)0x670;
        local_f8 = local_ac;
        local_100 = (uint *)0x1a4;
        local_108 = (uint *)0x1a4;
        local_110 = 7;
        local_120 = puVar1;
        uStack_11c = param_2;
        local_114 = puVar13;
        local_10c = puVar13;
        FUN_1007a868(&local_120,0x34);
        if (local_8c != (uint *)0x0) {
          local_100 = (uint *)0x0;
          local_fc = (uint *)0x0;
          local_108 = (uint *)0x1a4;
          local_104 = local_8c;
          local_110 = 7;
          local_118 = 0x38;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar13;
          local_10c = puVar13;
          FUN_1007a868(&local_120,0x28);
        }
        puVar19 = local_ac;
        local_e4 = 0;
        local_e8 = 0x1a4;
        local_f4 = local_ac;
        local_f0 = local_80;
        local_100 = (uint *)(*local_70 | 0x40000000);
        local_fc = (uint *)0x1a4;
        local_f8 = (uint *)0x690;
        local_104 = (uint *)*local_50;
        local_10c = (uint *)*local_4c;
        local_108 = (uint *)0x1a4;
        local_110 = 7;
        local_118 = 0x32;
        local_120 = puVar1;
        uStack_11c = param_2;
        local_114 = puVar13;
        local_ec = puVar13;
        FUN_1007a868(&local_120,0x40);
        if ((*(uint *)(*local_a8 + 0x44) >> 0x14 & 1) == 0) {
          FUN_10079a60(puVar1,puVar19);
          local_68 = (uint *)0x0;
        }
        puVar19 = local_94;
        bVar9 = local_90 == local_6c;
        bVar10 = local_98 == (uint *)0x0;
        local_84 = bVar9 && bVar10;
        local_118 = (uint)local_84 << 0xd;
        local_ac = (uint *)local_118;
        if (local_9c == (uint *)0x0) {
          if ((bVar9 && bVar10) && (*(char *)(local_c0 + 0x5c) == '\0')) {
            local_f8 = (uint *)0x12345678;
            local_104 = (uint *)0x1a4;
            local_100 = local_94;
            local_fc = (uint *)0x1a4;
            local_10c = (uint *)CONCAT31(local_10c._1_3_,7);
            local_110 = 2;
            local_114 = (uint *)0x2000;
            local_120 = local_78;
            uStack_11c = local_c0;
            local_118 = param_2;
            local_108 = puVar13;
            FUN_100450d8(&local_120,0x2c);
            goto LAB_10048320;
          }
          local_a4 = (uint)(local_84 | (byte)local_a4);
          local_100 = (uint *)0x1a4;
          local_fc = (uint *)0x0;
          local_108 = (uint *)0x1a4;
          local_104 = local_94;
          local_110 = 7;
          local_114 = local_94;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_10c = puVar13;
          FUN_1007a868(&local_120,0x28);
        }
        else if ((bVar9 && bVar10) && (*(char *)(local_c0 + 0x5c) == '\0')) {
          local_f0 = (uint *)0x12345678;
          local_fc = (uint *)0x1a4;
          local_108 = local_9c;
          local_104 = (uint *)0x0;
          local_f8 = local_94;
          local_f4 = (uint *)0x1a4;
          local_10c = (uint *)CONCAT31(local_10c._1_3_,7);
          local_110 = 2;
          local_114 = (uint *)0x2032;
          local_120 = local_78;
          uStack_11c = local_c0;
          local_118 = param_2;
          local_100 = puVar13;
          FUN_100450d8(&local_120,0x34);
LAB_10048320:
          FUN_10079a60(puVar1,puVar19);
          local_94 = (uint *)0x0;
        }
        else {
          local_108 = (uint *)0x0;
          local_a4 = (uint)(local_84 | (byte)local_a4);
          local_f8 = (uint *)0x1a4;
          local_f4 = (uint *)0x0;
          local_100 = (uint *)0x1a4;
          local_fc = local_94;
          local_110 = 7;
          local_10c = local_9c;
          local_114 = local_94;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_118 = local_118 | 0x32;
          local_104 = puVar13;
          FUN_1007a868(&local_120,0x30);
        }
        FUN_10079a60(puVar1,puVar13);
        piVar8 = local_a8;
        if ((*(uint *)(*local_a8 + 0x44) >> 0x14 & 1) != 0) {
          uVar17 = FUN_10079948(puVar1,3,1);
          pcVar23 = local_60;
          local_104 = (uint *)0x1f0;
          local_100 = (uint *)0x0;
          local_10c = *(uint **)local_60;
          local_118 = 0x36;
          local_108 = (uint *)0xff;
          local_110 = 1;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = (uint *)uVar17;
          FUN_1007a868(&local_120,0x24);
          local_104 = (uint *)0x200;
          local_100 = (uint *)0x0;
          local_10c = *(uint **)pcVar23;
          local_118 = 0x36;
          local_108 = (uint *)0xff;
          local_110 = 2;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = (uint *)uVar17;
          FUN_1007a868(&local_120,0x24);
          local_104 = (uint *)0x210;
          local_100 = (uint *)0x0;
          local_10c = *(uint **)pcVar23;
          local_118 = 0x36;
          local_108 = (uint *)0xff;
          local_110 = 4;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = (uint *)uVar17;
          FUN_1007a868(&local_120,0x24);
          if ((*(uint *)(*piVar8 + 0x44) >> 0x1d & 1) == 0) {
            uVar18 = FUN_10079948(puVar1,3,1);
            local_104 = (uint *)0x1f0;
            local_100 = (uint *)0x0;
            local_10c = *(uint **)pcVar23;
            local_118 = 0x36;
            local_108 = (uint *)0xaa;
            local_110 = 1;
            local_120 = puVar1;
            uStack_11c = param_2;
            local_114 = (uint *)uVar18;
            FUN_1007a868(&local_120,0x24);
            local_104 = (uint *)0x200;
            local_100 = (uint *)0x0;
            local_10c = *(uint **)pcVar23;
            local_118 = 0x36;
            local_108 = (uint *)0xaa;
            local_110 = 2;
            local_120 = puVar1;
            uStack_11c = param_2;
            local_114 = (uint *)uVar18;
            FUN_1007a868(&local_120,0x24);
            local_104 = (uint *)0x210;
            local_100 = (uint *)0x0;
            local_10c = *(uint **)pcVar23;
            local_118 = 0x36;
            local_108 = (uint *)0xaa;
            local_110 = 4;
            local_120 = puVar1;
            uStack_11c = param_2;
            local_114 = (uint *)uVar18;
            FUN_1007a868(&local_120,0x24);
            local_100 = (uint *)0x1a4;
            local_fc = (uint *)0x0;
            local_10c = (uint *)(uVar18 | 0x80000000);
            local_108 = (uint *)0x1a4;
            local_110 = 7;
            local_118 = 0;
            local_120 = puVar1;
            uStack_11c = param_2;
            local_114 = (uint *)uVar18;
            local_104 = (uint *)uVar17;
            FUN_1007a868(&local_120,0x28);
            puVar13 = (uint *)(local_c0 + 0x130);
          }
          else {
            puVar13 = (uint *)(local_c0 + 0x130);
            uVar18 = *puVar13;
          }
          local_118 = 0;
          local_104 = (uint *)(uVar18 | 0x80000000);
          local_100 = (uint *)0x1a4;
          local_fc = (uint *)0x0;
          local_108 = (uint *)0x1a4;
          local_110 = 7;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = (uint *)uVar17;
          local_10c = (uint *)uVar17;
          uVar20 = FUN_1007a868(&local_120,0x28);
          FUN_10045410(uVar20,param_2,local_c0,uVar17);
          if (uVar18 != *puVar13) {
            FUN_10079a60(puVar1,uVar18);
          }
          local_118 = 0;
          local_104 = (uint *)((uint)puVar12 | 0x80000000);
          local_100 = (uint *)0x1a4;
          local_fc = (uint *)0x0;
          local_108 = (uint *)0x1a4;
          local_110 = 7;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = (uint *)uVar17;
          local_10c = (uint *)uVar17;
          FUN_1007a868(&local_120,0x28);
          uVar20 = FUN_10079a60(puVar1,puVar12);
          puVar12 = (uint *)0x0;
          if (local_bc == 0) {
            FUN_10045410(uVar20,param_2,local_c0,uVar17);
          }
          else {
            uVar21 = FUN_10079948(puVar1,3,1);
            uVar18 = local_c0;
            uVar24 = uVar21 & 0xffffffff;
            uVar20 = FUN_10048f58(uVar21,local_c0,param_2,local_90,uVar24,uVar17);
            FUN_10045410(uVar20,param_2,uVar18,uVar24);
            FUN_10079a60(puVar1,uVar24);
          }
          FUN_10079a60(puVar1,uVar17);
          if (((*(uint *)(*local_a8 + 0x44) >> 0x17 & 1) == 0) &&
             ((*(uint *)(*local_a8 + 0x28) >> 0x1e & 1) == 0)) {
            uVar18 = 0;
          }
          else {
            uVar18 = 0x2000;
          }
          puVar13 = (uint *)FUN_10079948(puVar1,1,1);
          local_104 = (uint *)local_64;
          if (local_bc == 0) {
            local_104 = (uint *)*(int **)(local_c0 + 0x134);
          }
          local_118 = uVar18 | 0x10;
          local_100 = (uint *)0xa4;
          local_fc = (uint *)0x0;
          local_108 = (uint *)0xa4;
          local_110 = 1;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar13;
          local_10c = (uint *)uVar17;
          FUN_1007a868(&local_120,0x28);
          puVar19 = (uint *)FUN_10079948(puVar1,1,0);
          local_108 = (uint *)0x0;
          local_104 = (uint *)0x38;
          local_f8 = (uint *)0x0;
          local_fc = (uint *)0x0;
          local_10c = (uint *)*local_7c;
          local_110 = 1;
          local_118 = 0x31;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar19;
          local_100 = puVar13;
          FUN_1007a868(&local_120,0x2c);
          local_110 = 1;
          local_118 = 1;
          local_100 = (uint *)0x0;
          local_fc = (uint *)0x0;
          local_108 = (uint *)0x0;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar13;
          local_10c = puVar13;
          local_104 = puVar19;
          uVar20 = FUN_1007a868(&local_120,0x28);
          if (uVar18 == 0) {
            local_f8 = (uint *)0x0;
            local_100 = (uint *)0x0;
            local_fc = (uint *)0x0;
            local_110 = 1;
            local_104 = (uint *)*local_88;
            local_108 = (uint *)0x0;
            local_118 = 0x34;
            local_120 = puVar1;
            uStack_11c = param_2;
            local_114 = puVar13;
            local_10c = puVar13;
            uVar20 = FUN_1007a868(&local_120,0x2c);
          }
          local_110 = local_110 & 0xffffff00;
          local_120 = puVar13;
          FUN_10047178(uVar20,param_2,local_c0,puVar13,*local_7c,0x66c,0xffffffff,0xffffffff);
          puVar19 = local_b4;
          if (local_b4 != (uint *)0x0) {
            local_100 = (uint *)0x0;
            local_fc = (uint *)0x0;
            local_110 = 1;
            local_118 = 0xe;
            local_108 = (uint *)0x0;
            local_104 = local_b4;
            local_120 = puVar1;
            uStack_11c = param_2;
            local_114 = puVar13;
            local_10c = puVar13;
            FUN_1007a868(&local_120,0x28);
            FUN_10079a60(puVar1,puVar19);
          }
          FUN_10079a60(puVar1,puVar13);
          puVar19 = (uint *)FUN_10079948(puVar1,3,1);
          local_fc = (uint *)0x0;
          local_f8 = (uint *)0x0;
          local_104 = *(uint **)(local_c0 + 0x160);
          local_108 = (uint *)0x1a4;
          local_10c = *(uint **)(local_c0 + 0x15c);
          local_110 = 7;
          local_118 = 0x38;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar19;
          local_100 = puVar13;
          local_b4 = puVar19;
          FUN_1007a868(&local_120,0x2c);
          puVar13 = local_68;
          local_f4 = local_80;
          local_f0 = (uint *)0x0;
          local_104 = (uint *)(*local_70 | 0x40000000);
          local_fc = (uint *)0x680;
          local_f8 = local_68;
          local_100 = (uint *)0x1a4;
          local_108 = (uint *)0xa4;
          local_110 = 7;
          local_118 = 0x38;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar19;
          local_10c = puVar19;
          FUN_1007a868(&local_120,0x34);
          FUN_10079a60(puVar1,puVar13);
          puVar13 = local_8c;
          local_68 = (uint *)0x0;
          if (local_8c != (uint *)0x0) {
            local_100 = (uint *)0x0;
            local_fc = (uint *)0x0;
            local_108 = (uint *)0x1a4;
            local_104 = local_8c;
            local_110 = 7;
            local_118 = 0x38;
            local_120 = puVar1;
            uStack_11c = param_2;
            local_114 = puVar19;
            local_10c = puVar19;
            FUN_1007a868(&local_120,0x28);
            FUN_10079a60(puVar1,puVar13);
            local_8c = (uint *)0x0;
          }
          puVar13 = (uint *)FUN_10079948(puVar1,1,0);
          local_f8 = (uint *)0x0;
          local_f4 = (uint *)0x0;
          local_100 = (uint *)*local_88;
          local_fc = (uint *)0x0;
          local_104 = (uint *)0x66c;
          local_10c = (uint *)*local_7c;
          local_108 = (uint *)0x0;
          local_110 = 1;
          local_118 = 0x27;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_114 = puVar13;
          FUN_1007a868(&local_120,0x30);
          puVar19 = local_b4;
          local_110 = 7;
          local_100 = (uint *)0x1a4;
          local_fc = (uint *)0x0;
          local_108 = (uint *)0x0;
          local_104 = local_b4;
          local_118 = 1;
          local_114 = local_b4;
          local_120 = puVar1;
          uStack_11c = param_2;
          local_10c = puVar13;
          FUN_1007a868(&local_120,0x28);
          puVar13 = local_b8;
          if (local_9c == (uint *)0x0) {
            if (local_b8 == (uint *)0x0) {
              local_b8 = puVar19;
              goto LAB_10048b80;
            }
            if ((local_84 != 0) && (*(char *)(local_c0 + 0x5c) == '\0')) {
              local_100 = local_b8;
              local_fc = (uint *)0x1a4;
              local_f8 = (uint *)0x12345678;
              local_10c = (uint *)CONCAT31(local_10c._1_3_,7);
              local_110 = 3;
              local_114 = (uint *)0x2000;
              local_108 = puVar19;
              local_104 = (uint *)0x1a4;
              local_120 = local_78;
              uStack_11c = local_c0;
              local_118 = param_2;
              FUN_100450d8(&local_120,0x2c);
              goto LAB_100489ec;
            }
            local_a4 = local_a4 & 0xff | (uint)local_84 << 1;
            local_100 = (uint *)0x1a4;
            local_fc = (uint *)0x0;
            local_108 = (uint *)0x1a4;
            local_104 = local_b8;
            local_110 = 7;
            local_10c = local_b4;
            local_118 = (uint)local_ac;
            local_114 = local_b8;
            local_120 = puVar1;
            uStack_11c = param_2;
            FUN_1007a868(&local_120,0x28);
          }
          else if ((local_84 == 0) || (*(char *)(local_c0 + 0x5c) != '\0')) {
            local_a4 = local_a4 & 0xff | (uint)local_84 << 1;
            if (local_b8 == (uint *)0x0) {
              local_b8 = local_b4;
              local_100 = (uint *)0x1a4;
              local_fc = (uint *)0x0;
              local_118 = (uint)local_ac | 0x38;
              local_108 = (uint *)0x0;
              local_104 = local_b4;
              local_110 = 7;
              local_10c = local_9c;
              local_114 = local_b4;
              local_120 = puVar1;
              uStack_11c = param_2;
              FUN_1007a868(&local_120,0x28);
              goto LAB_10048b80;
            }
            local_108 = (uint *)0x0;
            local_104 = local_b4;
            local_118 = (uint)local_ac | 0x32;
            local_114 = local_b8;
            local_f8 = (uint *)0x1a4;
            local_f4 = (uint *)0x0;
            local_100 = (uint *)0x1a4;
            local_fc = local_b8;
            local_110 = 7;
            local_10c = local_9c;
            local_120 = puVar1;
            uStack_11c = param_2;
            FUN_1007a868(&local_120,0x30);
          }
          else if (local_b8 == (uint *)0x0) {
            local_f8 = (uint *)0x12345678;
            local_10c = (uint *)CONCAT31(local_10c._1_3_,7);
            local_110 = 3;
            local_114 = (uint *)0x2038;
            local_100 = puVar19;
            local_fc = (uint *)0x1a4;
            local_108 = local_9c;
            local_104 = (uint *)0x0;
            local_120 = local_78;
            uStack_11c = local_c0;
            local_118 = param_2;
            FUN_100450d8(&local_120,0x2c);
          }
          else {
            local_f0 = (uint *)0x12345678;
            local_10c = (uint *)CONCAT31(local_10c._1_3_,7);
            local_110 = 3;
            local_114 = (uint *)0x2032;
            local_f8 = local_b8;
            local_f4 = (uint *)0x1a4;
            local_100 = puVar19;
            local_fc = (uint *)0x1a4;
            local_108 = local_9c;
            local_104 = (uint *)0x0;
            local_120 = local_78;
            uStack_11c = local_c0;
            local_118 = param_2;
            FUN_100450d8(&local_120,0x34);
LAB_100489ec:
            FUN_10079a60(puVar1,puVar13);
            local_b8 = (uint *)0x0;
          }
          if (local_b8 != local_b4) {
            FUN_10079a60(puVar1,local_b4);
          }
        }
LAB_10048b80:
        FUN_10079a60(puVar1,local_9c);
        FUN_10079a60(puVar1,puVar12);
        FUN_10079a60(puVar1,local_8c);
        FUN_10079a60(puVar1,local_68);
        if (local_98 != (uint *)0x0) {
          local_118 = 0x15;
          local_114 = (uint *)0x0;
          local_120 = puVar1;
          uStack_11c = param_2;
          FUN_1007a868(&local_120,0x10);
        }
      }
      param_1 = local_78;
      param_3 = local_c0;
      local_90 = (uint *)((int)local_90 + 1);
    } while (local_90 < &DAT_00000008);
    FUN_100491f0(local_78,local_c0,4);
    puVar13 = local_94;
    if (local_94 != (uint *)0x0) {
      uVar18 = ~((local_a4 & 0xff) << 0xd) & 0x2000;
      if ((uVar18 == 0) || (*(char *)(param_3 + 0x5c) == '\0')) {
        local_10c = (uint *)CONCAT31(local_10c._1_3_,7);
        local_114 = (uint *)(uVar18 | 0x36);
        local_120 = param_1;
        uStack_11c = param_3;
        local_100 = (uint *)0x12345678;
        local_104 = (uint *)0xa4;
        local_108 = local_94;
        local_110 = 2;
        local_118 = param_2;
        FUN_100450d8(&local_120,0x24);
      }
      else {
        local_110 = 7;
        local_10c = local_94;
        local_108 = (uint *)0x1a4;
        local_104 = (uint *)0x0;
        local_118 = 0x2036;
        local_114 = local_94;
        local_120 = puVar1;
        uStack_11c = param_2;
        FUN_1007a868(&local_120,0x20);
        local_10c = (uint *)CONCAT31(local_10c._1_3_,7);
        local_100 = (uint *)0x12345678;
        local_108 = puVar13;
        local_104 = (uint *)0xa4;
        local_110 = 2;
        local_114 = (uint *)0x36;
        local_120 = param_1;
        uStack_11c = param_3;
        local_118 = param_2;
        FUN_100450d8(&local_120,0x24);
      }
    }
    pcVar25 = (char *)(param_3 + 0x5c);
  }
  puVar13 = local_b8;
  if (local_af == '\0') {
    local_fc = (uint *)0x0;
    local_f8 = (uint *)0x0;
    uVar5 = 0xf;
    if (*(char *)(param_3 + 400) == '\0') {
      uVar5 = 7;
    }
    local_10c = (uint *)CONCAT31(local_10c._1_3_,uVar5);
    local_f0 = (uint *)0x12345678;
    local_f4 = (uint *)&DAT_3f800000;
    local_104 = (uint *)0xe4;
    local_100 = (uint *)0x0;
    local_108 = *(uint **)(param_3 + 0xa4);
    local_110 = 3;
    local_114 = (uint *)0x36;
    local_120 = param_1;
    uStack_11c = param_3;
    local_118 = param_2;
    FUN_100450d8(&local_120,0x34);
  }
  else if (local_b8 != (uint *)0x0) {
    uVar18 = ~((local_a4 & 0xff) << 0xc) & 0x2000;
    if ((uVar18 == 0) || (*pcVar25 == '\0')) {
      local_10c = (uint *)CONCAT31(local_10c._1_3_,7);
      local_114 = (uint *)(uVar18 | 0x36);
      local_100 = (uint *)0x12345678;
      local_104 = (uint *)0xa4;
      local_108 = local_b8;
      local_110 = 3;
      local_120 = param_1;
      uStack_11c = param_3;
      local_118 = param_2;
      FUN_100450d8(&local_120,0x24);
    }
    else {
      local_110 = 7;
      local_10c = local_b8;
      local_108 = (uint *)0x1a4;
      local_104 = (uint *)0x0;
      local_118 = 0x2036;
      local_114 = local_b8;
      local_120 = puVar1;
      uStack_11c = param_2;
      FUN_1007a868(&local_120,0x20);
      local_10c = (uint *)CONCAT31(local_10c._1_3_,7);
      local_100 = (uint *)0x12345678;
      local_108 = puVar13;
      local_104 = (uint *)0xa4;
      local_110 = 3;
      local_114 = (uint *)0x36;
      local_120 = param_1;
      uStack_11c = param_3;
      local_118 = param_2;
      FUN_100450d8(&local_120,0x24);
    }
  }
  FUN_10079a60(puVar1,local_b8);
  FUN_10079a60(puVar1,local_94);
  return;
}

