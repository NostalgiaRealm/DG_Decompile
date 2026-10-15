/*
 * FUN_100425a8 at 100425a8
 * undefined FUN_100425a8(void)
 * Address ranges: 100425a8-10042faf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100425a8(undefined8 param_1,int param_2,int param_3,undefined4 param_4,byte param_5,
                 undefined4 param_6,ulonglong param_7)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong extraout_x1;
  ulonglong uVar9;
  uint *puVar10;
  byte bVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  int local_d0;
  undefined4 uStack_cc;
  int local_c8;
  uint uStack_c4;
  uint *local_c0;
  uint uStack_bc;
  uint *local_b8;
  uint local_b4;
  uint *local_b0;
  uint local_ac;
  uint *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  byte local_64;
  uint local_60;
  uint *local_5c;
  byte local_58;
  uint *local_54;
  byte local_50;
  
  uVar7 = (uint)param_5;
  if (((param_7 >> 0x2e & 1) == 0) && ((param_7 >> 0x2d & 1) == 0)) {
    uVar14 = 1;
  }
  else {
    uVar14 = 0;
  }
  uVar9 = 1;
  local_78 = (uint *)param_4;
  uVar5 = FUN_10079948(param_2,4,1);
  uVar6 = FUN_10079948(param_2,2,uVar9 & 0xffffffff);
  local_a8 = (uint *)0x0;
  local_b0 = (uint *)(*(uint *)(param_2 + 0x23c) | 0x10000000);
  local_b4 = param_3 * 0x120 + 0x9f0;
  local_b8 = (uint *)0x154;
  uStack_bc = *(uint *)(param_2 + 0x88) | 0x40000000;
  local_c0 = (uint *)0x3;
  local_c8 = 0x36;
  local_d0 = param_2;
  uStack_cc = param_6;
  uStack_c4 = uVar6;
  local_ac = uVar7;
  local_68 = uVar6;
  FUN_1007a868(&local_d0,0x2c);
  local_7c = (uint *)(param_2 + 0x94);
  local_a8 = (uint *)0x1e4;
  local_ac = *local_7c;
  local_94 = 0;
  local_9c = 0;
  uStack_98 = 0;
  local_b0 = (uint *)0x154;
  local_c8 = 0x32;
  local_a4 = 0xbefd70a4;
  local_a0 = 0xbefd70a4;
  local_b8 = (uint *)0x154;
  local_c0 = (uint *)0x3;
  uStack_bc = (uint)local_78;
  local_d0 = param_2;
  uStack_cc = param_6;
  uStack_c4 = uVar5;
  local_b4 = uVar6;
  FUN_1007a868(&local_d0,0x40);
  if (uVar14 == 0) {
    uStack_c4 = FUN_10079948(param_2,2,1);
    local_b8 = (uint *)0x154;
    local_b4 = 0;
    *(uint *)(param_2 + 0x244) = uStack_c4;
    local_c8 = 0x1a;
    local_c0 = (uint *)0x3;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_bc = uVar5;
    FUN_1007a868(&local_d0,0x20);
  }
  local_74 = uVar14 ^ 1;
  local_c8 = local_74 + 0x40;
  local_b8 = (uint *)0x154;
  local_b4 = 0;
  local_c0 = (uint *)0x3;
  local_d0 = param_2;
  uStack_cc = param_6;
  uStack_c4 = uVar5;
  uStack_bc = uVar5;
  FUN_1007a868(&local_d0,0x20);
  if (uVar14 == 0) {
    local_b0 = (uint *)0xe4;
    local_ac = 0;
    local_9c = 0;
    local_a4 = 0x3f800000;
    local_a0 = 0x3f800000;
    local_a8 = (uint *)0x0;
    local_b4 = *local_7c;
    local_c8 = 0;
    local_b8 = (uint *)&DAT_00000040;
    local_c0 = (uint *)0xc;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_c4 = uVar5;
    uStack_bc = uVar5;
    FUN_1007a868(&local_d0,0x38);
  }
  uVar12 = param_7 >> 0x2b & 3;
  uVar9 = param_7 >> 0x29 & 3;
  local_50 = 2;
  bVar11 = 2;
  bVar1 = 0;
  if (uVar12 - 2 < 2) {
    bVar1 = bVar11;
  }
  bVar2 = bVar11;
  if (uVar12 == 2) {
    bVar2 = 0;
  }
  local_78 = (uint *)CONCAT31(local_78._1_3_,uVar9 - 2 < 2 | bVar1);
  local_60 = CONCAT31(local_60._1_3_,(uVar9 != 2 || uVar12 == 1) | bVar2);
  if (uVar12 != 1) {
    bVar11 = 0;
  }
  local_64 = uVar9 == 1;
  local_6c = CONCAT31(local_6c._1_3_,bVar11);
  if (uVar12 != 3) {
    local_50 = 0;
  }
  local_50 = uVar9 == 3 | local_50;
  if (local_50 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_10079948(param_2,(local_74 + 1) * 2,1);
  }
  local_54 = (uint *)(param_2 + 0x248);
  *local_54 = uVar7;
  puVar13 = (uint *)0x3;
  if (uVar14 == 0) {
    puVar13 = (uint *)0xf;
  }
  if (uVar7 != 0) {
    local_b8 = (uint *)0x154;
    if (uVar14 == 0) {
      local_b8 = (uint *)0xe4;
    }
    local_b4 = 0;
    local_c8 = 0x1b;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_c4 = uVar7;
    local_c0 = puVar13;
    uStack_bc = uVar5;
    FUN_1007a868(&local_d0,0x20);
  }
  uVar7 = (uint)local_78 & 0xff;
  if ((char)local_78 != '\0') {
    uVar8 = FUN_10079948(param_2,2,0);
    local_78 = (uint *)0x3;
    if (uVar14 == 0) {
      local_78 = (uint *)0xf;
    }
    local_9c = 0;
    puVar13 = (uint *)((uVar7 | uVar7 << 2) & (uint)local_78);
    local_a4 = 0;
    local_a0 = 0;
    local_ac = 0xbf800000;
    local_a8 = (uint *)0xbf800000;
    local_b0 = (uint *)0x1e4;
    uStack_bc = local_68;
    local_b4 = *local_7c;
    local_c8 = 0;
    puVar10 = (uint *)0x154;
    local_b8 = (uint *)0x154;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_c4 = uVar8;
    local_c0 = (uint *)uVar7;
    FUN_1007a868(&local_d0,0x38);
    local_b0 = (uint *)0xe4;
    local_ac = 0;
    if (uVar14 == 0) {
      puVar10 = (uint *)0x1e4;
    }
    local_a0 = 0;
    local_9c = 0;
    local_a8 = (uint *)0x0;
    local_a4 = 0;
    local_b4 = *local_7c;
    local_c8 = 0x34;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_c4 = uVar5;
    local_c0 = puVar13;
    uStack_bc = uVar5;
    local_b8 = puVar10;
    FUN_1007a868(&local_d0,0x38);
    local_b0 = (uint *)0x144;
    local_ac = 0;
    local_c8 = 0x33;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_c4 = uVar5;
    local_c0 = puVar13;
    uStack_bc = uVar5;
    local_b8 = puVar10;
    local_b4 = uVar8;
    FUN_1007a868(&local_d0,0x28);
    puVar13 = local_78;
  }
  if ((local_60 & 0xff) != 0) {
    local_78 = (uint *)0x3;
    if (uVar14 == 0) {
      local_78 = (uint *)0xf;
    }
    local_5c = (uint *)((local_60 & 0xff | (local_60 & 0xff) << 2) & (uint)local_78);
    local_58 = local_64 | (byte)local_6c;
    local_60 = ((uint)local_58 | (uint)local_58 << 2) & (uint)local_78;
    local_64 = *(byte *)(local_58 + 0x1009e25c);
    if (uVar14 == 0) {
      uVar7 = FUN_10079948(param_2,4,1);
    }
    else {
      uVar7 = uVar5 & 0xff83ffff | ((uVar5 >> 0x12 & 3) + 2) * 0x40000 | 0x200000;
    }
    local_74 = FUN_10079948(param_2,(local_74 + 1) * 2,1);
    if (local_58 == 0) {
      local_6c = 0;
    }
    else {
      local_6c = FUN_10079948(param_2,extraout_x1 & 0xffffffff,0);
    }
    puVar13 = local_5c;
    local_b8 = (uint *)0x154;
    if (uVar14 == 0) {
      local_b8 = (uint *)0x1e4;
    }
    local_b4 = local_68;
    local_b0 = (uint *)0x144;
    local_ac = 0;
    local_c0 = local_5c;
    local_c8 = 0xe;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_c4 = uVar5;
    uStack_bc = uVar5;
    local_80 = local_b8;
    FUN_1007a868(&local_d0,0x28);
    local_c0 = puVar13;
    local_c8 = 0x43;
    local_b8 = local_80;
    local_b4 = 0;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_c4 = uVar7;
    uStack_bc = uVar5;
    FUN_1007a868(&local_d0,0x20);
    uVar8 = local_74;
    if (local_58 != 0) {
      uVar3 = local_64 | 0x100;
      local_c0 = (uint *)(local_60 & 0xff);
      local_c8 = 0x1b;
      uStack_c4 = local_74;
      local_b4 = 0;
      local_d0 = param_2;
      uStack_cc = param_6;
      uStack_bc = uVar7;
      local_b8 = (uint *)uVar3;
      local_70 = (uint)local_c0;
      FUN_1007a868(&local_d0,0x20);
      uVar4 = local_6c;
      local_b0 = (uint *)0xe4;
      local_ac = 0;
      local_a0 = 0;
      local_9c = 0;
      local_a8 = (uint *)0x0;
      local_a4 = 0;
      local_b4 = *local_7c;
      local_c0 = (uint *)local_70;
      local_c8 = 0x31;
      uStack_c4 = local_6c;
      local_d0 = param_2;
      uStack_cc = param_6;
      uStack_bc = uVar5;
      local_b8 = (uint *)uVar3;
      FUN_1007a868(&local_d0,0x38);
      local_ac = 0;
      local_b4 = uVar4;
      local_c0 = (uint *)local_70;
      uStack_bc = uVar8;
      local_c8 = 0x1e;
      uStack_c4 = uVar8;
      local_d0 = param_2;
      uStack_cc = param_6;
      local_b8 = (uint *)uVar3;
      local_b0 = (uint *)uVar3;
      FUN_1007a868(&local_d0,0x28);
      local_a0 = 1;
      local_9c = 0;
      local_b0 = (uint *)0xe4;
      local_ac = 1;
      local_a8 = (uint *)0x1;
      local_a4 = 1;
      local_b4 = *local_7c;
      local_c0 = (uint *)local_70;
      uStack_bc = uVar8;
      local_c8 = 1;
      uStack_c4 = uVar4;
      local_d0 = param_2;
      uStack_cc = param_6;
      local_b8 = (uint *)uVar3;
      FUN_1007a868(&local_d0,0x38);
    }
    puVar13 = local_5c;
    uStack_bc = uVar7 | 0x80000000;
    local_c8 = 0;
    local_b0 = local_80;
    local_ac = 0;
    local_b8 = local_80;
    local_c0 = local_5c;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_c4 = uVar5;
    local_b4 = uVar5;
    FUN_1007a868(&local_d0,0x28);
    uVar6 = local_68;
    local_c0 = puVar13;
    local_b0 = (uint *)0x144;
    local_ac = 0;
    local_c8 = 0x38;
    local_b8 = local_80;
    local_b4 = local_68;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_c4 = uVar5;
    uStack_bc = uVar5;
    FUN_1007a868(&local_d0,0x28);
    local_a0 = 0x80000000;
    local_9c = 0;
    local_b0 = (uint *)0xe4;
    local_ac = 0x80000000;
    local_a8 = (uint *)0x80000000;
    local_a4 = 0x80000000;
    local_c0 = puVar13;
    local_b4 = *local_7c;
    local_b8 = local_80;
    local_c8 = 1;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_c4 = uVar7;
    uStack_bc = uVar5;
    FUN_1007a868(&local_d0,0x38);
    uVar8 = local_74;
    local_b4 = uVar5 | 0x80000000;
    local_c0 = puVar13;
    local_b0 = local_80;
    local_ac = 0;
    local_b8 = local_80;
    local_c8 = 0x39;
    uStack_c4 = local_74;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_bc = uVar5;
    local_70 = local_b4;
    FUN_1007a868(&local_d0,0x28);
    local_c8 = 1;
    local_c0 = puVar13;
    local_b0 = local_80;
    local_ac = 0;
    local_b8 = local_80;
    local_b4 = uVar8;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_c4 = uVar7;
    uStack_bc = uVar7;
    FUN_1007a868(&local_d0,0x28);
    local_c0 = puVar13;
    local_b0 = (uint *)0x144;
    local_ac = 0;
    local_c8 = 0;
    uStack_c4 = uVar8;
    local_b8 = local_80;
    local_b4 = uVar6;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_bc = uVar5;
    FUN_1007a868(&local_d0,0x28);
    local_c0 = puVar13;
    local_c8 = 0x37;
    local_a8 = local_80;
    local_a4 = 0;
    local_b0 = local_80;
    local_b8 = local_80;
    local_b4 = uVar8;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_c4 = uVar5;
    uStack_bc = uVar7;
    local_ac = uVar5;
    FUN_1007a868(&local_d0,0x30);
    if (local_58 != 0) {
      local_b0 = (uint *)0x144;
      local_ac = 0;
      local_c8 = 0;
      uStack_c4 = uVar8;
      local_b8 = (uint *)(local_64 | 0x100);
      local_c0 = (uint *)(local_60 & 0xff);
      local_b4 = uVar6;
      uStack_bc = local_70;
      local_d0 = param_2;
      uStack_cc = param_6;
      local_80 = local_c0;
      local_7c = local_b8;
      FUN_1007a868(&local_d0,0x28);
      local_b0 = (uint *)0xe4;
      local_b4 = *(undefined4 *)(param_2 + 0x94);
      local_9c = 0;
      local_c8 = 0;
      uStack_c4 = uVar8;
      local_a4 = 0xbf800000;
      local_a0 = 0xbf800000;
      local_b8 = local_7c;
      local_ac = 0xbf800000;
      local_a8 = (uint *)0xbf800000;
      local_c0 = local_80;
      uStack_bc = uVar8;
      local_d0 = param_2;
      uStack_cc = param_6;
      FUN_1007a868(&local_d0,0x38);
      uVar3 = local_6c;
      local_a8 = local_7c;
      local_a4 = 0;
      local_c0 = local_80;
      uStack_bc = local_6c;
      local_c8 = 0x37;
      local_b0 = local_7c;
      local_b8 = local_7c;
      local_b4 = uVar8;
      local_d0 = param_2;
      uStack_cc = param_6;
      uStack_c4 = uVar5;
      local_ac = uVar5;
      FUN_1007a868(&local_d0,0x30);
      local_b0 = (uint *)0xe4;
      local_ac = 0;
      local_b4 = *(undefined4 *)(param_2 + 0x94);
      local_a0 = 0;
      local_9c = 0;
      local_a8 = (uint *)0x0;
      local_a4 = 0;
      local_b8 = local_7c;
      local_c0 = local_80;
      local_c8 = 0x31;
      uStack_c4 = uVar3;
      local_d0 = param_2;
      uStack_cc = param_6;
      uStack_bc = uVar5;
      FUN_1007a868(&local_d0,0x38);
      local_b0 = (uint *)0x144;
      local_ac = 0;
      local_c0 = local_80;
      uStack_bc = uVar3;
      local_c8 = 1;
      uStack_c4 = uVar3;
      local_b8 = local_7c;
      local_b4 = uVar6;
      local_d0 = param_2;
      uStack_cc = param_6;
      FUN_1007a868(&local_d0,0x28);
      local_c8 = 0;
      local_b0 = local_7c;
      local_ac = 0;
      local_b8 = local_7c;
      local_b4 = uVar3;
      local_c0 = local_80;
      local_d0 = param_2;
      uStack_cc = param_6;
      uStack_c4 = uVar5;
      uStack_bc = uVar5;
      FUN_1007a868(&local_d0,0x28);
    }
    FUN_10079a60(param_2,local_74);
    puVar13 = local_78;
    if (uVar14 == 0) {
      FUN_10079a60(param_2,uVar7);
      puVar13 = local_78;
    }
  }
  FUN_10079a60(param_2,local_68);
  uVar6 = 0x154;
  if (uVar14 == 0) {
    uVar6 = 0x1e4;
  }
  local_b4 = 0;
  local_c0 = (uint *)3;
  if (uVar14 == 0) {
    local_c0 = (uint *)0xf;
  }
  local_c8 = 0x1c;
  local_d0 = param_2;
  uStack_cc = param_6;
  uStack_c4 = uVar5;
  uStack_bc = uVar5;
  local_b8 = (uint *)uVar6;
  FUN_1007a868(&local_d0,0x20);
  puVar10 = local_54;
  local_54 = (uint *)(uint)local_50;
  if (local_54 == (uint *)0x0) {
    return uVar5;
  }
  uStack_c4 = *(uint *)(param_2 + 0x248);
  local_ac = 0;
  local_c0 = (uint *)(((uint)local_50 | (uint)local_50 << 2) & (uint)puVar13);
  local_c8 = 0x27;
  local_d0 = param_2;
  uStack_cc = param_6;
  uStack_bc = uStack_c4;
  local_b8 = (uint *)uVar6;
  local_b4 = uVar5;
  local_b0 = (uint *)uVar6;
  FUN_1007a868(&local_d0,0x28);
  switch(local_54) {
  case (uint *)0x1:
    if (uVar14 == 0) {
      uStack_c4 = *puVar10;
      local_b8 = (uint *)0x188;
      local_b4 = 0;
      local_c0 = (uint *)0xf;
      local_c8 = 0x36;
      local_d0 = param_2;
      uStack_cc = param_6;
      uStack_bc = uStack_c4;
      FUN_1007a868(&local_d0,0x20);
      return uVar5;
    }
    goto LAB_10042f7c;
  case (uint *)0x2:
    uStack_c4 = *puVar10;
    local_c0 = (uint *)0x1;
    if (uVar14 == 0) {
      local_c0 = (uint *)0xf;
    }
    local_b8 = (uint *)0x1f5;
    local_b4 = 0;
    local_c8 = 0x36;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_bc = uStack_c4;
    FUN_1007a868(&local_d0,0x20);
    break;
  case (uint *)0x3:
    uStack_c4 = *puVar10;
    local_c0 = (uint *)0x1;
    if (uVar14 == 0) {
      local_c0 = (uint *)0xf;
    }
    local_b0 = (uint *)0x1f5;
    local_ac = 0;
    local_b8 = (uint *)0x148;
    local_c8 = 0x3c;
    local_d0 = param_2;
    uStack_cc = param_6;
    uStack_bc = uStack_c4;
    local_b4 = uStack_c4;
    FUN_1007a868(&local_d0,0x28);
  }
  if (uVar14 != 0) {
LAB_10042f7c:
    FUN_10079a00(param_2,*puVar10,1);
  }
  return uVar5;
}

