/*
 * FUN_180196740 at 180196740
 * undefined FUN_180196740(void)
 * Address ranges: 180196740-180196f6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_180196740(float param_1,float param_2,float param_3,float param_4,longlong param_5,
             ulonglong param_6,int param_7,longlong param_8,uint param_9)

{
  undefined8 *puVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  uint extraout_w1;
  undefined8 uVar15;
  undefined *puVar16;
  longlong lVar17;
  longlong *plVar18;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  longlong *plVar19;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined8 local_178;
  float local_170;
  float local_16c;
  int local_168;
  undefined4 local_164;
  longlong *local_160;
  int local_158;
  int local_154;
  uint local_150;
  uint local_14c;
  longlong local_148;
  undefined *local_140;
  uint local_138;
  longlong local_130;
  longlong *local_128;
  longlong local_120;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  uint local_98;
  
  local_130 = param_5 + 0x1c000;
  local_148 = param_8;
  FUN_180202728(*(undefined8 *)(param_5 + 0x1cf10),param_6,param_5);
  puVar9 = __hybrid_os_arm64x_dispatch_icall;
  local_164 = 1;
  lVar20 = 0;
  if (local_148 != 0) {
    lVar20 = local_148 + -0xe0;
  }
  lVar2 = local_148 + -0xe0;
  if (*(int *)(local_148 + 8) == 0) {
    lVar2 = lVar20;
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(lVar2,param_6 & 0xffffffff,param_7);
  (*(code *)puVar9)(0x180224000);
  fVar24 = (float)(*extraout_x11_00)(lVar2);
  (*(code *)puVar9)(0x180224000);
  fVar25 = (float)(*extraout_x11_01)(lVar2);
  iVar4 = *(int *)(lVar2 + 0x3c);
  uVar23 = (uint)param_6;
  local_138 = uVar23 + iVar4 * param_7;
  uVar22 = (ulonglong)local_138;
  (*(code *)puVar9)(0x180224000);
  cVar10 = (*extraout_x11_02)(lVar2);
  if ((((cVar10 == '\0') || (*(int *)(lVar2 + 0x44) - 3U < 3)) ||
      (*(longlong *)(lVar2 + 0x198) == 0)) ||
     (iVar11 = thunk_FUN_180223d24(*(longlong *)(lVar2 + 0x1b0) + uVar22 * 0x28 + 0x18), iVar11 != 0
     )) {
    local_120 = 0;
    (*(code *)puVar9)(0x180224000);
    (*extraout_x11_03)(lVar2,param_6 & 0xffffffff,param_7,0);
    local_178 = (longlong *)(lVar2 + 0x90);
    local_160 = (longlong *)(lVar2 + 0x90);
    plVar19 = (longlong *)(lVar2 + 0x80);
    local_128 = (longlong *)(lVar2 + 0x90);
    plVar18 = (longlong *)(lVar2 + 0x78);
  }
  else {
    local_178 = (longlong *)(lVar2 + 0x1b0);
    local_160 = (longlong *)(lVar2 + 0x1b0);
    fVar25 = 1.0;
    fVar24 = 1.0;
    plVar19 = (longlong *)(lVar2 + 0x1a0);
    local_128 = (longlong *)(lVar2 + 0x1b0);
    plVar18 = (longlong *)(lVar2 + 0x198);
    local_120 = lVar2;
  }
  local_158 = (int)param_1;
  lVar20 = *plVar19;
  local_154 = (int)param_2;
  local_150 = (uint)param_3;
  if (param_3 - (float)(int)local_150 != 0.0) {
    local_150 = local_150 + 1;
  }
  local_14c = (uint)param_4;
  if (param_4 - (float)(int)local_14c != 0.0) {
    local_14c = local_14c + 1;
  }
  if (lVar20 == 0) {
    lVar20 = *plVar18;
  }
  (*(code *)puVar9)(0x180224000);
  uVar14 = (*extraout_x11_04)(lVar20,auStack_a8);
  if ((local_98 < 0x39) && ((0x100000a19800a00U >> ((ulonglong)local_98 & 0x3f) & 1) != 0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if ((local_98 < 0x37) && ((0x40020400010404U >> ((ulonglong)local_98 & 0x3f) & 1) != 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  local_168 = *(int *)(local_148 + 8);
  if (local_168 == 0) {
LAB_1801969f4:
    bVar6 = false;
  }
  else {
    piVar3 = (int *)&DAT_00000044;
    if (local_148 != 0) {
      piVar3 = (int *)(local_148 + -0x9c);
    }
    bVar6 = true;
    if (2 < *piVar3 - 3U) goto LAB_1801969f4;
  }
  fVar26 = 0.0;
  local_140 = &DAT_180248440;
  if ((local_158 == 0) && (local_154 == 0)) {
    uVar12 = *(uint *)(lVar2 + 0x24) >> (ulonglong)(uVar23 & 0x1f);
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    if (local_150 != uVar12) goto LAB_180196c70;
    uVar12 = *(uint *)(lVar2 + 0x28) >> (ulonglong)(uVar23 & 0x1f);
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    if (local_14c != uVar12) goto LAB_180196c70;
    if (bVar6) {
      uVar12 = *(uint *)(&DAT_180248440 + (longlong)*(int *)(lVar2 + 0x2c) * 0x2c);
      if (uVar12 != 0) {
        fVar26 = (float)((double)(uVar12 & param_9) / (double)uVar12);
      }
      (*(code *)puVar9)(0x180224000);
      cVar10 = (*extraout_x11_05)(lVar2);
      uVar12 = 0;
      if (cVar10 == '\0') {
        uVar14 = 1;
      }
      else {
        uVar5 = *(uint *)(local_140 + (longlong)*(int *)(lVar2 + 0x2c) * 0x2c + 4);
        if (uVar5 != 0) {
          uVar12 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
          uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
          uVar12 = (uVar5 & param_9) >>
                   (ulonglong)((uint)LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10) & 0x1f);
        }
        uVar14 = 3;
      }
      lVar20 = *(longlong *)(*local_178 + (ulonglong)local_138 * 0x28 + 8);
      if (lVar20 == 0) {
        local_164 = 0;
      }
      else {
        (*(code *)puVar9)(0x180225000,*(undefined8 *)(*(longlong *)(param_5 + 0x1cf18) + 8),lVar20,
                          uVar14,uVar12);
        (*extraout_x11_06)(fVar26);
      }
      goto LAB_180196e04;
    }
    if (local_168 == 0) {
      uVar15 = 0;
    }
    else {
      puVar1 = (undefined8 *)&DAT_00000010;
      if (local_148 != 0) {
        puVar1 = (undefined8 *)(local_148 + -0xd0);
      }
      uVar15 = *puVar1;
    }
    if ((bool)(bVar8 | bVar7)) {
      auVar27 = FUN_1801b7f38(uVar14,*(undefined4 *)(lVar2 + 0x2c),uVar15);
      uVar14 = auVar27._0_8_;
      uVar22 = auVar27._8_8_ & 0xffffffff;
      uVar12 = auVar27._0_4_;
      local_178._0_4_ =
           (float)((uint)(byte)local_140[uVar22 * 0x2c + 0x28] & uVar12 >> 0x18) / 255.0;
      local_178._4_4_ =
           (float)((uint)(byte)local_140[uVar22 * 0x2c + 0x29] & uVar12 >> 0x10) / 255.0;
      local_170 = (float)((uint)(byte)local_140[uVar22 * 0x2c + 0x2a] & uVar12 >> 8) / 255.0;
      local_16c = (float)((byte)local_140[uVar22 * 0x2c + 0x2b] & uVar12) / 255.0;
LAB_180196c20:
      if (*(int *)(*(longlong *)(param_5 + 0x1cf18) + 0x20) != 0x1002) {
        lVar17 = *local_160;
        lVar20 = (ulonglong)local_138 * 5;
        uVar14 = (*(code *)puVar9)(0x180224000);
        (*extraout_x11_07)(uVar14,*(undefined8 *)(lVar17 + lVar20 * 8),&local_178);
        goto LAB_180196e04;
      }
    }
    else {
      local_178._0_4_ = (float)param_9;
      local_16c = 0.0;
      local_178._4_4_ = 0.0;
      local_170 = 0.0;
      if (param_9 == (int)(float)local_178) goto LAB_180196c20;
    }
LAB_180196b94:
    local_178._0_4_ = (float)0x1cfe8;
    if (bVar8 || bVar7) {
      local_178._0_4_ = (float)0x1cfe0;
    }
  }
  else {
LAB_180196c70:
    if (!bVar6) goto LAB_180196b94;
    local_178._0_4_ = (float)0x1cff0;
  }
  local_178._4_4_ = 0.0;
  if (local_168 == 0) {
    uVar15 = 0;
  }
  else {
    puVar1 = (undefined8 *)&DAT_00000010;
    if (local_148 != 0) {
      puVar1 = (undefined8 *)(local_148 + -0xd0);
    }
    uVar15 = *puVar1;
  }
  uVar13 = *(undefined4 *)(lVar2 + 0x2c);
  *(uint *)(param_5 + 0x1ceb0) = param_9;
  uVar13 = FUN_1801b7f38(uVar14,uVar13,uVar15);
  *(undefined4 *)(param_5 + 0x1ceb4) = uVar13;
  uVar12 = *(uint *)(local_140 + (longlong)(int)extraout_w1 * 0x2c);
  if (uVar12 == 0) {
    fVar26 = 0.0;
  }
  else {
    fVar26 = (float)((double)(uVar12 & param_9) / (double)uVar12);
  }
  *(float *)(param_5 + 0x1ce8c) = fVar26;
  *(uint *)(param_5 + 0x1cee0) = (uint)(byte)local_140[(ulonglong)extraout_w1 * 0x2c + 0x28];
  *(uint *)(param_5 + 0x1cee4) = (uint)(byte)local_140[(ulonglong)extraout_w1 * 0x2c + 0x29];
  *(uint *)(param_5 + 0x1cee8) = (uint)(byte)local_140[(ulonglong)extraout_w1 * 0x2c + 0x2a];
  *(uint *)(param_5 + 0x1ceec) = (uint)(byte)local_140[(ulonglong)extraout_w1 * 0x2c + 0x2b];
  FUN_1801fec48(*(undefined8 *)(local_130 + 0xf10),*(undefined4 *)(param_5 + 0x28),&DAT_180238620,0,
                0xffffffff,0);
  FUN_1801ff6a0(*(undefined8 *)(local_130 + 0xf10),*(undefined4 *)(param_5 + 0x28),&DAT_180238798);
  local_118 = fVar24 * param_1;
  fStack_114 = fVar25 * param_2;
  local_108 = 0;
  uStack_100 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_160 = (longlong *)CONCAT44(param_7,uVar23);
  local_c8 = 0;
  uStack_c0 = 0;
  local_110 = fVar24 * param_3;
  fStack_10c = fVar25 * param_4;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_f0 = 0;
  puVar1 = (undefined8 *)(*local_128 + (ulonglong)local_138 * 0x28);
  if (bVar6) {
    uStack_b0 = puVar1[1];
    puVar16 = &DAT_180238728;
    local_b8 = lVar20;
  }
  else {
    uStack_e0 = *puVar1;
    puVar16 = &DAT_1802387c0;
    local_e8 = lVar20;
  }
  local_f8 = local_160;
  FUN_1801ff3a8(*(undefined8 *)(local_130 + 0xf10),*(undefined4 *)(param_5 + 0x28),puVar16,0);
  FUN_180190800(param_5,&local_118,
                *(undefined8 *)(CONCAT44(local_178._4_4_,(float)local_178) + param_5));
LAB_180196e04:
  lVar20 = local_120;
  if (local_120 == 0) {
    (*(code *)puVar9)(0x180224000);
    (*extraout_x11_08)(lVar2,local_138,&local_158);
  }
  else {
    uVar22 = (ulonglong)(uVar23 + iVar4 * param_7);
    uVar23 = uVar23 + iVar4 * param_7;
    uVar21 = (ulonglong)uVar23;
    lVar17 = *(longlong *)(local_120 + 0x1b0) + uVar22 * 0x28;
    thunk_FUN_180223c70(lVar17 + 0x18,lVar17 + 0x18,&local_158);
    lVar17 = *(longlong *)(lVar20 + 0x1f0) + uVar22 * 0x28;
    thunk_FUN_180223c70(lVar17 + 0x18,lVar17 + 0x18,&local_158);
    lVar17 = lVar20 + (ulonglong)(uVar23 >> 6) * 8;
    uVar22 = (ulonglong)(uVar23 >> 3) & 7;
    *(byte *)(lVar17 + 0x250 + uVar22) =
         *(byte *)(lVar17 + 0x250 + uVar22) & ((byte)(1 << (uVar21 & 7)) ^ 0xff);
    uVar22 = (ulonglong)(uVar23 >> 3) & 7;
    *(byte *)(lVar17 + 0x280 + uVar22) =
         *(byte *)(lVar17 + 0x280 + uVar22) & ((byte)(1 << (uVar21 & 7)) ^ 0xff);
    uVar22 = (ulonglong)(uVar23 >> 3) & 7;
    *(byte *)(lVar17 + 0x260 + uVar22) =
         *(byte *)(lVar17 + 0x260 + uVar22) & ((byte)(1 << (uVar21 & 7)) ^ 0xff);
    *(undefined1 *)(lVar20 + 0x16b) = 0;
    uVar22 = (ulonglong)(uVar23 >> 3) & 7;
    *(byte *)(lVar17 + 0x158 + uVar22) =
         *(byte *)(lVar17 + 0x158 + uVar22) & ((byte)(1 << (uVar21 & 7)) ^ 0xff);
  }
  (*(code *)puVar9)(0x180224000);
  (*extraout_x11_09)(lVar2,param_6 & 0xffffffff,param_7);
  thunk_FUN_18022370c(*(longlong *)(local_130 + 0xf10) + 0x620);
  return local_164;
}

