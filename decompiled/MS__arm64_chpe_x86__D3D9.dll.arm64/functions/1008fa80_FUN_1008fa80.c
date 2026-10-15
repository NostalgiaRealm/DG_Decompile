/*
 * FUN_1008fa80 at 1008fa80
 * undefined FUN_1008fa80(void)
 * Address ranges: 1008fa80-10090943
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008fa80(undefined4 param_1,uint *param_2,undefined4 param_3,int param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined8 uVar13;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong extraout_x1_01;
  ulonglong extraout_x1_02;
  ulonglong extraout_x1_03;
  ulonglong uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 *puVar18;
  uint *puVar19;
  char cVar20;
  uint uVar21;
  undefined4 *extraout_w11;
  uint *local_110;
  uint *local_10c;
  uint local_108;
  uint *local_104;
  uint local_100;
  uint *local_fc;
  undefined4 local_f8;
  uint local_f4;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  uint local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  char local_c0;
  uint *local_bc;
  uint *local_b8;
  undefined4 *local_b4;
  undefined4 *local_b0;
  uint *local_ac;
  uint *local_a8;
  uint *local_a4;
  uint *local_a0;
  uint *local_9c;
  uint *local_98;
  undefined4 *local_94;
  undefined4 *local_90;
  undefined4 *local_8c;
  uint *local_88;
  uint *local_84;
  undefined4 *local_80;
  uint *local_7c;
  uint *local_78;
  undefined4 *local_74;
  char *local_70;
  uint *local_6c;
  uint *local_68;
  char *local_64;
  uint *local_60;
  uint *puStack_5c;
  uint *local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  uint *local_4c;
  
  puVar12 = (uint *)(param_4 + 0x18);
  puVar17 = (uint *)(param_4 + 0x4ac);
  local_a4 = (uint *)(param_4 + 0x4b4);
  local_84 = (uint *)(param_4 + 0x4bc);
  local_a4[0] = 0;
  local_a4[1] = 0;
  local_9c = (uint *)(param_4 + 0x4cc);
  local_84[0] = 0;
  local_84[1] = 0;
  local_b8 = (uint *)(param_4 + 0x4c4);
  puVar17[0] = 0;
  puVar17[1] = 0;
  local_a0 = (uint *)(param_4 + 0x4b0);
  *local_9c = 0;
  local_88 = (uint *)(param_4 + 0x4c0);
  local_98 = (uint *)(param_4 + 0x4b8);
  cVar20 = *(char *)(param_4 + 0x530);
  local_b8[0] = 0;
  local_b8[1] = 0;
  if (cVar20 == '\0') {
    iVar5 = *(int *)(param_4 + 0x10);
    uVar9 = 0;
    uVar21 = 0;
    do {
      if ((*(char *)(uVar21 + iVar5 + 0x10) != '\0') &&
         (cVar20 = *(char *)(iVar5 + uVar21), cVar20 != -1)) {
        if (cVar20 == '\0') {
          *puVar17 = uVar9 | 0x320100;
          *local_a0 = uVar9 | 0x324100;
          *local_a4 = uVar9 | 0x328100;
        }
        else if (cVar20 == '0') {
          *local_98 = uVar9 | 0x320100;
          *local_84 = uVar9 | 0x324100;
          *local_88 = uVar9 | 0x328100;
        }
        uVar9 = uVar9 + 1;
      }
      if (*(char *)(iVar5 + uVar21) == '0') {
        uVar6 = *(uint *)(param_4 + 0x518);
        *local_b8 = uVar6 | 0x320100;
        *(uint *)(param_4 + 0x4c8) = uVar6 | 0x324100;
        *local_9c = uVar6 | 0x328100;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < 0x10);
  }
  else {
    uVar9 = 0;
    if (*(uint *)(param_4 + 0x148) != 0) {
      do {
        cVar20 = *(char *)(uVar9 + param_4 + 0x136);
        if (cVar20 == '\0') {
          *puVar17 = uVar9 | 0x320100;
          *local_a0 = uVar9 | 0x324100;
          *local_a4 = uVar9 | 0x328100;
        }
        else if (cVar20 == '\x03') {
          *local_98 = uVar9 | 0x320100;
          *local_84 = uVar9 | 0x324100;
          *local_88 = uVar9 | 0x328100;
        }
        else if (cVar20 == '\x11') {
          *local_b8 = uVar9 | 0x320100;
          *(uint *)(param_4 + 0x4c8) = uVar9 | 0x324100;
          *local_9c = uVar9 | 0x328100;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_4 + 0x148));
    }
  }
  local_b0 = (undefined4 *)(param_4 + 0x484);
  local_b4 = (undefined4 *)(param_4 + 0x488);
  puVar1 = (undefined8 *)(param_4 + 0x480);
  local_74 = (undefined4 *)(param_4 + 0x48c);
  *(undefined8 *)(param_4 + 0x490) = 0x11040020000d00;
  *(undefined4 *)(param_4 + 0x498) = 0x110400;
  *(undefined8 *)(param_4 + 0x488) = 0x41040000110400;
  *puVar1 = 0x11080300410803;
  puVar2 = (uint *)(param_4 + 0x494);
  local_bc = puVar12;
  local_ac = param_2;
  local_a8 = puVar17;
  local_78 = (uint *)puVar1;
  local_58 = puVar2;
  local_54 = param_3;
  uStack_50 = param_1;
  if ((*(char *)(param_4 + 0x52d) == '\0') || (*puVar17 == 0)) {
    local_c0 = '\0';
    puVar12 = local_88;
  }
  else {
    uVar14 = 1;
    local_c0 = '\x01';
    uVar9 = FUN_10121590(puVar12,1,1);
    *puVar2 = uVar9;
    uVar10 = FUN_10121590(puVar12,3,uVar14 & 0xffffffff);
    uVar11 = FUN_10121590(puVar12,extraout_x1 & 0xffffffff,1);
    puVar16 = local_ac;
    local_ec = 0x80;
    local_e8 = 0;
    local_f4 = *(uint *)puVar1;
    local_10c = local_ac;
    local_f0 = 0xe4;
    local_f8 = 0xa4;
    local_fc = (uint *)*puVar17;
    local_100 = 1;
    local_108 = 0x10;
    local_110 = puVar12;
    local_104 = (uint *)uVar10;
    FUN_10122a88(&local_110,0x2c);
    puVar17 = local_78;
    local_10c = puVar16;
    local_ec = 0x80;
    local_e8 = 0;
    local_f4 = *local_78;
    local_f0 = 0xe4;
    local_f8 = 0xa4;
    local_fc = (uint *)*local_a0;
    local_100 = 2;
    local_108 = 0x10;
    local_110 = puVar12;
    local_104 = (uint *)uVar10;
    FUN_10122a88(&local_110,0x2c);
    local_ec = 0x80;
    local_e8 = 0;
    local_f4 = *puVar17;
    local_10c = puVar16;
    local_f0 = 0xe4;
    local_f8 = 0xa4;
    local_fc = (uint *)*local_a4;
    local_100 = 4;
    local_108 = 0x10;
    local_110 = puVar12;
    local_104 = (uint *)uVar10;
    FUN_10122a88(&local_110,0x2c);
    local_f4 = 8;
    local_f0 = 0;
    local_10c = puVar16;
    local_fc = (uint *)*local_b0;
    local_f8 = 0xe4;
    local_100 = 7;
    local_108 = 0x56;
    local_110 = puVar12;
    local_104 = (uint *)uVar11;
    FUN_10122a88(&local_110,0x24);
    local_10c = puVar16;
    local_100 = 7;
    local_f0 = 0x1a4;
    local_ec = 0;
    local_108 = 0xe;
    local_f8 = 0x1a4;
    local_110 = puVar12;
    local_104 = (uint *)uVar11;
    local_fc = (uint *)uVar11;
    local_f4 = uVar10;
    FUN_10122a88(&local_110,0x28);
    local_dc = 0;
    local_f0 = 0xe4;
    local_100 = 1;
    local_f4 = *local_74;
    local_e4 = 0x3eaaaaab;
    local_e0 = 0x3eaaaaab;
    local_ec = 0x3eaaaaab;
    local_e8 = 0x3eaaaaab;
    local_10c = puVar16;
    local_f8 = 0x1a4;
    local_108 = 0x10;
    local_110 = puVar12;
    local_104 = (uint *)uVar11;
    local_fc = (uint *)uVar11;
    FUN_10122a88(&local_110,0x38);
    local_ec = 0;
    local_e8 = 0;
    local_f8 = 0;
    local_10c = puVar16;
    local_f4 = *local_b4;
    local_f0 = 0xe4;
    local_104 = (uint *)*puVar2;
    local_100 = 1;
    local_108 = 0x1d;
    local_110 = puVar12;
    local_fc = (uint *)uVar11;
    FUN_10122a88(&local_110,0x2c);
    local_e8 = 0xe4;
    local_e4 = 0x94;
    local_104 = (uint *)*puVar2;
    local_e0 = 0;
    local_f8 = 0;
    local_10c = puVar16;
    local_ec = *local_b0;
    local_100 = 1;
    local_f0 = 0;
    local_108 = 0x37;
    local_110 = puVar12;
    local_fc = local_104;
    local_f4 = uVar11;
    FUN_10122a88(&local_110,0x34);
    local_f0 = 0xe4;
    local_ec = 0x94;
    local_104 = (uint *)*puVar2;
    local_e8 = 0;
    local_10c = puVar16;
    local_f4 = *local_b0;
    local_100 = 1;
    local_f8 = 0;
    local_108 = 0x33;
    local_110 = puVar12;
    local_fc = local_104;
    FUN_10122a88(&local_110,0x2c);
    local_104 = (uint *)*puVar2;
    local_e8 = 0;
    local_f0 = 0xe4;
    local_ec = 0x90;
    local_f4 = *local_b0;
    local_f8 = 0;
    local_108 = 0x34;
    local_100 = 1;
    local_10c = puVar16;
    local_110 = puVar12;
    local_fc = local_104;
    FUN_10122a88(&local_110,0x2c);
    local_104 = (uint *)*puVar2;
    local_f4 = 0;
    local_10c = puVar16;
    local_f8 = 0;
    local_100 = 1;
    local_108 = 0x1c;
    local_110 = puVar12;
    local_fc = local_104;
    FUN_10122a88(&local_110,0x20);
    FUN_10121648(puVar12,uVar11);
    puVar12 = (uint *)FUN_10121648(puVar12,uVar10);
  }
  puVar17 = local_bc;
  local_4c = (uint *)(param_4 + 0x528);
  if (1 < *local_4c) {
    local_104 = (uint *)FUN_10121590(local_bc,3,1);
    puVar2 = local_ac;
    puVar12 = (uint *)(param_4 + 0x49c);
    *puVar12 = (uint)local_104;
    if (local_c0 == '\0') {
      local_f8 = 0;
      local_f4 = 0;
      local_108 = 0x36;
      local_100 = 1;
      local_fc = (uint *)0x102500;
      local_110 = puVar17;
      local_10c = local_ac;
      FUN_10122a88(&local_110,0x20);
    }
    else {
      local_f4 = *local_b4;
      local_e0 = 0xfffffffa;
      local_dc = 0;
      local_f0 = 0xe4;
      local_ec = 6;
      local_fc = (uint *)*local_58;
      local_e4 = 0xe4;
      local_f8 = 0;
      local_100 = 1;
      local_108 = 0x23;
      local_110 = puVar17;
      local_10c = local_ac;
      local_e8 = local_f4;
      FUN_10122a88(&local_110,0x38);
      local_104 = (uint *)*puVar12;
      local_ec = 0;
      local_f4 = 0x102500;
      local_f0 = 0;
      local_110 = puVar17;
      local_10c = puVar2;
      local_f8 = 0x100;
      local_100 = 1;
      local_108 = 0x1e;
      local_fc = local_104;
      FUN_10122a88(&local_110,0x28);
      local_e0 = 0xffffffff;
      local_dc = 0;
      local_104 = (uint *)*puVar12;
      local_f8 = 0;
      local_f4 = 0;
      local_110 = puVar17;
      local_10c = puVar2;
      local_e8 = *local_b4;
      local_ec = 0x100;
      local_e4 = 0xe4;
      local_100 = 2;
      local_fc = (uint *)0x40400900;
      local_108 = 0x27;
      local_f0 = (uint)local_104;
      FUN_10122a88(&local_110,0x38);
      local_f8 = 0;
      local_110 = puVar17;
      local_10c = puVar2;
      local_100 = *puVar12 | 0x10000000;
      local_fc = (uint *)0x1;
      local_104 = (uint *)0xffffffff;
      local_108 = 0x4001f;
      FUN_10122a88(&local_110,0x1c);
    }
    local_104 = (uint *)*puVar12;
    local_e0 = 0xffffffff;
    local_dc = 0;
    local_ec = 0x100;
    local_e8 = *local_b4;
    local_e4 = 0xe4;
    local_f8 = 0x1e4;
    local_f4 = 0;
    local_100 = 7;
    local_fc = (uint *)0x40400900;
    local_108 = 0x36;
    local_10c = local_ac;
    local_110 = local_bc;
    local_f0 = (uint)local_104;
    puVar12 = (uint *)FUN_10122a88(&local_110,0x38);
  }
  puVar17 = local_bc;
  uVar9 = (uint)*(undefined8 *)(param_4 + 0x510);
  if ((((uVar9 >> 9 & 1) == 0) || (*local_a8 == 0)) || (*local_b8 == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  local_64 = (char *)(param_4 + 0x52e);
  *local_64 = bVar7;
  if (((uVar9 >> 10 & 1) == 0) || (*local_98 == 0)) {
    cVar20 = '\0';
  }
  else {
    cVar20 = '\x01';
  }
  local_70 = (char *)(param_4 + 0x52f);
  puVar3 = (undefined4 *)(param_4 + 0x4dc);
  *local_70 = cVar20;
  if (bVar7) {
    uVar14 = 1;
    *(uint *)(param_4 + 0x4d0) = *local_a8;
    *(uint *)(param_4 + 0x4d4) = *local_a0;
    *(uint *)(param_4 + 0x4d8) = *local_a4;
    uVar10 = FUN_10121590(local_bc,3,1);
    *puVar3 = uVar10;
    uVar10 = FUN_10121590(puVar17,extraout_x1_00 & 0xffffffff,uVar14 & 0xffffffff);
    *(undefined4 *)(param_4 + 0x4e0) = uVar10;
    uVar14 = 1;
    uVar10 = FUN_10121590(puVar17,3,1);
    *(undefined4 *)(param_4 + 0x4e4) = uVar10;
    uVar10 = FUN_10121590(puVar17,extraout_x1_01 & 0xffffffff,uVar14 & 0xffffffff);
    *(undefined4 *)(param_4 + 0x4e8) = uVar10;
    uVar14 = 1;
    puVar15 = (undefined4 *)(param_4 + 0x4ec);
    uVar10 = FUN_10121590(puVar17,3,1);
    *puVar15 = uVar10;
    puVar18 = (undefined4 *)(param_4 + 0x4f0);
    uVar10 = FUN_10121590(puVar17,extraout_x1_02 & 0xffffffff,uVar14 & 0xffffffff);
    *puVar18 = uVar10;
    puVar12 = (uint *)FUN_10121590(puVar17,3,1);
    *(uint **)(param_4 + 0x4f4) = puVar12;
  }
  else {
    puVar18 = (undefined4 *)(param_4 + 0x4f0);
    puVar15 = (undefined4 *)(param_4 + 0x4ec);
  }
  puVar8 = local_bc;
  local_8c = (undefined4 *)(param_4 + 0x4e8);
  local_b0 = (undefined4 *)(param_4 + 0x4e0);
  local_b4 = (undefined4 *)(param_4 + 0x4e4);
  puVar17 = (uint *)(param_4 + 0x4f4);
  puVar2 = (uint *)(param_4 + 0x4f8);
  puVar16 = (uint *)(param_4 + 0x4fc);
  puVar19 = (uint *)(param_4 + 0x500);
  puVar4 = (undefined4 *)(param_4 + 0x504);
  local_94 = puVar18;
  local_90 = puVar15;
  local_80 = puVar3;
  if (*local_70 != '\0') {
    uVar14 = 1;
    *puVar2 = *local_98;
    *puVar16 = *local_84;
    *puVar19 = *local_88;
    uVar10 = FUN_10121590(local_bc,3,1);
    *puVar4 = uVar10;
    uVar10 = FUN_10121590(puVar8,extraout_x1_03 & 0xffffffff,uVar14 & 0xffffffff);
    *(undefined4 *)(param_4 + 0x508) = uVar10;
    puVar12 = (uint *)FUN_10121590(puVar8,3,1);
    *(uint **)(param_4 + 0x50c) = puVar12;
  }
  puVar15 = local_80;
  puVar8 = local_ac;
  puVar18 = (undefined4 *)(param_4 + 0x508);
  puVar3 = (undefined4 *)(param_4 + 0x50c);
  local_78 = puVar2;
  local_60 = puVar19;
  puStack_5c = puVar16;
  if (*local_64 != '\0') {
    local_108 = *local_b8;
    local_110 = (uint *)*local_9c;
    local_6c = local_a8;
    local_68 = local_a4;
    local_9c = local_ac;
    uVar13 = FUN_10090988(puVar12,local_ac,param_4,*puVar4,*local_80,*local_b0,*local_a4,*local_a8);
    local_108 = *(undefined4 *)(param_4 + 0x4c8);
    local_110 = *(uint **)(param_4 + 0x4cc);
    uVar13 = FUN_10090988(uVar13,puVar8,param_4,*puVar18,*local_b4,*local_8c,
                          *(undefined4 *)(param_4 + 0x4b4),*(undefined4 *)(param_4 + 0x4b0));
    local_108 = *(undefined4 *)(param_4 + 0x4c8);
    local_110 = *(uint **)(param_4 + 0x4c4);
    FUN_10090988(uVar13,puVar8,param_4,*puVar3,*local_90,*local_94,*(undefined4 *)(param_4 + 0x4ac),
                 *(undefined4 *)(param_4 + 0x4b0));
    puVar12 = local_bc;
    local_7c = local_bc;
    local_b8 = (uint *)FUN_10121590(local_bc,3,1);
    local_ec = 0;
    local_110 = puVar12;
    local_10c = puVar8;
    local_f4 = *local_b0;
    local_f0 = 0x1a4;
    local_fc = (uint *)*puVar15;
    local_f8 = 0x1a4;
    local_100 = 7;
    local_104 = (uint *)*puVar17;
    local_108 = 0;
    FUN_10122a88(&local_110,0x28);
    local_104 = (uint *)*puVar17;
    local_f0 = 0x1a4;
    local_ec = 0;
    local_108 = 0;
    local_110 = puVar12;
    local_10c = puVar8;
    local_f4 = *local_b4;
    local_f8 = 0x1a4;
    local_100 = 7;
    local_fc = local_104;
    FUN_10122a88(&local_110,0x28);
    local_104 = (uint *)*puVar17;
    local_110 = puVar12;
    local_10c = puVar8;
    local_f0 = 0x1a4;
    local_ec = 0;
    local_f4 = *local_8c;
    local_108 = 0;
    local_f8 = 0x1a4;
    local_100 = 7;
    local_fc = local_104;
    FUN_10122a88(&local_110,0x28);
    local_104 = (uint *)*puVar17;
    local_110 = puVar12;
    local_10c = puVar8;
    local_f0 = 0x1a4;
    local_ec = 0;
    local_f4 = *local_90;
    local_108 = 0;
    local_f8 = 0x1a4;
    local_100 = 7;
    local_fc = local_104;
    FUN_10122a88(&local_110,0x28);
    local_104 = (uint *)*puVar17;
    local_f0 = 0x1a4;
    local_ec = 0;
    local_f4 = *local_94;
    local_110 = puVar12;
    local_10c = puVar8;
    local_108 = 0;
    local_f8 = 0x1a4;
    local_100 = 7;
    local_fc = local_104;
    FUN_10122a88(&local_110,0x28);
    local_ec = 0;
    local_110 = puVar12;
    local_10c = puVar8;
    local_f4 = *local_a0;
    local_108 = 0;
    local_104 = local_b8;
    local_f0 = 0x1a4;
    local_fc = (uint *)*local_6c;
    local_f8 = 0x1a4;
    local_100 = 7;
    FUN_10122a88(&local_110,0x28);
    puVar2 = local_9c;
    local_f0 = 0x1a4;
    local_ec = 0;
    local_f4 = *local_68;
    local_108 = 0;
    local_104 = local_b8;
    local_110 = puVar12;
    local_10c = local_9c;
    local_f8 = 0x1a4;
    local_100 = 7;
    local_fc = local_b8;
    FUN_10122a88(&local_110,0x28);
    local_dc = 0;
    local_f0 = 0xe4;
    local_f4 = *local_74;
    local_e4 = 0x3e2aaaab;
    local_e0 = 0x3e2aaaab;
    local_ec = 0x3e2aaaab;
    local_e8 = 0x3e2aaaab;
    local_110 = puVar12;
    local_10c = puVar2;
    local_f8 = 0x1a4;
    local_100 = 7;
    local_fc = local_b8;
    local_108 = 0x38;
    local_104 = local_b8;
    FUN_10122a88(&local_110,0x38);
    puVar12 = local_7c;
    local_104 = (uint *)*puVar17;
    local_d4 = 0;
    local_f0 = 0xe4;
    local_dc = (uint)local_b8 | 0x80000000;
    local_e4 = 0x3e800000;
    local_e0 = 0x3e800000;
    uStack_d8 = 0x1a4;
    local_ec = 0x3e800000;
    local_e8 = 0x3e800000;
    local_110 = local_7c;
    local_10c = puVar2;
    local_f4 = *local_74;
    local_f8 = 0x1a4;
    local_100 = 7;
    local_108 = 0x32;
    local_fc = local_104;
    FUN_10122a88(&local_110,0x40);
    puVar12 = (uint *)FUN_10121648(puVar12,local_b8);
  }
  puVar16 = local_88;
  puVar2 = local_ac;
  if (*local_70 != '\0') {
    local_6c = local_98;
    local_68 = local_a4;
    local_7c = local_a8;
    uVar13 = FUN_10090c60(puVar12,local_ac,param_4,*puVar4,*local_a8,*local_a4,*local_98,*local_88);
    puVar19 = local_84;
    puVar12 = local_a0;
    uVar13 = FUN_10090c60(uVar13,puVar2,param_4,*puVar18,*local_a0,*local_68,*local_84,*puVar16);
    FUN_10090c60(uVar13,puVar2,param_4,*puVar3,*puVar12,*local_7c,*puVar19,*local_6c);
  }
  FUN_10090ef0(uStack_50,local_ac,local_54,param_4);
  if (*local_64 != '\0') {
    uVar10 = FUN_10121648(local_bc,*local_80);
    uVar10 = FUN_10121648(uVar10,*local_b0);
    uVar10 = FUN_10121648(uVar10,*local_b4);
    uVar10 = FUN_10121648(uVar10,*local_8c);
    uVar10 = FUN_10121648(uVar10,*local_90);
    uVar10 = FUN_10121648(uVar10,*local_94);
    FUN_10121648(uVar10,*puVar17);
  }
  *puVar17 = 0;
  *local_8c = 0;
  *local_94 = 0;
  *local_90 = 0;
  *local_80 = 0;
  *local_b4 = 0;
  *local_b0 = 0;
  *(undefined4 *)(param_4 + 0x4d8) = 0;
  *(undefined8 *)(param_4 + 0x4d0) = 0;
  if (*local_70 != '\0') {
    uVar10 = FUN_10121648(local_bc,*puVar4);
    uVar10 = FUN_10121648(uVar10,*puVar18);
    FUN_10121648(uVar10,*puVar3);
  }
  *puVar3 = 0;
  *puVar18 = 0;
  uVar10 = *(undefined4 *)(param_4 + 0x49c);
  *puVar4 = 0;
  *local_60 = 0;
  *puStack_5c = 0;
  *local_78 = 0;
  uVar10 = FUN_10121648(local_bc,uVar10);
  puVar12 = local_58;
  *extraout_w11 = 0;
  if ((*local_58 & 0x3f00) == 0) {
    FUN_10121648(uVar10,*local_58);
    *puVar12 = 0;
  }
  if ((local_c0 != '\0') && (1 < *local_4c)) {
    local_108 = 0x15;
    local_104 = (uint *)0x0;
    local_10c = local_ac;
    local_110 = local_bc;
    FUN_10122a88(&local_110,0x10);
  }
  return;
}

