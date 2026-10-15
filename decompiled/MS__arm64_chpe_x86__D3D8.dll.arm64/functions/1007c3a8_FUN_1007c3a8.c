/*
 * FUN_1007c3a8 at 1007c3a8
 * undefined FUN_1007c3a8(void)
 * Address ranges: 1007c3a8-1007db7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007c3a8(int *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong extraout_x1;
  uint *puVar18;
  undefined4 *puVar19;
  uint *puVar20;
  uint *puVar21;
  int *local_110;
  uint uStack_10c;
  uint local_108;
  int *local_104;
  uint local_100;
  int *local_fc;
  int *local_f8;
  int *local_f4;
  int *local_f0;
  int *local_ec;
  int *local_e8;
  int *local_e4;
  int *local_e0;
  int *local_dc;
  uint local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  byte local_b0;
  int *local_ac;
  uint *local_a8;
  char local_a4;
  uint local_a3;
  int *local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  byte local_84;
  int *local_80;
  uint *local_7c;
  int *local_78;
  int *local_74;
  undefined4 *local_70;
  int *local_6c;
  int *local_68;
  undefined4 *local_64;
  int *local_60;
  uint *local_5c;
  int *local_58;
  undefined4 *local_54;
  int *local_50;
  uint *local_4c;
  
  local_60 = (int *)(param_3 + 0x19c);
  if (((*(uint *)(*local_60 + 0x44) >> 0x14 & 1) == 0) || (*(char *)(param_3 + 0x1ae) == '\0')) {
    local_a4 = '\0';
  }
  else {
    local_a4 = '\x01';
  }
  piVar1 = (int *)(param_3 + 0x18);
  local_98 = (int *)FUN_100ee580(piVar1,3,1);
  local_ac = (int *)0x0;
  local_74 = local_98;
  FUN_1007bf78(param_1,param_2,param_3);
  local_8c = (int *)(param_3 + 0x174);
  local_70 = (undefined4 *)(param_3 + 0x170);
  local_f0 = (int *)*local_8c;
  local_f8 = (int *)*local_70;
  local_ec = (int *)0x12345678;
  local_f4 = (int *)0xff;
  local_fc._0_1_ = 8;
  local_100 = 2;
  local_104 = (int *)0x36;
  local_110 = param_1;
  uStack_10c = param_3;
  local_108 = param_2;
  FUN_10079a50(&local_110,0x28);
  piVar13 = local_60;
  local_a3 = 0;
  puVar2 = (uint *)(param_3 + 0x16c);
  puVar3 = (uint *)(param_3 + 0x168);
  puVar4 = (uint *)(param_3 + 0x164);
  puVar18 = (uint *)(param_3 + 0x160);
  puVar20 = (uint *)(param_3 + 0xc0);
  if (*(char *)(param_3 + 0x1ae) == '\0') {
    puVar21 = (uint *)(param_3 + 100);
    local_5c = puVar21;
    if (*(char *)puVar21 == '\0') {
      local_d8 = *puVar2;
      local_d4 = 0x12345678;
      local_e0 = (int *)*puVar3;
      local_dc = (int *)0xa4;
      local_e4 = (int *)*puVar4;
      local_fc = (int *)CONCAT31(local_fc._1_3_,7);
      local_ec = (int *)*puVar18;
      local_e8 = (int *)0xa4;
      local_f0 = (int *)0xa0;
      local_f8 = (int *)*puVar20;
      local_f4 = (int *)0xa4;
      local_100 = 2;
      local_104 = (int *)0x2032;
      local_110 = param_1;
      uStack_10c = param_3;
      local_108 = param_2;
      FUN_10079a50(&local_110,0x40);
    }
    else {
      piVar13 = (int *)FUN_100ee580(piVar1,3,1);
      local_dc = (int *)*puVar2;
      local_d8 = 0;
      local_e4 = (int *)*puVar3;
      local_e0 = (int *)0x1a4;
      local_e8 = (int *)*puVar4;
      local_f0 = (int *)*puVar18;
      local_ec = (int *)0x1a4;
      local_f8 = (int *)0x1a4;
      local_f4 = (int *)0xa0;
      local_fc = (int *)*puVar20;
      local_100 = 7;
      local_108 = 0x2032;
      local_110 = piVar1;
      uStack_10c = param_2;
      local_104 = piVar13;
      FUN_100ef510(&local_110,0x3c);
      local_f4 = (int *)0xa4;
      local_100 = 2;
      local_f0 = (int *)0x12345678;
      local_104 = (int *)0x36;
      local_fc = (int *)CONCAT31(local_fc._1_3_,7);
      local_110 = param_1;
      uStack_10c = param_3;
      local_108 = param_2;
      local_f8 = piVar13;
      FUN_10079a50(&local_110,0x24);
      FUN_100ee638(piVar1,piVar13);
      puVar21 = local_5c;
    }
  }
  else {
    local_54 = local_70;
    local_50 = local_8c;
    local_dc = (int *)*puVar2;
    local_88 = local_60;
    local_d8 = 0;
    local_e4 = (int *)*puVar3;
    local_e0 = (int *)0xa4;
    local_e8 = (int *)*puVar4;
    local_f0 = (int *)*puVar18;
    local_ec = (int *)0xa4;
    local_f8 = (int *)0xa4;
    local_f4 = (int *)0xa0;
    local_fc = (int *)*puVar20;
    local_100 = 7;
    local_108 = 0x32;
    local_104 = local_74;
    local_110 = piVar1;
    uStack_10c = param_2;
    local_4c = puVar20;
    FUN_100ef510(&local_110,0x3c);
    local_70 = (undefined4 *)0x7;
    uVar15 = *(uint *)(*piVar13 + 0x28) & 0xe00000;
    while (uVar15 == 0) {
      local_70 = (undefined4 *)((int)local_70 + -1);
      uVar15 = *(uint *)(*piVar13 + 0x28) >> (ulonglong)((int)local_70 * 3 & 0x1f) & 7;
    }
    if ((*(uint *)(param_3 + 0x198) >> 2 & 1) == 0) {
      local_60 = (int *)0x0;
    }
    else {
      local_60 = (int *)FUN_1007e048(param_1,param_2,param_3);
    }
    local_64 = (undefined4 *)0x0;
    local_58 = local_88;
    local_80 = param_1;
    do {
      uVar15 = (int)local_64 * 3;
      if ((*(uint *)(*local_58 + 0x28) >> (ulonglong)(uVar15 & 0x1f) & 7) != 0) {
        puVar19 = local_64;
        uVar9 = FUN_100ee580(piVar1,1,1);
        local_f0 = (int *)0x0;
        local_f4 = (int *)((int)(puVar19 + 0xba) * 4);
        piVar14 = (int *)((uint)(puVar19 + 0xba) & 3);
        local_7c = (uint *)(param_3 + 0xcc);
        local_f8 = (int *)(uint)*(byte *)(piVar14 + 0x404bb16);
        local_fc = (int *)*local_7c;
        local_100 = 1;
        local_108 = 0x36;
        local_110 = piVar1;
        uStack_10c = param_2;
        local_104 = (int *)uVar9;
        local_78 = piVar14;
        FUN_100ef510(&local_110,0x24);
        piVar13 = (int *)(uVar9 | 0x10000000);
        uVar15 = *(uint *)(*local_88 + 0x24) >> (ulonglong)(uVar15 & 0x1f) & 7;
        local_a8 = (uint *)(param_3 + 0xc4);
        local_6c = piVar13;
        local_68 = piVar13;
        local_5c = local_a8;
        if (uVar15 == 3) {
          piVar10 = (int *)FUN_100ee580(piVar1,3,1);
          local_e8 = (int *)0x0;
          local_fc = (int *)(*local_a8 | 0x40000000);
          local_f4 = (int *)0x6a0;
          local_f8 = (int *)0x1a4;
          local_100 = 7;
          local_108 = 0x36;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar10;
          local_f0 = piVar13;
          local_ec = piVar14;
          uVar16 = FUN_100ef510(&local_110,0x2c);
LAB_1007ca64:
          local_9c = (int *)0x0;
          local_90 = (int *)0x0;
        }
        else {
          piVar10 = (int *)FUN_100ee580(piVar1,3,1);
          local_e0 = (int *)0x0;
          local_108 = 0;
          local_f4 = (int *)(*local_a8 | 0xc0000000);
          local_ec = (int *)0x690;
          local_f0 = (int *)0x1a4;
          local_f8 = (int *)0x1a4;
          local_fc = *(int **)(param_3 + 0x14c);
          local_100 = 7;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar10;
          local_e8 = piVar13;
          local_e4 = piVar14;
          uVar16 = FUN_100ef510(&local_110,0x34);
          if (uVar15 == 4) goto LAB_1007ca64;
          piVar11 = (int *)FUN_100ee580(piVar1,1,1);
          local_ec = (int *)0xa4;
          local_f8 = (int *)0xa4;
          local_f4 = (int *)0xffffffff;
          local_100 = 1;
          local_108 = 0x10;
          local_e8 = (int *)0xffffffff;
          local_e4 = (int *)0x0;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar11;
          local_fc = piVar10;
          local_f0 = piVar10;
          local_90 = piVar11;
          FUN_100ef510(&local_110,0x30);
          local_f8 = (int *)0x0;
          local_f4 = (int *)0x0;
          local_100 = 1;
          local_108 = 0x4b;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar11;
          local_fc = piVar11;
          FUN_100ef510(&local_110,0x20);
          local_104 = (int *)FUN_100ee580(piVar1,3,0);
          local_f4 = *(int **)(param_3 + 0xac);
          local_f0 = (int *)0x1e4;
          local_ec = (int *)0x0;
          local_c8 = 0;
          uStack_c4 = 0;
          local_d0 = 0;
          uStack_cc = 0;
          local_d8 = 0x1e4;
          local_100 = 3;
          local_108 = 0x32;
          local_d4 = 0x3f800000;
          local_e4 = (int *)0x0;
          local_e0 = (int *)0x0;
          local_e8 = (int *)0x3f800000;
          local_f8 = (int *)0x0;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_fc = piVar11;
          local_dc = local_f4;
          local_94 = local_104;
          FUN_100ef510(&local_110,0x50);
          local_100 = 4;
          local_f0 = (int *)0x0;
          local_ec = (int *)0x0;
          local_f8 = (int *)0x0;
          local_108 = 0x38;
          local_104 = local_94;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_fc = piVar11;
          local_f4 = piVar11;
          FUN_100ef510(&local_110,0x28);
          piVar11 = (int *)FUN_100ee580(piVar1,1,1);
          local_e0 = (int *)0x0;
          local_f4 = (int *)(*local_a8 | 0x40000000);
          local_ec = (int *)0x6b4;
          local_f0 = (int *)0xa4;
          local_f8 = (int *)0xa4;
          local_100 = 1;
          local_fc = local_94;
          local_108 = 0x10;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar11;
          local_e8 = piVar13;
          local_e4 = piVar14;
          local_9c = piVar11;
          FUN_100ef510(&local_110,0x34);
          if (*piVar1 == 0x10040) {
            local_e8 = (int *)0x0;
            local_f8 = (int *)0xe4;
            local_fc = *(int **)(param_3 + 0xa8);
            local_ec = (int *)0x0;
            local_f4 = (int *)0x3f800000;
            local_100 = 1;
            local_108 = 0xe;
            local_110 = piVar1;
            uStack_10c = param_2;
            local_104 = piVar11;
            local_f0 = piVar11;
            FUN_100ef510(&local_110,0x2c);
          }
          else {
            local_f8 = (int *)0x0;
            local_f4 = (int *)0x0;
            local_100 = 1;
            local_108 = 0x81;
            local_110 = piVar1;
            uStack_10c = param_2;
            local_104 = piVar11;
            local_fc = piVar11;
            FUN_100ef510(&local_110,0x20);
          }
          piVar13 = local_9c;
          local_f8 = (int *)0xe4;
          local_fc = *(int **)(param_3 + 0xa8);
          local_e8 = (int *)0x0;
          local_f4 = (int *)0x42000000;
          local_f0 = local_9c;
          local_ec = (int *)0x0;
          local_100 = 1;
          local_108 = 0x33;
          local_104 = local_9c;
          local_110 = piVar1;
          uStack_10c = param_2;
          FUN_100ef510(&local_110,0x2c);
          local_f8 = (int *)0xe4;
          local_f4 = (int *)0x0;
          local_fc = *(int **)(param_3 + 0xa8);
          local_e8 = (int *)0x0;
          local_f0 = piVar13;
          local_ec = (int *)0x0;
          local_100 = 1;
          local_108 = 0x34;
          local_104 = piVar13;
          local_110 = piVar1;
          uStack_10c = param_2;
          uVar16 = FUN_100ef510(&local_110,0x2c);
          if (local_90 != (int *)0x0) {
            if ((local_ac == (int *)0x0) && ((*(uint *)(*local_88 + 0x44) >> 0x14 & 1) != 0)) {
              local_104 = (int *)FUN_100ee580(piVar1,3,1);
              local_f8 = (int *)0xa4;
              local_f0 = (int *)0xa4;
              local_ec = (int *)0x0;
              local_100 = 7;
              local_108 = 0x57;
              local_110 = piVar1;
              uStack_10c = param_2;
              local_fc = local_104;
              local_f4 = local_104;
              local_ac = local_104;
              FUN_100ef510(&local_110,0x28);
            }
            local_104 = (int *)FUN_100ee580(piVar1,1,0);
            local_e4 = (int *)0x0;
            local_e0 = (int *)0x0;
            local_ec = local_78;
            local_e8 = local_90;
            local_fc = (int *)(*local_7c | 0x40000000);
            local_100 = 1;
            local_f4 = (int *)0x66c;
            local_f0 = local_6c;
            local_f8 = (int *)0xe4;
            local_108 = 0x1d;
            local_110 = piVar1;
            uStack_10c = param_2;
            local_8c = local_104;
            FUN_100ef510(&local_110,0x34);
            local_f8 = (int *)0x0;
            local_100 = (uint)local_8c | 0x10000000;
            local_fc = (int *)0x1;
            local_104 = (int *)0xffffffff;
            local_108 = 0x4001f;
            local_110 = piVar1;
            uStack_10c = param_2;
            uVar16 = FUN_100ef510(&local_110,0x1c);
          }
        }
        local_b0 = *(byte *)(param_3 + 0x1a4) & 4;
        if ((*(byte *)(param_3 + 0x1a4) & 4) == 0) {
          local_74 = (int *)0x0;
LAB_1007cb08:
          FUN_1007a010(uVar16,param_2,param_3,piVar10);
        }
        else {
          bVar7 = true;
          uVar17 = FUN_100ee580(piVar1,3,1);
          uVar16 = FUN_1007db90(uVar17,param_3,param_2);
          if ((uVar15 != 2) && ((*(uint *)(*local_88 + 0x44) >> 0x14 & 1) == 0)) {
            uVar16 = FUN_100ee638(piVar1,piVar10);
            piVar10 = (int *)0x0;
            bVar7 = false;
          }
          uVar16 = FUN_1007a010(uVar16,param_2,param_3,uVar17 & 0xffffffff);
          local_74 = (int *)uVar17;
          if (bVar7) goto LAB_1007cb08;
        }
        FUN_100ee638(piVar1,local_90);
        local_94 = (int *)0x0;
        if (uVar15 == 2) {
          uVar17 = 1;
          piVar11 = (int *)FUN_100ee580(piVar1,1,1);
          piVar12 = (int *)FUN_100ee580(piVar1,extraout_x1 & 0xffffffff,uVar17 & 0xffffffff);
          piVar14 = local_6c;
          piVar13 = local_78;
          local_e0 = (int *)0x0;
          local_e8 = local_6c;
          local_e4 = local_78;
          local_f4 = (int *)(*local_a8 | 0x40000000);
          local_f8 = (int *)0xa4;
          local_f0 = (int *)0xa4;
          local_ec = (int *)0x6a0;
          local_100 = 1;
          local_108 = 0x10;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar11;
          local_fc = piVar10;
          FUN_100ef510(&local_110,0x34);
          local_e0 = (int *)0x0;
          local_e4 = (int *)0xa4;
          local_f0 = piVar14;
          local_ec = piVar13;
          local_fc = (int *)(*local_a8 | 0x40000000);
          local_f8 = (int *)0xa4;
          local_f4 = (int *)0x68c;
          local_100 = 1;
          local_108 = 0x1d;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar12;
          local_e8 = piVar11;
          FUN_100ef510(&local_110,0x34);
          local_e0 = (int *)0x0;
          local_e8 = piVar14;
          local_e4 = piVar13;
          local_108 = 0;
          local_f4 = (int *)(*local_7c | 0xc0000000);
          local_f8 = (int *)0x0;
          local_f0 = (int *)0x0;
          local_ec = (int *)0x69c;
          local_100 = 1;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar11;
          local_fc = piVar11;
          FUN_100ef510(&local_110,0x34);
          local_e0 = (int *)0x0;
          local_e8 = piVar14;
          local_e4 = piVar13;
          local_f4 = (int *)(*local_7c | 0x40000000);
          local_f8 = (int *)0x0;
          local_f0 = (int *)0x0;
          local_ec = (int *)0x6b0;
          local_100 = 1;
          local_108 = 0x200e;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar11;
          local_fc = piVar11;
          uVar16 = FUN_100ef510(&local_110,0x34);
          local_110 = piVar11;
          local_94 = piVar11;
          FUN_1007c260(uVar16,param_2,param_3,piVar11,*local_7c | 0x40000000,0x67c,piVar14,piVar13);
          local_e8 = (int *)0xe4;
          local_ec = *(int **)(param_3 + 0xa8);
          local_e0 = (int *)0x0;
          local_e4 = (int *)0x3f800000;
          local_f8 = (int *)0x0;
          local_f0 = (int *)0x0;
          local_100 = 1;
          local_108 = 0x37;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar11;
          local_fc = piVar12;
          local_f4 = piVar11;
          FUN_100ef510(&local_110,0x34);
          FUN_100ee638(piVar1,piVar12);
        }
        local_8c = (int *)(param_3 + 0xa8);
        local_a8 = (uint *)*local_54;
        iVar6 = *local_50;
        uVar15 = *(uint *)(*local_88 + 0x44) >> 0x17 & 1;
        uVar9 = FUN_100ee580(piVar1,1,1);
        local_108 = uVar15 << 0xd | 0x10;
        local_f4 = local_60;
        local_fc = local_74;
        if (local_b0 == 0) {
          local_f4 = *(int **)(param_3 + 0x150);
          local_fc = piVar10;
        }
        local_fc = (int *)((uint)local_fc | 0x80000000);
        local_f0 = (int *)0xa4;
        local_ec = (int *)0x0;
        local_f8 = (int *)0xa4;
        local_100 = 1;
        local_110 = piVar1;
        uStack_10c = param_2;
        local_104 = (int *)uVar9;
        FUN_100ef510(&local_110,0x28);
        if (uVar15 == 0) {
          local_e8 = (int *)0x0;
          local_f0 = (int *)0x0;
          local_ec = (int *)0x0;
          local_100 = 1;
          local_f4 = (int *)*local_8c;
          local_f8 = (int *)0x0;
          local_108 = 0x34;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = (int *)uVar9;
          local_fc = (int *)uVar9;
          FUN_100ef510(&local_110,0x2c);
        }
        if ((*(uint *)(*(int *)(param_3 + 0x19c) + 0x44) >> 0x14 & 1) == 0) {
          FUN_100ee638(piVar1,piVar10);
          piVar10 = (int *)0x0;
        }
        FUN_100ee638(piVar1,local_74);
        piVar13 = (int *)FUN_100ee580(piVar1,3,1);
        local_e8 = (int *)0x0;
        local_f8 = (int *)0x1a4;
        local_ec = (int *)0x0;
        local_fc = (int *)local_a8;
        local_100 = 7;
        local_108 = 0x38;
        local_110 = piVar1;
        uStack_10c = param_2;
        local_104 = piVar13;
        local_f4 = (int *)iVar6;
        local_f0 = (int *)uVar9;
        FUN_100ef510(&local_110,0x2c);
        FUN_100ee638(piVar1,uVar9);
        local_f4 = (int *)(*(uint *)(param_3 + 0xc4) | 0x40000000);
        local_e4 = local_78;
        local_e0 = (int *)0x0;
        local_ec = (int *)0x660;
        local_e8 = local_6c;
        local_f0 = (int *)0x1a4;
        local_f8 = (int *)0x1a4;
        local_100 = 7;
        local_108 = 0x38;
        local_110 = piVar1;
        uStack_10c = param_2;
        local_104 = piVar13;
        local_fc = piVar13;
        FUN_100ef510(&local_110,0x34);
        if (local_94 != (int *)0x0) {
          local_f0 = (int *)0x0;
          local_ec = (int *)0x0;
          local_f8 = (int *)0x1a4;
          local_f4 = local_94;
          local_100 = 7;
          local_108 = 0x38;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar13;
          local_fc = piVar13;
          FUN_100ef510(&local_110,0x28);
        }
        piVar14 = local_6c;
        local_d4 = 0;
        local_d8 = 0x1a4;
        local_f0 = (int *)(*(uint *)(param_3 + 0xc4) | 0x40000000);
        local_e4 = local_6c;
        local_e0 = local_78;
        local_ec = (int *)0x1a4;
        local_e8 = (int *)0x680;
        local_f4 = *(int **)(param_3 + 0x164);
        local_fc = *(int **)(param_3 + 0x160);
        local_f8 = (int *)0x1a4;
        local_100 = 7;
        local_108 = 0x32;
        local_110 = piVar1;
        uStack_10c = param_2;
        local_104 = piVar13;
        local_dc = piVar13;
        FUN_100ef510(&local_110,0x40);
        if ((*(uint *)(*(int *)(param_3 + 0x19c) + 0x44) >> 0x14 & 1) == 0) {
          FUN_100ee638(piVar1,piVar14);
          local_68 = (int *)0x0;
        }
        piVar14 = local_98;
        bVar7 = local_64 == local_70;
        bVar8 = local_90 == (int *)0x0;
        local_84 = bVar7 && bVar8;
        local_108 = (uint)local_84 << 0xd;
        local_a8 = (uint *)local_108;
        if (local_9c == (int *)0x0) {
          if ((bVar7 && bVar8) && (*(char *)(param_3 + 100) == '\0')) {
            local_e8 = (int *)0x12345678;
            local_f4 = (int *)0x1a4;
            local_f0 = local_98;
            local_ec = (int *)0x1a4;
            local_fc = (int *)CONCAT31(local_fc._1_3_,7);
            local_100 = 2;
            local_104 = (int *)0x2000;
            local_110 = local_80;
            uStack_10c = param_3;
            local_108 = param_2;
            local_f8 = piVar13;
            FUN_10079a50(&local_110,0x2c);
            goto LAB_1007d084;
          }
          local_a3 = (uint)(local_84 | (byte)local_a3);
          local_f0 = (int *)0x1a4;
          local_ec = (int *)0x0;
          local_f8 = (int *)0x1a4;
          local_f4 = local_98;
          local_100 = 7;
          local_104 = local_98;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_fc = piVar13;
          FUN_100ef510(&local_110,0x28);
        }
        else if ((bVar7 && bVar8) && (*(char *)(param_3 + 100) == '\0')) {
          local_e0 = (int *)0x12345678;
          local_ec = (int *)0x1a4;
          local_f8 = local_9c;
          local_f4 = (int *)0x0;
          local_e8 = local_98;
          local_e4 = (int *)0x1a4;
          local_fc = (int *)CONCAT31(local_fc._1_3_,7);
          local_100 = 2;
          local_104 = (int *)0x2032;
          local_110 = local_80;
          uStack_10c = param_3;
          local_108 = param_2;
          local_f0 = piVar13;
          FUN_10079a50(&local_110,0x34);
LAB_1007d084:
          FUN_100ee638(piVar1,piVar14);
          local_98 = (int *)0x0;
        }
        else {
          local_f8 = (int *)0x0;
          local_a3 = (uint)(local_84 | (byte)local_a3);
          local_e8 = (int *)0x1a4;
          local_e4 = (int *)0x0;
          local_f0 = (int *)0x1a4;
          local_ec = local_98;
          local_100 = 7;
          local_fc = local_9c;
          local_104 = local_98;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_108 = local_108 | 0x32;
          local_f4 = piVar13;
          FUN_100ef510(&local_110,0x30);
        }
        FUN_100ee638(piVar1,piVar13);
        piVar13 = local_88;
        piVar14 = local_ac;
        if ((*(uint *)(*local_88 + 0x44) >> 0x14 & 1) != 0) {
          piVar14 = (int *)FUN_100ee580(piVar1,3,1);
          puVar2 = local_4c;
          local_f4 = (int *)0x1f0;
          local_f0 = (int *)0x0;
          local_f8 = (int *)0xff;
          local_fc = (int *)*local_4c;
          local_108 = 0x36;
          local_100 = 1;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar14;
          FUN_100ef510(&local_110,0x24);
          local_f4 = (int *)0x200;
          local_f0 = (int *)0x0;
          local_f8 = (int *)0xff;
          local_fc = (int *)*puVar2;
          local_108 = 0x36;
          local_100 = 2;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar14;
          FUN_100ef510(&local_110,0x24);
          local_f4 = (int *)0x210;
          local_f0 = (int *)0x0;
          local_f8 = (int *)0xff;
          local_fc = (int *)*puVar2;
          local_108 = 0x36;
          local_100 = 4;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar14;
          FUN_100ef510(&local_110,0x24);
          if ((*(uint *)(*piVar13 + 0x44) >> 0x1d & 1) == 0) {
            uVar15 = FUN_100ee580(piVar1,3,1);
            local_f4 = (int *)0x1f0;
            local_f0 = (int *)0x0;
            local_f8 = (int *)0xaa;
            local_fc = (int *)*puVar2;
            local_108 = 0x36;
            local_100 = 1;
            local_110 = piVar1;
            uStack_10c = param_2;
            local_104 = (int *)uVar15;
            FUN_100ef510(&local_110,0x24);
            local_f4 = (int *)0x200;
            local_f0 = (int *)0x0;
            local_f8 = (int *)0xaa;
            local_fc = (int *)*puVar2;
            local_108 = 0x36;
            local_100 = 2;
            local_110 = piVar1;
            uStack_10c = param_2;
            local_104 = (int *)uVar15;
            FUN_100ef510(&local_110,0x24);
            local_f4 = (int *)0x210;
            local_f0 = (int *)0x0;
            local_f8 = (int *)0xaa;
            local_fc = (int *)*puVar2;
            local_108 = 0x36;
            local_100 = 4;
            local_110 = piVar1;
            uStack_10c = param_2;
            local_104 = (int *)uVar15;
            FUN_100ef510(&local_110,0x24);
            local_f0 = (int *)0x1a4;
            local_ec = (int *)0x0;
            local_fc = (int *)(uVar15 | 0x80000000);
            local_f8 = (int *)0x1a4;
            local_100 = 7;
            local_108 = 0;
            local_110 = piVar1;
            uStack_10c = param_2;
            local_104 = (int *)uVar15;
            local_f4 = piVar14;
            FUN_100ef510(&local_110,0x28);
          }
          else {
            uVar15 = *(uint *)(param_3 + 0x14c);
          }
          local_108 = 0;
          local_f4 = (int *)(uVar15 | 0x80000000);
          local_f0 = (int *)0x1a4;
          local_ec = (int *)0x0;
          local_f8 = (int *)0x1a4;
          local_100 = 7;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar14;
          local_fc = piVar14;
          uVar16 = FUN_100ef510(&local_110,0x28);
          FUN_1007a010(uVar16,param_2,param_3,piVar14);
          if (uVar15 != *(uint *)(param_3 + 0x14c)) {
            FUN_100ee638(piVar1,uVar15);
          }
          local_108 = 0;
          local_f4 = (int *)((uint)piVar10 | 0x80000000);
          local_f0 = (int *)0x1a4;
          local_ec = (int *)0x0;
          local_f8 = (int *)0x1a4;
          local_100 = 7;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar14;
          local_fc = piVar14;
          FUN_100ef510(&local_110,0x28);
          uVar16 = FUN_100ee638(piVar1,piVar10);
          piVar10 = (int *)0x0;
          if (local_b0 == 0) {
            FUN_1007a010(uVar16,param_2,param_3,piVar14);
          }
          else {
            uVar17 = FUN_100ee580(piVar1,3,1);
            uVar16 = FUN_1007db90(uVar17,param_3,param_2);
            FUN_1007a010(uVar16,param_2,param_3,uVar17 & 0xffffffff);
            FUN_100ee638(piVar1,uVar17 & 0xffffffff);
          }
          FUN_100ee638(piVar1,piVar14);
          if (((*(uint *)(*local_88 + 0x44) >> 0x17 & 1) == 0) &&
             ((*(uint *)(*local_88 + 0x28) >> 0x1e & 1) == 0)) {
            uVar15 = 0;
          }
          else {
            uVar15 = 0x2000;
          }
          piVar13 = (int *)FUN_100ee580(piVar1,1,1);
          local_f4 = local_60;
          if (local_b0 == 0) {
            local_f4 = *(int **)(param_3 + 0x150);
          }
          local_ec = (int *)0x0;
          local_f8 = (int *)0xa4;
          local_108 = uVar15 | 0x10;
          local_f0 = (int *)0xa4;
          local_100 = 1;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar13;
          local_fc = piVar14;
          uVar16 = FUN_100ef510(&local_110,0x28);
          if (uVar15 == 0) {
            local_e8 = (int *)0x0;
            local_f0 = (int *)0x0;
            local_ec = (int *)0x0;
            local_100 = 1;
            local_f4 = (int *)*local_8c;
            local_f8 = (int *)0x0;
            local_108 = 0x34;
            local_110 = piVar1;
            uStack_10c = param_2;
            local_104 = piVar13;
            local_fc = piVar13;
            uVar16 = FUN_100ef510(&local_110,0x2c);
          }
          local_110 = piVar13;
          FUN_1007c260(uVar16,param_2,param_3,piVar13,*local_7c,0x65c,0xffffffff,0xffffffff);
          FUN_100ee638(piVar1,piVar13);
          piVar11 = (int *)FUN_100ee580(piVar1,3,1);
          local_ec = (int *)0x0;
          local_e8 = (int *)0x0;
          local_f4 = *(int **)(param_3 + 0x17c);
          local_f8 = (int *)0x1a4;
          local_fc = *(int **)(param_3 + 0x178);
          local_100 = 7;
          local_108 = 0x38;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar11;
          local_f0 = piVar13;
          FUN_100ef510(&local_110,0x2c);
          piVar13 = local_68;
          local_e4 = local_78;
          local_e0 = (int *)0x0;
          local_f4 = (int *)(*local_5c | 0x40000000);
          local_ec = (int *)0x670;
          local_e8 = local_68;
          local_f0 = (int *)0x1a4;
          local_f8 = (int *)0xa4;
          local_100 = 7;
          local_108 = 0x38;
          local_110 = piVar1;
          uStack_10c = param_2;
          local_104 = piVar11;
          local_fc = piVar11;
          FUN_100ef510(&local_110,0x34);
          FUN_100ee638(piVar1,piVar13);
          piVar13 = local_94;
          local_68 = (int *)0x0;
          if (local_94 != (int *)0x0) {
            local_f0 = (int *)0x0;
            local_ec = (int *)0x0;
            local_f8 = (int *)0x1a4;
            local_f4 = local_94;
            local_100 = 7;
            local_108 = 0x38;
            local_110 = piVar1;
            uStack_10c = param_2;
            local_104 = piVar11;
            local_fc = piVar11;
            FUN_100ef510(&local_110,0x28);
            FUN_100ee638(piVar1,piVar13);
            local_94 = (int *)0x0;
          }
          piVar13 = local_ac;
          if (local_9c == (int *)0x0) {
            piVar14 = piVar11;
            if (local_ac == (int *)0x0) goto LAB_1007d7b8;
            if ((local_84 != 0) && (*(char *)(param_3 + 100) == '\0')) {
              local_e8 = (int *)0x12345678;
              local_f0 = local_ac;
              local_ec = (int *)0x1a4;
              local_f4 = (int *)0x1a4;
              local_fc = (int *)CONCAT31(local_fc._1_3_,7);
              local_100 = 3;
              local_104 = (int *)0x2000;
              local_110 = local_80;
              uStack_10c = param_3;
              local_108 = param_2;
              local_f8 = piVar11;
              FUN_10079a50(&local_110,0x2c);
              goto LAB_1007d628;
            }
            local_a3 = local_a3 & 0xff | (uint)local_84 << 1;
            local_f0 = (int *)0x1a4;
            local_ec = (int *)0x0;
            local_f8 = (int *)0x1a4;
            local_f4 = local_ac;
            local_100 = 7;
            local_108 = (uint)local_a8;
            local_104 = local_ac;
            local_110 = piVar1;
            uStack_10c = param_2;
            local_fc = piVar11;
            FUN_100ef510(&local_110,0x28);
          }
          else if ((local_84 == 0) || (*(char *)(param_3 + 100) != '\0')) {
            local_a3 = local_a3 & 0xff | (uint)local_84 << 1;
            local_f4 = piVar11;
            if (local_ac == (int *)0x0) {
              local_f0 = (int *)0x1a4;
              local_ec = (int *)0x0;
              local_108 = (uint)local_a8 | 0x38;
              local_f8 = (int *)0x0;
              local_100 = 7;
              local_fc = local_9c;
              local_110 = piVar1;
              uStack_10c = param_2;
              local_104 = piVar11;
              local_ac = piVar11;
              FUN_100ef510(&local_110,0x28);
              piVar14 = local_ac;
              goto LAB_1007d7b8;
            }
            local_f8 = (int *)0x0;
            local_108 = (uint)local_a8 | 0x32;
            local_104 = local_ac;
            local_e8 = (int *)0x1a4;
            local_e4 = (int *)0x0;
            local_f0 = (int *)0x1a4;
            local_ec = local_ac;
            local_100 = 7;
            local_fc = local_9c;
            local_110 = piVar1;
            uStack_10c = param_2;
            FUN_100ef510(&local_110,0x30);
          }
          else {
            local_f0 = piVar11;
            if (local_ac == (int *)0x0) {
              local_e8 = (int *)0x12345678;
              local_ec = (int *)0x1a4;
              local_fc = (int *)CONCAT31(local_fc._1_3_,7);
              local_100 = 3;
              local_104 = (int *)0x2038;
              local_f8 = local_9c;
              local_f4 = (int *)0x0;
              local_110 = local_80;
              uStack_10c = param_3;
              local_108 = param_2;
              FUN_10079a50(&local_110,0x2c);
            }
            else {
              local_e0 = (int *)0x12345678;
              local_e8 = local_ac;
              local_e4 = (int *)0x1a4;
              local_ec = (int *)0x1a4;
              local_fc = (int *)CONCAT31(local_fc._1_3_,7);
              local_100 = 3;
              local_104 = (int *)0x2032;
              local_f8 = local_9c;
              local_f4 = (int *)0x0;
              local_110 = local_80;
              uStack_10c = param_3;
              local_108 = param_2;
              FUN_10079a50(&local_110,0x34);
LAB_1007d628:
              FUN_100ee638(piVar1,piVar13);
              local_ac = (int *)0x0;
            }
          }
          piVar14 = local_ac;
          if (local_ac != piVar11) {
            FUN_100ee638(piVar1,piVar11);
            piVar14 = local_ac;
          }
        }
LAB_1007d7b8:
        local_ac = piVar14;
        FUN_100ee638(piVar1,local_9c);
        FUN_100ee638(piVar1,piVar10);
        FUN_100ee638(piVar1,local_94);
        FUN_100ee638(piVar1,local_68);
        if (local_90 != (int *)0x0) {
          local_108 = 0x15;
          local_104 = (int *)0x0;
          local_110 = piVar1;
          uStack_10c = param_2;
          FUN_100ef510(&local_110,0x10);
        }
      }
      param_1 = local_80;
      local_64 = (undefined4 *)((int)local_64 + 1);
    } while (local_64 < &DAT_00000008);
    FUN_1007e1a8(local_80,param_3,4);
    piVar13 = local_98;
    if (local_98 != (int *)0x0) {
      uVar15 = ~((local_a3 & 0xff) << 0xd) & 0x2000;
      if ((uVar15 == 0) || (*(char *)(param_3 + 100) == '\0')) {
        local_fc = (int *)CONCAT31(local_fc._1_3_,7);
        local_104 = (int *)(uVar15 | 0x36);
        local_110 = param_1;
        local_f0 = (int *)0x12345678;
        local_f4 = (int *)0xa4;
        local_f8 = local_98;
        local_100 = 2;
        uStack_10c = param_3;
        local_108 = param_2;
        FUN_10079a50(&local_110,0x24);
      }
      else {
        local_100 = 7;
        local_fc = local_98;
        local_f8 = (int *)0x1a4;
        local_f4 = (int *)0x0;
        local_108 = 0x2036;
        local_104 = local_98;
        local_110 = piVar1;
        uStack_10c = param_2;
        FUN_100ef510(&local_110,0x20);
        local_fc = (int *)CONCAT31(local_fc._1_3_,7);
        local_f0 = (int *)0x12345678;
        local_f8 = piVar13;
        local_f4 = (int *)0xa4;
        local_100 = 2;
        local_104 = (int *)0x36;
        local_110 = param_1;
        uStack_10c = param_3;
        local_108 = param_2;
        FUN_10079a50(&local_110,0x24);
      }
    }
    puVar21 = (uint *)(param_3 + 100);
  }
  piVar13 = local_ac;
  if (local_a4 == '\0') {
    local_ec = (int *)0x0;
    local_e8 = (int *)0x0;
    uVar5 = 0xf;
    if (*(char *)(param_3 + 0x1ac) == '\0') {
      uVar5 = 7;
    }
    local_fc = (int *)CONCAT31(local_fc._1_3_,uVar5);
    local_e0 = (int *)0x12345678;
    local_e4 = (int *)0x3f800000;
    local_f4 = (int *)0xe4;
    local_f0 = (int *)0x0;
    local_f8 = *(int **)(param_3 + 0xac);
    local_100 = 3;
    local_104 = (int *)0x36;
    local_110 = param_1;
    uStack_10c = param_3;
    local_108 = param_2;
    FUN_10079a50(&local_110,0x34);
  }
  else if (local_ac != (int *)0x0) {
    uVar15 = ~((local_a3 & 0xff) << 0xc) & 0x2000;
    if ((uVar15 == 0) || ((char)*puVar21 == '\0')) {
      local_fc = (int *)CONCAT31(local_fc._1_3_,7);
      local_104 = (int *)(uVar15 | 0x36);
      local_f0 = (int *)0x12345678;
      local_f4 = (int *)0xa4;
      local_f8 = local_ac;
      local_100 = 3;
      local_110 = param_1;
      uStack_10c = param_3;
      local_108 = param_2;
      FUN_10079a50(&local_110,0x24);
    }
    else {
      local_100 = 7;
      local_fc = local_ac;
      local_f8 = (int *)0x1a4;
      local_f4 = (int *)0x0;
      local_108 = 0x2036;
      local_104 = local_ac;
      local_110 = piVar1;
      uStack_10c = param_2;
      FUN_100ef510(&local_110,0x20);
      local_fc = (int *)CONCAT31(local_fc._1_3_,7);
      local_f0 = (int *)0x12345678;
      local_f8 = piVar13;
      local_f4 = (int *)0xa4;
      local_100 = 3;
      local_104 = (int *)0x36;
      local_110 = param_1;
      uStack_10c = param_3;
      local_108 = param_2;
      FUN_10079a50(&local_110,0x24);
    }
  }
  FUN_100ee638(piVar1,local_ac);
  FUN_100ee638(piVar1,local_98);
  return;
}

