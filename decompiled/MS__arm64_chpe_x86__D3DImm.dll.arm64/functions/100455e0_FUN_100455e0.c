/*
 * FUN_100455e0 at 100455e0
 * undefined FUN_100455e0(void)
 * Address ranges: 100455e0-10046233
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100455e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined4 local_a0;
  int *local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  int *local_70;
  int *local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  char local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  code *local_50;
  
  local_50 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_54 = param_1;
  uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar7 = (*extraout_w11)(uVar7,param_2,param_3,0,0xf);
  iVar1 = param_3 + 0x10;
  local_68 = uVar7;
  uVar8 = FUN_10079948(iVar1,4,1);
  puVar2 = (uint *)(param_3 + 0x17c);
  local_70 = (int *)0x0;
  local_c0 = iVar1;
  uStack_bc = param_2;
  uStack_b4 = uVar8;
  local_ac = uVar7;
  if ((*puVar2 & 0x7800) == 0) {
    local_98 = 0;
    puVar3 = (uint *)(param_3 + 0xb0);
    local_a0 = 0xe4;
    local_9c = (int *)0xf0;
    local_a4 = *puVar3;
    local_b0 = 1;
    local_a8 = 0xe4;
    local_b8 = 0x11;
    FUN_1007a868(&local_c0,0x2c);
    local_a0 = 0xe4;
    local_9c = (int *)0x100;
    local_a4 = *puVar3;
    local_98 = 0;
    local_b0 = 2;
    local_a8 = 0xe4;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar8;
    local_ac = uVar7;
    FUN_1007a868(&local_c0,0x2c);
    local_a0 = 0xe4;
    local_9c = (int *)0x110;
    local_a4 = *puVar3;
    local_98 = 0;
    local_a8 = 0xe4;
    local_b0 = 4;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar8;
    local_ac = uVar7;
    FUN_1007a868(&local_c0,0x2c);
    local_a0 = 0xe4;
    local_9c = (int *)0x120;
    local_a4 = *puVar3;
    local_98 = 0;
    local_a8 = 0xe4;
    local_b0 = 8;
    local_ac = local_68;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar8;
    FUN_1007a868(&local_c0,0x2c);
  }
  else {
    puVar3 = (uint *)(param_3 + 0xc0);
    local_90 = 0;
    local_a4 = *puVar3;
    local_98 = 0;
    uStack_94 = 0;
    local_a0 = 0xe4;
    local_9c = (int *)0x0;
    local_b0 = 1;
    local_a8 = 0xe4;
    local_b8 = 0x11;
    FUN_1007a868(&local_c0,0x34);
    local_a0 = 0xe4;
    local_9c = (int *)0x10;
    local_a4 = *puVar3;
    local_90 = 0;
    local_98 = 0;
    uStack_94 = 0;
    local_b0 = 2;
    local_a8 = 0xe4;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar8;
    local_ac = uVar7;
    FUN_1007a868(&local_c0,0x34);
    local_a0 = 0xe4;
    local_9c = (int *)0x20;
    local_a4 = *puVar3;
    local_90 = 0;
    local_98 = 0;
    uStack_94 = 0;
    local_a8 = 0xe4;
    local_b0 = 4;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar8;
    local_ac = uVar7;
    FUN_1007a868(&local_c0,0x34);
    local_a0 = 0xe4;
    local_9c = (int *)0x30;
    local_a4 = *puVar3;
    local_90 = 0;
    local_98 = 0;
    uStack_94 = 0;
    local_a8 = 0xe4;
    local_b0 = 8;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar8;
    local_ac = uVar7;
    FUN_1007a868(&local_c0,0x34);
  }
  uVar5 = *puVar2;
  local_60 = 0;
  uVar7 = 0;
  uVar6 = uVar5 >> 0xb & 1;
  if ((uVar5 & 0x1000) != 0) {
    uVar6 = uVar6 | 2;
  }
  if ((uVar5 & 0x2000) != 0) {
    uVar6 = uVar6 | 4;
  }
  uVar11 = (ulonglong)uVar6;
  if (uVar6 == 0) {
    local_64 = 0;
  }
  else {
    uVar9 = (*local_50)();
    local_64 = (*extraout_w11_00)(uVar9,param_2,param_3,1,uVar11 & 0xffffffff);
  }
  if ((*puVar2 >> 0xb & 1) != 0) {
    uVar11 = 1;
    local_60 = FUN_10079948(iVar1,1,1);
    uVar7 = FUN_10079948(iVar1,4,uVar11 & 0xffffffff);
    local_70 = (int *)&DAT_00000040;
    local_a0 = 0;
    local_9c = (int *)0x0;
    local_a8 = 0x1e4;
    local_a4 = local_64;
    local_b0 = 0xf;
    local_b8 = 0x38;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar8;
    local_ac = uVar8;
    FUN_1007a868(&local_c0,0x28);
    local_98 = 0;
    local_a4 = *(undefined4 *)(param_3 + 0xa0);
    local_ac = local_64 | 0x80000000;
    local_b8 = 0;
    uStack_b4 = local_60;
    local_a8 = 0;
    local_b0 = 1;
    local_9c = (int *)0x3f800000;
    local_a0 = 0xe4;
    local_c0 = iVar1;
    uStack_bc = param_2;
    FUN_1007a868(&local_c0,0x2c);
    uVar9 = local_68;
    local_6c = (int *)(param_3 + 0xc0);
    local_a4 = *local_6c;
    local_a0 = 0xe4;
    local_9c = (int *)0x40;
    local_90 = 0;
    local_98 = 0;
    uStack_94 = 1;
    local_a8 = 0xe4;
    local_b8 = 0x11;
    local_b0 = 1;
    local_ac = local_68;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar7;
    FUN_1007a868(&local_c0,0x34);
    local_a0 = 0xe4;
    local_9c = (int *)0x50;
    local_90 = 0;
    local_98 = 0;
    uStack_94 = 1;
    local_b0 = 2;
    local_ac = uVar9;
    local_a4 = *local_6c;
    local_a8 = 0xe4;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar7;
    FUN_1007a868(&local_c0,0x34);
    local_a0 = 0xe4;
    local_9c = (int *)0x60;
    local_90 = 0;
    local_98 = 0;
    uStack_94 = 1;
    local_a4 = *local_6c;
    local_a8 = 0xe4;
    local_b0 = 4;
    local_ac = uVar9;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar7;
    FUN_1007a868(&local_c0,0x34);
    local_90 = 0;
    local_a0 = 0xe4;
    local_9c = (int *)0x70;
    local_98 = 0;
    uStack_94 = 1;
    local_a4 = *local_6c;
    local_a8 = 0xe4;
    local_b0 = 8;
    local_ac = uVar9;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar7;
    FUN_1007a868(&local_c0,0x34);
    local_ac = uVar7;
    if ((*puVar2 >> 0xc & 1) == 0) {
      local_a0 = 0;
      local_98 = 0x1e4;
      uStack_94 = 0;
      local_a8 = 0x1e4;
      local_a4 = local_60;
      local_b0 = 0xf;
      local_b8 = 0x32;
      local_c0 = iVar1;
      uStack_bc = param_2;
      uStack_b4 = uVar8;
      local_9c = (int *)uVar8;
      FUN_1007a868(&local_c0,0x30);
    }
    else {
      local_98 = 0x1e4;
      uStack_94 = 0;
      local_a0 = 0x55;
      local_a8 = 0x1e4;
      local_a4 = local_64;
      local_b0 = 0xf;
      local_b8 = 0x32;
      local_c0 = iVar1;
      uStack_bc = param_2;
      uStack_b4 = uVar8;
      local_9c = (int *)uVar8;
      FUN_1007a868(&local_c0,0x30);
    }
  }
  if ((*puVar2 >> 0xc & 1) != 0) {
    local_a0 = 0;
    local_9c = (int *)0x0;
    local_70 = local_70 + 0x10;
    local_a8 = 0x55;
    local_a4 = local_60;
    local_ac = local_64 | 0x80000000;
    local_b8 = 0;
    uStack_b4 = local_60;
    local_b0 = 1;
    local_c0 = iVar1;
    uStack_bc = param_2;
    local_6c = local_70;
    FUN_1007a868(&local_c0,0x28);
    uVar9 = local_68;
    local_90 = 0;
    local_58 = (undefined4 *)(param_3 + 0xc0);
    local_a0 = 0xe4;
    local_9c = local_6c;
    local_a4 = *local_58;
    local_98 = 0;
    uStack_94 = 2;
    local_b0 = 1;
    local_ac = local_68;
    local_a8 = 0xe4;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar7;
    FUN_1007a868(&local_c0,0x34);
    local_90 = 0;
    local_98 = 0;
    uStack_94 = 2;
    local_b0 = 2;
    local_ac = uVar9;
    local_9c = local_6c + 4;
    local_a0 = 0xe4;
    local_a4 = *local_58;
    local_a8 = 0xe4;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar7;
    FUN_1007a868(&local_c0,0x34);
    local_90 = 0;
    local_98 = 0;
    uStack_94 = 2;
    local_9c = local_6c + 8;
    local_a0 = 0xe4;
    local_a4 = *local_58;
    local_a8 = 0xe4;
    local_b0 = 4;
    local_ac = uVar9;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar7;
    FUN_1007a868(&local_c0,0x34);
    local_90 = 0;
    local_98 = 0;
    uStack_94 = 2;
    local_9c = local_6c + 0xc;
    local_a0 = 0xe4;
    local_a4 = *local_58;
    local_a8 = 0xe4;
    local_b0 = 8;
    local_ac = uVar9;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar7;
    FUN_1007a868(&local_c0,0x34);
    if ((*puVar2 >> 0xd & 1) == 0) {
      local_a0 = 0;
      local_98 = 0x1e4;
      uStack_94 = 0;
      local_a8 = 0x1e4;
      local_a4 = local_60;
      local_b0 = 0xf;
      local_b8 = 0x32;
      local_c0 = iVar1;
      uStack_bc = param_2;
      uStack_b4 = uVar8;
      local_ac = uVar7;
      local_9c = (int *)uVar8;
      FUN_1007a868(&local_c0,0x30);
    }
    else {
      local_98 = 0x1e4;
      uStack_94 = 0;
      local_a0 = 0xaa;
      local_a8 = 0x1e4;
      local_a4 = local_64;
      local_b0 = 0xf;
      local_b8 = 0x32;
      local_c0 = iVar1;
      uStack_bc = param_2;
      uStack_b4 = uVar8;
      local_ac = uVar7;
      local_9c = (int *)uVar8;
      FUN_1007a868(&local_c0,0x30);
    }
  }
  if ((*puVar2 >> 0xd & 1) != 0) {
    local_a0 = 0;
    local_9c = (int *)0x0;
    local_70 = local_70 + 0x10;
    local_a8 = 0xaa;
    local_a4 = local_60;
    local_ac = local_64 | 0x80000000;
    local_b8 = 0;
    uStack_b4 = local_60;
    local_b0 = 1;
    local_c0 = iVar1;
    uStack_bc = param_2;
    FUN_1007a868(&local_c0,0x28);
    uVar9 = local_68;
    local_58 = (undefined4 *)(param_3 + 0xc0);
    local_a4 = *local_58;
    local_98 = 0;
    uStack_94 = 3;
    local_90 = 0;
    local_a8 = 0xe4;
    local_a0 = 0xe4;
    local_9c = local_70;
    local_b0 = 1;
    local_ac = local_68;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar7;
    FUN_1007a868(&local_c0,0x34);
    local_90 = 0;
    local_b0 = 2;
    local_ac = uVar9;
    local_9c = local_70 + 4;
    local_a0 = 0xe4;
    local_98 = 0;
    uStack_94 = 3;
    local_a4 = *local_58;
    local_a8 = 0xe4;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar7;
    FUN_1007a868(&local_c0,0x34);
    local_90 = 0;
    local_9c = local_70 + 8;
    local_a0 = 0xe4;
    local_98 = 0;
    uStack_94 = 3;
    local_a4 = *local_58;
    local_a8 = 0xe4;
    local_b0 = 4;
    local_ac = uVar9;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar7;
    FUN_1007a868(&local_c0,0x34);
    local_90 = 0;
    local_9c = local_70 + 0xc;
    local_a0 = 0xe4;
    local_98 = 0;
    uStack_94 = 3;
    local_a4 = *local_58;
    local_a8 = 0xe4;
    local_b0 = 8;
    local_ac = uVar9;
    local_b8 = 0x11;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar7;
    FUN_1007a868(&local_c0,0x34);
    local_98 = 0x1e4;
    uStack_94 = 0;
    local_a0 = 0;
    local_a8 = 0x1e4;
    local_a4 = local_60;
    local_b0 = 0xf;
    local_b8 = 0x32;
    local_c0 = iVar1;
    uStack_bc = param_2;
    uStack_b4 = uVar8;
    local_ac = uVar7;
    local_9c = (int *)uVar8;
    FUN_1007a868(&local_c0,0x30);
  }
  uVar9 = (*local_50)();
  (*extraout_w11_01)(uVar9,param_3,local_68);
  *(undefined4 *)(param_3 + 0x130) = uVar8;
  FUN_10079a60(iVar1,uVar7);
  if ((*(char *)(param_3 + 0x18a) != '\0') || (*(char *)(param_3 + 0x18c) != '\0')) {
    if ((*puVar2 >> 2 & 1) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_10049090(local_54,param_2,param_3);
    }
    local_5c = *(char *)(param_3 + 0x18c);
    uVar9 = 3;
    if (local_5c != '\0') {
      uVar9 = 4;
    }
    uVar11 = FUN_10079948(iVar1,uVar9,1);
    local_68 = (undefined4)uVar11;
    piVar4 = (int *)(param_3 + 0xc0);
    local_70 = (int *)0x200;
    if ((*puVar2 & 0x7800) == 0) {
      local_c0 = *(int *)(param_3 + 0xb0);
      FUN_10045288(uVar11,param_2,param_3,uVar11 & 0xffffffff,uVar8,0x130);
    }
    else {
      local_c0 = *piVar4;
      FUN_10045288(uVar11,param_2,param_3,uVar11 & 0xffffffff,uVar8,0x200);
    }
    local_6c = piVar4;
    if ((*puVar2 >> 0xb & 1) != 0) {
      uVar7 = FUN_10079948(iVar1,3,1);
      uVar9 = local_68;
      local_a0 = 0;
      local_9c = (int *)0x0;
      local_70 = (int *)0x240;
      local_b0 = 7;
      local_ac = local_68;
      local_b8 = 0x38;
      uStack_b4 = local_68;
      local_a8 = 0x1a4;
      local_a4 = local_64;
      local_c0 = iVar1;
      uStack_bc = param_2;
      FUN_1007a868(&local_c0,0x28);
      local_c0 = *local_6c;
      FUN_10045288(local_6c,param_2,param_3,uVar7,uVar8,0x240);
      local_ac = uVar7;
      if ((*puVar2 >> 0xc & 1) == 0) {
        local_98 = 0x1a4;
        uStack_94 = 0;
        local_b0 = 7;
        local_a0 = 0;
        local_9c = (int *)uVar9;
        local_b8 = 0x32;
        uStack_b4 = uVar9;
        local_a8 = 0x1a4;
        local_a4 = local_60;
        local_c0 = iVar1;
        uStack_bc = param_2;
        FUN_1007a868(&local_c0,0x30);
      }
      else {
        local_b0 = 7;
        local_98 = 0x1a4;
        uStack_94 = 0;
        local_b8 = 0x32;
        uStack_b4 = uVar9;
        local_a8 = 0x1a4;
        local_a4 = local_64;
        local_a0 = 0x55;
        local_9c = (int *)uVar9;
        local_c0 = iVar1;
        uStack_bc = param_2;
        FUN_1007a868(&local_c0,0x30);
      }
    }
    if ((*puVar2 >> 0xc & 1) != 0) {
      local_c0 = *local_6c;
      local_70 = local_70 + 0x10;
      FUN_10045288(local_6c,param_2,param_3,uVar7,uVar8,local_70);
      if ((*puVar2 >> 0xd & 1) == 0) {
        local_98 = 0x1a4;
        uStack_94 = 0;
        local_b0 = 7;
        local_a0 = 0;
        local_9c = (int *)local_68;
        local_b8 = 0x32;
        uStack_b4 = local_68;
        local_a8 = 0x1a4;
        local_a4 = local_60;
        local_c0 = iVar1;
        uStack_bc = param_2;
        local_ac = uVar7;
        FUN_1007a868(&local_c0,0x30);
      }
      else {
        local_b0 = 7;
        local_98 = 0x1a4;
        uStack_94 = 0;
        local_b8 = 0x32;
        uStack_b4 = local_68;
        local_a8 = 0x1a4;
        local_a4 = local_64;
        local_a0 = 0xaa;
        local_9c = (int *)local_68;
        local_c0 = iVar1;
        uStack_bc = param_2;
        local_ac = uVar7;
        FUN_1007a868(&local_c0,0x30);
      }
    }
    if ((*puVar2 >> 0xd & 1) != 0) {
      local_c0 = *local_6c;
      FUN_10045288(local_6c,param_2,param_3,uVar7,uVar8,local_70 + 0x10);
      local_b0 = 7;
      local_98 = 0x1a4;
      uStack_94 = 0;
      local_a8 = 0x1a4;
      local_a4 = local_60;
      local_a0 = 0;
      local_9c = (int *)local_68;
      local_b8 = 0x32;
      uStack_b4 = local_68;
      local_c0 = iVar1;
      uStack_bc = param_2;
      local_ac = uVar7;
      FUN_1007a868(&local_c0,0x30);
    }
    FUN_100491f0(local_54,param_3,8);
    *(undefined4 *)(param_3 + 0x134) = local_68;
    if (local_5c != '\0') {
      local_ac = *(undefined4 *)(param_3 + 0xa0);
      local_a0 = 0;
      local_a4 = 0x3f800000;
      local_a8 = 0xe4;
      local_b0 = 8;
      local_b8 = 0x36;
      uStack_b4 = local_68;
      local_c0 = iVar1;
      uStack_bc = param_2;
      FUN_1007a868(&local_c0,0x24);
    }
    FUN_10079a60(iVar1,uVar7);
  }
  uVar7 = (*local_50)();
  (*extraout_w11_02)(uVar7,param_3,local_64);
  FUN_10079a60(iVar1,0);
  uVar10 = FUN_10079a60(iVar1,local_60);
  if (((*(uint *)(*(int *)(param_3 + 0x180) + 0x44) >> 0x17 & 1) != 0) &&
     (*(int *)(param_3 + 0x134) != 0)) {
    FUN_10045410(uVar10,param_2,param_3,*(int *)(param_3 + 0x134));
  }
  return;
}

