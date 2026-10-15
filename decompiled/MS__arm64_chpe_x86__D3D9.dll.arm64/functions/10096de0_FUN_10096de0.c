/*
 * FUN_10096de0 at 10096de0
 * undefined FUN_10096de0(void)
 * Address ranges: 10096de0-100982eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_10096de0(ulonglong param_1,uint *param_2,int param_3,int param_4,undefined1 *param_5)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined8 uVar14;
  int iVar15;
  uint *puVar16;
  char cVar17;
  undefined4 uVar18;
  int extraout_w12;
  int extraout_w12_00;
  char cVar19;
  int iVar20;
  int local_100;
  int iStack_fc;
  int local_f8;
  uint *local_f4;
  uint *local_f0;
  uint *local_ec;
  uint *local_e8;
  uint *local_e4;
  uint *local_e0;
  int local_dc;
  uint *local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  uint local_b0;
  undefined1 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  byte local_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar7 = *param_2;
  uVar13 = uVar7 & 0xffff;
  if (0x4e < uVar13 - 0x12) {
    return param_2;
  }
  puVar1 = param_2 + 1;
  iVar20 = (int)param_1;
  iStack_fc = param_3;
  local_f8 = param_4;
  switch(uVar13) {
  case 0x12:
    local_100 = (uint)local_100._1_3_ << 8;
    param_2 = (uint *)FUN_1009f3e0(param_1,puVar1,0xf0000,3,0,param_3,param_4,0);
    iVar15 = param_3 + 0x18;
    uVar12 = *(undefined1 *)(param_3 + 0x314);
    local_60 = FUN_10121590(iVar15,4,0);
    puVar1 = (uint *)(param_3 + 0x420);
    uStack_48 = 0xffffffff;
    uStack_44 = 0xffffffff;
    local_50 = 0xffffffff;
    uStack_4c = 0xffffffff;
    local_e8 = (uint *)0x0;
    *puVar1 = *puVar1 ^ 0x80000000;
    local_ec = (uint *)(param_3 + 0x3f0);
    local_f4 = &local_60;
    local_f8 = 0;
    local_100 = iVar15;
    iStack_fc = param_4;
    local_f0 = puVar1;
    local_5c = uVar12;
    FUN_10122c20(&local_100,0x1c);
    *puVar1 = *puVar1 ^ 0x80000000;
    uVar13 = FUN_10123210(0xe4,*(undefined1 *)(param_3 + 0x314));
    local_ec = (uint *)(param_3 + 0x3c0);
    local_dc = 0;
    local_e8 = (uint *)(uVar13 & 0xff | 0x100);
    local_f0 = (uint *)(param_3 + 0x310);
    local_f4 = (uint *)(*(uint *)(param_3 + 0x470) | 0x32);
    local_e4 = &local_60;
    local_100 = iVar20;
    iStack_fc = param_3;
    local_f8 = param_4;
    local_e0 = puVar1;
    FUN_100a25f0(&local_100,0x28);
    break;
  case 0x19:
    local_e8 = (uint *)0x0;
    local_100 = param_3 + 0x18;
    local_f0 = (uint *)(*puVar1 & 0x7ff | 0x20410a00);
    local_ec = (uint *)0x0;
    local_f4 = (uint *)0xffffffff;
    local_f8 = 4;
    iStack_fc = param_4;
    FUN_10122a88(&local_100,0x1c);
    param_2 = puVar1;
    break;
  case 0x1a:
    uVar7 = param_2[2];
    uVar8 = (uVar7 & 0x1800 | uVar7 >> 0x14 & 0x7ff) >> 8;
    uVar13 = uVar7 & 0xf000000;
    if (uVar8 == 0xe) {
      uVar8 = uVar7 & 0x7ff;
      local_e4 = (uint *)(*puVar1 & 0x7ff | 0x20410a00);
      if ((*(char *)(param_3 + 200) == '\0') ||
         (*(char *)(*(int *)(param_3 + 0x10) + uVar8 + 0x49d8) == '\0')) {
        local_e0 = (uint *)0x0;
        local_dc = 0;
        local_e8 = (uint *)(((uVar8 >> 2) + 0x10) * 0x10);
        local_100 = param_3 + 0x18;
        local_ec = (uint *)(uVar7 & 3);
        local_f0 = (uint *)(*(uint *)(param_3 + 0x2c8) | 0x10000000);
        local_f8 = 0x40005;
        if (uVar13 == 0xd000000) {
          local_f8 = 5;
        }
        local_f4 = (uint *)0xffffffff;
        iStack_fc = param_4;
        FUN_10122a88(&local_100,0x28);
      }
      else {
        iVar20 = *(int *)(*(int *)(param_3 + 0x10) + uVar8 * 4 + 0x49e8);
        if (uVar13 == 0xd000000) {
          bVar11 = iVar20 == 0;
        }
        else {
          bVar11 = iVar20 != 0;
        }
        if (bVar11) {
          local_ec = (uint *)0x0;
          local_f4 = (uint *)0xffffffff;
          local_100 = param_3 + 0x18;
          local_e8 = (uint *)0x0;
          local_f8 = 4;
          iStack_fc = param_4;
          local_f0 = local_e4;
          FUN_10122a88(&local_100,0x1c);
        }
      }
    }
    else if (uVar8 == 0x13) {
      local_ec = (uint *)(uVar7 >> 0x10 & 3);
      local_e0 = (uint *)0x0;
      local_100 = param_3 + 0x18;
      local_e8 = (uint *)(*puVar1 & 0x7ff | 0x20410a00);
      local_e4 = (uint *)0x0;
      local_f8 = 0x40005;
      local_f0 = (uint *)(*(uint *)(param_3 + 0x2b0) | 0x10000000);
      if (uVar13 == 0xd000000) {
        local_f8 = 5;
      }
      local_f4 = (uint *)0xffffffff;
      iStack_fc = param_4;
      FUN_10122a88(&local_100,0x24);
    }
  case 0x1f:
  case 0x2f:
    param_2 = param_2 + 3;
    break;
  case 0x1b:
  case 0x26:
    uVar7 = *(uint *)(param_3 + 0x2d8);
    if (3 < uVar7) {
      return param_2;
    }
    uVar8 = *(uint *)(param_3 + uVar7 * 4 + 0x2a0);
    *(uint *)(param_3 + 0x2d8) = uVar7 + 1;
    if (uVar13 == 0x1b) {
      uVar13 = param_2[2];
      *(uint *)(param_3 + 0x2dc) = uVar7 + 1;
      param_2 = puVar1;
    }
    else {
      uVar13 = *puVar1;
    }
    uVar13 = uVar13 & 0x7ff;
    local_f4 = (uint *)uVar8;
    if ((*(char *)(param_3 + 200) == '\0') ||
       (iVar20 = *(int *)(param_3 + 0x10), *(char *)(uVar13 + iVar20 + 0x48c5) == '\0')) {
      local_c8 = 0;
      local_d0 = 0x7f;
      uStack_cc = 0;
      local_d4 = 0xff;
      local_dc = 0xe4;
      local_d8 = (uint *)0xff;
      local_e0 = *(uint **)(param_3 + 0xac);
      local_e4 = (uint *)(uVar13 << 4);
      local_100 = param_3 + 0x18;
      local_ec = *(uint **)(param_3 + 0x2c8);
      local_e8 = (uint *)0xe4;
      local_f0 = (uint *)0x7;
      local_f8 = 0x25;
      iStack_fc = param_4;
      FUN_10122a88(&local_100,0x3c);
    }
    else {
      iVar15 = iVar20 + uVar13 * 0x10;
      local_100 = param_3 + 0x18;
      local_d4 = 0;
      iVar20 = *(int *)(iVar20 + (uVar13 + 0x48e) * 0x10);
      local_d8 = (uint *)0;
      if (*(int *)(iVar15 + 0x48e4) < 0) {
        local_d8 = (uint *)*(int *)(iVar15 + 0x48e4);
      }
      local_dc = 0x7f;
      if (iVar20 < 0x7f) {
        local_dc = iVar20;
      }
      local_e0 = (uint *)0xff;
      if (*(int *)(iVar15 + 0x48dc) < 0xff) {
        local_e0 = (uint *)*(int *)(iVar15 + 0x48dc);
      }
      local_e4 = (uint *)0xff;
      if (*(int *)(iVar15 + 0x48d8) < 0xff) {
        local_e4 = (uint *)*(int *)(iVar15 + 0x48d8);
      }
      local_ec = *(uint **)(param_3 + 0xac);
      local_e8 = (uint *)0xe4;
      local_f0 = (uint *)0x7;
      local_f8 = 0x36;
      iStack_fc = param_4;
      FUN_10122a88(&local_100,0x30);
    }
    iVar20 = param_3 + 0x18;
    local_d0 = 0;
    uStack_cc = 0;
    local_d8 = (uint *)0x0;
    local_d4 = 0xffffff80;
    local_e0 = (uint *)0xe4;
    local_dc = 0;
    local_e4 = *(uint **)(param_3 + 0xac);
    local_e8 = (uint *)0xa4;
    local_f0 = (uint *)0x7;
    local_f8 = 0x24;
    local_100 = iVar20;
    iStack_fc = param_4;
    local_f4 = (uint *)uVar8;
    local_ec = (uint *)uVar8;
    FUN_10122a88(&local_100,0x38);
    local_f8 = 0x30;
    local_f4 = (uint *)0x0;
    local_100 = iVar20;
    iStack_fc = param_4;
    FUN_10122a88(&local_100,0x10);
    local_f0 = (uint *)(uVar8 | 0x10000000);
    local_e8 = (uint *)0x0;
    local_ec = (uint *)0x0;
    local_f4 = (uint *)0xffffffff;
    local_f8 = 3;
    local_100 = iVar20;
    iStack_fc = param_4;
    FUN_10122a88(&local_100,0x1c);
    goto LAB_10097924;
  case 0x1c:
    *param_5 = 1;
    param_2 = puVar1;
    break;
  case 0x1d:
  case 0x27:
    uVar7 = *(uint *)(param_3 + 0x2d8);
    param_2 = puVar1;
    if (uVar7 < 5) {
      uVar7 = uVar7 - 1;
      *(uint *)(param_3 + 0x2d8) = uVar7;
      iVar20 = param_3 + 0x18;
      uVar18 = *(undefined4 *)(param_3 + uVar7 * 4 + 0x2a0);
      local_dc = 0xffffffff;
      local_d8 = (uint *)0x0;
      local_e0 = (uint *)0xe4;
      local_e4 = *(uint **)(param_3 + 0xa8);
      local_f8 = 0x1e;
      local_e8 = (uint *)0x0;
      local_f0 = (uint *)0x1;
      local_100 = iVar20;
      iStack_fc = param_4;
      local_f4 = (uint *)uVar18;
      local_ec = (uint *)uVar18;
      FUN_10122a88(&local_100,0x2c);
      if (uVar13 == 0x1d) {
        local_f8 = 0x1e;
        local_e0 = (uint *)0xaa;
        local_dc = 0;
        local_e8 = (uint *)0x55;
        local_f0 = (uint *)0x2;
        local_100 = iVar20;
        iStack_fc = param_4;
        local_f4 = (uint *)uVar18;
        local_ec = (uint *)uVar18;
        local_e4 = (uint *)uVar18;
        FUN_10122a88(&local_100,0x28);
      }
      local_f8 = 0x16;
      local_f4 = (uint *)0x0;
      local_100 = iVar20;
      iStack_fc = param_4;
      FUN_10122a88(&local_100,0x10);
    }
    break;
  case 0x1e:
    local_e8 = (uint *)0x0;
    local_100 = param_3 + 0x18;
    local_f0 = (uint *)(*puVar1 & 0x7ff | 0x20410a00);
    local_ec = (uint *)0x0;
    local_f4 = (uint *)0xffffffff;
    local_f8 = 0x2c;
    iStack_fc = param_4;
    FUN_10122a88(&local_100,0x1c);
    goto LAB_10097924;
  case 0x20:
    local_100 = CONCAT31(local_100._1_3_,1);
    param_2 = (uint *)FUN_1009f3e0(param_1,puVar1,0xf0000,2,0,param_3,param_4,0);
    iVar15 = param_3 + 0x18;
    local_b0 = FUN_10121590(iVar15,4,0);
    local_60 = *(uint *)(param_3 + 0xa8);
    local_ac = 1;
    uStack_98 = 0xffffffffffffffff;
    local_a0 = 0xffffffffffffffff;
    local_5c = 0;
    uStack_4c = 0xffffffff;
    uStack_48 = 0xffffffff;
    local_f0 = (uint *)(param_3 + 0x3c0);
    local_ec = (uint *)0x0;
    local_f4 = &local_b0;
    local_f8 = 0x2f;
    local_50 = 0;
    uStack_44 = 0xffffffff;
    local_100 = iVar15;
    iStack_fc = param_4;
    FUN_10122c20(&local_100,0x18);
    local_e8 = (uint *)(param_3 + 0x3f0);
    local_e4 = (uint *)0x0;
    local_ec = &local_b0;
    local_f4 = &local_b0;
    local_f0 = (uint *)0x100;
    local_f8 = 0x38;
    local_100 = iVar15;
    iStack_fc = param_4;
    FUN_10122c20(&local_100,0x20);
    local_e0 = &local_b0;
    local_dc = 0;
    local_e8 = &local_b0;
    local_e4 = (uint *)0x100;
    local_f0 = &local_b0;
    local_ec = (uint *)0x100;
    local_f4 = (uint *)0x102;
    local_f8 = 0x39;
    local_100 = iVar15;
    iStack_fc = param_4;
    FUN_10122c20(&local_100,0x28);
    local_e0 = &local_b0;
    local_dc = 0;
    local_e8 = &local_60;
    local_e4 = (uint *)0x100;
    local_ec = &local_b0;
    local_f0 = (uint *)0x155;
    local_f4 = &local_b0;
    local_f8 = 0x37;
    local_100 = iVar15;
    iStack_fc = param_4;
    FUN_10122c20(&local_100,0x28);
    local_f0 = (uint *)(param_3 + 0x310);
    local_ec = (uint *)0x100;
    local_f4 = (uint *)(*(uint *)(param_3 + 0x470) | 0x19);
    local_e8 = &local_b0;
    local_e4 = (uint *)0x0;
    local_100 = iVar20;
    iStack_fc = param_3;
    local_f8 = param_4;
    FUN_100a25f0(&local_100,0x20);
    break;
  case 0x21:
    local_100 = (uint)local_100._1_3_ << 8;
    param_2 = (uint *)FUN_1009f3e0(param_1,puVar1,0xf0000,2,0,param_3,param_4,0);
    iVar15 = param_3 + 0x18;
    local_b0 = FUN_10121590(iVar15,4,0);
    local_ac = 7;
    bVar9 = *(byte *)(param_3 + 0x3f4);
    uStack_98 = 0xffffffffffffffff;
    local_a0 = 0xffffffffffffffff;
    local_e4 = (uint *)0x0;
    local_ec = (uint *)(((bVar9 & 0xc | bVar9 >> 2 & 3) << 2 | bVar9 & 3) << 2 |
                       (bVar9 & 0x30 | 0x1000) >> 4);
    local_f4 = &local_b0;
    local_f8 = 0x38;
    local_100 = iVar15;
    iStack_fc = param_4;
    local_f0 = (uint *)(param_3 + 0x3c0);
    local_e8 = (uint *)(param_3 + 0x3f0);
    FUN_10122c20(&local_100,0x20);
    bVar9 = *(byte *)(param_3 + 0x3f4);
    local_b0 = local_b0 | 0x80000000;
    bVar10 = *(byte *)(param_3 + 0x3c4);
    local_e4 = (uint *)(((bVar9 & 0xc | bVar9 >> 2 & 3) << 2 | bVar9 & 3) << 2 |
                       (bVar9 & 0x30 | 0x1000) >> 4);
    local_f0 = (uint *)(param_3 + 0x310);
    local_ec = (uint *)(((bVar10 & 0xfffffc03 | (bVar10 & 3) << 2) << 2 | bVar10 >> 4 & 3) << 2 |
                       (bVar10 & 0xc | 0x400) >> 2);
    local_f4 = (uint *)(*(uint *)(param_3 + 0x470) | 0x32);
    local_d8 = &local_b0;
    local_d4 = 0;
    local_dc = 0x152;
    local_100 = iVar20;
    iStack_fc = param_3;
    local_f8 = param_4;
    local_e8 = (uint *)(param_3 + 0x3c0);
    local_e0 = (uint *)(param_3 + 0x3f0);
    FUN_100a25f0(&local_100,0x30);
    break;
  case 0x22:
    local_100 = CONCAT31(local_100._1_3_,1);
    param_2 = (uint *)FUN_1009f3e0(param_1,puVar1,0xf0000,3,0,param_3,param_4,0);
    iVar20 = param_3 + 0x18;
    local_b0 = FUN_10121590(iVar20,4,1);
    local_80 = 0;
    uStack_78 = 0;
    local_ac = 0xf;
    uStack_98 = 0xffffffffffffffff;
    local_a0 = 0xffffffffffffffff;
    local_90._0_5_ = CONCAT14(0xe4,*(undefined4 *)(param_3 + 0xac));
    local_f0 = (uint *)&local_90;
    local_f4 = &local_b0;
    local_f8 = 0x31;
    local_e8 = (uint *)0x0;
    local_100 = iVar20;
    iStack_fc = param_4;
    local_ec = (uint *)(param_3 + 0x3c0);
    FUN_10122c20(&local_100,0x1c);
    local_b0 = local_b0 | 0x80000000;
    if (*(int *)(param_3 + 0x470) == 0) {
      local_60 = FUN_10121590(iVar20,4,0);
      local_ec = (uint *)&local_90;
      local_f4 = &local_60;
      local_f8 = 0x31;
      local_5c = 0xf;
      uStack_48 = 0xffffffff;
      uStack_44 = 0xffffffff;
      local_50 = 0xffffffff;
      uStack_4c = 0xffffffff;
      local_e8 = (uint *)0x0;
      local_100 = iVar20;
      iStack_fc = param_4;
      local_f0 = (uint *)(param_3 + 0x3c0);
      FUN_10122c20(&local_100,0x1c);
      local_e8 = (uint *)&local_90;
      local_e4 = (uint *)0x0;
      local_ec = &local_60;
      local_f0 = &local_b0;
      local_f4 = &local_60;
      local_f8 = 0x1e;
      local_100 = iVar20;
      iStack_fc = param_4;
      FUN_10122c20(&local_100,0x20);
      local_f0 = &local_60;
      local_ec = (uint *)0x0;
      local_f8 = 0x2b;
      local_100 = iVar20;
      iStack_fc = param_4;
      local_f4 = (uint *)(param_3 + 0x310);
      FUN_10122c20(&local_100,0x18);
    }
    else {
      local_f0 = &local_b0;
      local_ec = (uint *)0x0;
      local_f8 = 0x2b;
      local_100 = iVar20;
      iStack_fc = param_4;
      local_f4 = (uint *)(param_3 + 0x310);
      FUN_10122c20(&local_100,0x18);
    }
    FUN_10121648(iVar20,local_b0);
    break;
  case 0x23:
    *(undefined4 *)(param_3 + 0x474) = 0;
    local_100 = CONCAT31(local_100._1_3_,1);
    param_2 = (uint *)FUN_1009f3e0(param_1,puVar1,0xf0000,1,0,param_3,param_4,0);
    FUN_1009f8f8(param_1 & 0xffffffff,param_3,param_4);
    break;
  case 0x24:
    local_100 = (uint)local_100._1_3_ << 8;
    param_2 = (uint *)FUN_1009f3e0(param_1,puVar1,0xf0000,1,0,param_3,param_4,0);
    iVar15 = param_3 + 0x18;
    local_b0 = FUN_10121590(iVar15,4,0);
    iVar6 = param_3 + 0x3c0;
    local_e0 = (uint *)0x0;
    local_ac = 1;
    uStack_98 = 0xffffffffffffffff;
    local_a0 = 0xffffffffffffffff;
    local_f0 = (uint *)((*(byte *)(param_3 + 0x3c4) >> 4 & 3) << 6 |
                        *(byte *)(param_3 + 0x3c4) & 0x3f | 0x100);
    local_f4 = &local_b0;
    local_f8 = 0x10;
    local_100 = iVar15;
    iStack_fc = param_4;
    local_ec = (uint *)iVar6;
    local_e8 = local_f0;
    local_e4 = (uint *)iVar6;
    FUN_10122c20(&local_100,0x24);
    local_ec = &local_b0;
    local_e8 = (uint *)0x0;
    local_f4 = &local_b0;
    local_f0 = (uint *)0x100;
    local_f8 = 0x44;
    local_100 = iVar15;
    iStack_fc = param_4;
    FUN_10122c20(&local_100,0x1c);
    local_60 = *(uint *)(param_3 + 0xa8);
    local_5c = 0xe4;
    local_50 = 0x7f800000;
    uStack_4c = 0xffffffff;
    uStack_48 = 0xffffffff;
    uStack_44 = 0xffffffff;
    local_e4 = &local_60;
    local_e0 = (uint *)0x0;
    local_e8 = &local_b0;
    local_f0 = &local_b0;
    local_ec = (uint *)0x100;
    local_f4 = (uint *)0x102;
    local_f8 = 0x27;
    local_100 = iVar15;
    iStack_fc = param_4;
    FUN_10122c20(&local_100,0x24);
    local_e4 = &local_b0;
    local_e0 = (uint *)0x0;
    local_e8 = (uint *)0x155;
    local_ec = &local_b0;
    local_f0 = (uint *)0x100;
    local_f4 = &local_b0;
    local_f8 = 1;
    local_100 = iVar15;
    iStack_fc = param_4;
    FUN_10122c20(&local_100,0x24);
    local_e0 = (uint *)0x0;
    local_f0 = (uint *)(param_3 + 0x310);
    local_ec = (uint *)0x100;
    local_f4 = (uint *)(*(uint *)(param_3 + 0x470) | 0x38);
    local_e8 = &local_b0;
    local_100 = iVar20;
    iStack_fc = param_3;
    local_f8 = param_4;
    local_e4 = (uint *)iVar6;
    FUN_100a25f0(&local_100,0x24);
    break;
  case 0x25:
    local_100 = (uint)local_100._1_3_ << 8;
    uVar18 = 1;
    if (*(char *)(*(int *)(param_3 + 0x10) + 0x4a6c) != '\x03') {
      uVar18 = 3;
    }
    param_2 = (uint *)FUN_1009f3e0(param_1,puVar1,0xf0000,uVar18,0,param_3,param_4,0);
    puVar2 = (uint *)(param_3 + 0x310);
    iVar15 = param_3 + 0x3c0;
    puVar16 = (uint *)(param_3 + 0x470);
    local_ec = puVar2;
    local_e8 = (uint *)iVar15;
    if ((*puVar1 & 0xf0000) == 0x10000) {
      local_60 = *(uint *)(param_3 + 0xb0);
      local_5c = 0;
      local_e4 = (uint *)0x0;
      uStack_48 = 0xffffffff;
      uStack_44 = 0xffffffff;
      local_50 = 0xffffffff;
      uStack_4c = 0xffffffff;
      local_f4 = (uint *)(*puVar16 | 0x4d);
      local_f0 = &local_60;
      local_100 = iVar20;
      FUN_100a25f0(&local_100,0x20);
    }
    else if ((*puVar1 & 0xf0000) == 0x20000) {
      local_60 = *(uint *)(param_3 + 0xb0);
      local_5c = 0;
      local_e4 = (uint *)0x0;
      uStack_48 = 0xffffffff;
      uStack_44 = 0xffffffff;
      local_50 = 0xffffffff;
      uStack_4c = 0xffffffff;
      local_f4 = (uint *)(*puVar16 | 0x4d);
      local_ec = &local_60;
      local_100 = iVar20;
      local_f0 = puVar2;
      FUN_100a25f0(&local_100,0x20);
    }
    else if ((*puVar2 >> 0x1e & 1) == 0) {
      local_dc = 0;
      local_f4 = (uint *)(*puVar16 | 0x4d);
      local_e8 = (uint *)0x101;
      local_f0 = (uint *)0x102;
      local_100 = iVar20;
      local_e4 = puVar2;
      local_e0 = (uint *)iVar15;
      FUN_100a25f0(&local_100,0x28);
    }
    else {
      local_60 = FUN_10121590(param_3 + 0x18,4,0);
      local_5c = 0x54;
      local_dc = 0;
      local_f4 = (uint *)(*puVar16 | 0x4d);
      uStack_48 = 0xffffffff;
      uStack_44 = 0xffffffff;
      local_50 = 0xffffffff;
      uStack_4c = 0xffffffff;
      local_e4 = &local_60;
      local_e8 = (uint *)0x101;
      local_ec = &local_60;
      local_f0 = (uint *)0x102;
      local_100 = iVar20;
      local_e0 = (uint *)iVar15;
      FUN_100a25f0(&local_100,0x28);
      local_ec = &local_60;
      local_f4 = (uint *)0x36;
      local_e8 = (uint *)0x0;
      local_100 = iVar20;
      iStack_fc = param_3;
      local_f8 = param_4;
      local_f0 = puVar2;
      FUN_100a25f0(&local_100,0x1c);
    }
    break;
  case 0x28:
    pbVar5 = (byte *)(param_3 + 0x300);
    uVar13 = *puVar1;
    cVar19 = *(char *)((uint)*pbVar5 + param_3 + 0x2e0);
    uVar7 = (uVar13 & 0x1800 | uVar13 >> 0x14 & 0x7ff) >> 8;
    if (uVar7 == 0xe) {
      uVar7 = uVar13 & 0x7ff;
      if ((*(char *)(param_3 + 200) != '\0') &&
         (*(char *)(*(int *)(param_3 + 0x10) + uVar7 + 0x49d8) != '\0')) {
        if ((cVar19 != '\x02') &&
           (cVar19 = '\x01', *(int *)(*(int *)(param_3 + 0x10) + uVar7 * 4 + 0x49e8) == 0)) {
          cVar19 = '\x02';
        }
        uVar13 = *pbVar5 + 1;
        *pbVar5 = (byte)uVar13;
        uVar12 = cVar19 != '\x02';
        *(char *)((uVar13 & 0xff) + param_3 + 0x2e0) = cVar19;
        puVar3 = (undefined1 *)(param_4 + 0xc);
        goto LAB_10097c18;
      }
      local_e8 = (uint *)(((uVar7 >> 2) + 0x10) * 0x10);
      local_e4 = (uint *)0x0;
      local_100 = param_3 + 0x18;
      local_ec = (uint *)(uVar13 & 3);
      local_f0 = (uint *)(*(uint *)(param_3 + 0x2c8) | 0x10000000);
      local_f8 = 0x4001f;
      if ((uVar13 & 0xf000000) == 0xd000000) {
        local_f8 = 0x1f;
      }
      local_f4 = (uint *)0xffffffff;
      iStack_fc = param_4;
      FUN_10122a88(&local_100,0x20);
      bVar9 = *pbVar5;
      *pbVar5 = bVar9 + 1;
      *(char *)((uint)(byte)(bVar9 + 1) + param_3 + 0x2e0) = cVar19;
    }
    else if (uVar7 == 0x13) {
      local_e8 = (uint *)0x0;
      local_100 = param_3 + 0x18;
      local_ec = (uint *)(uVar13 >> 0x10 & 3);
      local_f0 = (uint *)(*(uint *)(param_3 + 0x2b0) | 0x10000000);
      local_f8 = 0x4001f;
      if ((uVar13 & 0xf000000) == 0xd000000) {
        local_f8 = 0x1f;
      }
      local_f4 = (uint *)0xffffffff;
      iStack_fc = param_4;
      FUN_10122a88(&local_100,0x1c);
      bVar9 = *pbVar5;
      uVar12 = 2;
      if (cVar19 != '\x02') {
        uVar12 = 0;
      }
      *pbVar5 = bVar9 + 1;
      puVar3 = (undefined1 *)((uint)(byte)(bVar9 + 1) + param_3 + 0x2e0);
LAB_10097c18:
      *puVar3 = uVar12;
    }
    goto LAB_10097924;
  case 0x29:
    param_2 = (uint *)FUN_10096798(param_1,puVar1,2,0,param_3,0,0);
    local_60 = FUN_10096cc8(param_2,uVar7,param_3,param_4,0);
    local_60 = local_60 | 0x10000000;
    local_5c = 0;
    local_f4 = (uint *)(param_3 + 0x450);
    local_f0 = &local_60;
    uStack_48 = 0xffffffff;
    uStack_44 = 0xffffffff;
    local_50 = 0xffffffff;
    uStack_4c = 0xffffffff;
    local_100 = param_3 + 0x18;
    local_ec = (uint *)0x0;
    local_f8 = 0x4001f;
    iStack_fc = param_4;
    FUN_10122c20(&local_100,0x18);
    uVar13 = (uint)*(byte *)(param_3 + 0x300);
    cVar19 = *(char *)(uVar13 + param_3 + 0x2e0);
    uVar13 = uVar13 + 1;
    *(byte *)(param_3 + 0x300) = (byte)uVar13;
    uVar12 = 2;
    if (cVar19 != '\x02') {
      uVar12 = 0;
    }
    *(undefined1 *)((uVar13 & 0xff) + param_3 + 0x2e0) = uVar12;
    break;
  case 0x2a:
    iVar20 = (uint)*(byte *)(param_3 + 0x300) + param_3;
    pcVar4 = (char *)(iVar20 + 0x2e0);
    cVar19 = *pcVar4;
    if (cVar19 == '\0') {
      local_100 = param_3 + 0x18;
      local_f8 = 0x12;
      local_f4 = (uint *)0x0;
      iStack_fc = param_4;
      FUN_10122a88(&local_100,0x10);
      return puVar1;
    }
    cVar17 = '\x01';
    if (cVar19 == '\x01') {
      cVar17 = '\x02';
    }
    if (*(char *)(iVar20 + 0x2df) != '\x02') {
      cVar19 = cVar17;
    }
    *pcVar4 = cVar19;
    goto LAB_10097d9c;
  case 0x2b:
    pbVar5 = (byte *)(param_3 + 0x300);
    if (*(char *)((uint)*pbVar5 + param_3 + 0x2e0) == '\0') {
      local_100 = param_3 + 0x18;
      local_f8 = 0x15;
      local_f4 = (uint *)0x0;
      iStack_fc = param_4;
      FUN_10122a88(&local_100,0x10);
    }
    bVar9 = *pbVar5;
    *pbVar5 = bVar9 - 1;
    cVar19 = *(char *)((uint)(byte)(bVar9 - 1) + param_3 + 0x2e0);
LAB_10097d9c:
    *(bool *)(param_4 + 0xc) = cVar19 != '\x02';
    param_2 = puVar1;
    break;
  case 0x2c:
    local_100 = param_3 + 0x18;
    local_f8 = 2;
    local_f4 = (uint *)0x0;
    iStack_fc = param_4;
    FUN_10122a88(&local_100,0x10);
    param_2 = puVar1;
    break;
  case 0x2d:
    param_2 = (uint *)FUN_10096798(param_1,puVar1,2,0,param_3,0,0);
    local_60 = FUN_10096cc8(param_2,uVar7,param_3,param_4,0);
    local_60 = local_60 | 0x10000000;
    local_5c = 0;
    local_f4 = (uint *)(param_3 + 0x450);
    local_f0 = &local_60;
    uStack_48 = 0xffffffff;
    uStack_44 = 0xffffffff;
    local_50 = 0xffffffff;
    uStack_4c = 0xffffffff;
    local_100 = param_3 + 0x18;
    local_ec = (uint *)0x0;
    local_f8 = 0x40003;
    iStack_fc = param_4;
    FUN_10122c20(&local_100,0x18);
    break;
  case 0x2e:
    local_100 = (uint)local_100._1_3_ << 8;
    param_2 = (uint *)FUN_1009f3e0(param_1,puVar1,0xf0000,1,0,param_3,param_4,0);
    local_f0 = (uint *)(param_3 + 0x3c0);
    local_ec = (uint *)0x0;
    iVar20 = param_3 + 0x310;
    local_f8 = 0x40;
    local_100 = param_3 + 0x18;
    iStack_fc = param_4;
    local_f4 = (uint *)iVar20;
    FUN_10122c20(&local_100,0x18);
    local_e8 = (uint *)0x0;
    local_f0 = (uint *)0x1e4;
    local_f8 = 0x1b;
    local_100 = param_3 + 0x18;
    iStack_fc = param_4;
    local_f4 = (uint *)iVar20;
    local_ec = (uint *)iVar20;
    FUN_10122c20(&local_100,0x1c);
    break;
  case 0x30:
    param_2 = param_2 + 6;
    break;
  case 0x4e:
    if (1 < *(byte *)(*(int *)(param_3 + 0x10) + 0x4a6c)) {
      local_100 = CONCAT31(local_100._1_3_,1);
      param_2 = (uint *)FUN_1009f3e0(param_1,puVar1,0xf0000,1,0,param_3,param_4,0);
      local_e8 = (uint *)0x0;
      local_ec = (uint *)(param_3 + 0x3c0);
      local_f0 = (uint *)(param_3 + 0x310);
      local_f4 = (uint *)(*(uint *)(param_3 + 0x470) | 0x19);
      local_100 = iVar20;
      FUN_100a25f0(&local_100,0x1c);
    }
    break;
  case 0x5e:
    local_100 = (uint)local_100._1_3_ << 8;
    param_2 = (uint *)FUN_10096358(param_1,puVar1,0xf0000,2,0,param_3,param_4,0);
    FUN_10096cc8(param_2,uVar7,param_3,param_4,1);
    break;
  case 0x5f:
    local_100 = (uint)local_100._1_3_ << 8;
    uVar7 = param_2[3];
    uVar13 = uVar7 & 0x7ff;
    param_2 = (uint *)FUN_10096358(param_1,puVar1,0xf0000,2,0,param_3,param_4,0);
    iVar20 = param_3 + 0x18;
    bVar9 = *(byte *)(*(int *)(param_3 + 0x10) + uVar13 + 0x4880);
    if ((bVar9 & 0x1f) == 2) {
      local_60 = FUN_101214c0(iVar20,uVar13,0,uVar13);
      pbVar5 = &DAT_10162442;
      iVar20 = extraout_w12_00;
    }
    else {
      if ((bVar9 & 0x1f) == 3) {
        iVar6 = uVar13 + 5;
        iVar15 = uVar13 + 4;
        uVar14 = 1;
      }
      else {
        if ((bVar9 & 0x1f) != 4) {
          pbVar5 = &DAT_10162442;
          local_60 = 0;
          goto LAB_10098208;
        }
        iVar6 = uVar13 + 10;
        iVar15 = uVar13 + 8;
        uVar14 = 2;
      }
      local_60 = FUN_101214c0(iVar20,iVar15,uVar14,iVar6);
      pbVar5 = &DAT_10162443;
      iVar20 = extraout_w12;
    }
LAB_10098208:
    local_ec = (uint *)(param_3 + 0x3c0);
    bVar9 = *pbVar5;
    uStack_48 = 0xffffffff;
    uStack_44 = 0xffffffff;
    local_50 = 0xffffffff;
    uStack_4c = 0xffffffff;
    uStack_88 = *(undefined8 *)(param_3 + 0x3c8);
    uStack_78 = *(undefined8 *)(param_3 + 0x3d8);
    local_80 = *(undefined8 *)(param_3 + 0x3d0);
    uStack_68 = *(undefined8 *)(param_3 + 1000);
    local_70 = *(undefined8 *)(param_3 + 0x3e0);
    bVar10 = *(byte *)(param_3 + 0x3c4);
    local_90._5_3_ = (undefined3)((ulonglong)*(undefined8 *)local_ec >> 0x28);
    local_90 = CONCAT35(local_90._5_3_,CONCAT14(bVar10 >> 6,(int)*(undefined8 *)local_ec)) |
               0x10000000;
    local_e0 = (uint *)&local_90;
    local_dc = 0;
    local_e8 = &local_60;
    local_e4 = (uint *)(param_3 + 0x3f0);
    local_f0 = (uint *)((((bVar10 >> ((ulonglong)(bVar9 >> 6) << 1) & 3) << 2 |
                         bVar10 >> (ulonglong)((bVar9 >> 4 & 3) << 1) & 3) << 2 |
                        bVar10 >> (ulonglong)((bVar9 >> 2 & 3) << 1) & 3) << 2 |
                        bVar10 >> (ulonglong)((bVar9 & 3) << 1) & 3 | 0x100);
    local_f4 = (uint *)(param_3 + 0x310);
    local_f8 = 0x48;
    local_100 = iVar20;
    iStack_fc = param_4;
    local_5c = (char)(uVar7 >> 0x10);
    FUN_10122c20(&local_100,0x28);
    break;
  case 0x60:
    local_100 = param_3 + 0x18;
    local_f4 = (uint *)(param_3 + 0x450);
    uStack_48 = 0xffffffff;
    uStack_44 = 0xffffffff;
    local_50 = 0xffffffff;
    uStack_4c = 0xffffffff;
    local_60 = *(uint *)(param_3 + 0x2b0) | 0x10000000;
    local_5c = (byte)(*puVar1 >> 0x10) & 3;
    local_f8 = 0x40003;
    if ((*puVar1 & 0xf000000) == 0xd000000) {
      local_f8 = 3;
    }
    local_f0 = &local_60;
    local_ec = (uint *)0x0;
    iStack_fc = param_4;
    FUN_10122c20(&local_100,0x18);
LAB_10097924:
    param_2 = param_2 + 2;
  }
  return param_2;
}

