/*
 * FUN_1007a1e0 at 1007a1e0
 * undefined FUN_1007a1e0(void)
 * Address ranges: 1007a1e0-1007b31f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007a1e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  uint *puVar12;
  int iVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  undefined4 uVar14;
  code *extraout_w11_07;
  int local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  uint uStack_c4;
  uint local_c0;
  uint *local_bc;
  undefined4 local_b8;
  uint *local_b4;
  uint local_b0;
  int *local_ac;
  uint *local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  uint *local_80;
  uint local_7c;
  uint *local_78;
  char local_74;
  uint local_70;
  int *local_6c;
  int *local_68;
  uint local_64;
  uint local_60;
  uint *local_5c;
  uint *local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  code *pcStack_48;
  int *local_44;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_44 = (int *)(param_3 + 0x19c);
  uVar4 = *(uint *)(*local_44 + 0x44) >> 0x15 & 1;
  local_74 = (char)uVar4;
  pcStack_48 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_4c = param_1;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar6 = (*extraout_w11)(param_1,param_2,param_3,0,0xf);
  iVar1 = param_3 + 0x18;
  puVar2 = (uint *)(param_3 + 0x198);
  local_64 = uVar6;
  if (uVar4 != 0) {
    uVar6 = FUN_100ee580(iVar1,4,1);
    local_80 = (uint *)(param_3 + 0xcc);
    local_b0 = local_64 | 0x80000000;
    uStack_c4 = uVar6;
    local_78 = (uint *)local_b0;
    if ((*puVar2 >> 0x10 & 1) == 0) {
      local_a0 = 0;
      local_a8 = (uint *)local_64;
      uStack_a4 = 0xe4;
      local_b8 = 0xe4;
      local_b4 = (uint *)0x5f8;
      local_bc = (uint *)*local_80;
      local_ac = (int *)0xe4;
      local_c0 = 0xf;
      local_c8 = 0x32;
      local_d0 = iVar1;
      uStack_cc = param_2;
      FUN_100ef510(&local_d0,0x34);
    }
    else {
      (*pcVar5)();
      local_b4 = (uint *)(*extraout_w11_00)(param_1,param_2,param_3,0xf,0xf);
      local_b0 = 0xe4;
      local_ac = (int *)0x0;
      local_b8 = 0xe4;
      local_c0 = 0xf;
      local_bc = local_78;
      local_c8 = 0;
      local_d0 = iVar1;
      uStack_cc = param_2;
      local_58 = local_b4;
      FUN_100ef510(&local_d0,0x28);
      local_a0 = 0;
      local_b8 = 0xe4;
      local_b4 = (uint *)0x5f8;
      local_ac = (int *)0xe4;
      local_bc = (uint *)*local_80;
      local_a8 = (uint *)local_64;
      uStack_a4 = 0xe4;
      local_c0 = 0xf;
      local_c8 = 0x32;
      local_d0 = iVar1;
      uStack_cc = param_2;
      uStack_c4 = uVar6;
      local_b0 = uVar6;
      FUN_100ef510(&local_d0,0x34);
      (*pcVar5)();
      (*extraout_w11_01)(param_1,param_3,local_58);
    }
    uVar14 = local_4c;
    uVar10 = (ulonglong)local_64;
    if (local_64 != uVar6) {
      (*pcStack_48)();
      (*extraout_w11_02)(uVar14,param_3,uVar10 & 0xffffffff);
    }
  }
  uVar4 = *puVar2;
  if ((uVar4 >> 0xf & 1) == 0) {
    local_7c = 0;
  }
  else {
    local_58 = (uint *)(uVar4 & 0x800);
    iVar13 = 1;
    if (local_58 != (uint *)0x0) {
      iVar13 = 2;
    }
    local_5c = (uint *)(uVar4 & 0x1000);
    if (local_5c != (uint *)0x0) {
      iVar13 = iVar13 + 1;
    }
    uVar11 = 1;
    if (local_58 != (uint *)0x0) {
      uVar11 = 3;
    }
    if (local_5c != (uint *)0x0) {
      uVar11 = 7;
    }
    if ((uVar4 & 0x2000) != 0) {
      uVar11 = 0xf;
      iVar13 = iVar13 + 1;
    }
    local_78 = (uint *)CONCAT31(local_78._1_3_,uVar11);
    local_7c = FUN_100ee580(iVar1,iVar13,1);
    pcVar5 = pcStack_48;
    uVar14 = local_4c;
    (*pcStack_48)();
    local_bc = (uint *)(*extraout_w11_03)(uVar14,param_2,param_3,2,uVar11);
    local_a8 = (uint *)0x0;
    local_b8 = 0;
    if (local_58 != (uint *)0x0) {
      local_b8 = 0x54;
    }
    local_c0 = (uint)local_78 & 0xff;
    if (local_5c != (uint *)0x0) {
      local_b8 = 0xa4;
    }
    if ((uVar4 & 0x2000) != 0) {
      local_b8 = 0xe4;
    }
    local_b4 = *(uint **)(param_3 + 0xa8);
    local_b0 = 0xe4;
    local_ac = (int *)0x2;
    local_c8 = 0x29;
    uStack_c4 = local_7c;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_80 = local_bc;
    FUN_100ef510(&local_d0,0x2c);
    (*pcVar5)();
    (*extraout_w11_04)(uVar14,param_3,local_80);
  }
  uStack_c4 = FUN_100ee580(iVar1,4,1);
  local_6c = (int *)0x0;
  puVar12 = (uint *)0x40000000;
  if (local_7c == 0) {
    puVar12 = (uint *)0x0;
  }
  local_78 = (uint *)&DAT_10000000;
  if (local_7c == 0) {
    local_78 = (uint *)0x0;
  }
  local_bc = (uint *)uVar6;
  local_70 = uStack_c4;
  local_5c = puVar12;
  if ((*puVar2 & 0xf800) == 0) {
    local_a8 = (uint *)0x0;
    puVar12 = (uint *)(param_3 + 0xc0);
    local_b0 = 0xe4;
    local_ac = (int *)0xf0;
    local_b4 = (uint *)*puVar12;
    local_c0 = 1;
    local_b8 = 0xe4;
    local_c8 = 0x11;
    local_d0 = iVar1;
    uStack_cc = param_2;
    FUN_100ef510(&local_d0,0x2c);
    local_b0 = 0xe4;
    local_ac = (int *)0x100;
    local_b4 = (uint *)*puVar12;
    local_a8 = (uint *)0x0;
    local_c0 = 2;
    local_b8 = 0xe4;
    local_c8 = 0x11;
    uStack_c4 = local_70;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)uVar6;
    FUN_100ef510(&local_d0,0x2c);
    local_b0 = 0xe4;
    local_ac = (int *)0x110;
    local_b4 = (uint *)*puVar12;
    local_a8 = (uint *)0x0;
    local_b8 = 0xe4;
    local_c0 = 4;
    local_c8 = 0x11;
    uStack_c4 = local_70;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)uVar6;
    FUN_100ef510(&local_d0,0x2c);
    local_b0 = 0xe4;
    local_ac = (int *)0x120;
    local_b4 = (uint *)*puVar12;
    local_a8 = (uint *)0x0;
    local_b8 = 0xe4;
    local_c0 = 8;
    local_c8 = 0x11;
    uStack_c4 = local_70;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)uVar6;
    FUN_100ef510(&local_d0,0x2c);
  }
  else {
    puVar8 = (uint *)(param_3 + 0xd0);
    local_a0 = 0;
    local_b0 = 0xe4;
    local_ac = (int *)0x0;
    local_a8 = (uint *)((uint)local_78 | local_7c);
    local_b4 = (uint *)(*puVar8 | (uint)puVar12);
    uStack_a4 = 0;
    local_b8 = 0xe4;
    local_c8 = 0x11;
    local_c0 = 1;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_68 = (int *)local_a8;
    FUN_100ef510(&local_d0,0x34);
    local_a0 = 0;
    local_c0 = 2;
    local_b4 = (uint *)(*puVar8 | (uint)puVar12);
    local_b8 = 0xe4;
    local_b0 = 0xe4;
    local_ac = (int *)0x10;
    local_c8 = 0x11;
    uStack_c4 = local_70;
    local_a8 = (uint *)local_68;
    uStack_a4 = 0;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)uVar6;
    FUN_100ef510(&local_d0,0x34);
    local_a0 = 0;
    local_b4 = (uint *)(*puVar8 | (uint)puVar12);
    local_b8 = 0xe4;
    local_b0 = 0xe4;
    local_ac = (int *)0x20;
    local_c0 = 4;
    local_c8 = 0x11;
    uStack_c4 = local_70;
    local_a8 = (uint *)local_68;
    uStack_a4 = 0;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)uVar6;
    FUN_100ef510(&local_d0,0x34);
    local_a0 = 0;
    local_b4 = (uint *)(*puVar8 | (uint)puVar12);
    local_b8 = 0xe4;
    local_b0 = 0xe4;
    local_ac = (int *)0x30;
    local_c0 = 8;
    local_c8 = 0x11;
    uStack_c4 = local_70;
    local_a8 = (uint *)local_68;
    uStack_a4 = 0;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)uVar6;
    FUN_100ef510(&local_d0,0x34);
  }
  uVar14 = local_4c;
  uVar7 = *puVar2;
  local_60 = 0;
  local_50 = 0;
  uVar4 = uVar7 >> 0xb & 1;
  if ((uVar7 & 0x1000) != 0) {
    uVar4 = uVar4 | 2;
  }
  if ((uVar7 & 0x2000) != 0) {
    uVar4 = uVar4 | 4;
  }
  uVar10 = (ulonglong)uVar4;
  if (uVar4 == 0) {
    local_54 = 0;
  }
  else {
    (*pcStack_48)();
    local_54 = (*extraout_w11_05)(uVar14,param_2,param_3,1,uVar10 & 0xffffffff);
  }
  if ((*puVar2 >> 0xb & 1) != 0) {
    uVar10 = 1;
    local_60 = FUN_100ee580(iVar1,1,1);
    uVar7 = FUN_100ee580(iVar1,4,uVar10 & 0xffffffff);
    uVar4 = local_54;
    local_b0 = 0;
    local_ac = (int *)0x0;
    local_6c = (int *)&DAT_00000040;
    if (local_7c != 0) {
      local_6c = (int *)0x0;
    }
    local_c0 = 0xf;
    local_bc = (uint *)local_70;
    local_b8 = 0x1e4;
    local_b4 = (uint *)local_54;
    local_c8 = 0x38;
    uStack_c4 = local_70;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_68 = local_6c;
    local_50 = uVar7;
    FUN_100ef510(&local_d0,0x28);
    local_bc = (uint *)(uVar4 | 0x80000000);
    local_b4 = *(uint **)(param_3 + 0xa8);
    local_b8 = 0;
    local_a8 = (uint *)0x0;
    local_c8 = 0;
    uStack_c4 = local_60;
    local_b0 = 0xe4;
    local_ac = (int *)0x3f800000;
    local_c0 = 1;
    local_d0 = iVar1;
    uStack_cc = param_2;
    FUN_100ef510(&local_d0,0x2c);
    puVar12 = local_5c;
    local_58 = (uint *)(param_3 + 0xd0);
    local_a0 = 0;
    local_b4 = (uint *)(*local_58 | (uint)local_5c);
    local_a8 = (uint *)((uint)local_78 | local_7c);
    local_b8 = 0xe4;
    uStack_a4 = 1;
    local_b0 = 0xe4;
    local_ac = local_68;
    local_c8 = 0x11;
    local_c0 = 1;
    local_d0 = iVar1;
    uStack_cc = param_2;
    uStack_c4 = uVar7;
    local_bc = (uint *)uVar6;
    local_80 = local_a8;
    FUN_100ef510(&local_d0,0x34);
    local_a0 = 0;
    local_ac = local_68 + 4;
    local_a8 = local_80;
    uStack_a4 = 1;
    local_b0 = 0xe4;
    local_c0 = 2;
    local_b4 = (uint *)(*local_58 | (uint)puVar12);
    local_b8 = 0xe4;
    local_c8 = 0x11;
    local_d0 = iVar1;
    uStack_cc = param_2;
    uStack_c4 = uVar7;
    local_bc = (uint *)uVar6;
    FUN_100ef510(&local_d0,0x34);
    local_a0 = 0;
    local_ac = local_68 + 8;
    local_b0 = 0xe4;
    local_a8 = local_80;
    uStack_a4 = 1;
    local_b4 = (uint *)(*local_58 | (uint)puVar12);
    local_b8 = 0xe4;
    local_c0 = 4;
    local_c8 = 0x11;
    local_d0 = iVar1;
    uStack_cc = param_2;
    uStack_c4 = uVar7;
    local_bc = (uint *)uVar6;
    FUN_100ef510(&local_d0,0x34);
    local_a0 = 0;
    local_ac = local_68 + 0xc;
    local_a8 = local_80;
    uStack_a4 = 1;
    local_b0 = 0xe4;
    local_b4 = (uint *)(*local_58 | (uint)puVar12);
    local_b8 = 0xe4;
    local_c0 = 8;
    local_c8 = 0x11;
    local_d0 = iVar1;
    uStack_cc = param_2;
    uStack_c4 = uVar7;
    local_bc = (uint *)uVar6;
    FUN_100ef510(&local_d0,0x34);
    local_bc = (uint *)uVar7;
    if ((*puVar2 >> 0xc & 1) == 0) {
      local_b0 = 0;
      local_ac = (int *)local_70;
      local_a8 = (uint *)0x1e4;
      uStack_a4 = 0;
      local_c0 = 0xf;
      local_b8 = 0x1e4;
      local_b4 = (uint *)local_60;
      local_c8 = 0x32;
      uStack_c4 = local_70;
      local_d0 = iVar1;
      uStack_cc = param_2;
      FUN_100ef510(&local_d0,0x30);
    }
    else {
      local_a8 = (uint *)0x1e4;
      uStack_a4 = 0;
      local_b0 = 0x55;
      local_ac = (int *)local_70;
      local_c0 = 0xf;
      local_b8 = 0x1e4;
      local_b4 = (uint *)local_54;
      local_c8 = 0x32;
      uStack_c4 = local_70;
      local_d0 = iVar1;
      uStack_cc = param_2;
      FUN_100ef510(&local_d0,0x30);
    }
  }
  if ((*puVar2 >> 0xc & 1) != 0) {
    local_b0 = 0;
    local_ac = (int *)0x0;
    iVar13 = 0x40;
    if (local_7c != 0) {
      iVar13 = 0;
    }
    local_c8 = 0;
    uStack_c4 = local_60;
    local_6c = (int *)(iVar13 + (int)local_6c);
    local_b8 = 0x55;
    local_b4 = (uint *)local_60;
    local_bc = (uint *)(local_54 | 0x80000000);
    local_c0 = 1;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_68 = local_6c;
    FUN_100ef510(&local_d0,0x28);
    uVar4 = local_50;
    puVar12 = local_5c;
    local_80 = (uint *)(param_3 + 0xd0);
    local_a0 = 0;
    local_a8 = (uint *)((uint)local_78 | local_7c);
    local_b4 = (uint *)(*local_80 | (uint)local_5c);
    uStack_a4 = 2;
    local_b8 = 0xe4;
    local_c0 = 1;
    local_b0 = 0xe4;
    local_ac = local_68;
    local_c8 = 0x11;
    uStack_c4 = local_50;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)uVar6;
    local_58 = local_a8;
    FUN_100ef510(&local_d0,0x34);
    local_a0 = 0;
    local_c0 = 2;
    local_ac = local_68 + 4;
    local_a8 = local_58;
    uStack_a4 = 2;
    local_b0 = 0xe4;
    local_b4 = (uint *)(*local_80 | (uint)puVar12);
    local_b8 = 0xe4;
    local_c8 = 0x11;
    uStack_c4 = uVar4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)uVar6;
    FUN_100ef510(&local_d0,0x34);
    local_a0 = 0;
    local_ac = local_68 + 8;
    local_a8 = local_58;
    uStack_a4 = 2;
    local_b0 = 0xe4;
    local_b4 = (uint *)(*local_80 | (uint)puVar12);
    local_b8 = 0xe4;
    local_c0 = 4;
    local_c8 = 0x11;
    uStack_c4 = uVar4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)uVar6;
    FUN_100ef510(&local_d0,0x34);
    local_a0 = 0;
    local_ac = local_68 + 0xc;
    local_a8 = local_58;
    uStack_a4 = 2;
    local_b0 = 0xe4;
    local_b4 = (uint *)(*local_80 | (uint)puVar12);
    local_b8 = 0xe4;
    local_c0 = 8;
    local_c8 = 0x11;
    uStack_c4 = uVar4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)uVar6;
    FUN_100ef510(&local_d0,0x34);
    if ((*puVar2 >> 0xd & 1) == 0) {
      local_b0 = 0;
      local_ac = (int *)local_70;
      local_a8 = (uint *)0x1e4;
      uStack_a4 = 0;
      local_c0 = 0xf;
      local_bc = (uint *)uVar4;
      local_b8 = 0x1e4;
      local_b4 = (uint *)local_60;
      local_c8 = 0x32;
      uStack_c4 = local_70;
      local_d0 = iVar1;
      uStack_cc = param_2;
      FUN_100ef510(&local_d0,0x30);
    }
    else {
      local_a8 = (uint *)0x1e4;
      uStack_a4 = 0;
      local_b0 = 0xaa;
      local_ac = (int *)local_70;
      local_c0 = 0xf;
      local_bc = (uint *)uVar4;
      local_b8 = 0x1e4;
      local_b4 = (uint *)local_54;
      local_c8 = 0x32;
      uStack_c4 = local_70;
      local_d0 = iVar1;
      uStack_cc = param_2;
      FUN_100ef510(&local_d0,0x30);
    }
  }
  if ((*puVar2 >> 0xd & 1) != 0) {
    local_b0 = 0;
    local_ac = (int *)0x0;
    iVar13 = 0x40;
    if (local_7c != 0) {
      iVar13 = 0;
    }
    local_c8 = 0;
    uStack_c4 = local_60;
    local_6c = (int *)(iVar13 + (int)local_6c);
    local_b8 = 0xaa;
    local_b4 = (uint *)local_60;
    local_bc = (uint *)(local_54 | 0x80000000);
    local_c0 = 1;
    local_d0 = iVar1;
    uStack_cc = param_2;
    FUN_100ef510(&local_d0,0x28);
    uVar4 = local_50;
    puVar12 = local_5c;
    local_a0 = 0;
    local_a8 = (uint *)((uint)local_78 | local_7c);
    local_b4 = (uint *)(*(uint *)(param_3 + 0xd0) | (uint)local_5c);
    uStack_a4 = 3;
    local_b8 = 0xe4;
    local_b0 = 0xe4;
    local_ac = local_6c;
    local_c0 = 1;
    local_c8 = 0x11;
    uStack_c4 = local_50;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)uVar6;
    local_80 = local_a8;
    local_78 = (uint *)(param_3 + 0xd0);
    FUN_100ef510(&local_d0,0x34);
    local_a0 = 0;
    local_a8 = local_80;
    uStack_a4 = 3;
    local_ac = local_6c + 4;
    local_c0 = 2;
    local_b0 = 0xe4;
    local_b4 = (uint *)(*local_78 | (uint)puVar12);
    local_b8 = 0xe4;
    local_c8 = 0x11;
    uStack_c4 = uVar4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)uVar6;
    FUN_100ef510(&local_d0,0x34);
    local_a0 = 0;
    local_ac = local_6c + 8;
    local_a8 = local_80;
    uStack_a4 = 3;
    local_b0 = 0xe4;
    local_b4 = (uint *)(*local_78 | (uint)puVar12);
    local_b8 = 0xe4;
    local_c0 = 4;
    local_c8 = 0x11;
    uStack_c4 = uVar4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)uVar6;
    FUN_100ef510(&local_d0,0x34);
    local_a0 = 0;
    local_ac = local_6c + 0xc;
    local_a8 = local_80;
    uStack_a4 = 3;
    local_b0 = 0xe4;
    local_b4 = (uint *)(*local_78 | (uint)puVar12);
    local_b8 = 0xe4;
    local_c0 = 8;
    local_c8 = 0x11;
    uStack_c4 = uVar4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)uVar6;
    FUN_100ef510(&local_d0,0x34);
    local_a8 = (uint *)0x1e4;
    uStack_a4 = 0;
    local_c0 = 0xf;
    local_bc = (uint *)uVar4;
    local_b8 = 0x1e4;
    local_b4 = (uint *)local_60;
    local_c8 = 0x32;
    uStack_c4 = local_70;
    local_b0 = 0;
    local_ac = (int *)local_70;
    local_d0 = iVar1;
    uStack_cc = param_2;
    FUN_100ef510(&local_d0,0x30);
  }
  uVar14 = local_4c;
  uVar10 = (ulonglong)local_64;
  if (local_64 == uVar6) {
    (*pcStack_48)();
    (*extraout_w11_06)(uVar14,param_3,uVar10 & 0xffffffff);
  }
  else {
    FUN_100ee638(iVar1,uVar6);
  }
  *(uint *)(param_3 + 0x14c) = local_70;
  FUN_100ee638(iVar1,local_50);
  if ((*(char *)(param_3 + 0x1a6) != '\0') || (*(char *)(param_3 + 0x1a8) != '\0')) {
    if ((*puVar2 >> 2 & 1) == 0) {
      local_78 = (uint *)0x0;
    }
    else {
      local_78 = (uint *)FUN_1007e048(local_4c,param_2,param_3);
    }
    uVar14 = local_4c;
    puVar12 = local_78;
    puVar8 = (uint *)FUN_10079c00(local_4c,param_2,param_3,local_78,local_74);
    if (puVar8 != puVar12) {
      FUN_1007e1a8(uVar14,param_3,8);
    }
    local_74 = *(char *)(param_3 + 0x1a8);
    uVar14 = 3;
    if (local_74 != '\0') {
      uVar14 = 4;
    }
    uVar10 = FUN_100ee580(iVar1,uVar14,1);
    local_64 = (uint)uVar10;
    piVar3 = (int *)(param_3 + 0xd0);
    local_5c = (uint *)0x4000;
    if ((*puVar2 & 0xf800) == 0) {
      local_d0 = *(int *)(param_3 + 0xc0);
      FUN_10079e60(uVar10,param_2,param_3,uVar10 & 0xffffffff,puVar8,0x130,0,0);
    }
    else {
      local_d0 = *piVar3;
      FUN_10079e60(uVar10,param_2,param_3,uVar10 & 0xffffffff,puVar8,0x4000,local_7c,0);
    }
    local_6c = piVar3;
    if ((*puVar2 >> 0xb & 1) != 0) {
      uVar7 = FUN_100ee580(iVar1,3,1);
      uVar6 = local_54;
      uVar4 = local_64;
      local_b0 = 0;
      local_ac = (int *)0x0;
      local_80 = (uint *)0x4040;
      if (local_7c != 0) {
        local_80 = (uint *)0x4000;
      }
      local_b8 = 0x1a4;
      local_b4 = (uint *)local_54;
      local_c0 = 7;
      local_bc = (uint *)local_64;
      local_c8 = 0x38;
      uStack_c4 = local_64;
      local_d0 = iVar1;
      uStack_cc = param_2;
      local_5c = local_80;
      local_50 = uVar7;
      FUN_100ef510(&local_d0,0x28);
      local_d0 = *local_6c;
      FUN_10079e60(local_6c,param_2,param_3,uVar7,puVar8,local_80,local_7c,1);
      local_bc = (uint *)uVar7;
      if ((*puVar2 >> 0xc & 1) == 0) {
        local_b0 = 0;
        local_ac = (int *)uVar4;
        local_a8 = (uint *)0x1a4;
        uStack_a4 = 0;
        local_b8 = 0x1a4;
        local_b4 = (uint *)local_60;
        local_c0 = 7;
        local_c8 = 0x32;
        uStack_c4 = uVar4;
        local_d0 = iVar1;
        uStack_cc = param_2;
        FUN_100ef510(&local_d0,0x30);
      }
      else {
        local_a8 = (uint *)0x1a4;
        uStack_a4 = 0;
        local_b8 = 0x1a4;
        local_b4 = (uint *)uVar6;
        local_c0 = 7;
        local_c8 = 0x32;
        uStack_c4 = uVar4;
        local_b0 = 0x55;
        local_ac = (int *)uVar4;
        local_d0 = iVar1;
        uStack_cc = param_2;
        FUN_100ef510(&local_d0,0x30);
      }
    }
    uVar4 = local_50;
    if ((*puVar2 >> 0xc & 1) != 0) {
      iVar13 = 0x40;
      if (local_7c != 0) {
        iVar13 = 0;
      }
      local_5c = (uint *)(iVar13 + (int)local_5c);
      local_d0 = *local_6c;
      FUN_10079e60(local_6c,param_2,param_3,local_50,puVar8,local_5c,local_7c,2);
      if ((*puVar2 >> 0xd & 1) == 0) {
        local_b0 = 0;
        local_ac = (int *)local_64;
        local_a8 = (uint *)0x1a4;
        uStack_a4 = 0;
        local_b8 = 0x1a4;
        local_b4 = (uint *)local_60;
        local_c0 = 7;
        local_bc = (uint *)uVar4;
        local_c8 = 0x32;
        uStack_c4 = local_64;
        local_d0 = iVar1;
        uStack_cc = param_2;
        FUN_100ef510(&local_d0,0x30);
      }
      else {
        local_a8 = (uint *)0x1a4;
        uStack_a4 = 0;
        local_b0 = 0xaa;
        local_ac = (int *)local_64;
        local_b8 = 0x1a4;
        local_b4 = (uint *)local_54;
        local_c0 = 7;
        local_bc = (uint *)uVar4;
        local_c8 = 0x32;
        uStack_c4 = local_64;
        local_d0 = iVar1;
        uStack_cc = param_2;
        FUN_100ef510(&local_d0,0x30);
      }
    }
    uVar4 = local_50;
    if ((*puVar2 >> 0xd & 1) != 0) {
      iVar13 = 0x40;
      if (local_7c != 0) {
        iVar13 = 0;
      }
      local_d0 = *local_6c;
      FUN_10079e60(local_6c,param_2,param_3,local_50,puVar8,iVar13 + (int)local_5c,local_7c,3);
      local_a8 = (uint *)0x1a4;
      uStack_a4 = 0;
      local_b8 = 0x1a4;
      local_b4 = (uint *)local_60;
      local_c0 = 7;
      local_bc = (uint *)uVar4;
      local_c8 = 0x32;
      uStack_c4 = local_64;
      local_b0 = 0;
      local_ac = (int *)local_64;
      local_d0 = iVar1;
      uStack_cc = param_2;
      FUN_100ef510(&local_d0,0x30);
    }
    if (puVar8 == local_78) {
      FUN_1007e1a8(local_4c,param_3,8);
    }
    else {
      FUN_100ee638(iVar1,puVar8);
    }
    *(uint *)(param_3 + 0x150) = local_64;
    if (local_74 != '\0') {
      local_bc = *(uint **)(param_3 + 0xa8);
      local_b0 = 0;
      local_b4 = (uint *)0x3f800000;
      local_b8 = 0xe4;
      local_c0 = 8;
      local_c8 = 0x36;
      uStack_c4 = local_64;
      local_d0 = iVar1;
      uStack_cc = param_2;
      FUN_100ef510(&local_d0,0x24);
    }
    FUN_100ee638(iVar1,local_50);
  }
  uVar14 = local_4c;
  (*pcStack_48)();
  (*extraout_w11_07)(uVar14,param_3,local_54);
  FUN_100ee638(iVar1,local_7c);
  uVar9 = FUN_100ee638(iVar1,local_60);
  if (((*(uint *)(*local_44 + 0x44) >> 0x17 & 1) != 0) && (*(int *)(param_3 + 0x150) != 0)) {
    FUN_1007a010(uVar9,param_2,param_3,*(int *)(param_3 + 0x150));
  }
  return;
}

