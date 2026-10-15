/*
 * FUN_1801856c8 at 1801856c8
 * undefined FUN_1801856c8(void)
 * Address ranges: 1801856c8-180186a1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801856c8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  undefined4 uVar18;
  undefined4 local_f0 [2];
  uint local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_88;
  int local_84;
  undefined4 local_80;
  uint local_7c;
  uint local_78;
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  uVar1 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x200000;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar5 = (*extraout_x11)();
  uVar6 = uVar5;
  if (uVar1 != 0) {
    uVar6 = FUN_180213760(param_3 + 0x20,4,1);
    if ((*(uint *)(param_3 + 0x1ac) >> 0x10 & 1) == 0) {
      local_b0 = 0;
      local_d8 = 0x5f8;
      local_e8 = *(uint *)(param_3 + 0xdc);
      local_b8 = CONCAT44(local_b8._4_4_,0xe4);
      local_c0 = CONCAT44(local_c0._4_4_,uVar5);
      local_c8 = CONCAT44(local_c8._4_4_,0xe4);
      local_f0[0] = 0xf;
      local_d0 = CONCAT44(local_d0._4_4_,uVar5) | 0x80000000;
      local_e0 = CONCAT44(local_e0._4_4_,0xe4);
      FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar6,local_f0,0x48);
    }
    else {
      (*(code *)puVar3)(0x180224000);
      uVar7 = (*extraout_x11_00)(param_1,param_2,param_3,0xf,0xf);
      local_c8 = 0;
      local_d0._0_4_ = 0xe4;
      local_d8 = CONCAT44(local_d8._4_4_,uVar7);
      local_e0._0_4_ = 0xe4;
      local_f0[0] = 0xf;
      local_e8 = uVar5 | 0x80000000;
      FUN_180214c88(param_3 + 0x20,param_2,0,uVar6,local_f0,0x30);
      local_b0 = 0;
      local_d8 = 0x5f8;
      local_e8 = *(uint *)(param_3 + 0xdc);
      local_b8 = CONCAT44(local_b8._4_4_,0xe4);
      local_c0 = CONCAT44(local_c0._4_4_,uVar5);
      local_c8 = CONCAT44(local_c8._4_4_,0xe4);
      local_f0[0] = 0xf;
      local_d0 = CONCAT44(local_d0._4_4_,uVar6);
      local_e0 = CONCAT44(local_e0._4_4_,0xe4);
      FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar6,local_f0,0x48);
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_01)(param_1,param_3,uVar7);
    }
    if (uVar5 != uVar6) {
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_02)(param_1,param_3,uVar5);
    }
  }
  uVar14 = *(uint *)(param_3 + 0x1ac);
  if ((uVar14 >> 0xf & 1) == 0) {
    local_7c = 0;
  }
  else {
    if ((uVar14 >> 0xb & 1) == 0) {
      iVar10 = 1;
      uVar7 = 0;
      iVar16 = 2;
      uVar18 = 1;
    }
    else {
      iVar10 = 2;
      uVar7 = 0x54;
      iVar16 = 3;
      uVar18 = 3;
    }
    if ((uVar14 >> 0xc & 1) != 0) {
      uVar7 = 0xa4;
      uVar18 = 7;
      iVar10 = iVar16;
    }
    if ((uVar14 >> 0xd & 1) != 0) {
      iVar10 = iVar10 + 1;
      uVar7 = 0xe4;
      uVar18 = 0xf;
    }
    local_7c = FUN_180213760(param_3 + 0x20,iVar10,1);
    (*(code *)puVar3)(0x180224000);
    uVar8 = (*extraout_x11_03)(param_1,param_2,param_3,2);
    local_a8 = 0;
    local_d0._0_4_ = 0x1e4;
    local_b8 = 0;
    local_b0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_f0[0] = uVar18;
    local_e8 = uVar8;
    local_d8._0_4_ = *(undefined4 *)(param_3 + 0xbc);
    local_e0._0_4_ = uVar7;
    FUN_180214c88(param_3 + 0x20,param_2,0x24,local_7c,local_f0,0x50);
    local_b0 = CONCAT44(local_b0._4_4_,0xff);
    local_b8 = CONCAT44(local_b8._4_4_,0xff);
    local_c0 = CONCAT44(local_c0._4_4_,0xff);
    local_c8._0_4_ = 0xff;
    local_d0._0_4_ = 0x1e4;
    local_d8._0_4_ = *(undefined4 *)(param_3 + 0xbc);
    local_a8 = 0;
    local_f0[0] = uVar18;
    local_e8 = local_7c;
    local_e0._0_4_ = uVar7;
    FUN_180214c88(param_3 + 0x20,param_2,0x25,local_7c,local_f0,0x50);
    local_c8 = CONCAT44(local_c8._4_4_,2);
    local_c0 = 0;
    local_d0 = CONCAT44(local_d0._4_4_,0xe4);
    local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(param_3 + 0xb8));
    local_e0 = CONCAT44(local_e0._4_4_,uVar7);
    local_f0[0] = uVar18;
    local_e8 = local_7c;
    FUN_180214c88(param_3 + 0x20,param_2,0x29,local_7c,local_f0,0x38);
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_04)(param_1,param_3,uVar8);
  }
  uVar7 = FUN_180213760(param_3 + 0x20,4,1);
  uVar14 = 0x40000000;
  if (local_7c == 0) {
    uVar14 = 0;
  }
  uVar15 = 0x10000000;
  if (local_7c == 0) {
    uVar15 = 0;
  }
  local_84 = 0;
  local_e8 = uVar6;
  if ((*(uint *)(param_3 + 0x1ac) & 0xf800) == 0) {
    local_c0 = 0;
    local_c8._0_4_ = 0xf0;
    local_d8._0_4_ = *(undefined4 *)(param_3 + 0xd0);
    local_d0._0_4_ = 0xe4;
    local_e0._0_4_ = 0xe4;
    local_f0[0] = 1;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar7,local_f0,0x38);
    local_c8._0_4_ = 0x100;
    local_d8._0_4_ = *(undefined4 *)(param_3 + 0xd0);
    local_c0 = 0;
    local_d0._0_4_ = 0xe4;
    local_e0._0_4_ = 0xe4;
    local_f0[0] = 2;
    local_e8 = uVar6;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar7,local_f0,0x38);
    local_c8._0_4_ = 0x110;
    local_d8._0_4_ = *(undefined4 *)(param_3 + 0xd0);
    local_c0 = 0;
    local_d0._0_4_ = 0xe4;
    local_e0._0_4_ = 0xe4;
    local_f0[0] = 4;
    local_e8 = uVar6;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar7,local_f0,0x38);
    local_c8 = CONCAT44(local_c8._4_4_,0x120);
    local_c0 = 0;
    local_d0 = CONCAT44(local_d0._4_4_,0xe4);
    local_e0 = CONCAT44(local_e0._4_4_,0xe4);
    local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(param_3 + 0xd0));
    local_f0[0] = 8;
    local_e8 = uVar6;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar7,local_f0,0x38);
  }
  else {
    uVar2 = uVar15 | local_7c;
    local_b8 = 0;
    local_b0 = 0;
    local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
    local_d8._0_4_ = *(uint *)(param_3 + 0xe0) | uVar14;
    local_d0._0_4_ = 0xe4;
    local_e0._0_4_ = 0xe4;
    local_f0[0] = 1;
    local_c0._0_4_ = uVar2;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar7,local_f0,0x48);
    local_b8 = 0;
    local_b0 = 0;
    local_c8._0_4_ = 0x10;
    local_d8._0_4_ = *(uint *)(param_3 + 0xe0) | uVar14;
    local_d0._0_4_ = 0xe4;
    local_f0[0] = 2;
    local_e0._0_4_ = 0xe4;
    local_e8 = uVar6;
    local_c0._0_4_ = uVar2;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar7,local_f0,0x48);
    local_b8 = 0;
    local_b0 = 0;
    local_c8._0_4_ = 0x20;
    local_d8._0_4_ = *(uint *)(param_3 + 0xe0) | uVar14;
    local_d0._0_4_ = 0xe4;
    local_f0[0] = 4;
    local_e0._0_4_ = 0xe4;
    local_e8 = uVar6;
    local_c0._0_4_ = uVar2;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar7,local_f0,0x48);
    local_b8 = 0;
    local_b0 = 0;
    local_c0 = CONCAT44(local_c0._4_4_,uVar2);
    local_c8 = CONCAT44(local_c8._4_4_,0x30);
    local_d0 = CONCAT44(local_d0._4_4_,0xe4);
    local_d8 = CONCAT44(local_d8._4_4_,*(uint *)(param_3 + 0xe0) | uVar14);
    local_f0[0] = 8;
    local_e0 = CONCAT44(local_e0._4_4_,0xe4);
    local_e8 = uVar6;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar7,local_f0,0x48);
  }
  uVar2 = *(uint *)(param_3 + 0x1ac);
  local_80 = 0;
  uVar9 = 0;
  cVar4 = (uVar2 & 0x800) != 0;
  cVar13 = '\x02';
  if ((bool)cVar4) {
    cVar13 = '\x03';
  }
  if ((uVar2 & 0x1000) != 0) {
    cVar4 = cVar13;
  }
  if (cVar4 == '\0' && (uVar2 & 0x2000) == 0) {
    local_78 = 0;
  }
  else {
    (*(code *)puVar3)(0x180224000);
    local_78 = (*extraout_x11_05)(param_1,param_2,param_3,1);
  }
  if ((*(uint *)(param_3 + 0x1ac) >> 0xb & 1) != 0) {
    local_80 = FUN_180213760(param_3 + 0x20,1,1);
    uVar9 = FUN_180213760(param_3 + 0x20,4,1);
    local_d0 = 0;
    local_c8 = 0;
    local_84 = 0x40;
    if (local_7c != 0) {
      local_84 = 0;
    }
    local_d8._0_4_ = local_78;
    local_e0 = CONCAT44(local_e0._4_4_,0x1e4);
    local_f0[0] = 0xf;
    local_e8 = uVar7;
    FUN_180214c88(param_3 + 0x20,param_2,0x38,uVar7,local_f0,0x30);
    local_d8._0_4_ = *(undefined4 *)(param_3 + 0xb8);
    local_e8 = local_78 | 0x80000000;
    local_c0 = 0;
    local_c8._0_4_ = 0x3f800000;
    local_d0._0_4_ = 0xe4;
    local_e0 = 0;
    local_f0[0] = 1;
    FUN_180214c88(param_3 + 0x20,param_2,0,local_80,local_f0,0x38);
    local_b0 = 0;
    local_b8._0_4_ = 1;
    local_d0._0_4_ = 0xe4;
    uVar2 = uVar15 | local_7c;
    local_e0._0_4_ = 0xe4;
    local_d8._0_4_ = *(uint *)(param_3 + 0xe0) | uVar14;
    local_f0[0] = 1;
    local_e8 = uVar6;
    local_c8._0_4_ = local_84;
    local_c0._0_4_ = uVar2;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar9,local_f0,0x48);
    local_b0 = 0;
    local_c8._0_4_ = 0x50;
    if (local_7c != 0) {
      local_c8._0_4_ = 0x10;
    }
    local_d8._0_4_ = *(uint *)(param_3 + 0xe0) | uVar14;
    local_b8._0_4_ = 1;
    local_d0._0_4_ = 0xe4;
    local_e0._0_4_ = 0xe4;
    local_f0[0] = 2;
    local_e8 = uVar6;
    local_c0._0_4_ = uVar2;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar9,local_f0,0x48);
    local_b0 = 0;
    local_c8._0_4_ = 0x60;
    if (local_7c != 0) {
      local_c8._0_4_ = 0x20;
    }
    local_d8._0_4_ = *(uint *)(param_3 + 0xe0) | uVar14;
    local_b8._0_4_ = 1;
    local_d0._0_4_ = 0xe4;
    local_e0._0_4_ = 0xe4;
    local_f0[0] = 4;
    local_e8 = uVar6;
    local_c0._0_4_ = uVar2;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar9,local_f0,0x48);
    local_b0 = 0;
    local_c8._0_4_ = 0x70;
    if (local_7c != 0) {
      local_c8._0_4_ = 0x30;
    }
    local_d8._0_4_ = *(uint *)(param_3 + 0xe0) | uVar14;
    local_b8 = CONCAT44(local_b8._4_4_,1);
    local_d0._0_4_ = 0xe4;
    local_e0._0_4_ = 0xe4;
    local_f0[0] = 8;
    local_e8 = uVar6;
    local_c0._0_4_ = uVar2;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar9,local_f0,0x48);
    local_e8 = uVar9;
    if ((*(uint *)(param_3 + 0x1ac) >> 0xc & 1) == 0) {
      local_c8 = CONCAT44(local_c8._4_4_,uVar7);
      local_c0 = CONCAT44(local_c0._4_4_,0x1e4);
      local_e0 = CONCAT44(local_e0._4_4_,0x1e4);
      local_b8 = 0;
      local_d8 = CONCAT44(local_d8._4_4_,local_80);
      local_d0 = 0;
      local_f0[0] = 0xf;
      FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar7,local_f0,0x40);
    }
    else {
      local_c0 = CONCAT44(local_c0._4_4_,0x1e4);
      local_e0 = CONCAT44(local_e0._4_4_,0x1e4);
      local_c8 = CONCAT44(local_c8._4_4_,uVar7);
      local_d8 = CONCAT44(local_d8._4_4_,local_78);
      local_f0[0] = 0xf;
      local_b8 = 0;
      local_d0 = CONCAT44(local_d0._4_4_,0x55);
      FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar7,local_f0,0x40);
    }
  }
  if ((*(uint *)(param_3 + 0x1ac) >> 0xc & 1) != 0) {
    local_d0 = 0;
    local_c8 = 0;
    local_f0[0] = 1;
    iVar10 = 0x40;
    if (local_7c != 0) {
      iVar10 = 0;
    }
    iVar10 = iVar10 + local_84;
    local_d8._0_4_ = local_80;
    local_e8 = local_78 | 0x80000000;
    local_e0._0_4_ = 0x55;
    FUN_180214c88(param_3 + 0x20,param_2,0,local_80,local_f0,0x30);
    local_b0 = 0;
    local_d0._0_4_ = 0xe4;
    local_e0._0_4_ = 0xe4;
    uVar2 = uVar15 | local_7c;
    local_d8._0_4_ = *(uint *)(param_3 + 0xe0) | uVar14;
    local_b8._0_4_ = 2;
    local_f0[0] = 1;
    local_e8 = uVar6;
    local_c0._0_4_ = uVar2;
    local_c8._0_4_ = iVar10;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar9,local_f0,0x48);
    local_b0 = 0;
    local_c8._0_4_ = 0x50;
    if (local_7c != 0) {
      local_c8._0_4_ = 0x10;
    }
    local_d0._0_4_ = 0xe4;
    local_e0._0_4_ = 0xe4;
    local_c8._0_4_ = (int)local_c8 + local_84;
    local_d8._0_4_ = *(uint *)(param_3 + 0xe0) | uVar14;
    local_b8._0_4_ = 2;
    local_f0[0] = 2;
    local_e8 = uVar6;
    local_c0._0_4_ = uVar2;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar9,local_f0,0x48);
    local_c8._0_4_ = 0x60;
    if (local_7c != 0) {
      local_c8._0_4_ = 0x20;
    }
    local_c8._0_4_ = (int)local_c8 + local_84;
    local_b0 = 0;
    local_d0._0_4_ = 0xe4;
    local_d8._0_4_ = *(uint *)(param_3 + 0xe0) | uVar14;
    local_e0._0_4_ = 0xe4;
    local_b8._0_4_ = 2;
    local_f0[0] = 4;
    local_e8 = uVar6;
    local_c0._0_4_ = uVar2;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar9,local_f0,0x48);
    local_b0 = 0;
    local_d0._0_4_ = 0xe4;
    local_c8._0_4_ = 0x70;
    if (local_7c != 0) {
      local_c8._0_4_ = 0x30;
    }
    local_e0._0_4_ = 0xe4;
    local_c8._0_4_ = (int)local_c8 + local_84;
    local_d8._0_4_ = *(uint *)(param_3 + 0xe0) | uVar14;
    local_b8 = CONCAT44(local_b8._4_4_,2);
    local_f0[0] = 8;
    local_e8 = uVar6;
    local_c0._0_4_ = uVar2;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar9,local_f0,0x48);
    local_84 = iVar10;
    if ((*(uint *)(param_3 + 0x1ac) >> 0xd & 1) == 0) {
      local_c8 = CONCAT44(local_c8._4_4_,uVar7);
      local_c0 = CONCAT44(local_c0._4_4_,0x1e4);
      local_e0 = CONCAT44(local_e0._4_4_,0x1e4);
      local_b8 = 0;
      local_d8 = CONCAT44(local_d8._4_4_,local_80);
      local_d0 = 0;
      local_f0[0] = 0xf;
      local_e8 = uVar9;
      FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar7,local_f0,0x40);
    }
    else {
      local_c0 = CONCAT44(local_c0._4_4_,0x1e4);
      local_e0 = CONCAT44(local_e0._4_4_,0x1e4);
      local_c8 = CONCAT44(local_c8._4_4_,uVar7);
      local_d8 = CONCAT44(local_d8._4_4_,local_78);
      local_f0[0] = 0xf;
      local_b8 = 0;
      local_d0 = CONCAT44(local_d0._4_4_,0xaa);
      local_e8 = uVar9;
      FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar7,local_f0,0x40);
    }
  }
  if ((*(uint *)(param_3 + 0x1ac) >> 0xd & 1) != 0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0._0_4_ = 0xaa;
    local_f0[0] = 1;
    local_e8 = local_78 | 0x80000000;
    local_d8._0_4_ = local_80;
    FUN_180214c88(param_3 + 0x20,param_2,0,local_80,local_f0,0x30);
    local_b0 = 0;
    local_b8._0_4_ = 3;
    local_d0._0_4_ = 0xe4;
    local_e0._0_4_ = 0xe4;
    uVar15 = uVar15 | local_7c;
    iVar10 = 0x40;
    if (local_7c != 0) {
      iVar10 = 0;
    }
    local_f0[0] = 1;
    local_d8._0_4_ = *(uint *)(param_3 + 0xe0) | uVar14;
    local_e8 = uVar6;
    local_c0._0_4_ = uVar15;
    local_c8._0_4_ = iVar10 + local_84;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar9,local_f0,0x48);
    local_b0 = 0;
    local_d0._0_4_ = 0xe4;
    local_c8._0_4_ = 0x50;
    if (local_7c != 0) {
      local_c8._0_4_ = 0x10;
    }
    local_e0._0_4_ = 0xe4;
    local_c8._0_4_ = (int)local_c8 + local_84;
    local_b8._0_4_ = 3;
    local_d8._0_4_ = *(uint *)(param_3 + 0xe0) | uVar14;
    local_f0[0] = 2;
    local_e8 = uVar6;
    local_c0._0_4_ = uVar15;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar9,local_f0,0x48);
    local_c8._0_4_ = 0x60;
    if (local_7c != 0) {
      local_c8._0_4_ = 0x20;
    }
    local_c8._0_4_ = (int)local_c8 + local_84;
    local_d8._0_4_ = *(uint *)(param_3 + 0xe0) | uVar14;
    local_b0 = 0;
    local_f0[0] = 4;
    local_b8._0_4_ = 3;
    local_d0._0_4_ = 0xe4;
    local_e0._0_4_ = 0xe4;
    local_e8 = uVar6;
    local_c0._0_4_ = uVar15;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar9,local_f0,0x48);
    local_b0 = 0;
    local_c8._0_4_ = 0x70;
    if (local_7c != 0) {
      local_c8._0_4_ = 0x30;
    }
    local_d0 = CONCAT44(local_d0._4_4_,0xe4);
    local_e0._0_4_ = 0xe4;
    local_c8._0_4_ = (int)local_c8 + local_84;
    local_b8 = CONCAT44(local_b8._4_4_,3);
    local_d8._0_4_ = *(uint *)(param_3 + 0xe0) | uVar14;
    local_f0[0] = 8;
    local_e8 = uVar6;
    local_c0._0_4_ = uVar15;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar9,local_f0,0x48);
    local_c0 = CONCAT44(local_c0._4_4_,0x1e4);
    local_e0 = CONCAT44(local_e0._4_4_,0x1e4);
    local_b8 = 0;
    local_d8 = CONCAT44(local_d8._4_4_,local_80);
    local_c8 = CONCAT44(local_c8._4_4_,uVar7);
    local_d0 = 0;
    local_f0[0] = 0xf;
    local_e8 = uVar9;
    FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar7,local_f0,0x40);
  }
  if (uVar5 == uVar6) {
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_06)(param_1,param_3,uVar5);
  }
  else {
    FUN_180213800(param_3 + 0x20,uVar6);
  }
  *(undefined4 *)(param_3 + 0x15c) = uVar7;
  FUN_180213800(param_3 + 0x20,uVar9);
  if ((*(char *)(param_3 + 0x1c2) != '\0') || (*(char *)(param_3 + 0x1c4) != '\0')) {
    if ((*(uint *)(param_3 + 0x1ac) >> 2 & 1) == 0) {
      local_88 = 0;
    }
    else {
      local_88 = *(int *)(param_3 + 0x1a0);
      if (local_88 == 0) {
        (*(code *)puVar3)(0x180224000);
        local_88 = (*extraout_x11_07)(param_1,param_2,param_3,3,0xf);
        *(int *)(param_3 + 0x1a0) = local_88;
      }
    }
    iVar10 = FUN_180185050(param_1,param_2,param_3,local_88,uVar1 != 0);
    if (iVar10 != local_88) {
      FUN_18018a720(param_1,param_3,8);
    }
    cVar13 = *(char *)(param_3 + 0x1c4);
    uVar7 = 3;
    if (cVar13 != '\0') {
      uVar7 = 4;
    }
    uVar11 = FUN_180213760(param_3 + 0x20,uVar7,1);
    iVar16 = 0x4000;
    uVar7 = (undefined4)uVar11;
    if ((*(uint *)(param_3 + 0x1ac) & 0xf800) == 0) {
      local_f0[0] = *(undefined4 *)(param_3 + 0xd0);
      uVar12 = FUN_1801852c0(uVar11,param_2,param_3,uVar11 & 0xffffffff,iVar10,0x130,0,0);
    }
    else {
      local_f0[0] = *(undefined4 *)(param_3 + 0xe0);
      uVar12 = FUN_1801852c0(uVar11,param_2,param_3,uVar11 & 0xffffffff,iVar10,0x4000,local_7c,0);
    }
    if ((*(uint *)(param_3 + 0x1ac) >> 0xb & 1) != 0) {
      uVar9 = FUN_180213760(param_3 + 0x20,3,1);
      local_d0 = 0;
      local_c8 = 0;
      iVar16 = 0x4040;
      if (local_7c != 0) {
        iVar16 = 0x4000;
      }
      local_d8._0_4_ = local_78;
      local_e0._0_4_ = 0x1a4;
      local_f0[0] = 7;
      local_e8 = uVar7;
      uVar12 = FUN_180214c88(param_3 + 0x20,param_2,0x38,uVar11 & 0xffffffff,local_f0,0x30);
      local_f0[0] = *(undefined4 *)(param_3 + 0xe0);
      FUN_1801852c0(uVar12,param_2,param_3,uVar9,iVar10,iVar16,local_7c,1);
      local_e8 = uVar9;
      if ((*(uint *)(param_3 + 0x1ac) >> 0xc & 1) == 0) {
        local_b8 = 0;
        local_c0 = CONCAT44(local_c0._4_4_,0x1a4);
        local_e0 = CONCAT44(local_e0._4_4_,0x1a4);
        local_c8 = CONCAT44(local_c8._4_4_,uVar7);
        local_d8 = CONCAT44(local_d8._4_4_,local_80);
        local_d0 = 0;
        local_f0[0] = 7;
        uVar12 = FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar11 & 0xffffffff,local_f0,0x40);
      }
      else {
        local_b8 = 0;
        local_c0 = CONCAT44(local_c0._4_4_,0x1a4);
        local_e0 = CONCAT44(local_e0._4_4_,0x1a4);
        local_f0[0] = 7;
        local_c8 = CONCAT44(local_c8._4_4_,uVar7);
        local_d0 = CONCAT44(local_d0._4_4_,0x55);
        local_d8 = CONCAT44(local_d8._4_4_,local_78);
        uVar12 = FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar11 & 0xffffffff,local_f0,0x40);
      }
    }
    if ((*(uint *)(param_3 + 0x1ac) >> 0xc & 1) != 0) {
      iVar17 = 0x40;
      if (local_7c != 0) {
        iVar17 = 0;
      }
      iVar16 = iVar17 + iVar16;
      local_f0[0] = *(undefined4 *)(param_3 + 0xe0);
      FUN_1801852c0(uVar12,param_2,param_3,uVar9,iVar10,iVar16,local_7c,2);
      if ((*(uint *)(param_3 + 0x1ac) >> 0xd & 1) == 0) {
        local_b8 = 0;
        local_c0 = CONCAT44(local_c0._4_4_,0x1a4);
        local_e0 = CONCAT44(local_e0._4_4_,0x1a4);
        local_c8 = CONCAT44(local_c8._4_4_,uVar7);
        local_d8 = CONCAT44(local_d8._4_4_,local_80);
        local_d0 = 0;
        local_f0[0] = 7;
        local_e8 = uVar9;
        uVar12 = FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar11 & 0xffffffff,local_f0,0x40);
      }
      else {
        local_c0 = CONCAT44(local_c0._4_4_,0x1a4);
        local_e0 = CONCAT44(local_e0._4_4_,0x1a4);
        local_f0[0] = 7;
        local_d8 = CONCAT44(local_d8._4_4_,local_78);
        local_b8 = 0;
        local_c8 = CONCAT44(local_c8._4_4_,uVar7);
        local_d0 = CONCAT44(local_d0._4_4_,0xaa);
        local_e8 = uVar9;
        uVar12 = FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar11 & 0xffffffff,local_f0,0x40);
      }
    }
    if ((*(uint *)(param_3 + 0x1ac) >> 0xd & 1) != 0) {
      iVar17 = 0x40;
      if (local_7c != 0) {
        iVar17 = 0;
      }
      local_f0[0] = *(undefined4 *)(param_3 + 0xe0);
      FUN_1801852c0(uVar12,param_2,param_3,uVar9,iVar10,iVar17 + iVar16,local_7c,3);
      local_b8 = 0;
      local_c0 = CONCAT44(local_c0._4_4_,0x1a4);
      local_e0 = CONCAT44(local_e0._4_4_,0x1a4);
      local_d8 = CONCAT44(local_d8._4_4_,local_80);
      local_c8 = CONCAT44(local_c8._4_4_,uVar7);
      local_d0 = 0;
      local_f0[0] = 7;
      local_e8 = uVar9;
      FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar11 & 0xffffffff,local_f0,0x40);
    }
    if (iVar10 == local_88) {
      FUN_18018a720(param_1,param_3,8);
    }
    else {
      FUN_180213800(param_3 + 0x20,iVar10);
    }
    *(undefined4 *)(param_3 + 0x160) = uVar7;
    if (cVar13 != '\0') {
      local_e8 = *(uint *)(param_3 + 0xb8);
      local_d0 = 0;
      local_d8 = CONCAT44(local_d8._4_4_,0x3f800000);
      local_e0 = CONCAT44(local_e0._4_4_,0xe4);
      local_f0[0] = 8;
      FUN_180214c88(param_3 + 0x20,param_2,0x36,uVar7,local_f0,0x28);
    }
    FUN_180213800(param_3 + 0x20,uVar9);
  }
  (*(code *)puVar3)(0x180224000);
  (*extraout_x11_08)(param_1,param_3,local_78);
  FUN_180213800(param_3 + 0x20,local_7c);
  uVar12 = FUN_180213800(param_3 + 0x20,local_80);
  if (((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x17 & 1) != 0) &&
     (*(int *)(param_3 + 0x160) != 0)) {
    FUN_1801854b8(uVar12,param_2,param_3);
  }
  return;
}

