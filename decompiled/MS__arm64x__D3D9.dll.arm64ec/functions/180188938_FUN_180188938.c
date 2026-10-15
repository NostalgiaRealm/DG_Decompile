/*
 * FUN_180188938 at 180188938
 * undefined FUN_180188938(void)
 * Address ranges: 180188938-18018a263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180188938(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  uint uVar20;
  code *extraout_x11;
  undefined1 auVar21 [16];
  uint local_130 [2];
  uint local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  uint local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  uint local_a0;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  
  if (((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x14 & 1) == 0) ||
     (*(char *)(param_3 + 0x1ca) == '\0')) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  local_8c = FUN_180213760(param_3 + 0x20,3,1);
  local_a0 = 0;
  FUN_1801885c0(param_1,param_2,param_3);
  local_120._0_4_ = *(undefined4 *)(param_3 + 0x184);
  local_110._0_4_ = *(undefined4 *)(param_3 + 0x188);
  local_108._0_4_ = 0x12345678;
  local_118._0_4_ = 0xff;
  local_128._0_1_ = 8;
  local_130[0] = 2;
  FUN_180184ea8(param_1,param_3,param_2,0x36,local_130,0x30);
  local_94 = 0;
  if (*(char *)(param_3 + 0x1ca) == '\0') {
    if (*(char *)(param_3 + 0x74) == '\0') {
      local_d8 = CONCAT44(local_d8._4_4_,0x12345678);
      local_e8 = 0xa4;
      local_100 = CONCAT44(local_100._4_4_,0xa4);
      local_118._0_4_ = 0xa4;
      local_f0 = CONCAT44(local_f0._4_4_,*(undefined4 *)(param_3 + 0x17c));
      local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(param_3 + 0x180));
      local_128 = CONCAT31(local_128._1_3_,7);
      local_108 = CONCAT44(local_108._4_4_,*(undefined4 *)(param_3 + 0x174));
      local_110 = 0xa0;
      local_120._0_4_ = *(uint *)(param_3 + 0xd0);
      local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(param_3 + 0x178));
      local_130[0] = 2;
      FUN_180184ea8(param_1,param_3,param_2,0x2032,local_130,0x60);
    }
    else {
      uVar17 = FUN_180213760(param_3 + 0x20,3,1);
      local_e8 = *(uint *)(param_3 + 0x180);
      local_e0 = 0;
      local_f0 = CONCAT44(local_f0._4_4_,0x1a4);
      local_108 = CONCAT44(local_108._4_4_,0x1a4);
      local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(param_3 + 0x17c));
      local_110._0_4_ = *(undefined4 *)(param_3 + 0x174);
      local_120._0_4_ = 0x1a4;
      local_130[0] = 7;
      local_118 = 0xa0;
      local_128 = *(undefined4 *)(param_3 + 0xd0);
      local_100 = CONCAT44(local_100._4_4_,*(undefined4 *)(param_3 + 0x178));
      FUN_180214c88(param_3 + 0x20,param_2,0x2032,uVar17,local_130,0x58);
      local_130[0] = 2;
      local_118._0_4_ = 0xa4;
      local_110 = CONCAT44(local_110._4_4_,0x12345678);
      local_128 = CONCAT31(local_128._1_3_,7);
      local_120._0_4_ = uVar17;
      FUN_180184ea8(param_1,param_3,param_2,0x36,local_130,0x28);
      FUN_180213800(param_3 + 0x20,uVar17);
    }
  }
  else {
    local_e8 = *(uint *)(param_3 + 0x180);
    local_e0 = 0;
    local_f0 = CONCAT44(local_f0._4_4_,0xa4);
    local_108 = CONCAT44(local_108._4_4_,0xa4);
    local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(param_3 + 0x17c));
    local_120._0_4_ = 0xa4;
    local_130[0] = 7;
    local_110 = CONCAT44(local_110._4_4_,*(undefined4 *)(param_3 + 0x174));
    local_118._0_4_ = 0xa0;
    local_118._4_4_ = 0;
    local_128 = *(uint *)(param_3 + 0xd0);
    local_100 = CONCAT44(local_100._4_4_,*(undefined4 *)(param_3 + 0x178));
    FUN_180214c88(param_3 + 0x20,param_2,0x32,local_8c,local_130,0x58);
    uVar20 = 7;
    uVar17 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x28);
    uVar16 = uVar17 & 0xe00000;
    while (uVar16 == 0) {
      iVar11 = uVar20 * 3;
      uVar20 = uVar20 - 1;
      uVar16 = uVar17 >> (ulonglong)(iVar11 - 3U & 0x1f) & 7;
    }
    if ((*(uint *)(param_3 + 0x1ac) >> 2 & 1) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(param_3 + 0x1a0);
      if (iVar11 == 0) {
        (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        iVar11 = (*extraout_x11)(param_1,param_2,param_3,3,0xf);
        *(int *)(param_3 + 0x1a0) = iVar11;
      }
    }
    local_70 = 0;
    do {
      if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x28) >> (ulonglong)(local_70 * 3 & 0x1f) & 7)
          != 0) {
        uVar12 = FUN_180213760(param_3 + 0x20,1,1);
        local_110 = 0;
        local_118._0_4_ = (local_70 + 0x300) * 4;
        local_130[0] = 1;
        local_120._0_4_ =
             (uint)(byte)(&DAT_18022c414)[(ulonglong)(local_70 + 0x300 & 0x3fffffff) & 3];
        local_128 = *(undefined4 *)(param_3 + 0xdc);
        FUN_180214c88(param_3 + 0x20,param_2,0x36,uVar12,local_130,0x28);
        local_74 = uVar12 | 0x10000000;
        uVar17 = local_70 & 3;
        uVar16 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x24) >>
                 (ulonglong)(local_70 * 3 & 0x1f) & 7;
        if (uVar16 == 3) {
          uVar13 = FUN_180213760(param_3 + 0x20,3,1);
          local_100 = 0;
          local_110._0_4_ = uVar12 | 0x10000000;
          local_130[0] = 7;
          local_128 = *(uint *)(param_3 + 0xd4) | 0x40000000;
          local_108 = CONCAT44(local_108._4_4_,local_70) & 0xffffffff00000003;
          local_118._0_4_ = 0x6c0;
          local_118._4_4_ = 0;
          local_120._0_4_ = 0x1a4;
          uVar18 = FUN_180214c88(param_3 + 0x20,param_2,0x36,uVar13,local_130,0x38);
LAB_180188c20:
          local_90 = 0;
          local_84 = 0;
        }
        else {
          uVar13 = FUN_180213760(param_3 + 0x20,3,1);
          local_f0 = 0;
          local_100 = CONCAT44(local_100._4_4_,uVar12) | 0x10000000;
          local_130[0] = 7;
          local_118._0_4_ = *(uint *)(param_3 + 0xd4) | 0xc0000000;
          local_f8 = CONCAT44(local_f8._4_4_,local_70) & 0xffffffff00000003;
          local_108 = 0x6b0;
          local_110._0_4_ = 0x1a4;
          local_120._0_4_ = 0x1a4;
          local_128 = *(uint *)(param_3 + 0x15c);
          uVar18 = FUN_180214c88(param_3 + 0x20,param_2,0,uVar13,local_130,0x48);
          if (uVar16 == 4) goto LAB_180188c20;
          local_84 = FUN_180213760(param_3 + 0x20,1,1);
          local_f8 = 0;
          local_100._0_4_ = 0xffffffff;
          local_108._0_4_ = 0xa4;
          local_118 = CONCAT44(local_118._4_4_,0xffffffff);
          local_120 = CONCAT44(local_120._4_4_,0xa4);
          local_130[0] = 1;
          local_128 = uVar13;
          local_110._0_4_ = uVar13;
          FUN_180214c88(param_3 + 0x20,param_2,0x10,local_84,local_130,0x40);
          local_120 = 0;
          local_118 = 0;
          local_130[0] = 1;
          local_128 = local_84;
          FUN_180214c88(param_3 + 0x20,param_2,0x4b,local_84,local_130,0x20);
          uVar14 = FUN_180213760(param_3 + 0x20,3,0);
          local_e8 = *(uint *)(param_3 + 0xbc);
          local_e0 = CONCAT44(local_e0._4_4_,0x1e4);
          local_110 = CONCAT44(local_110._4_4_,0x1e4);
          local_130[0] = 3;
          local_b8 = 0;
          local_c0 = 0;
          local_c8 = 0;
          local_d0 = 0;
          local_d8 = CONCAT44(local_d8._4_4_,0x3f800000);
          local_f0 = local_f0 & 0xffffffff00000000;
          local_f8 = local_f8 & 0xffffffff00000000;
          local_100._0_4_ = 0x3f800000;
          local_108 = (ulonglong)local_108._4_4_ << 0x20;
          local_120 = 0;
          local_128 = local_84;
          local_118._0_4_ = local_e8;
          FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar14,local_130,0x80);
          local_110 = 0;
          local_108 = 0;
          local_120 = 0;
          local_130[0] = 4;
          local_128 = local_84;
          local_118._0_4_ = local_84;
          FUN_180214c88(param_3 + 0x20,param_2,0x38,uVar14,local_130,0x30);
          local_90 = FUN_180213760(param_3 + 0x20,1,1);
          local_f0 = 0;
          local_130[0] = 1;
          local_118._0_4_ = *(uint *)(param_3 + 0xd4) | 0x40000000;
          local_108 = 0x6d4;
          local_110._0_4_ = 0xa4;
          local_120._0_4_ = 0xa4;
          local_f8 = CONCAT44(local_f8._4_4_,local_70) & 0xffffffff00000003;
          local_100 = CONCAT44(local_100._4_4_,uVar12) | 0x10000000;
          local_128 = uVar14;
          FUN_180214c88(param_3 + 0x20,param_2,0x10,local_90,local_130,0x48);
          if (*(int *)(param_3 + 0x20) == 0x10040) {
            local_108 = 0;
            local_100 = 0;
            local_120 = CONCAT44(local_120._4_4_,0xe4);
            local_128 = *(undefined4 *)(param_3 + 0xb8);
            local_118 = CONCAT44(local_118._4_4_,0x3f800000);
            local_130[0] = 1;
            local_110._0_4_ = local_90;
            FUN_180214c88(param_3 + 0x20,param_2,0xe,local_90,local_130,0x38);
          }
          else {
            local_120 = 0;
            local_118 = 0;
            local_130[0] = 1;
            local_128 = local_90;
            FUN_180214c88(param_3 + 0x20,param_2,0x81,local_90,local_130,0x20);
          }
          local_128 = *(undefined4 *)(param_3 + 0xb8);
          local_108 = 0;
          local_100 = 0;
          local_120._0_4_ = 0xe4;
          local_118._0_4_ = 0x42000000;
          local_130[0] = 1;
          local_110._0_4_ = local_90;
          FUN_180214c88(param_3 + 0x20,param_2,0x33,local_90,local_130,0x38);
          local_128 = *(uint *)(param_3 + 0xb8);
          local_108 = 0;
          local_100 = 0;
          local_118._0_4_ = 0;
          local_120._0_4_ = 0xe4;
          local_130[0] = 1;
          local_110._0_4_ = local_90;
          uVar18 = FUN_180214c88(param_3 + 0x20,param_2,0x34,local_90,local_130,0x38);
          if (local_84 != 0) {
            if ((local_a0 == 0) &&
               ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x14 & 1) != 0)) {
              local_a0 = FUN_180213760(param_3 + 0x20,3,1);
              local_108 = 0;
              local_110._0_4_ = 0xa4;
              local_120._0_4_ = 0xa4;
              local_130[0] = 7;
              local_128 = local_a0;
              local_118._0_4_ = local_a0;
              FUN_180214c88(param_3 + 0x20,param_2,0x57,local_a0,local_130,0x30);
            }
            uVar15 = FUN_180213760(param_3 + 0x20,1,0);
            local_f8 = 0;
            local_f0 = 0;
            local_128 = *(uint *)(param_3 + 0xdc) | 0x40000000;
            local_100 = CONCAT44(local_100._4_4_,local_84);
            local_118._0_4_ = 0x68c;
            local_118._4_4_ = 0;
            local_120 = CONCAT44(local_120._4_4_,0xe4);
            local_108 = CONCAT44(local_108._4_4_,local_70) & 0xffffffff00000003;
            local_130[0] = 1;
            local_110._0_4_ = local_74;
            FUN_180214c88(param_3 + 0x20,param_2,0x1d,uVar15,local_130,0x48);
            local_120._0_4_ = 0;
            local_120._4_4_ = 0;
            local_128 = 1;
            local_130[0] = uVar15 | 0x10000000;
            uVar18 = FUN_180214c88(param_3 + 0x20,param_2,0x4001f,0xffffffff,local_130,0x18);
          }
        }
        bVar5 = *(byte *)(param_3 + 0x1c0);
        if ((bVar5 & 4) == 0) {
          uVar15 = 0;
LAB_1801890b8:
          FUN_1801854b8(uVar18,param_2,param_3,uVar13);
        }
        else {
          bVar9 = true;
          uVar19 = FUN_180213760(param_3 + 0x20,3,1);
          uVar15 = (uint)uVar19;
          uVar18 = FUN_18018a278(uVar19,param_3,param_2);
          if ((uVar16 != 2) && ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x14 & 1) == 0)
             ) {
            uVar18 = FUN_180213800(param_3 + 0x20,uVar13);
            uVar13 = 0;
            bVar9 = false;
          }
          uVar18 = FUN_1801854b8(uVar18,param_2,param_3,uVar19 & 0xffffffff);
          if (bVar9) goto LAB_1801890b8;
        }
        FUN_180213800(param_3 + 0x20,local_84);
        local_88 = 0;
        if (uVar16 == 2) {
          auVar21 = FUN_180213760(param_3 + 0x20,1,1);
          uVar19 = auVar21._0_8_;
          uVar16 = FUN_180213760(param_3 + 0x20,auVar21._8_8_,1);
          local_f0 = 0;
          local_110._0_4_ = 0xa4;
          local_120._0_4_ = 0xa4;
          local_108 = 0x6c0;
          local_130[0] = 1;
          local_118 = CONCAT44(local_118._4_4_,*(undefined4 *)(param_3 + 0xd4)) | 0x40000000;
          local_128 = uVar13;
          local_f8._0_4_ = uVar17;
          local_100._0_4_ = local_74;
          FUN_180214c88(param_3 + 0x20,param_2,0x10,uVar19 & 0xffffffff,local_130,0x48);
          local_f0 = 0;
          local_f8._0_4_ = 0xa4;
          local_88 = auVar21._0_4_;
          local_128 = *(uint *)(param_3 + 0xd4) | 0x40000000;
          local_110 = CONCAT44(local_110._4_4_,uVar12) | 0x10000000;
          local_108 = CONCAT44(local_108._4_4_,local_70) & 0xffffffff00000003;
          local_118 = 0x6ac;
          local_130[0] = 1;
          local_120 = CONCAT44(local_120._4_4_,0xa4);
          local_100._0_4_ = local_88;
          FUN_180214c88(param_3 + 0x20,param_2,0x1d,uVar16,local_130,0x48);
          local_f0 = 0;
          local_120 = 0;
          local_110 = 0;
          local_108 = 0x6bc;
          local_130[0] = 1;
          local_118 = CONCAT44(local_118._4_4_,*(undefined4 *)(param_3 + 0xdc)) | 0xc0000000;
          local_128 = local_88;
          local_100._0_4_ = local_74;
          local_f8._0_4_ = uVar17;
          FUN_180214c88(param_3 + 0x20,param_2,0,uVar19 & 0xffffffff,local_130,0x48);
          local_f0 = 0;
          local_110 = 0;
          local_108 = 0x6d0;
          local_130[0] = 1;
          local_118 = CONCAT44(local_118._4_4_,*(undefined4 *)(param_3 + 0xdc)) | 0x40000000;
          local_120 = 0;
          local_128 = local_88;
          local_100._0_4_ = local_74;
          local_f8._0_4_ = uVar17;
          uVar18 = FUN_180214c88(param_3 + 0x20,param_2,0x200e,uVar19 & 0xffffffff,local_130,0x48);
          local_130[0] = local_88;
          FUN_1801887c8(uVar18,param_2,param_3,uVar19 & 0xffffffff,
                        *(uint *)(param_3 + 0xdc) | 0x40000000,0x69c,local_74,uVar17);
          local_100 = CONCAT44(local_100._4_4_,0xe4);
          local_f0 = 0;
          local_f8 = CONCAT44(local_f8._4_4_,0x3f800000);
          local_108 = CONCAT44(local_108._4_4_,*(undefined4 *)(param_3 + 0xb8));
          local_130[0] = 1;
          local_110._0_4_ = 0;
          local_110._4_4_ = 0;
          local_120._0_4_ = 0;
          local_120._4_4_ = 0;
          local_128 = uVar16;
          local_118._0_4_ = local_88;
          FUN_180214c88(param_3 + 0x20,param_2,0x37,uVar19 & 0xffffffff,local_130,0x48);
          FUN_180213800(param_3 + 0x20,uVar16);
        }
        uVar2 = *(undefined4 *)(param_3 + 0x184);
        uVar3 = *(undefined4 *)(param_3 + 0x188);
        uVar17 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x800000;
        uVar16 = FUN_180213760(param_3 + 0x20,1,1);
        uVar14 = 0x2010;
        if (uVar17 == 0) {
          uVar14 = 0x10;
        }
        local_118._0_4_ = iVar11;
        if ((bVar5 & 4) == 0) {
          local_118._0_4_ = *(int *)(param_3 + 0x160);
        }
        local_108 = 0;
        local_130[0] = 1;
        local_128 = uVar13;
        if ((bVar5 & 4) != 0) {
          local_128 = uVar15;
        }
        local_128 = local_128 | 0x80000000;
        local_110 = CONCAT44(local_110._4_4_,0xa4);
        local_120 = CONCAT44(local_120._4_4_,0xa4);
        FUN_180214c88(param_3 + 0x20,param_2,uVar14,uVar16,local_130,0x30);
        if (uVar17 == 0) {
          local_118._0_4_ = *(int *)(param_3 + 0xb8);
          local_100 = 0;
          local_108 = local_108 & 0xffffffff00000000;
          local_110 = 0;
          local_130[0] = 1;
          local_120 = 0;
          local_128 = uVar16;
          FUN_180214c88(param_3 + 0x20,param_2,0x34,uVar16,local_130,0x38);
        }
        if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x14 & 1) == 0) {
          FUN_180213800(param_3 + 0x20,uVar13);
          uVar13 = 0;
        }
        FUN_180213800(param_3 + 0x20,uVar15);
        uVar17 = FUN_180213760(param_3 + 0x20,3,1);
        local_108 = 0;
        local_100 = 0;
        local_130[0] = 7;
        local_120._0_4_ = 0x1a4;
        local_128 = uVar2;
        local_110._0_4_ = uVar16;
        local_118._0_4_ = uVar3;
        FUN_180214c88(param_3 + 0x20,param_2,0x38,uVar17,local_130,0x38);
        FUN_180213800(param_3 + 0x20,uVar16);
        local_f0 = 0;
        local_130[0] = 7;
        local_118._0_4_ = *(uint *)(param_3 + 0xd4) | 0x40000000;
        local_f8 = CONCAT44(local_f8._4_4_,local_70) & 0xffffffff00000003;
        local_108 = 0x680;
        local_110 = CONCAT44(local_110._4_4_,0x1a4);
        local_120._0_4_ = 0x1a4;
        local_100 = CONCAT44(local_100._4_4_,uVar12) | 0x10000000;
        local_128 = uVar17;
        FUN_180214c88(param_3 + 0x20,param_2,0x38,uVar17,local_130,0x48);
        if (local_88 != 0) {
          local_110 = 0;
          local_108 = 0;
          local_120._0_4_ = 0x1a4;
          local_118._0_4_ = local_88;
          local_130[0] = 7;
          local_128 = uVar17;
          FUN_180214c88(param_3 + 0x20,param_2,0x38,uVar17,local_130,0x30);
        }
        local_d8 = 0;
        local_e0 = CONCAT44(local_e0._4_4_,0x1a4);
        local_108 = CONCAT44(local_108._4_4_,0x1a4);
        local_120 = CONCAT44(local_120._4_4_,0x1a4);
        local_110 = CONCAT44(local_110._4_4_,*(undefined4 *)(param_3 + 0xd4)) | 0x40000000;
        local_100 = 0x6a0;
        local_128 = *(undefined4 *)(param_3 + 0x174);
        local_f0 = CONCAT44(local_f0._4_4_,local_70) & 0xffffffff00000003;
        local_f8 = CONCAT44(local_f8._4_4_,uVar12) | 0x10000000;
        local_130[0] = 7;
        local_118 = CONCAT44(local_118._4_4_,*(undefined4 *)(param_3 + 0x178));
        local_e8 = uVar17;
        FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar17,local_130,0x60);
        if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x14 & 1) == 0) {
          FUN_180213800(param_3 + 0x20,local_74);
          local_74 = 0;
        }
        bVar9 = local_70 != uVar20;
        bVar10 = local_84 != 0;
        if (bVar9 || bVar10) {
          local_80 = 0;
          local_7c = 0x32;
          uVar14 = 0x38;
          local_78 = 0;
        }
        else {
          local_80 = 0x2000;
          local_7c = 0x2032;
          local_78 = 2;
          uVar14 = 0x2038;
        }
        bVar6 = !bVar9;
        bVar7 = !bVar10;
        if (local_90 == 0) {
          if ((bVar6 && bVar7) && (*(char *)(param_3 + 0x74) == '\0')) {
            local_100 = CONCAT44(local_100._4_4_,0x12345678);
            local_108 = CONCAT44(local_108._4_4_,0x1a4);
            local_118._0_4_ = 0x1a4;
            local_130[0] = 2;
            local_110 = CONCAT44(local_110._4_4_,local_8c);
            local_128 = CONCAT31(local_128._1_3_,7);
            local_120._0_4_ = uVar17;
            FUN_180184ea8(param_1,param_3,param_2,0x2000,local_130,0x38);
            goto LAB_1801896d8;
          }
          local_108 = 0;
          local_130[0] = 7;
          local_94 = (!bVar9 && !bVar10) | local_94;
          local_110 = CONCAT44(local_110._4_4_,0x1a4);
          local_120._0_4_ = 0x1a4;
          local_118._0_4_ = local_8c;
          local_128 = uVar17;
          FUN_180214c88(param_3 + 0x20,param_2,local_80,local_8c,local_130,0x30);
        }
        else if ((bVar6 && bVar7) && (*(char *)(param_3 + 0x74) == '\0')) {
          local_f0 = CONCAT44(local_f0._4_4_,0x12345678);
          local_f8 = CONCAT44(local_f8._4_4_,0x1a4);
          local_108 = CONCAT44(local_108._4_4_,0x1a4);
          local_130[0] = 2;
          local_100 = CONCAT44(local_100._4_4_,local_8c);
          local_110 = CONCAT44(local_110._4_4_,uVar17);
          local_118._0_4_ = 0;
          local_118._4_4_ = 0;
          local_120._0_4_ = local_90;
          local_128 = CONCAT31(local_128._1_3_,7);
          FUN_180184ea8(param_1,param_3,param_2,0x2032,local_130,0x48);
LAB_1801896d8:
          FUN_180213800(param_3 + 0x20,local_8c);
          local_8c = 0;
        }
        else {
          local_f8 = 0;
          local_120._0_4_ = 0;
          local_120._4_4_ = 0;
          local_130[0] = 7;
          local_94 = (!bVar9 && !bVar10) | local_94;
          local_128 = local_90;
          local_100 = CONCAT44(local_100._4_4_,0x1a4);
          local_110 = CONCAT44(local_110._4_4_,0x1a4);
          local_108 = CONCAT44(local_108._4_4_,local_8c);
          local_118._0_4_ = uVar17;
          FUN_180214c88(param_3 + 0x20,param_2,local_7c,local_8c,local_130,0x40);
        }
        FUN_180213800(param_3 + 0x20,uVar17);
        uVar17 = local_a0;
        if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x14 & 1) != 0) {
          uVar17 = FUN_180213760(param_3 + 0x20,3,1);
          local_128 = *(undefined4 *)(param_3 + 0xd0);
          local_110 = 0;
          local_118._0_4_ = 0x1f0;
          local_120._0_4_ = 0xff;
          local_130[0] = 1;
          FUN_180214c88(param_3 + 0x20,param_2,0x36,uVar17,local_130,0x28);
          local_110 = 0;
          local_118._0_4_ = 0x200;
          local_128 = *(undefined4 *)(param_3 + 0xd0);
          local_120._0_4_ = 0xff;
          local_130[0] = 2;
          FUN_180214c88(param_3 + 0x20,param_2,0x36,uVar17,local_130,0x28);
          local_110 = 0;
          local_118._0_4_ = 0x210;
          local_128 = *(undefined4 *)(param_3 + 0xd0);
          local_120._0_4_ = 0xff;
          local_130[0] = 4;
          FUN_180214c88(param_3 + 0x20,param_2,0x36,uVar17,local_130,0x28);
          if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x1d & 1) == 0) {
            uVar16 = FUN_180213760(param_3 + 0x20,3,1);
            local_128 = *(undefined4 *)(param_3 + 0xd0);
            local_118._0_4_ = 0x1f0;
            local_110 = 0;
            local_120._0_4_ = 0xaa;
            local_130[0] = 1;
            FUN_180214c88(param_3 + 0x20,param_2,0x36,uVar16,local_130,0x28);
            local_110 = 0;
            local_118._0_4_ = 0x200;
            local_128 = *(undefined4 *)(param_3 + 0xd0);
            local_120._0_4_ = 0xaa;
            local_130[0] = 2;
            FUN_180214c88(param_3 + 0x20,param_2,0x36,uVar16,local_130,0x28);
            local_110 = 0;
            local_118._0_4_ = 0x210;
            local_128 = *(undefined4 *)(param_3 + 0xd0);
            local_120._0_4_ = 0xaa;
            local_130[0] = 4;
            FUN_180214c88(param_3 + 0x20,param_2,0x36,uVar16,local_130,0x28);
            local_108 = 0;
            local_128 = uVar16 | 0x80000000;
            local_110 = CONCAT44(local_110._4_4_,0x1a4);
            local_120._0_4_ = 0x1a4;
            local_130[0] = 7;
            local_118._0_4_ = uVar17;
            FUN_180214c88(param_3 + 0x20,param_2,0,uVar16,local_130,0x30);
          }
          else {
            uVar16 = *(uint *)(param_3 + 0x15c);
          }
          local_108 = 0;
          local_110 = CONCAT44(local_110._4_4_,0x1a4);
          local_118 = CONCAT44(local_118._4_4_,uVar16) | 0x80000000;
          local_120 = CONCAT44(local_120._4_4_,0x1a4);
          local_130[0] = 7;
          local_128 = uVar17;
          uVar18 = FUN_180214c88(param_3 + 0x20,param_2,0,uVar17,local_130,0x30);
          FUN_1801854b8(uVar18,param_2,param_3,uVar17);
          if (uVar16 != *(uint *)(param_3 + 0x15c)) {
            FUN_180213800(param_3 + 0x20,uVar16);
          }
          local_108 = 0;
          local_110 = CONCAT44(local_110._4_4_,0x1a4);
          local_118 = CONCAT44(local_118._4_4_,uVar13) | 0x80000000;
          local_120 = CONCAT44(local_120._4_4_,0x1a4);
          local_130[0] = 7;
          local_128 = uVar17;
          FUN_180214c88(param_3 + 0x20,param_2,0,uVar17,local_130,0x30);
          uVar18 = FUN_180213800(param_3 + 0x20,uVar13);
          uVar13 = 0;
          if ((bVar5 & 4) == 0) {
            FUN_1801854b8(uVar18,param_2,param_3,uVar17);
          }
          else {
            uVar19 = FUN_180213760(param_3 + 0x20,3,1);
            uVar18 = FUN_18018a278(uVar19,param_3,param_2);
            FUN_1801854b8(uVar18,param_2,param_3,uVar19 & 0xffffffff);
            FUN_180213800(param_3 + 0x20,uVar19 & 0xffffffff);
          }
          FUN_180213800(param_3 + 0x20,uVar17);
          if (((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x17 & 1) == 0) &&
             ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x28) >> 0x1e & 1) == 0)) {
            bVar9 = false;
            uVar19 = 0x10;
          }
          else {
            bVar9 = true;
            uVar19 = 0x2010;
          }
          uVar16 = FUN_180213760(param_3 + 0x20,1,1);
          iVar4 = iVar11;
          if ((bVar5 & 4) == 0) {
            iVar4 = *(int *)(param_3 + 0x160);
          }
          local_108 = 0;
          local_110 = CONCAT44(local_110._4_4_,0xa4);
          local_120 = CONCAT44(local_120._4_4_,0xa4);
          local_130[0] = 1;
          local_128 = uVar17;
          local_118._0_4_ = iVar4;
          uVar18 = FUN_180214c88(param_3 + 0x20,param_2,uVar19 & 0xffffffff,uVar16,local_130,0x30);
          if (!bVar9) {
            local_118._0_4_ = *(int *)(param_3 + 0xb8);
            local_100 = 0;
            local_108 = local_108 & 0xffffffff00000000;
            local_110 = 0;
            local_120 = 0;
            local_130[0] = 1;
            local_128 = uVar16;
            uVar18 = FUN_180214c88(param_3 + 0x20,param_2,0x34,uVar16,local_130,0x38);
          }
          local_130[0] = uVar16;
          FUN_1801887c8(uVar18,param_2,param_3,uVar16,*(undefined4 *)(param_3 + 0xdc),0x67c,
                        0xffffffff,0xffffffff);
          FUN_180213800(param_3 + 0x20,uVar16);
          uVar12 = FUN_180213760(param_3 + 0x20,3,1);
          local_128 = *(undefined4 *)(param_3 + 0x18c);
          local_118._0_4_ = *(undefined4 *)(param_3 + 400);
          local_108 = 0;
          local_100 = 0;
          local_130[0] = 7;
          local_120._0_4_ = 0x1a4;
          local_110._0_4_ = uVar16;
          FUN_180214c88(param_3 + 0x20,param_2,0x38,uVar12,local_130,0x38);
          local_f0 = 0;
          local_130[0] = 7;
          local_118._0_4_ = *(uint *)(param_3 + 0xd4) | 0x40000000;
          local_f8 = CONCAT44(local_f8._4_4_,local_70) & 0xffffffff00000003;
          local_108 = 0x690;
          local_110 = CONCAT44(local_110._4_4_,0x1a4);
          local_120._0_4_ = 0xa4;
          local_100 = CONCAT44(local_100._4_4_,local_74);
          local_128 = uVar12;
          FUN_180214c88(param_3 + 0x20,param_2,0x38,uVar12,local_130,0x48);
          FUN_180213800(param_3 + 0x20,local_74);
          local_74 = 0;
          if (local_88 != 0) {
            local_110 = 0;
            local_108 = 0;
            local_120._0_4_ = 0x1a4;
            local_118._0_4_ = local_88;
            local_130[0] = 7;
            local_128 = uVar12;
            FUN_180214c88(param_3 + 0x20,param_2,0x38,uVar12,local_130,0x30);
            FUN_180213800(param_3 + 0x20,local_88);
            local_88 = 0;
          }
          uVar17 = uVar12;
          if (local_90 == 0) {
            if (local_a0 == 0) goto LAB_180189e74;
            if ((bVar6 && bVar7) && (*(char *)(param_3 + 0x74) == '\0')) {
              local_100 = CONCAT44(local_100._4_4_,0x12345678);
              local_108 = CONCAT44(local_108._4_4_,0x1a4);
              local_118._0_4_ = 0x1a4;
              local_130[0] = 3;
              local_110 = CONCAT44(local_110._4_4_,local_a0);
              local_128 = CONCAT31(local_128._1_3_,7);
              local_120._0_4_ = uVar12;
              FUN_180184ea8(param_1,param_3,param_2,0x2000,local_130,0x38);
              goto LAB_180189cdc;
            }
            local_108 = 0;
            local_130[0] = 7;
            local_94 = local_78 | local_94;
            local_110 = CONCAT44(local_110._4_4_,0x1a4);
            local_120._0_4_ = 0x1a4;
            local_118._0_4_ = local_a0;
            local_128 = uVar12;
            FUN_180214c88(param_3 + 0x20,param_2,local_80,local_a0,local_130,0x30);
          }
          else if ((bVar6 && bVar7) && (*(char *)(param_3 + 0x74) == '\0')) {
            if (local_a0 == 0) {
              local_100 = CONCAT44(local_100._4_4_,0x12345678);
              local_108 = CONCAT44(local_108._4_4_,0x1a4);
              local_130[0] = 3;
              local_110 = CONCAT44(local_110._4_4_,uVar12);
              local_118._0_4_ = 0;
              local_118._4_4_ = 0;
              local_120._0_4_ = local_90;
              local_128 = CONCAT31(local_128._1_3_,7);
              FUN_180184ea8(param_1,param_3,param_2,0x2038,local_130,0x38);
            }
            else {
              local_f0 = CONCAT44(local_f0._4_4_,0x12345678);
              local_f8 = CONCAT44(local_f8._4_4_,0x1a4);
              local_108 = CONCAT44(local_108._4_4_,0x1a4);
              local_130[0] = 3;
              local_100 = CONCAT44(local_100._4_4_,local_a0);
              local_110 = CONCAT44(local_110._4_4_,uVar12);
              local_118._0_4_ = 0;
              local_118._4_4_ = 0;
              local_120._0_4_ = local_90;
              local_128 = CONCAT31(local_128._1_3_,7);
              FUN_180184ea8(param_1,param_3,param_2,0x2032,local_130,0x48);
LAB_180189cdc:
              FUN_180213800(param_3 + 0x20,local_a0);
              local_a0 = 0;
            }
          }
          else {
            local_94 = local_78 | local_94;
            local_118._0_4_ = uVar12;
            if (local_a0 == 0) {
              local_108 = 0;
              local_110 = CONCAT44(local_110._4_4_,0x1a4);
              local_120._0_4_ = 0;
              local_120._4_4_ = 0;
              local_128 = local_90;
              local_130[0] = 7;
              FUN_180214c88(param_3 + 0x20,param_2,uVar14,uVar12,local_130,0x30);
              goto LAB_180189e74;
            }
            local_f8 = 0;
            local_100 = CONCAT44(local_100._4_4_,0x1a4);
            local_108 = CONCAT44(local_108._4_4_,local_a0);
            local_110 = CONCAT44(local_110._4_4_,0x1a4);
            local_120._0_4_ = 0;
            local_120._4_4_ = 0;
            local_128 = local_90;
            local_130[0] = 7;
            FUN_180214c88(param_3 + 0x20,param_2,local_7c,local_a0,local_130,0x40);
          }
          uVar17 = local_a0;
          if (local_a0 != uVar12) {
            FUN_180213800(param_3 + 0x20,uVar12);
          }
        }
LAB_180189e74:
        local_a0 = uVar17;
        FUN_180213800(param_3 + 0x20,local_90);
        FUN_180213800(param_3 + 0x20,uVar13);
        FUN_180213800(param_3 + 0x20,local_88);
        FUN_180213800(param_3 + 0x20,local_74);
        if (local_84 != 0) {
          FUN_180214c88(param_3 + 0x20,param_2,0x15,0,local_130,0);
        }
      }
      local_70 = local_70 + 1;
    } while (local_70 < 8);
    FUN_18018a720(param_1,param_3,4);
    if (local_8c != 0) {
      uVar17 = ~(local_94 << 0xd) & 0x2000;
      if ((uVar17 == 0) || (*(char *)(param_3 + 0x74) == '\0')) {
        local_110 = CONCAT44(local_110._4_4_,0x12345678);
        local_118._0_4_ = 0xa4;
        local_128 = CONCAT31(local_128._1_3_,7);
        local_120._0_4_ = local_8c;
        local_130[0] = 2;
        FUN_180184ea8(param_1,param_3,param_2,uVar17 | 0x36,local_130,0x28);
      }
      else {
        local_118 = 0;
        local_120._0_4_ = 0x1a4;
        local_128 = local_8c;
        local_130[0] = 7;
        FUN_180214c88(param_3 + 0x20,param_2,0x2036,local_8c,local_130,0x20);
        local_110 = CONCAT44(local_110._4_4_,0x12345678);
        local_130[0] = 2;
        local_118._0_4_ = 0xa4;
        local_120._0_4_ = local_8c;
        local_128 = CONCAT31(local_128._1_3_,7);
        FUN_180184ea8(param_1,param_3,param_2,0x36,local_130,0x28);
      }
    }
  }
  if (bVar8) {
    if (local_a0 != 0) {
      uVar17 = ~(local_94 << 0xc) & 0x2000;
      if ((uVar17 == 0) || (*(char *)(param_3 + 0x74) == '\0')) {
        local_110 = CONCAT44(local_110._4_4_,0x12345678);
        local_118._0_4_ = 0xa4;
        local_128 = CONCAT31(local_128._1_3_,7);
        local_120._0_4_ = local_a0;
        local_130[0] = 3;
        FUN_180184ea8(param_1,param_3,param_2,uVar17 | 0x36,local_130,0x28);
      }
      else {
        local_118 = 0;
        local_120._0_4_ = 0x1a4;
        local_128 = local_a0;
        local_130[0] = 7;
        FUN_180214c88(param_3 + 0x20,param_2,0x2036,local_a0,local_130,0x20);
        local_110 = CONCAT44(local_110._4_4_,0x12345678);
        local_130[0] = 3;
        local_118._0_4_ = 0xa4;
        local_120._0_4_ = local_a0;
        local_128 = CONCAT31(local_128._1_3_,7);
        FUN_180184ea8(param_1,param_3,param_2,0x36,local_130,0x28);
      }
    }
  }
  else {
    local_f0 = CONCAT44(local_f0._4_4_,0x12345678);
    local_100 = local_100 & 0xffffffff00000000;
    local_108 = local_108 & 0xffffffff00000000;
    local_110 = (ulonglong)local_110._4_4_ << 0x20;
    uVar1 = 0xf;
    if (*(char *)(param_3 + 0x1c8) == '\0') {
      uVar1 = 7;
    }
    local_128 = CONCAT31(local_128._1_3_,uVar1);
    local_f8 = CONCAT44(local_f8._4_4_,0x3f800000);
    local_118._0_4_ = 0xe4;
    local_120._0_4_ = *(uint *)(param_3 + 0xbc);
    local_130[0] = 3;
    FUN_180184ea8(param_1,param_3,param_2,0x36,local_130,0x48);
  }
  FUN_180213800(param_3 + 0x20,local_a0);
  FUN_180213800(param_3 + 0x20,local_8c);
  return;
}

