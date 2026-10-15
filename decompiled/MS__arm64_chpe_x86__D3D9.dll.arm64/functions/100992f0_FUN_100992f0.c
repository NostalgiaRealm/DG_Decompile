/*
 * FUN_100992f0 at 100992f0
 * undefined FUN_100992f0(void)
 * Address ranges: 100992f0-1009a497
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100992f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  int iVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  undefined4 uVar13;
  int local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  uint *puStack_c4;
  int *local_c0;
  uint *local_bc;
  uint *local_b8;
  uint *local_b4;
  int *local_b0;
  uint *local_ac;
  uint *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint *local_80;
  uint *local_7c;
  int *local_78;
  uint *local_74;
  int *local_70;
  uint *local_6c;
  char local_68;
  uint *local_64;
  uint local_60;
  int *local_5c;
  uint local_58;
  int *local_54;
  undefined4 local_50;
  code *local_4c;
  int *local_48;
  int *local_44;
  
  local_44 = (int *)(param_3 + 0x1a0);
  uVar5 = *(uint *)(*local_44 + 0x44) >> 0x15 & 1;
  local_68 = (char)uVar5;
  local_4c = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_50 = param_1;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  piVar6 = (int *)(*extraout_w11)(param_1,param_2,param_3,0,0xf);
  iVar1 = param_3 + 0x18;
  puVar2 = (uint *)(param_3 + 0x19c);
  piVar7 = piVar6;
  local_48 = piVar6;
  if (uVar5 != 0) {
    piVar7 = (int *)FUN_10121590(iVar1,4,1);
    local_b0 = (int *)((uint)piVar6 | 0x80000000);
    local_6c = (uint *)(param_3 + 0xcc);
    puStack_c4 = (uint *)piVar7;
    local_a8 = (uint *)piVar6;
    local_74 = (uint *)local_b0;
    if ((*puVar2 >> 0x10 & 1) == 0) {
      local_a0 = 0;
      local_a4 = 0xe4;
      local_b8 = (uint *)&DAT_000000e4;
      local_b4 = (uint *)0x5f8;
      local_bc = (uint *)*local_6c;
      local_ac = (uint *)0xe4;
      local_c0 = (int *)0xf;
      local_c8 = 0x32;
      local_d0 = iVar1;
      uStack_cc = param_2;
      FUN_10122a88(&local_d0,0x34);
    }
    else {
      (*local_4c)();
      local_b4 = (uint *)(*extraout_w11_00)(param_1,param_2,param_3,0xf,0xf);
      local_b0 = (int *)0xe4;
      local_ac = (uint *)0x0;
      local_b8 = (uint *)0xe4;
      local_c0 = (int *)0xf;
      local_bc = local_74;
      local_c8 = 0;
      local_d0 = iVar1;
      uStack_cc = param_2;
      local_64 = local_b4;
      FUN_10122a88(&local_d0,0x28);
      local_a0 = 0;
      local_b8 = (uint *)&DAT_000000e4;
      local_b4 = (uint *)0x5f8;
      local_a4 = 0xe4;
      local_bc = (uint *)*local_6c;
      local_ac = (uint *)0xe4;
      local_c0 = (int *)0xf;
      local_c8 = 0x32;
      local_d0 = iVar1;
      uStack_cc = param_2;
      puStack_c4 = (uint *)piVar7;
      local_b0 = piVar7;
      FUN_10122a88(&local_d0,0x34);
      (*local_4c)();
      (*extraout_w11_01)(param_1,param_3,local_64);
    }
    piVar6 = local_48;
    uVar13 = local_50;
    if (local_48 != piVar7) {
      (*local_4c)();
      (*extraout_w11_02)(uVar13,param_3,piVar6);
    }
  }
  uVar5 = *puVar2;
  if ((uVar5 >> 0xf & 1) == 0) {
    local_5c = (int *)0x0;
  }
  else {
    local_64 = (uint *)(uVar5 & 0x800);
    iVar12 = 1;
    if (local_64 != (uint *)0x0) {
      iVar12 = 2;
    }
    local_70 = (int *)(uVar5 & 0x1000);
    if (local_70 != (int *)0x0) {
      iVar12 = iVar12 + 1;
    }
    uVar10 = 1;
    if (local_64 != (uint *)0x0) {
      uVar10 = 3;
    }
    if (local_70 != (int *)0x0) {
      uVar10 = 7;
    }
    if ((uVar5 & 0x2000) != 0) {
      uVar10 = 0xf;
      iVar12 = iVar12 + 1;
    }
    local_74 = (uint *)CONCAT31(local_74._1_3_,uVar10);
    piVar6 = (int *)FUN_10121590(iVar1,iVar12,1);
    uVar13 = local_50;
    local_5c = piVar6;
    (*local_4c)();
    local_bc = (uint *)(*extraout_w11_03)(uVar13,param_2,param_3,2,uVar10);
    local_6c = (uint *)(param_3 + 0xac);
    local_a0 = 0;
    local_9c = 0;
    local_a8 = (uint *)0x0;
    local_a4 = 0;
    local_b8 = (uint *)0x0;
    if (local_64 != (uint *)0x0) {
      local_b8 = (uint *)&DAT_00000054;
    }
    local_c0 = (int *)((uint)local_74 & 0xff);
    if (local_70 != (int *)0x0) {
      local_b8 = (uint *)&DAT_000000a4;
    }
    if ((uVar5 & 0x2000) != 0) {
      local_b8 = (uint *)&DAT_000000e4;
    }
    local_b0 = (int *)0x1e4;
    local_ac = (uint *)0x0;
    local_b4 = (uint *)*local_6c;
    local_c8 = 0x24;
    local_d0 = iVar1;
    uStack_cc = param_2;
    puStack_c4 = (uint *)piVar6;
    local_78 = (int *)local_bc;
    local_74 = (uint *)local_c0;
    local_64 = local_b8;
    FUN_10122a88(&local_d0,0x38);
    local_a4 = 0xff;
    local_a0 = 0xff;
    local_ac = (uint *)0xff;
    local_a8 = (uint *)0xff;
    local_b0 = (int *)0x1e4;
    local_9c = 0;
    local_c0 = (int *)local_74;
    local_b4 = (uint *)*local_6c;
    local_b8 = local_64;
    local_c8 = 0x25;
    local_d0 = iVar1;
    uStack_cc = param_2;
    puStack_c4 = (uint *)piVar6;
    local_bc = (uint *)piVar6;
    FUN_10122a88(&local_d0,0x38);
    local_b4 = *(uint **)(param_3 + 0xa8);
    local_a8 = (uint *)0x0;
    local_b0 = (int *)&DAT_000000e4;
    local_ac = (uint *)0x2;
    local_b8 = local_64;
    local_c8 = 0x29;
    local_c0 = (int *)local_74;
    local_d0 = iVar1;
    uStack_cc = param_2;
    puStack_c4 = (uint *)piVar6;
    local_bc = (uint *)piVar6;
    FUN_10122a88(&local_d0,0x2c);
    (*local_4c)();
    (*extraout_w11_04)(uVar13,param_3,local_78);
  }
  puStack_c4 = (uint *)FUN_10121590(iVar1,4,1);
  local_80 = (uint *)0x40000000;
  if (local_5c == (int *)0x0) {
    local_80 = (uint *)0x0;
  }
  local_74 = (uint *)&DAT_10000000;
  if (local_5c == (int *)0x0) {
    local_74 = (uint *)0x0;
  }
  local_70 = (int *)0x0;
  local_bc = (uint *)piVar7;
  local_7c = puStack_c4;
  if ((*puVar2 & 0xf800) == 0) {
    local_a8 = (uint *)0x0;
    puVar3 = (uint *)(param_3 + 0xc0);
    local_b0 = (int *)0xe4;
    local_ac = (uint *)0xf0;
    local_b4 = (uint *)*puVar3;
    local_c8 = 0x11;
    local_c0 = (int *)0x1;
    local_b8 = (uint *)0xe4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    FUN_10122a88(&local_d0,0x2c);
    local_b0 = (int *)0xe4;
    local_ac = (uint *)0x100;
    local_b4 = (uint *)*puVar3;
    local_a8 = (uint *)0x0;
    local_c0 = (int *)0x2;
    local_c8 = 0x11;
    puStack_c4 = local_7c;
    local_b8 = (uint *)0xe4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)piVar7;
    FUN_10122a88(&local_d0,0x2c);
    local_b0 = (int *)0xe4;
    local_ac = (uint *)0x110;
    local_b4 = (uint *)*puVar3;
    local_a8 = (uint *)0x0;
    local_b8 = (uint *)0xe4;
    local_c8 = 0x11;
    puStack_c4 = local_7c;
    local_c0 = (int *)0x4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)piVar7;
    FUN_10122a88(&local_d0,0x2c);
    local_b0 = (int *)0xe4;
    local_ac = (uint *)&DAT_00000120;
    local_b4 = (uint *)*puVar3;
    local_a8 = (uint *)0x0;
    local_b8 = (uint *)0xe4;
    local_c8 = 0x11;
    puStack_c4 = local_7c;
    local_c0 = (int *)0x8;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)piVar7;
    FUN_10122a88(&local_d0,0x2c);
  }
  else {
    puVar3 = (uint *)(param_3 + 0xd0);
    local_a8 = (uint *)((uint)local_74 | (uint)local_5c);
    local_a0 = 0;
    local_c8 = 0x11;
    local_a4 = 0;
    local_b4 = (uint *)((uint)local_80 | *puVar3);
    local_b0 = (int *)0xe4;
    local_ac = (uint *)0x0;
    local_b8 = (uint *)0xe4;
    local_c0 = (int *)0x1;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_78 = (int *)local_a8;
    FUN_10122a88(&local_d0,0x34);
    local_a0 = 0;
    local_c0 = (int *)0x2;
    local_c8 = 0x11;
    puStack_c4 = local_7c;
    local_b4 = (uint *)((uint)local_80 | *puVar3);
    local_a8 = (uint *)local_78;
    local_a4 = 0;
    local_b0 = (int *)0xe4;
    local_ac = (uint *)0x10;
    local_b8 = (uint *)0xe4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)piVar7;
    FUN_10122a88(&local_d0,0x34);
    local_a0 = 0;
    local_c8 = 0x11;
    puStack_c4 = local_7c;
    local_b4 = (uint *)((uint)local_80 | *puVar3);
    local_a8 = (uint *)local_78;
    local_a4 = 0;
    local_b0 = (int *)0xe4;
    local_ac = (uint *)0x20;
    local_c0 = (int *)0x4;
    local_b8 = (uint *)0xe4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)piVar7;
    FUN_10122a88(&local_d0,0x34);
    local_a0 = 0;
    local_c8 = 0x11;
    puStack_c4 = local_7c;
    local_b4 = (uint *)((uint)local_80 | *puVar3);
    local_a8 = (uint *)local_78;
    local_a4 = 0;
    local_b0 = (int *)0xe4;
    local_ac = (uint *)&DAT_00000030;
    local_c0 = (int *)0x8;
    local_b8 = (uint *)0xe4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)piVar7;
    FUN_10122a88(&local_d0,0x34);
  }
  uVar13 = local_50;
  uVar4 = *puVar2;
  local_60 = 0;
  local_54 = (int *)0x0;
  uVar5 = uVar4 >> 0xb & 1;
  if ((uVar4 & 0x1000) != 0) {
    uVar5 = uVar5 | 2;
  }
  if ((uVar4 & 0x2000) != 0) {
    uVar5 = uVar5 | 4;
  }
  uVar11 = (ulonglong)uVar5;
  if (uVar5 == 0) {
    local_58 = 0;
  }
  else {
    (*local_4c)();
    local_58 = (*extraout_w11_05)(uVar13,param_2,param_3,1,uVar11 & 0xffffffff);
  }
  if ((*puVar2 >> 0xb & 1) != 0) {
    uVar11 = 1;
    local_60 = FUN_10121590(iVar1,1,1);
    piVar8 = (int *)FUN_10121590(iVar1,4,uVar11 & 0xffffffff);
    uVar5 = local_58;
    piVar6 = local_5c;
    local_b0 = (int *)0x0;
    local_ac = (uint *)0x0;
    local_78 = (int *)0x40;
    if (local_5c != (int *)0x0) {
      local_78 = (int *)0x0;
    }
    local_b8 = (uint *)0x1e4;
    local_b4 = (uint *)local_58;
    local_c8 = 0x38;
    puStack_c4 = local_7c;
    local_c0 = (int *)0xf;
    local_bc = local_7c;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_70 = local_78;
    local_54 = piVar8;
    FUN_10122a88(&local_d0,0x28);
    local_bc = (uint *)(uVar5 | 0x80000000);
    local_b4 = *(uint **)(param_3 + 0xa8);
    local_b8 = (uint *)0x0;
    local_a8 = (uint *)0x0;
    local_c8 = 0;
    puStack_c4 = (uint *)local_60;
    local_b0 = (int *)0xe4;
    local_ac = (uint *)0x3f800000;
    local_c0 = (int *)0x1;
    local_d0 = iVar1;
    uStack_cc = param_2;
    FUN_10122a88(&local_d0,0x2c);
    local_64 = (uint *)(param_3 + 0xd0);
    local_a0 = 0;
    local_a8 = (uint *)((uint)local_74 | (uint)piVar6);
    local_c8 = 0x11;
    local_b4 = (uint *)((uint)local_80 | *local_64);
    local_b8 = (uint *)0xe4;
    local_a4 = 1;
    local_c0 = (int *)0x1;
    local_b0 = (int *)0xe4;
    local_ac = (uint *)local_78;
    local_d0 = iVar1;
    uStack_cc = param_2;
    puStack_c4 = (uint *)piVar8;
    local_bc = (uint *)piVar7;
    local_6c = local_a8;
    FUN_10122a88(&local_d0,0x34);
    local_a0 = 0;
    local_ac = (uint *)(local_78 + 4);
    local_b0 = (int *)0xe4;
    local_b4 = (uint *)((uint)local_80 | *local_64);
    local_b8 = (uint *)0xe4;
    local_a8 = local_6c;
    local_a4 = 1;
    local_c0 = (int *)0x2;
    local_c8 = 0x11;
    local_d0 = iVar1;
    uStack_cc = param_2;
    puStack_c4 = (uint *)piVar8;
    local_bc = (uint *)piVar7;
    FUN_10122a88(&local_d0,0x34);
    local_a0 = 0;
    local_c8 = 0x11;
    local_ac = (uint *)(local_78 + 8);
    local_b0 = (int *)0xe4;
    local_b4 = (uint *)((uint)local_80 | *local_64);
    local_b8 = (uint *)0xe4;
    local_a8 = local_6c;
    local_a4 = 1;
    local_c0 = (int *)0x4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    puStack_c4 = (uint *)piVar8;
    local_bc = (uint *)piVar7;
    FUN_10122a88(&local_d0,0x34);
    local_a0 = 0;
    local_c8 = 0x11;
    local_ac = (uint *)(local_78 + 0xc);
    local_b0 = (int *)0xe4;
    local_b4 = (uint *)((uint)local_80 | *local_64);
    local_b8 = (uint *)0xe4;
    local_a8 = local_6c;
    local_a4 = 1;
    local_c0 = (int *)0x8;
    local_d0 = iVar1;
    uStack_cc = param_2;
    puStack_c4 = (uint *)piVar8;
    local_bc = (uint *)piVar7;
    FUN_10122a88(&local_d0,0x34);
    local_bc = (uint *)piVar8;
    if ((*puVar2 >> 0xc & 1) == 0) {
      local_b0 = (int *)0x0;
      local_ac = local_7c;
      local_a8 = (uint *)0x1e4;
      local_a4 = 0;
      local_c0 = (int *)0xf;
      local_b8 = (uint *)0x1e4;
      local_b4 = (uint *)local_60;
      local_c8 = 0x32;
      puStack_c4 = local_7c;
      local_d0 = iVar1;
      uStack_cc = param_2;
      FUN_10122a88(&local_d0,0x30);
    }
    else {
      local_a8 = (uint *)0x1e4;
      local_a4 = 0;
      local_b0 = (int *)0x55;
      local_ac = local_7c;
      local_c0 = (int *)0xf;
      local_b8 = (uint *)0x1e4;
      local_b4 = (uint *)local_58;
      local_c8 = 0x32;
      puStack_c4 = local_7c;
      local_d0 = iVar1;
      uStack_cc = param_2;
      FUN_10122a88(&local_d0,0x30);
    }
  }
  piVar6 = local_5c;
  if ((*puVar2 >> 0xc & 1) != 0) {
    local_b0 = (int *)0x0;
    local_ac = (uint *)0x0;
    iVar12 = 0x40;
    if (local_5c != (int *)0x0) {
      iVar12 = 0;
    }
    local_c8 = 0;
    puStack_c4 = (uint *)local_60;
    local_78 = (int *)(iVar12 + (int)local_70);
    local_b8 = (uint *)0x55;
    local_b4 = (uint *)local_60;
    local_bc = (uint *)(local_58 | 0x80000000);
    local_c0 = (int *)0x1;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_70 = local_78;
    FUN_10122a88(&local_d0,0x28);
    piVar8 = local_54;
    local_6c = (uint *)(param_3 + 0xd0);
    local_a0 = 0;
    local_a8 = (uint *)((uint)local_74 | (uint)piVar6);
    local_a4 = 2;
    local_c8 = 0x11;
    puStack_c4 = (uint *)local_54;
    local_b4 = (uint *)((uint)local_80 | *local_6c);
    local_b8 = (uint *)0xe4;
    local_c0 = (int *)0x1;
    local_b0 = (int *)0xe4;
    local_ac = (uint *)local_78;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)piVar7;
    local_64 = local_a8;
    FUN_10122a88(&local_d0,0x34);
    local_a0 = 0;
    local_c0 = (int *)0x2;
    local_c8 = 0x11;
    puStack_c4 = (uint *)piVar8;
    local_ac = (uint *)(local_78 + 4);
    local_a8 = local_64;
    local_a4 = 2;
    local_b0 = (int *)0xe4;
    local_b4 = (uint *)((uint)local_80 | *local_6c);
    local_b8 = (uint *)0xe4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)piVar7;
    FUN_10122a88(&local_d0,0x34);
    local_a0 = 0;
    local_c8 = 0x11;
    puStack_c4 = (uint *)piVar8;
    local_ac = (uint *)(local_78 + 8);
    local_a8 = local_64;
    local_a4 = 2;
    local_b0 = (int *)0xe4;
    local_b4 = (uint *)((uint)local_80 | *local_6c);
    local_b8 = (uint *)0xe4;
    local_c0 = (int *)0x4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)piVar7;
    FUN_10122a88(&local_d0,0x34);
    local_a0 = 0;
    local_c8 = 0x11;
    puStack_c4 = (uint *)piVar8;
    local_ac = (uint *)(local_78 + 0xc);
    local_a8 = local_64;
    local_a4 = 2;
    local_b0 = (int *)0xe4;
    local_b4 = (uint *)((uint)local_80 | *local_6c);
    local_b8 = (uint *)0xe4;
    local_c0 = (int *)0x8;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)piVar7;
    FUN_10122a88(&local_d0,0x34);
    if ((*puVar2 >> 0xd & 1) == 0) {
      local_b0 = (int *)0x0;
      local_ac = local_7c;
      local_a8 = (uint *)0x1e4;
      local_a4 = 0;
      local_c0 = (int *)0xf;
      local_bc = (uint *)piVar8;
      local_b8 = (uint *)0x1e4;
      local_b4 = (uint *)local_60;
      local_c8 = 0x32;
      puStack_c4 = local_7c;
      local_d0 = iVar1;
      uStack_cc = param_2;
      FUN_10122a88(&local_d0,0x30);
    }
    else {
      local_a8 = (uint *)0x1e4;
      local_a4 = 0;
      local_b0 = (int *)0xaa;
      local_ac = local_7c;
      local_c0 = (int *)0xf;
      local_bc = (uint *)piVar8;
      local_b8 = (uint *)0x1e4;
      local_b4 = (uint *)local_58;
      local_c8 = 0x32;
      puStack_c4 = local_7c;
      local_d0 = iVar1;
      uStack_cc = param_2;
      FUN_10122a88(&local_d0,0x30);
    }
  }
  piVar6 = local_5c;
  if ((*puVar2 >> 0xd & 1) != 0) {
    local_b0 = (int *)0x0;
    local_ac = (uint *)0x0;
    iVar12 = 0x40;
    if (local_5c != (int *)0x0) {
      iVar12 = 0;
    }
    local_c8 = 0;
    puStack_c4 = (uint *)local_60;
    local_70 = (int *)(iVar12 + (int)local_70);
    local_b8 = (uint *)0xaa;
    local_b4 = (uint *)local_60;
    local_bc = (uint *)(local_58 | 0x80000000);
    local_c0 = (int *)0x1;
    local_d0 = iVar1;
    uStack_cc = param_2;
    FUN_10122a88(&local_d0,0x28);
    piVar8 = local_54;
    local_a0 = 0;
    local_a8 = (uint *)((uint)local_74 | (uint)piVar6);
    local_a4 = 3;
    local_c8 = 0x11;
    puStack_c4 = (uint *)local_54;
    local_b4 = (uint *)((uint)local_80 | *(uint *)(param_3 + 0xd0));
    local_b8 = (uint *)0xe4;
    local_b0 = (int *)0xe4;
    local_ac = (uint *)local_70;
    local_c0 = (int *)0x1;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)piVar7;
    local_74 = (uint *)(param_3 + 0xd0);
    local_6c = local_a8;
    FUN_10122a88(&local_d0,0x34);
    local_a0 = 0;
    local_c8 = 0x11;
    puStack_c4 = (uint *)piVar8;
    local_ac = (uint *)(local_70 + 4);
    local_a8 = local_6c;
    local_a4 = 3;
    local_b0 = (int *)0xe4;
    local_c0 = (int *)0x2;
    local_b4 = (uint *)((uint)local_80 | *local_74);
    local_b8 = (uint *)0xe4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)piVar7;
    FUN_10122a88(&local_d0,0x34);
    local_a0 = 0;
    local_c8 = 0x11;
    puStack_c4 = (uint *)piVar8;
    local_ac = (uint *)(local_70 + 8);
    local_a8 = local_6c;
    local_a4 = 3;
    local_b0 = (int *)0xe4;
    local_b4 = (uint *)((uint)local_80 | *local_74);
    local_b8 = (uint *)0xe4;
    local_c0 = (int *)0x4;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)piVar7;
    FUN_10122a88(&local_d0,0x34);
    local_ac = (uint *)(local_70 + 0xc);
    local_a0 = 0;
    local_b0 = (int *)0xe4;
    local_c8 = 0x11;
    puStack_c4 = (uint *)piVar8;
    local_b4 = (uint *)((uint)local_80 | *local_74);
    local_b8 = (uint *)0xe4;
    local_c0 = (int *)0x8;
    local_a8 = local_6c;
    local_a4 = 3;
    local_d0 = iVar1;
    uStack_cc = param_2;
    local_bc = (uint *)piVar7;
    FUN_10122a88(&local_d0,0x34);
    local_a8 = (uint *)0x1e4;
    local_a4 = 0;
    local_c0 = (int *)0xf;
    local_bc = (uint *)piVar8;
    local_b8 = (uint *)0x1e4;
    local_b4 = (uint *)local_60;
    local_c8 = 0x32;
    puStack_c4 = local_7c;
    local_b0 = (int *)0x0;
    local_ac = local_7c;
    local_d0 = iVar1;
    uStack_cc = param_2;
    FUN_10122a88(&local_d0,0x30);
  }
  piVar6 = local_48;
  uVar13 = local_50;
  if (local_48 == piVar7) {
    (*local_4c)();
    (*extraout_w11_06)(uVar13,param_3,piVar6);
  }
  else {
    FUN_10121648(iVar1,piVar7);
  }
  *(uint **)(param_3 + 0x14c) = local_7c;
  FUN_10121648(iVar1,local_54);
  if ((*(char *)(param_3 + 0x1aa) != '\0') || (*(char *)(param_3 + 0x1ac) != '\0')) {
    if ((*puVar2 >> 2 & 1) == 0) {
      local_74 = (uint *)0x0;
    }
    else {
      local_74 = (uint *)FUN_1009d298(local_50,param_2,param_3);
    }
    uVar13 = local_50;
    puVar3 = local_74;
    local_7c = (uint *)FUN_10098d10(local_50,param_2,param_3,local_74,local_68);
    if (local_7c != puVar3) {
      FUN_1009d3f8(uVar13,param_3,8);
    }
    local_68 = *(char *)(param_3 + 0x1ac);
    uVar13 = 3;
    if (local_68 != '\0') {
      uVar13 = 4;
    }
    local_80 = (uint *)FUN_10121590(iVar1,uVar13,1);
    piVar7 = (int *)(param_3 + 0xd0);
    local_70 = (int *)0x4000;
    if ((*puVar2 & 0xf800) == 0) {
      local_d0 = *(int *)(param_3 + 0xc0);
      FUN_10098f70(local_80,param_2,param_3,local_80,local_7c,0x130,0,0);
    }
    else {
      local_d0 = *piVar7;
      FUN_10098f70(local_80,param_2,param_3,local_80,local_7c,0x4000,local_5c,0);
    }
    local_78 = piVar7;
    if ((*puVar2 >> 0xb & 1) != 0) {
      piVar6 = (int *)FUN_10121590(iVar1,3,1);
      uVar5 = local_58;
      piVar7 = local_5c;
      puVar3 = local_80;
      local_b0 = (int *)0x0;
      local_ac = (uint *)0x0;
      local_70 = (int *)0x4040;
      if (local_5c != (int *)0x0) {
        local_70 = (int *)0x4000;
      }
      local_b8 = (uint *)0x1a4;
      local_b4 = (uint *)local_58;
      local_c0 = (int *)0x7;
      local_bc = local_80;
      local_c8 = 0x38;
      puStack_c4 = local_80;
      local_d0 = iVar1;
      uStack_cc = param_2;
      local_54 = piVar6;
      local_48 = local_70;
      FUN_10122a88(&local_d0,0x28);
      local_d0 = *local_78;
      FUN_10098f70(local_78,param_2,param_3,piVar6,local_7c,local_48,piVar7,1);
      local_bc = (uint *)piVar6;
      if ((*puVar2 >> 0xc & 1) == 0) {
        local_b0 = (int *)0x0;
        local_ac = puVar3;
        local_a8 = (uint *)0x1a4;
        local_a4 = 0;
        local_b8 = (uint *)0x1a4;
        local_b4 = (uint *)local_60;
        local_c0 = (int *)0x7;
        local_c8 = 0x32;
        puStack_c4 = puVar3;
        local_d0 = iVar1;
        uStack_cc = param_2;
        FUN_10122a88(&local_d0,0x30);
      }
      else {
        local_a8 = (uint *)0x1a4;
        local_a4 = 0;
        local_b8 = (uint *)0x1a4;
        local_b4 = (uint *)uVar5;
        local_c0 = (int *)0x7;
        local_c8 = 0x32;
        puStack_c4 = puVar3;
        local_b0 = (int *)0x55;
        local_ac = puVar3;
        local_d0 = iVar1;
        uStack_cc = param_2;
        FUN_10122a88(&local_d0,0x30);
      }
    }
    piVar7 = local_54;
    if ((*puVar2 >> 0xc & 1) != 0) {
      iVar12 = 0x40;
      if (local_5c != (int *)0x0) {
        iVar12 = 0;
      }
      local_70 = (int *)(iVar12 + (int)local_70);
      local_d0 = *local_78;
      FUN_10098f70(local_78,param_2,param_3,local_54,local_7c,local_70,local_5c,2);
      if ((*puVar2 >> 0xd & 1) == 0) {
        local_b0 = (int *)0x0;
        local_ac = local_80;
        local_a8 = (uint *)0x1a4;
        local_a4 = 0;
        local_b8 = (uint *)0x1a4;
        local_b4 = (uint *)local_60;
        local_c0 = (int *)0x7;
        local_bc = (uint *)piVar7;
        local_c8 = 0x32;
        puStack_c4 = local_80;
        local_d0 = iVar1;
        uStack_cc = param_2;
        FUN_10122a88(&local_d0,0x30);
      }
      else {
        local_a8 = (uint *)0x1a4;
        local_a4 = 0;
        local_b0 = (int *)0xaa;
        local_ac = local_80;
        local_b8 = (uint *)0x1a4;
        local_b4 = (uint *)local_58;
        local_c0 = (int *)0x7;
        local_bc = (uint *)piVar7;
        local_c8 = 0x32;
        puStack_c4 = local_80;
        local_d0 = iVar1;
        uStack_cc = param_2;
        FUN_10122a88(&local_d0,0x30);
      }
    }
    piVar7 = local_54;
    if ((*puVar2 >> 0xd & 1) != 0) {
      iVar12 = 0x40;
      if (local_5c != (int *)0x0) {
        iVar12 = 0;
      }
      local_d0 = *local_78;
      FUN_10098f70(local_78,param_2,param_3,local_54,local_7c,(undefined1 *)(iVar12 + (int)local_70)
                   ,local_5c,3);
      local_a8 = (uint *)0x1a4;
      local_a4 = 0;
      local_b8 = (uint *)0x1a4;
      local_b4 = (uint *)local_60;
      local_c0 = (int *)0x7;
      local_bc = (uint *)piVar7;
      local_c8 = 0x32;
      puStack_c4 = local_80;
      local_b0 = (int *)0x0;
      local_ac = local_80;
      local_d0 = iVar1;
      uStack_cc = param_2;
      FUN_10122a88(&local_d0,0x30);
    }
    if (local_7c == local_74) {
      FUN_1009d3f8(local_50,param_3,8);
    }
    else {
      FUN_10121648(iVar1,local_7c);
    }
    *(uint **)(param_3 + 0x150) = local_80;
    if (local_68 != '\0') {
      local_bc = *(uint **)(param_3 + 0xa8);
      local_b0 = (int *)0x0;
      local_b4 = (uint *)0x3f800000;
      local_b8 = (uint *)0xe4;
      local_c0 = (int *)0x8;
      local_c8 = 0x36;
      puStack_c4 = local_80;
      local_d0 = iVar1;
      uStack_cc = param_2;
      FUN_10122a88(&local_d0,0x24);
    }
    FUN_10121648(iVar1,local_54);
  }
  uVar13 = local_50;
  (*local_4c)();
  (*extraout_w11_07)(uVar13,param_3,local_58);
  FUN_10121648(iVar1,local_5c);
  uVar9 = FUN_10121648(iVar1,local_60);
  if (((*(uint *)(*local_44 + 0x44) >> 0x17 & 1) != 0) && (*(int *)(param_3 + 0x150) != 0)) {
    FUN_10099120(uVar9,param_2,param_3,*(int *)(param_3 + 0x150));
  }
  return;
}

