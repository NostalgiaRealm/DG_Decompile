/*
 * FUN_1800ad870 at 1800ad870
 * undefined FUN_1800ad870(void)
 * Address ranges: 1800ad870-1800ae1ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

int FUN_1800ad870(longlong param_1,longlong param_2,ulonglong *param_3,longlong param_4,
                 ulonglong *param_5,uint param_6)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *extraout_x9;
  ulonglong extraout_x10;
  int extraout_w11;
  longlong lVar21;
  longlong extraout_x11;
  int extraout_w12;
  longlong lVar22;
  longlong extraout_x12;
  int extraout_w13;
  ulonglong extraout_x13;
  int extraout_w14;
  longlong lVar23;
  longlong *plVar24;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  ulonglong local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined2 local_f5;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8 [2];
  ulonglong local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  ulonglong local_60;
  ulonglong uStack_58;
  
  iVar5 = -0x7789f794;
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
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar10 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar10 = true;
    iVar12 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar12 == 0) {
      FUN_180003398();
    }
  }
  uVar16 = 1;
  iVar12 = *(int *)(param_2 + -0x38);
  if (((iVar12 - 0x46U < 0xb) && ((0x6abU >> (ulonglong)(iVar12 - 0x46U & 0x1f) & 1) != 0)) ||
     ((iVar12 == 0x36314644 || iVar12 == 0x34324644) || iVar12 == 0x5a544e49)) {
    bVar8 = true;
    iVar15 = iVar5;
    if (iVar12 == *(int *)(param_4 + -0x38)) {
      iVar15 = 0;
    }
  }
  else {
    iVar14 = *(int *)(param_4 + -0x38);
    if (((iVar14 - 0x46U < 0xb) && ((0x6abU >> (ulonglong)(iVar14 - 0x46U & 0x1f) & 1) != 0)) ||
       ((iVar14 == 0x36314644 || iVar14 == 0x34324644) || iVar14 == 0x5a544e49)) goto LAB_1800ae164;
    iVar15 = 0;
    if (iVar12 != iVar14) {
      if (*(int *)(param_1 + -0x59d0) == 2) {
        puVar20 = (undefined8 *)&DAT_180248b80;
      }
      else {
        puVar20 = &DAT_180248e60;
      }
      uVar11 = func_0x000180106a90(puVar20,iVar12);
      func_0x0001801073a0(*extraout_x9,uVar11);
      uVar17 = func_0x000180107328(extraout_x13 & 0xffffffff);
      iVar15 = -0x7789f794;
      if ((((uVar17 & 1) != 0) || (extraout_w12 != 0)) && (extraout_w14 != 0)) {
        iVar15 = 0;
        if (extraout_w11 == 0) {
          iVar15 = -0x7789f796;
        }
      }
    }
    bVar8 = false;
  }
  if (iVar15 < 0) goto LAB_1800ae164;
  local_130 = param_2 - 0x80;
  lVar23 = param_4 + -0x80;
  (*__imp_USER32_dll_SetRect)
            (local_c8,0,0,*(undefined4 *)(param_2 + -0x20),*(undefined4 *)(param_2 + -0x1c));
  (*__imp_USER32_dll_SetRect)
            (local_b8,0,0,*(undefined4 *)(param_4 + -0x20),*(undefined4 *)(param_4 + -0x1c));
  if (param_3 == (ulonglong *)0x0) {
    param_3 = local_c8;
  }
  uStack_148 = param_3[1];
  local_150 = *param_3;
  if (param_5 == (ulonglong *)0x0) {
    param_5 = local_b8;
  }
  uStack_138 = param_5[1];
  local_140 = *param_5;
  (*__imp_USER32_dll_IntersectRect)(auStack_88,&local_150,local_c8);
  (*__imp_USER32_dll_IntersectRect)(auStack_78,&local_140,local_b8);
  if ((int)uStack_148 - (int)local_150 == (int)uStack_138 - (int)local_140) {
    bVar9 = false;
    if (uStack_148._4_4_ - local_150._4_4_ != uStack_138._4_4_ - local_140._4_4_)
    goto LAB_1800adb64;
  }
  else {
LAB_1800adb64:
    bVar9 = true;
  }
  iVar12 = (*__imp_USER32_dll_EqualRect)(auStack_88,&local_150);
  if ((iVar12 == 0) || (iVar12 = (*__imp_USER32_dll_EqualRect)(auStack_78,&local_140), iVar12 == 0))
  {
    iVar15 = iVar5;
  }
  lVar22 = *(longlong *)(param_2 + 0x48);
  bVar1 = false;
  lVar21 = *(longlong *)(param_4 + 0x48);
  bVar2 = false;
  if (lVar22 != 0) {
    bVar1 = (*(uint *)(*(ulonglong *)(lVar22 + 0xb0) + 0x50) & 0x400) != 0 &&
            *(ulonglong *)(lVar22 + 0xb0) != local_130;
  }
  if (lVar21 != 0) {
    bVar2 = (*(uint *)(*(longlong *)(lVar21 + 0xb0) + 0x50) & 0x400) != 0 &&
            *(longlong *)(lVar21 + 0xb0) != lVar23;
  }
  if ((bVar1) || (bVar2)) {
LAB_1800adc58:
    iVar15 = iVar5;
  }
  else if (-1 < iVar15) {
    if ((*(int *)(param_2 + -0x2c) != 0) || (*(int *)(param_4 + -0x2c) != 0)) goto LAB_1800adc58;
    if (param_6 == 0) {
LAB_1800adc10:
      if (param_6 == 1) goto LAB_1800adc18;
    }
    else {
      if (param_6 != 1) {
        if (param_6 != 2) goto LAB_1800adc58;
        goto LAB_1800adc10;
      }
LAB_1800adc18:
      if ((*(uint *)(*(longlong *)(param_1 + 0x60) + 0xf4) & 0x1000100) != 0x1000100) {
        iVar15 = iVar5;
      }
      if (iVar15 < 0) goto LAB_1800adc5c;
    }
    if ((param_6 == 2) &&
       ((*(uint *)(*(longlong *)(param_1 + 0x60) + 0xf4) & 0x2000200) != 0x2000200))
    goto LAB_1800adc58;
  }
LAB_1800adc5c:
  iVar12 = *(int *)(param_2 + -0x28);
  if (iVar12 == 0) {
    iVar14 = *(int *)(param_2 + -0x24);
    if (iVar14 == 0) goto LAB_1800adcac;
LAB_1800adc70:
    bVar1 = true;
  }
  else {
    iVar14 = *(int *)(param_2 + -0x24);
    if (iVar12 != 1 || iVar14 != 0) goto LAB_1800adc70;
LAB_1800adcac:
    iVar14 = *(int *)(param_2 + -0x24);
    bVar1 = false;
  }
  iVar13 = *(int *)(param_4 + -0x28);
  if (((iVar13 == 0) && (iVar18 = 0, *(int *)(param_4 + -0x24) == 0)) ||
     (iVar18 = *(int *)(param_4 + -0x24), iVar13 == 1 && iVar18 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iVar19 = iVar5;
  if (iVar15 < 0) {
LAB_1800add18:
    iVar19 = iVar15;
  }
  else {
    if (((iVar14 != iVar18 || iVar12 != iVar13) && bVar1) && bVar2) {
      iVar15 = iVar5;
    }
    if (((iVar15 < 0) || (!bVar9)) ||
       ((param_2 != param_4 &&
        ((uVar17 = func_0x000180107328(*(undefined4 *)(param_2 + -0x38)), lVar21 = extraout_x11,
         lVar22 = extraout_x12, (uVar17 & 1) == 0 ||
         (extraout_w13 == 0x59565955 || extraout_w13 == 0x32595559)))))) goto LAB_1800add18;
  }
  lVar3 = param_2;
  if (lVar22 != 0) {
    lVar3 = lVar22;
  }
  iVar12 = *(int *)(lVar3 + 0x20);
  lVar22 = param_4;
  if (lVar21 != 0) {
    lVar22 = lVar21;
  }
  iVar14 = *(int *)(lVar22 + 0x20);
  if (-1 < iVar19) {
    if ((((iVar12 - 3U & 0xfffffffd) == 0) || ((iVar14 - 3U & 0xfffffffd) == 0)) &&
       ((*(uint *)(*(longlong *)(param_1 + 0x60) + 0xd4) & 0x10) == 0)) {
      iVar19 = iVar5;
    }
    if ((-1 < iVar19) &&
       ((((iVar14 - 3U & 0xfffffffd) == 0 && ((*(uint *)(param_4 + -0x30) & 3) == 0)) ||
        ((iVar14 == 1 && (((*(uint *)(param_4 + -0x30) & 3) == 0 && (iVar12 != 1 || bVar9)))))))) {
      iVar19 = iVar5;
    }
  }
  if (bVar8) {
    iVar15 = iVar19;
    if (-1 < iVar19) {
      if (bVar9) {
        iVar15 = iVar5;
      }
      if (-1 < iVar15) {
        iVar13 = (*__imp_USER32_dll_EqualRect)(local_c8,&local_150);
        iVar19 = iVar15;
        if (iVar13 == 0) {
          iVar19 = iVar5;
        }
        iVar15 = iVar19;
        if ((-1 < iVar19) &&
           ((((*(char *)(param_1 + 0x5c) != '\0' ||
              ((iVar15 = iVar5, (iVar12 - 3U & 0xfffffffd) != 0 && ((iVar14 - 3U & 0xfffffffd) != 0)
               ))) && (iVar15 = iVar5,
                      (*(uint *)(*(longlong *)(param_2 + -0x78) + 0x100) >> 9 & 1) == 0)) &&
            ((*(uint *)(*(longlong *)(param_4 + -0x78) + 0x100) >> 9 & 1) == 0)))) {
          if (*(char *)(param_1 + -0x5b27) != '\0') {
            iVar19 = iVar5;
          }
          goto LAB_1800ade30;
        }
      }
    }
  }
  else {
LAB_1800ade30:
    iVar15 = iVar19;
    if ((((-1 < iVar19) &&
         (iVar15 = iVar5, (*(uint *)(*(longlong *)(param_2 + -0x78) + 0x100) >> 0xb & 1) == 0)) &&
        ((*(uint *)(*(longlong *)(param_4 + -0x78) + 0x100) >> 0xb & 1) == 0)) &&
       (iVar15 = iVar19, param_2 == param_4)) {
      iVar15 = -0x7789f7d9;
    }
  }
  if ((-1 < iVar15) && (*(char *)(param_1 + -0x1f) == '\0')) {
    lVar21 = *(longlong *)(param_4 + -0x78);
    lVar22 = *(longlong *)(param_2 + -0x78);
    local_f0 = (uint)(bVar9 && param_6 == 2);
    if (((*(int *)(*(longlong *)(lVar22 + 0x70) + 8) == 2) &&
        (*(int *)(*(longlong *)(lVar21 + 0x70) + 8) != 2)) &&
       ((*(int *)(param_4 + -0x2c) == 2 || (*(int *)(param_4 + -0x2c) == 0)))) {
      FUN_18000be00(lVar23);
    }
    FUN_18000bc70(lVar23,local_130);
    if ((*(uint *)(param_4 + -0x30) & 1) != 0) {
      local_a8 = *(undefined8 *)(*(longlong *)(param_4 + -0x78) + 0x70);
      local_98 = 0;
      uStack_90 = 0;
      uStack_a0 = 0;
      (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x80))
                (*(longlong **)(param_1 + -0x6810),&local_a8,0);
    }
    iVar12 = func_0x000180107140(*(undefined4 *)(param_2 + -0x38));
    iVar14 = func_0x0001801071f0(extraout_x10 & 0xffffffff);
    local_100 = 0;
    iVar15 = *(int *)(param_2 + -0x10);
    local_f8 = 0;
    uVar11 = *(undefined4 *)(lVar21 + 0x98);
    local_d8 = *(undefined8 *)(*(longlong *)(param_2 + -0x78) + 0x70);
    local_ec = *(undefined4 *)(lVar22 + 0x94);
    uVar4 = *(undefined4 *)(lVar22 + 0x98);
    local_130 = CONCAT44(local_130._4_4_,*(undefined4 *)(lVar21 + 0x94));
    uStack_58 = uStack_138;
    local_60 = local_140;
    iVar5 = *(int *)(param_4 + -0x10);
    uStack_d0 = *(undefined8 *)(*(longlong *)(param_4 + -0x78) + 0x70);
    plVar24 = *(longlong **)(param_1 + -0x59a0);
    uStack_118 = 0;
    local_120 = 0;
    local_108 = 0;
    local_110 = 0;
    local_f7 = (undefined1)local_f0;
    local_f6 = (undefined1)local_f0;
    local_f5 = 0x100;
    (*__imp_USER32_dll_SetRect)
              (&local_110,local_150 & 0xffffffff,local_150._4_4_,uStack_148 & 0xffffffff,
               uStack_148._4_4_);
    (*__imp_USER32_dll_SetRect)
              (&local_120,local_60 & 0xffffffff,local_60 >> 0x20,uStack_58 & 0xffffffff,
               uStack_58 >> 0x20);
    if ((iVar15 == iVar5) && (iVar15 - 0xeU < 7)) {
      uVar6 = -iVar14;
      uVar7 = -iVar12;
      local_110 = CONCAT44(uVar6 & local_110._4_4_,uVar7 & (uint)local_110);
      local_108 = CONCAT44((local_108._4_4_ + iVar14) - 1U & uVar6,
                           ((int)local_108 + iVar12) - 1U & uVar7);
      local_120 = CONCAT44(uVar6 & local_120._4_4_,uVar7 & (uint)local_120);
      uStack_118 = CONCAT44((uStack_118._4_4_ + iVar14) - 1U & uVar6,
                            ((int)uStack_118 + iVar12) - 1U & uVar7);
    }
    iVar15 = (*__imp_USER32_dll_IsRectEmpty)(&local_110);
    if ((iVar15 == 0) && (iVar15 = (*__imp_USER32_dll_IsRectEmpty)(&local_120), iVar15 == 0)) {
      uVar16 = (**(code **)(*plVar24 + 0x108))
                         (plVar24,local_130 & 0xffffffff,uVar11,local_ec,uVar4,uStack_d0,local_d8,
                          &local_120);
      uVar16 = uVar16 & 1;
    }
    iVar15 = 0;
    if (uVar16 == 0) {
      iVar15 = -0x7789f7d9;
    }
    if (*(longlong *)(*(longlong *)(param_4 + -0x78) + 0x70) != 0) {
      FUN_180005df8(*(undefined8 *)(param_4 + -0x58),lVar23);
    }
    if (uVar16 != 0) {
      if ((((*(int *)(*(longlong *)(param_4 + -0x78) + 0xf0) != 0) &&
           ((*(uint *)(param_4 + -0x30) & 1) != 0)) && (*(uint *)(param_4 + -0x20) < 5)) &&
         (*(uint *)(param_4 + -0x1c) < 5)) {
        plVar24 = *(longlong **)(*(longlong *)(param_4 + -0x78) + 0x70);
        (**(code **)(*plVar24 + 0x68))
                  (plVar24,*(undefined4 *)(lVar21 + 0x98),*(undefined4 *)(lVar22 + 0x94));
      }
      if (*(longlong *)(param_4 + 0x48) != 0) {
        local_e8 = (int)local_140;
        uStack_e4 = local_140._4_4_;
        local_e0 = (int)uStack_138;
        uStack_dc = uStack_138._4_4_;
        lVar23 = *(longlong *)(*(longlong *)(param_4 + 0x48) + 0x48);
        (*__imp_USER32_dll_UnionRect)
                  (lVar23 + (ulonglong)*(uint *)(param_4 + -0x14) * 0x10,
                   lVar23 + (ulonglong)*(uint *)(param_4 + -0x14) * 0x10,&local_e8);
      }
    }
  }
LAB_1800ae164:
  if (bVar10) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return iVar15;
}

