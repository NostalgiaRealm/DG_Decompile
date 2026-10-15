/*
 * FUN_1801c6e38 at 1801c6e38
 * undefined FUN_1801c6e38(void)
 * Address ranges: 1801c6e38-1801c773f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

int FUN_1801c6e38(longlong param_1,longlong param_2,ulonglong *param_3,longlong param_4,
                 ulonglong *param_5,uint param_6)

{
  bool bVar1;
  bool bVar2;
  ulonglong *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined8 *extraout_x9;
  ulonglong extraout_x10;
  int extraout_w11;
  longlong lVar20;
  longlong extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  int extraout_w12;
  longlong lVar21;
  longlong extraout_x12;
  int extraout_w15;
  int extraout_w15_00;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  ulonglong local_130;
  longlong local_128;
  ulonglong *local_120;
  ulonglong *puStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6;
  undefined2 local_e5;
  undefined4 local_e0;
  code *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0 [2];
  ulonglong local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  ulonglong local_50;
  ulonglong uStack_48;
  
  iVar7 = -0x7789f794;
  iVar15 = -0x7789f794;
  if (param_2 == 0) {
    return -0x7789f794;
  }
  if (param_4 == 0 || 7 < param_6) {
    return -0x7789f794;
  }
  if ((0xcfU >> (ulonglong)(param_6 & 0x1f) & 1) == 0) {
    return -0x7789f794;
  }
  local_120 = param_5;
  puStack_118 = param_3;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar9 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar9 = true;
    iVar12 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar12 == 0) {
      FUN_1801085c8();
    }
  }
  uVar16 = *(uint *)(param_2 + -0x38);
  uVar18 = (ulonglong)uVar16;
  if (((uVar16 - 0x46 < 0xb) && ((0x6abU >> (ulonglong)(uVar16 - 0x46 & 0x1f) & 1) != 0)) ||
     ((uVar16 == 0x36314644 || uVar16 == 0x34324644) || uVar16 == 0x5a544e49)) {
    bVar8 = true;
    iVar15 = iVar7;
    if (uVar16 == *(uint *)(param_4 + -0x38)) {
      iVar15 = 0;
    }
  }
  else {
    uVar5 = *(uint *)(param_4 + -0x38);
    if (((uVar5 - 0x46 < 0xb) && ((0x6abU >> (ulonglong)(uVar5 - 0x46 & 0x1f) & 1) != 0)) ||
       ((uVar5 == 0x36314644 || uVar5 == 0x34324644) || uVar5 == 0x5a544e49)) goto LAB_1801c7700;
    iVar15 = 0;
    if (uVar16 != uVar5) {
      if (*(int *)(param_1 + -0x59d0) == 2) {
        puVar19 = (undefined8 *)0x180246000;
      }
      else {
        puVar19 = &DAT_180246550;
      }
      uVar11 = FUN_180106a90(puVar19,uVar18);
      FUN_1801073a0(*extraout_x9,uVar11);
      uVar18 = FUN_180107328(uVar18 & 0xffffffff);
      iVar15 = -0x7789f794;
      if ((((uVar18 & 1) != 0) || (extraout_w12 != 0)) && (extraout_w15 != 0)) {
        iVar15 = 0;
        if (extraout_w11 == 0) {
          iVar15 = -0x7789f796;
        }
      }
    }
    bVar8 = false;
  }
  if (iVar15 < 0) goto LAB_1801c7700;
  local_130 = param_2 - 0x80;
  local_128 = param_4 + -0x80;
  thunk_FUN_180223c20(local_b0,0,0,*(undefined4 *)(param_2 + -0x20),*(undefined4 *)(param_2 + -0x1c)
                     );
  thunk_FUN_180223c20(local_a0,0,0,*(undefined4 *)(param_4 + -0x20),*(undefined4 *)(param_4 + -0x1c)
                     );
  puVar3 = puStack_118;
  if (puStack_118 == (ulonglong *)0x0) {
    puVar3 = local_b0;
  }
  uStack_148 = puVar3[1];
  local_150 = *puVar3;
  puVar3 = local_120;
  if (local_120 == (ulonglong *)0x0) {
    puVar3 = local_a0;
  }
  uStack_138 = puVar3[1];
  local_140 = *puVar3;
  thunk_FUN_180223c34(auStack_70,&local_150,local_b0);
  thunk_FUN_180223c34(auStack_60,&local_140,local_a0);
  if ((int)uStack_148 - (int)local_150 == (int)uStack_138 - (int)local_140) {
    bVar10 = false;
    if (uStack_148._4_4_ - local_150._4_4_ != uStack_138._4_4_ - local_140._4_4_)
    goto LAB_1801c70fc;
  }
  else {
LAB_1801c70fc:
    bVar10 = true;
  }
  iVar12 = thunk_FUN_180223c48(auStack_70,&local_150);
  if ((iVar12 == 0) || (iVar12 = thunk_FUN_180223c48(auStack_60,&local_140), iVar12 == 0)) {
    iVar15 = -0x7789f794;
  }
  lVar21 = *(longlong *)(param_2 + 0x48);
  bVar1 = false;
  lVar20 = *(longlong *)(param_4 + 0x48);
  bVar2 = false;
  if (lVar21 != 0) {
    bVar1 = (*(uint *)(*(ulonglong *)(lVar21 + 0xb0) + 0x50) & 0x400) != 0 &&
            *(ulonglong *)(lVar21 + 0xb0) != local_130;
  }
  if (lVar20 != 0) {
    bVar2 = (*(uint *)(*(longlong *)(lVar20 + 0xb0) + 0x50) & 0x400) != 0 &&
            *(longlong *)(lVar20 + 0xb0) != local_128;
  }
  if ((bVar1) || (bVar2)) {
LAB_1801c71f0:
    iVar15 = -0x7789f794;
  }
  else if (-1 < iVar15) {
    if (((*(int *)(param_2 + -0x2c) == 0) && (*(int *)(param_4 + -0x2c) == 0)) &&
       ((param_6 == 0 || ((param_6 == 1 || (param_6 == 2)))))) {
      if (param_6 == 1) {
        if ((*(uint *)(*(longlong *)(param_1 + 0x60) + 0xf4) & 0x1000100) != 0x1000100) {
          iVar15 = iVar7;
        }
        if (iVar15 < 0) goto LAB_1801c71f4;
      }
      if ((param_6 != 2) ||
         ((*(uint *)(*(longlong *)(param_1 + 0x60) + 0xf4) & 0x2000200) == 0x2000200))
      goto LAB_1801c71f4;
    }
    goto LAB_1801c71f0;
  }
LAB_1801c71f4:
  iVar12 = *(int *)(param_2 + -0x28);
  if (iVar12 == 0) {
    iVar14 = *(int *)(param_2 + -0x24);
    if (iVar14 == 0) goto LAB_1801c7244;
LAB_1801c7208:
    bVar1 = true;
  }
  else {
    iVar14 = *(int *)(param_2 + -0x24);
    if (iVar12 != 1 || iVar14 != 0) goto LAB_1801c7208;
LAB_1801c7244:
    iVar14 = *(int *)(param_2 + -0x24);
    bVar1 = false;
  }
  iVar6 = *(int *)(param_4 + -0x28);
  if (((iVar6 == 0) && (iVar13 = 0, *(int *)(param_4 + -0x24) == 0)) ||
     (iVar13 = *(int *)(param_4 + -0x24), iVar6 == 1 && iVar13 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (iVar15 < 0) {
LAB_1801c72b0:
    iVar12 = iVar15;
  }
  else {
    if (((iVar14 != iVar13 || iVar12 != iVar6) && bVar1) && bVar2) {
      iVar15 = iVar7;
    }
    if (((iVar15 < 0) || (!bVar10)) ||
       ((iVar12 = iVar7, param_2 != param_4 &&
        ((uVar18 = FUN_180107328(*(undefined4 *)(param_2 + -0x38)), lVar20 = extraout_x11,
         lVar21 = extraout_x12, (uVar18 & 1) == 0 ||
         (iVar12 = -0x7789f794, extraout_w15_00 == 0x59565955 || extraout_w15_00 == 0x32595559))))))
    goto LAB_1801c72b0;
  }
  lVar4 = param_2;
  if (lVar21 != 0) {
    lVar4 = lVar21;
  }
  iVar14 = *(int *)(lVar4 + 0x20);
  lVar21 = param_4;
  if (lVar20 != 0) {
    lVar21 = lVar20;
  }
  iVar6 = *(int *)(lVar21 + 0x20);
  if (-1 < iVar12) {
    if ((((iVar14 - 3U & 0xfffffffd) == 0) || ((iVar6 - 3U & 0xfffffffd) == 0)) &&
       ((*(uint *)(*(longlong *)(param_1 + 0x60) + 0xd4) & 0x10) == 0)) {
      iVar12 = iVar7;
    }
    if ((-1 < iVar12) &&
       ((((iVar6 - 3U & 0xfffffffd) == 0 && ((*(uint *)(param_4 + -0x30) & 3) == 0)) ||
        ((iVar6 == 1 && (((*(uint *)(param_4 + -0x30) & 3) == 0 && (iVar14 != 1 || bVar10)))))))) {
      iVar12 = -0x7789f794;
    }
  }
  if (bVar8) {
    iVar15 = iVar12;
    if (-1 < iVar12) {
      if (bVar10) {
        iVar15 = iVar7;
      }
      if (-1 < iVar15) {
        iVar13 = thunk_FUN_180223c48(local_b0,&local_150);
        iVar12 = iVar15;
        if (iVar13 == 0) {
          iVar12 = iVar7;
        }
        iVar15 = iVar12;
        if ((-1 < iVar12) &&
           ((((*(char *)(param_1 + 0x5c) != '\0' ||
              ((iVar15 = iVar7, (iVar14 - 3U & 0xfffffffd) != 0 && ((iVar6 - 3U & 0xfffffffd) != 0))
              )) && (iVar15 = iVar7,
                    (*(uint *)(*(longlong *)(param_2 + -0x78) + 0x100) >> 9 & 1) == 0)) &&
            ((*(uint *)(*(longlong *)(param_4 + -0x78) + 0x100) >> 9 & 1) == 0)))) {
          if (*(char *)(param_1 + -0x5b27) != '\0') {
            iVar12 = iVar7;
          }
          goto LAB_1801c73c0;
        }
      }
    }
  }
  else {
LAB_1801c73c0:
    iVar15 = iVar12;
    if ((((-1 < iVar12) &&
         (iVar15 = iVar7, (*(uint *)(*(longlong *)(param_2 + -0x78) + 0x100) >> 0xb & 1) == 0)) &&
        ((*(uint *)(*(longlong *)(param_4 + -0x78) + 0x100) >> 0xb & 1) == 0)) &&
       (iVar15 = iVar12, param_2 == param_4)) {
      iVar15 = -0x7789f7d9;
    }
  }
  if ((-1 < iVar15) && (*(char *)(param_1 + -0x1f) == '\0')) {
    puStack_118 = *(ulonglong **)(param_4 + -0x78);
    bVar10 = bVar10 && param_6 == 2;
    local_120 = *(ulonglong **)(param_2 + -0x78);
    if (((*(int *)(local_120[0xe] + 8) == 2) && (*(int *)(puStack_118[0xe] + 8) != 2)) &&
       ((*(int *)(param_4 + -0x2c) == 2 || (*(int *)(param_4 + -0x2c) == 0)))) {
      FUN_180117130(local_128);
    }
    FUN_180116f60(local_128,local_130);
    local_d8 = (code *)__hybrid_os_arm64x_dispatch_icall;
    if ((*(uint *)(param_4 + -0x30) & 1) != 0) {
      local_90 = *(undefined8 *)(*(longlong *)(param_4 + -0x78) + 0x70);
      local_80 = 0;
      uStack_78 = 0;
      uStack_88 = 0;
      uVar17 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
      (*extraout_x11_00)(uVar17,&local_90,0);
    }
    iVar12 = FUN_180107140(*(undefined4 *)(param_2 + -0x38));
    iVar14 = FUN_1801071f0(extraout_x10 & 0xffffffff);
    local_f0 = 0;
    iVar15 = *(int *)(param_2 + -0x10);
    local_e8 = 0;
    local_c0 = *(undefined8 *)(*(longlong *)(param_2 + -0x78) + 0x70);
    uStack_48 = uStack_138;
    local_50 = local_140;
    iVar7 = *(int *)(param_4 + -0x10);
    uStack_b8 = *(undefined8 *)(*(longlong *)(param_4 + -0x78) + 0x70);
    uStack_108 = 0;
    local_110 = 0;
    local_f8 = 0;
    local_100 = 0;
    uVar11 = *(undefined4 *)((longlong)local_120 + 0x94);
    uVar18 = local_120[0x13];
    local_e0 = (undefined4)puStack_118[0x13];
    uVar17 = *(undefined8 *)(param_1 + -0x59a0);
    local_130 = CONCAT44(local_130._4_4_,*(undefined4 *)((longlong)puStack_118 + 0x94));
    local_e5 = 0x100;
    local_e7 = bVar10;
    local_e6 = bVar10;
    thunk_FUN_180223c20(&local_100,local_150 & 0xffffffff,local_150._4_4_,uStack_148 & 0xffffffff,
                        uStack_148._4_4_);
    thunk_FUN_180223c20(&local_110,local_50 & 0xffffffff,local_50 >> 0x20,uStack_48 & 0xffffffff,
                        uStack_48 >> 0x20);
    if ((iVar15 == iVar7) && (iVar15 - 0xeU < 7)) {
      uVar16 = -iVar12;
      uVar5 = -iVar14;
      local_100 = CONCAT44(uVar5 & local_100._4_4_,uVar16 & (uint)local_100);
      local_f8 = CONCAT44((local_f8._4_4_ + iVar14) - 1U & uVar5,
                          ((int)local_f8 + iVar12) - 1U & uVar16);
      local_110 = CONCAT44(uVar5 & local_110._4_4_,uVar16 & (uint)local_110);
      uStack_108 = CONCAT44((uStack_108._4_4_ + iVar14) - 1U & uVar5,
                            ((int)uStack_108 + iVar12) - 1U & uVar16);
    }
    iVar15 = thunk_FUN_180223d24(&local_100);
    uVar16 = 1;
    if ((iVar15 == 0) && (iVar15 = thunk_FUN_180223d24(&local_110), iVar15 == 0)) {
      (*local_d8)();
      uVar16 = (*extraout_x11_01)(uVar17,local_130 & 0xffffffff,local_e0,uVar11,(int)uVar18,
                                  uStack_b8,local_c0,&local_110);
      uVar16 = uVar16 & 1;
    }
    iVar15 = 0;
    if (uVar16 == 0) {
      iVar15 = -0x7789f7d9;
    }
    if (*(longlong *)(*(longlong *)(param_4 + -0x78) + 0x70) != 0) {
      FUN_18010b470(*(undefined8 *)(param_4 + -0x58),local_128);
    }
    if (uVar16 != 0) {
      if ((((*(int *)(*(longlong *)(param_4 + -0x78) + 0xf0) != 0) &&
           ((*(uint *)(param_4 + -0x30) & 1) != 0)) && (*(uint *)(param_4 + -0x20) < 5)) &&
         (*(uint *)(param_4 + -0x1c) < 5)) {
        uVar17 = (*local_d8)();
        (*extraout_x11_02)(uVar17,(int)puStack_118[0x13],*(undefined4 *)((longlong)local_120 + 0x94)
                          );
      }
      if (*(longlong *)(param_4 + 0x48) != 0) {
        local_d0 = (int)local_140;
        uStack_cc = local_140._4_4_;
        local_c8 = (int)uStack_138;
        uStack_c4 = uStack_138._4_4_;
        lVar20 = *(longlong *)(*(longlong *)(param_4 + 0x48) + 0x48);
        thunk_FUN_180223c70(lVar20 + (ulonglong)*(uint *)(param_4 + -0x14) * 0x10,
                            lVar20 + (ulonglong)*(uint *)(param_4 + -0x14) * 0x10,&local_d0);
      }
    }
  }
LAB_1801c7700:
  if (bVar9) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return iVar15;
}

