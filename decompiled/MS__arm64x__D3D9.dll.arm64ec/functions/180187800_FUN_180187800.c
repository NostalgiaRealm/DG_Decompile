/*
 * FUN_180187800 at 180187800
 * undefined FUN_180187800(void)
 * Address ranges: 180187800-180188357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180187800(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined *puVar12;
  int extraout_w8;
  uint *puVar13;
  longlong lVar14;
  code *extraout_x11;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint local_f0 [2];
  int local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_b8;
  uint local_b0;
  int local_a8;
  undefined4 local_a0;
  ulonglong local_98;
  uint local_90;
  uint local_88;
  uint local_80;
  undefined8 local_78;
  
  uVar17 = param_4 * 3;
  lVar14 = *(longlong *)(param_3 + 0x1b0);
  iVar8 = *(int *)(param_3 + 0x194);
  uVar15 = 4;
  uVar4 = (*(uint *)(lVar14 + 0x1c) & *(uint *)(lVar14 + 8)) >> (ulonglong)(uVar17 & 0x1f);
  uVar1 = uVar4 & 7;
  if ((uVar1 != 0) != (bool)*(char *)(param_3 + 0x199)) {
    uVar15 = (uint)*(byte *)(param_3 + 0x198);
  }
  uVar21 = 0x3f800000;
  uVar16 = (*(uint *)(lVar14 + 0x20) & *(uint *)(lVar14 + 0xc)) >> (ulonglong)(uVar17 & 0x1f) & 7;
  if (uVar16 == 1) {
    if (iVar8 != 0) goto LAB_180187ba0;
    iVar8 = *(int *)(param_3 + 0x168);
    if (iVar8 == 0) {
      iVar8 = FUN_1801876a8(param_1,param_2,param_3,0);
      *(int *)(param_3 + 0x168) = iVar8;
    }
  }
  else if (uVar16 == 2) {
    if (iVar8 != 0) goto LAB_180187ba0;
    iVar8 = *(int *)(param_3 + 0x164);
  }
  else if (uVar16 == 3) {
    if (iVar8 != 0) goto LAB_180187ba0;
    if (*(int *)(param_3 + 0x16c) == 0) {
      if (*(int *)(param_3 + 0x168) == 0) {
        uVar7 = FUN_1801876a8(param_1,param_2,param_3,0);
        *(undefined4 *)(param_3 + 0x168) = uVar7;
      }
      uVar7 = FUN_180213760(param_3 + 0x20,3,1);
      *(undefined4 *)(param_3 + 0x16c) = uVar7;
      iVar8 = FUN_180213760(param_3 + 0x20,1,1);
      if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x1d & 1) == 0) {
        local_e8 = *(undefined4 *)(param_3 + 0x160);
        local_c8 = 0;
        local_d0._0_4_ = 0xaa;
        local_e0 = CONCAT44(local_e0._4_4_,0xaa);
        local_f0[0] = 1;
        local_d8._0_4_ = local_e8;
        FUN_180214c88(param_3 + 0x20,param_2,0,iVar8,local_f0,0x30);
        local_c0 = 0x1e4;
        local_98 = 0;
        local_a0 = 0;
        local_a8 = -0x40800000;
        local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_3 + 0xbc));
        local_d0 = CONCAT44(local_d0._4_4_,0x1a4);
        local_b0 = 0;
        local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
        local_e0 = 0;
        local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(param_3 + 0x168));
        local_f0[0] = 7;
        local_e8 = iVar8;
        FUN_180214c88(param_3 + 0x20,param_2,0x32,*(undefined4 *)(param_3 + 0x16c),local_f0,0x60);
      }
      else {
        uVar11 = FUN_180213760(param_3 + 0x20,3,1);
        FUN_1801854b8(uVar11,param_2,param_3,*(uint *)(param_3 + 0x164) | 0x80000000);
        local_d8._0_4_ = *(undefined4 *)(param_3 + 0x168);
        local_c8 = 0;
        local_d0 = CONCAT44(local_d0._4_4_,0xa4);
        local_e0 = CONCAT44(local_e0._4_4_,0xa4);
        local_f0[0] = 1;
        local_e8 = (int)uVar11;
        FUN_180214c88(param_3 + 0x20,param_2,0x10,iVar8,local_f0,0x30);
        local_d0 = 0;
        local_c8 = 0;
        local_f0[0] = 1;
        local_e0 = 0;
        local_e8 = iVar8;
        local_d8._0_4_ = iVar8;
        FUN_180214c88(param_3 + 0x20,param_2,0,iVar8,local_f0,0x30);
        local_b8 = 0;
        local_c0 = 0x1a4;
        local_d0 = CONCAT44(local_d0._4_4_,0x1a4);
        local_c8 = CONCAT44(local_c8._4_4_,(int)uVar11) | 0x80000000;
        local_e0 = 0;
        local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(param_3 + 0x168));
        local_f0[0] = 7;
        local_e8 = iVar8;
        FUN_180214c88(param_3 + 0x20,param_2,0x32,*(undefined4 *)(param_3 + 0x16c),local_f0,0x40);
        FUN_180213800(param_3 + 0x20,uVar11 & 0xffffffff);
      }
      FUN_180213800(param_3 + 0x20,iVar8);
    }
    iVar8 = *(int *)(param_3 + 0x16c);
  }
  else {
    if ((uVar16 != 4) || (iVar8 != 0)) goto LAB_180187ba0;
    if (*(int *)(param_3 + 0x170) == 0) {
      if (*(int *)(param_3 + 0x168) == 0) {
        uVar7 = FUN_1801876a8(param_1,param_2,param_3,0);
        *(undefined4 *)(param_3 + 0x168) = uVar7;
      }
      uVar7 = FUN_180213760(param_3 + 0x20,3,1);
      local_a8 = *(int *)(param_3 + 0xbc);
      local_a0 = 0x1e4;
      local_d0 = CONCAT44(local_d0._4_4_,0x1e4);
      local_e0 = CONCAT44(local_e0._4_4_,0x1a4);
      local_e8 = *(int *)(param_3 + 0x168);
      *(undefined4 *)(param_3 + 0x170) = uVar7;
      local_78 = 0;
      local_80 = 0;
      local_88 = 0;
      local_90 = 0x3f000000;
      local_98 = CONCAT44(local_98._4_4_,0x3f000000);
      local_b0 = 0;
      local_b8 = CONCAT44(local_b8._4_4_,0x3f800000);
      local_c0 = 0x3f000000;
      local_c8 = CONCAT44(local_c8._4_4_,0x3f000000);
      local_d8 = CONCAT44(local_d8._4_4_,local_a8);
      local_f0[0] = 7;
      FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar7,local_f0,0x80);
    }
    iVar8 = *(int *)(param_3 + 0x170);
  }
  uVar15 = 3;
LAB_180187ba0:
  puVar13 = *(uint **)(param_3 + 0x1b0);
  uVar16 = 0xf;
  if (((puVar13[0x11] >> 0x1e & 1) == 0) &&
     (((puVar13[7] & puVar13[2]) >> (ulonglong)(param_4 + 0x18U & 0x1f) & 1) != 0)) {
    bVar6 = true;
    uVar18 = 7;
  }
  else {
    bVar6 = false;
    uVar18 = 0xf;
  }
  if (iVar8 == 0) {
    uVar17 = (puVar13[5] & puVar13[4] & *puVar13) >> (ulonglong)(uVar17 & 0x1f) & 7;
    if ((*(uint *)(param_3 + 0x1ac) & 8 << (ulonglong)uVar17) != 0) {
      uVar15 = (puVar13[6] & puVar13[1]) >> (ulonglong)(uVar17 * 3) & 7;
      (*(code *)__hybrid_os_arm64x_dispatch_icall)();
      iVar8 = (*extraout_x11)(param_1,param_2,param_3,extraout_w8 + 7);
      *(int *)(param_3 + 0x19c) = iVar8;
    }
  }
  uVar5 = (undefined1)uVar15;
  if (uVar1 == 0) {
    if (iVar8 != 0) {
      puVar12 = &DAT_18022c5a4;
      puVar2 = &DAT_18022c5a8;
      if (!bVar6) {
        puVar2 = puVar12;
      }
      if ((param_5 & 1) != 0) {
        if (uVar15 != 4) {
          if (((*(uint *)(param_3 + 0x194) & 0x3f00) == 0) &&
             (*(uint *)(param_3 + 0x194) != *(uint *)(param_3 + 0x19c))) {
            FUN_180213800(param_3 + 0x20);
            *(undefined4 *)(param_3 + 0x194) = 0;
          }
          iVar10 = FUN_180213760(param_3 + 0x20,4,1);
          bVar3 = puVar12[uVar15 - 1];
          if (*(int *)(param_3 + 0x20) == 0x10040) {
            local_d8 = 0;
            local_f0[0] = (uint)bVar3;
            local_e8 = iVar8;
            local_e0._0_4_ = (uint)(byte)(&DAT_18022c5a0)[uVar15 - 1];
            FUN_180214c88(param_3 + 0x20,param_2,0x36,iVar10,local_f0,0x20);
            local_e0 = CONCAT44(local_e0._4_4_,0xe4);
            local_e8 = *(int *)(param_3 + 0xbc);
            local_f0[0] = bVar3 ^ 0xf;
            local_b8 = 0;
            local_c0 = 0x3f800000;
            local_c8 = local_c8 & 0xffffffff00000000;
            local_d0 = local_d0 & 0xffffffff00000000;
            local_d8 = local_d8 & 0xffffffff00000000;
            FUN_180214c88(param_3 + 0x20,param_2,0x36,iVar10,local_f0,0x40);
          }
          else {
            local_e8 = *(int *)(param_3 + 0xbc);
            local_78 = 0;
            local_d8 = CONCAT44(local_d8._4_4_,(uint)bVar3) & 0xffffffff00000001;
            local_80 = 0x3f800000;
            local_c0 = bVar3 >> 3 & 1;
            local_f0[0] = 0xf;
            local_88 = 0;
            local_90 = 0;
            local_98 = local_98 & 0xffffffff00000000;
            local_a0 = 0xe4;
            local_b8 = CONCAT44(local_b8._4_4_,iVar8);
            local_c8 = CONCAT44(local_c8._4_4_,(uint)(bVar3 >> 2)) & 0xffffffff00000001;
            local_d0 = CONCAT44(local_d0._4_4_,(uint)(bVar3 >> 1)) & 0xffffffff00000001;
            local_e0 = CONCAT44(local_e0._4_4_,0xe4);
            local_b0 = (uint)(byte)(&DAT_18022c5a0)[uVar15 - 1];
            local_a8 = local_e8;
            FUN_180214c88(param_3 + 0x20,param_2,0x37,iVar10,local_f0,0x80);
          }
          uVar15 = 4;
          iVar8 = iVar10;
        }
        if (*(int *)(param_3 + 0x194) == 0) {
          *(int *)(param_3 + 0x194) = iVar8;
          *(undefined1 *)(param_3 + 0x199) = 0;
          *(undefined1 *)(param_3 + 0x198) = uVar5;
        }
      }
      uVar15 = uVar15 - 1;
      local_d0 = CONCAT44(local_d0._4_4_,0x12345678);
      local_e0 = CONCAT44(local_e0._4_4_,iVar8);
      local_f0[0] = param_4 + 5;
      local_d8 = CONCAT44(local_d8._4_4_,(uint)(byte)(&DAT_18022c5a0)[uVar15]);
      local_e8 = CONCAT31(local_e8._1_3_,puVar2[uVar15]);
      FUN_180184ea8(param_1,param_3,param_2,0x36,local_f0,0x28);
      uVar16 = (byte)puVar2[uVar15] ^ 0xf;
    }
  }
  else {
    iVar10 = param_4 * 0x40;
    uVar16 = (byte)(&DAT_18022c5ac)[uVar1 - 1] & uVar18;
    if (iVar8 == 0) {
      uVar15 = param_4 + 5;
      local_c8 = CONCAT44(local_c8._4_4_,0x12345678);
      local_d0 = CONCAT44(local_d0._4_4_,iVar10 + 0x2e0U);
      local_d8 = CONCAT44(local_d8._4_4_,0xff);
      local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(param_3 + 0xd0));
      local_e8 = CONCAT31(local_e8._1_3_,1);
      local_f0[0] = uVar15;
      FUN_180184ea8(param_1,param_3,param_2,0x36,local_f0,0x30);
      if ((uVar4 & 6) != 0) {
        local_c8 = CONCAT44(local_c8._4_4_,0x12345678);
        local_d8 = CONCAT44(local_d8._4_4_,0xff);
        local_d0 = CONCAT44(local_d0._4_4_,iVar10 + 0x2f0);
        local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(param_3 + 0xd0));
        local_e8 = CONCAT31(local_e8._1_3_,2);
        local_f0[0] = uVar15;
        FUN_180184ea8(param_1,param_3,param_2,0x36,local_f0,0x30);
      }
      if (2 < uVar1) {
        local_c8 = CONCAT44(local_c8._4_4_,0x12345678);
        local_d8 = CONCAT44(local_d8._4_4_,0xff);
        local_d0 = CONCAT44(local_d0._4_4_,iVar10 + 0x300);
        local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(param_3 + 0xd0));
        local_e8 = CONCAT31(local_e8._1_3_,2);
        local_f0[0] = uVar15;
        FUN_180184ea8(param_1,param_3,param_2,0x36,local_f0,0x30);
      }
      if (((uVar4 >> 2 & 1) != 0) || (bVar6)) {
        local_c8 = CONCAT44(local_c8._4_4_,0x12345678);
        local_d8 = CONCAT44(local_d8._4_4_,0xff);
        local_e8 = CONCAT31(local_e8._1_3_,4);
        local_d0 = CONCAT44(local_d0._4_4_,iVar10 + uVar1 * 0x10 + 0x2d0);
        local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(param_3 + 0xd0));
        local_f0[0] = uVar15;
        FUN_180184ea8(param_1,param_3,param_2,0x36,local_f0,0x30);
      }
    }
    else {
      uVar17 = uVar21;
      if (uVar15 < 2) {
        uVar17 = 0;
      }
      uVar18 = uVar21;
      if (uVar15 < 3) {
        uVar18 = 0;
      }
      uVar19 = uVar21;
      if (uVar15 < 4) {
        uVar19 = 0;
      }
      uVar20 = uVar21;
      if (uVar15 != 1) {
        uVar20 = 0;
      }
      if (uVar15 != 2) {
        uVar21 = 0;
      }
      uVar22 = 0x3f800000;
      if (uVar15 != 3) {
        uVar22 = 0;
      }
      iVar9 = iVar8;
      if (uVar15 != 4) {
        if (((*(uint *)(param_3 + 0x194) & 0x3f00) == 0) &&
           (*(uint *)(param_3 + 0x194) != *(uint *)(param_3 + 0x19c))) {
          FUN_180213800(param_3 + 0x20);
          *(undefined4 *)(param_3 + 0x194) = 0;
        }
        iVar9 = FUN_180213760(param_3 + 0x20,4,1);
        local_a8 = *(int *)(param_3 + 0xbc);
        local_78 = 0;
        local_98 = local_98 & 0xffffffff00000000;
        local_e0 = CONCAT44(local_e0._4_4_,(uint)(byte)(&DAT_18022c5a0)[uVar15 - 1]);
        local_a0 = 0xe4;
        local_f0[0] = 0xf;
        local_b8 = CONCAT44(local_b8._4_4_,uVar18);
        local_c8 = CONCAT44(local_c8._4_4_,0x3f800000);
        local_d0 = CONCAT44(local_d0._4_4_,0xe4);
        local_d8 = CONCAT44(local_d8._4_4_,local_a8);
        local_e8 = iVar8;
        local_c0 = uVar17;
        local_b0 = uVar19;
        local_90 = uVar20;
        local_88 = uVar21;
        local_80 = uVar22;
        FUN_180214c88(param_3 + 0x20,param_2,0x32,iVar9,local_f0,0x80);
      }
      if (*(int *)(param_3 + 0x194) == 0) {
        *(int *)(param_3 + 0x194) = iVar9;
        *(undefined1 *)(param_3 + 0x199) = 1;
        *(undefined1 *)(param_3 + 0x198) = uVar5;
      }
      local_b8 = CONCAT44(local_b8._4_4_,0x12345678);
      local_c8 = CONCAT44(local_c8._4_4_,0xe4);
      local_d8 = CONCAT44(local_d8._4_4_,0xe4);
      local_e0 = CONCAT44(local_e0._4_4_,iVar9);
      uVar15 = param_4 + 5;
      local_e8 = CONCAT31(local_e8._1_3_,1);
      local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(param_3 + 0xd0));
      local_f0[0] = uVar15;
      local_c0 = iVar10 + 0x2e0U;
      FUN_180184ea8(param_1,param_3,param_2,0x11,local_f0,0x40);
      if ((uVar4 & 6) != 0) {
        local_b8 = CONCAT44(local_b8._4_4_,0x12345678);
        local_e0 = CONCAT44(local_e0._4_4_,iVar9);
        local_c0 = iVar10 + 0x2f0;
        local_c8 = CONCAT44(local_c8._4_4_,0xe4);
        local_d8 = CONCAT44(local_d8._4_4_,0xe4);
        local_e8 = CONCAT31(local_e8._1_3_,2);
        local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(param_3 + 0xd0));
        local_f0[0] = uVar15;
        FUN_180184ea8(param_1,param_3,param_2,0x11,local_f0,0x40);
      }
      if (2 < uVar1) {
        local_b8 = CONCAT44(local_b8._4_4_,0x12345678);
        local_e0 = CONCAT44(local_e0._4_4_,iVar9);
        local_c0 = iVar10 + 0x300;
        local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(param_3 + 0xd0));
        local_c8 = CONCAT44(local_c8._4_4_,0xe4);
        local_d8 = CONCAT44(local_d8._4_4_,0xe4);
        local_e8 = CONCAT31(local_e8._1_3_,4);
        local_f0[0] = uVar15;
        FUN_180184ea8(param_1,param_3,param_2,0x11,local_f0,0x40);
      }
      if (((uVar4 >> 2 & 1) != 0) || (bVar6)) {
        local_b8 = CONCAT44(local_b8._4_4_,0x12345678);
        local_e0 = CONCAT44(local_e0._4_4_,iVar9);
        local_e8 = CONCAT31(local_e8._1_3_,8);
        local_c0 = iVar10 + uVar1 * 0x10 + 0x2d0;
        local_c8 = CONCAT44(local_c8._4_4_,0xe4);
        local_d8 = CONCAT44(local_d8._4_4_,0xe4);
        local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(param_3 + 0xd0));
        local_f0[0] = uVar15;
        FUN_180184ea8(param_1,param_3,param_2,0x11,local_f0,0x40);
      }
    }
  }
  local_f0[0] = param_4 + 5;
  if ((uVar16 < 9) && ((0x116U >> (ulonglong)(uVar16 & 0x1f) & 1) != 0)) {
    uVar15 = (uVar16 & 0xaaaaaaaa) >> 1 | (uVar16 & 0x55555555) << 1;
    uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
    local_c8 = CONCAT44(local_c8._4_4_,0x12345678);
    local_e8 = CONCAT31(local_e8._1_3_,(char)uVar16);
    local_d0 = CONCAT44(local_d0._4_4_,
                        *(undefined4 *)
                         (&DAT_18022c4f0 +
                         LZCOUNT((uVar15 >> 4 | (uVar15 & 0xf0f0f0f) << 4) << 0x18) * 4));
    local_d8 = CONCAT44(local_d8._4_4_,0x1e4);
    local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(param_3 + 0xb8));
    FUN_180184ea8(param_1,param_3,param_2,0x36,local_f0,0x30);
  }
  else if (uVar16 != 0) {
    local_b0 = 0x12345678;
    local_b8 = CONCAT44(local_b8._4_4_,0x3f800000);
    local_d8 = CONCAT44(local_d8._4_4_,0x1e4);
    local_c0 = 0;
    local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
    local_d0 = (ulonglong)local_d0._4_4_ << 0x20;
    local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(param_3 + 0xbc));
    local_e8 = CONCAT31(local_e8._1_3_,(char)uVar16);
    FUN_180184ea8(param_1,param_3,param_2,0x36,local_f0,0x48);
  }
  return;
}

