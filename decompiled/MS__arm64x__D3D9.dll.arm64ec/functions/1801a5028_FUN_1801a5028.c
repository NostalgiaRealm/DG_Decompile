/*
 * FUN_1801a5028 at 1801a5028
 * undefined FUN_1801a5028(void)
 * Address ranges: 1801a5028-1801a5747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a5028(float param_1,float param_2,float param_3,float param_4,longlong param_5,
                  int param_6,int param_7,longlong param_8,uint param_9)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined4 uVar15;
  longlong *plVar16;
  longlong lVar17;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  longlong *plVar18;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  longlong lVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined *local_1a0;
  longlong local_198;
  undefined4 *local_190;
  longlong local_188;
  undefined4 *local_180;
  undefined4 *local_178 [2];
  longlong local_168;
  int local_160;
  int iStack_15c;
  int local_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  float local_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined8 local_130;
  undefined8 uStack_128;
  int local_120;
  int iStack_11c;
  uint local_118;
  undefined8 local_114;
  undefined4 local_10c;
  longlong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined1 auStack_a8 [32];
  uint local_88;
  
  puVar8 = __hybrid_os_arm64x_dispatch_icall;
  lVar19 = 0;
  if (param_8 != 0) {
    lVar19 = param_8 + -0x100;
  }
  lVar1 = param_8 + -0x100;
  if (*(int *)(param_8 + 8) == 0) {
    lVar1 = lVar19;
  }
  local_198 = param_5;
  local_188 = param_8;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(lVar1);
  (*(code *)puVar8)(0x180224000);
  fVar21 = (float)(*extraout_x11_00)(lVar1);
  (*(code *)puVar8)(0x180224000);
  fVar22 = (float)(*extraout_x11_01)(lVar1);
  uVar14 = param_6 + *(int *)(lVar1 + 0x3c) * param_7;
  uVar20 = (ulonglong)uVar14;
  (*(code *)puVar8)(0x180224000);
  cVar10 = (*extraout_x11_02)(lVar1);
  if ((((cVar10 == '\0') || (*(int *)(lVar1 + 0x44) - 3U < 3)) ||
      (*(longlong *)(lVar1 + 0x1b8) == 0)) ||
     (iVar11 = thunk_FUN_180223d24((uVar20 << 5 | 0x10) + *(longlong *)(lVar1 + 0x1c8)), iVar11 != 0
     )) {
    local_168 = 0;
    (*(code *)puVar8)(0x180224000);
    (*extraout_x11_03)(lVar1,param_6,param_7,0);
    local_178[0] = (undefined4 *)(lVar1 + 0x94);
    local_180 = (undefined4 *)(lVar1 + 0x90);
    plVar18 = (longlong *)(lVar1 + 0x7c);
    local_190 = (undefined4 *)(lVar1 + 0xa8);
    plVar16 = (longlong *)(lVar1 + 0x74);
  }
  else {
    local_178[0] = (undefined4 *)(lVar1 + 0x1d8);
    local_180 = (undefined4 *)(lVar1 + 0x1d4);
    fVar22 = 1.0;
    fVar21 = 1.0;
    plVar18 = (longlong *)(lVar1 + 0x1c0);
    local_190 = (undefined4 *)(lVar1 + 0x1ec);
    plVar16 = (longlong *)(lVar1 + 0x1b8);
    local_168 = lVar1;
  }
  iStack_14c = (int)param_2;
  lVar19 = *plVar18;
  local_150 = (int)param_1;
  fVar24 = fVar21 * param_3;
  fVar23 = fVar22 * param_4;
  local_148 = (int)param_3;
  if (param_3 - (float)local_148 != 0.0) {
    local_148 = local_148 + 1;
  }
  iStack_144 = (int)param_4;
  if (param_4 - (float)iStack_144 != 0.0) {
    iStack_144 = iStack_144 + 1;
  }
  if (lVar19 == 0) {
    lVar19 = *plVar16;
  }
  (*(code *)puVar8)(0x180224000);
  (*extraout_x11_04)(lVar19,auStack_a8);
  lVar9 = local_198;
  if ((local_88 < 0x39) && ((0x100000a19800a00U >> ((ulonglong)local_88 & 0x3f) & 1) != 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((local_88 < 0x37) && ((0x40020400010404U >> ((ulonglong)local_88 & 0x3f) & 1) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (*(int *)(local_188 + 8) != 0) {
    piVar2 = (int *)&DAT_00000044;
    if (local_188 != 0) {
      piVar2 = (int *)(local_188 + -0xbc);
    }
    if (*piVar2 - 3U < 3) {
      bVar7 = true;
      goto LAB_1801a52c4;
    }
  }
  bVar7 = false;
LAB_1801a52c4:
  *(longlong *)(*(longlong *)(*(longlong *)(local_198 + 0x1cf18) + 0x1508) + 0xb88) = local_198;
  lVar17 = *(longlong *)(*(longlong *)(local_198 + 0x1cf18) + 0x1508);
  *(int *)(lVar17 + 0x684) = *(int *)(lVar17 + 0x684) + 1;
  local_1a0 = (undefined *)(local_198 + 0x1c000);
  FUN_180207a10(*(undefined8 *)(*(longlong *)(local_198 + 0x1cf18) + 0x1508),
                *(undefined8 *)(local_198 + 0x1cf28));
  FUN_180208ae8(*(undefined8 *)(*(longlong *)(lVar9 + 0x1cf18) + 0x1508),
                *(undefined8 *)(local_1a0 + 0xf28));
  uVar15 = 0x10;
  if (!bVar7) {
    uVar15 = 4;
  }
  FUN_180207cd0(*(undefined8 *)(*(longlong *)(lVar9 + 0x1cf18) + 0x1508),lVar19,uVar20,0,uVar15);
  local_160 = (int)(fVar21 * param_1);
  iStack_15c = (int)(fVar22 * param_2);
  local_158 = (int)fVar24;
  if (fVar24 - (float)local_158 != 0.0) {
    local_158 = local_158 + 1;
  }
  iStack_154 = (int)fVar23;
  if (fVar23 - (float)iStack_154 != 0.0) {
    iStack_154 = iStack_154 + 1;
  }
  if (bVar7) {
    FUN_18020d168(*(undefined8 *)(*(longlong *)(lVar9 + 0x1cf18) + 0x1940),&local_190,*local_178[0],
                  uVar20);
    uVar14 = *(uint *)(&DAT_180248440 + (longlong)*(int *)(lVar1 + 0x2c) * 0x2c);
    local_1a0 = &DAT_180248440;
    if (uVar14 == 0) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = (float)((double)(uVar14 & param_9) / (double)uVar14);
    }
    (*(code *)puVar8)(0x180224000);
    cVar10 = (*extraout_x11_05)(lVar1);
    uVar14 = 0;
    if (cVar10 == '\0') {
      uVar12 = 1;
    }
    else {
      FUN_180207cd0(*(undefined8 *)(*(longlong *)(lVar9 + 0x1cf18) + 0x1508),lVar19,
                    param_6 + (*(int *)(lVar1 + 0x34) + param_7) * *(int *)(lVar1 + 0x3c),0,0x10);
      uVar14 = 0;
      uVar4 = *(uint *)(local_1a0 + (longlong)*(int *)(lVar1 + 0x2c) * 0x2c + 4);
      if (uVar4 != 0) {
        uVar14 = (uVar4 & 0xaaaaaaaa) >> 1 | (uVar4 & 0x55555555) << 1;
        uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
        uVar14 = (uVar4 & param_9) >>
                 (ulonglong)((uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10) & 0x1f);
      }
      uVar12 = 3;
    }
    FUN_180209c08(fVar21,*(undefined8 *)(*(longlong *)(lVar9 + 0x1cf18) + 0x1508),local_190,uVar12,
                  uVar14,1,&local_160);
  }
  else {
    uVar12 = FUN_18020d168(*(undefined8 *)(*(longlong *)(lVar9 + 0x1cf18) + 0x1938),&local_1a0,
                           *local_180,uVar20);
    iVar11 = *(int *)(local_188 + 8);
    if (iVar11 == 0) {
      uVar13 = 0;
    }
    else {
      puVar3 = (undefined8 *)&DAT_00000010;
      if (local_188 != 0) {
        puVar3 = (undefined8 *)(local_188 + -0xf0);
      }
      uVar13 = *puVar3;
    }
    auVar25 = FUN_1801b86b0(uVar12,*(undefined4 *)(lVar1 + 0x2c),uVar13,param_9,!bVar5 && !bVar6,
                            local_178);
    if ((auVar25._0_8_ & 1) == 0) {
      local_178[0] = (undefined4 *)0x1d0a0;
      if (bVar5 || bVar6) {
        local_178[0] = (undefined4 *)0x1d098;
      }
      if (iVar11 == 0) {
        uVar12 = 0;
      }
      else {
        puVar3 = (undefined8 *)&DAT_00000010;
        if (local_188 != 0) {
          puVar3 = (undefined8 *)(local_188 + -0xf0);
        }
        uVar12 = *puVar3;
      }
      FUN_1801b8768(local_198,auVar25._8_8_,uVar12,param_9);
      uVar12 = FUN_1801a4da0(*(longlong *)(lVar9 + 0x1cf18) + 0x1978,&DAT_180239730);
      lVar17 = *(longlong *)(lVar9 + 0x1cf18);
      *(undefined8 *)(local_198 + 0x1cf60) = uVar12;
      uVar12 = FUN_180150c00(lVar17 + 0x19a8,&DAT_180239700);
      local_130 = 0;
      uStack_128 = 0;
      *(undefined8 *)(local_198 + 0x1cf70) = uVar12;
      local_114 = 0;
      local_10c = 0;
      local_b0 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      *(undefined8 *)(local_198 + 0x1cf80) = *(undefined8 *)(local_198 + 0x1d120);
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_140 = fVar21 * param_1;
      fStack_13c = fVar22 * param_2;
      local_138 = fVar24;
      fStack_134 = fVar23;
      local_120 = param_6;
      iStack_11c = param_7;
      local_118 = uVar14;
      FUN_18020d168(*(undefined8 *)(*(longlong *)(lVar9 + 0x1cf18) + 0x1938),&local_1a0,*local_180,
                    uVar20);
      FUN_1802094f8(*(undefined8 *)(*(longlong *)(lVar9 + 0x1cf18) + 0x1508),1,&local_1a0,0,0);
      uVar12 = FUN_180150ee0(*(longlong *)(lVar9 + 0x1cf18) + 0x1960,&DAT_1802396c8);
      *(undefined8 *)(local_198 + 0x1cf78) = uVar12;
      *(undefined4 *)(local_198 + 0x1cfb4) = 0;
      *(undefined4 *)(local_198 + 0x1cf90) = 1;
      *(undefined4 *)(local_198 + 0x1cf94) = *local_190;
      *(undefined4 *)(local_198 + 0x1cf98) = 0;
      local_108 = lVar19;
      FUN_1801a0580(local_198,&local_140,*(undefined8 *)((longlong)local_178[0] + local_198));
    }
    else {
      FUN_180209b80(*(undefined8 *)(*(longlong *)(lVar9 + 0x1cf18) + 0x1508),local_1a0,local_178,1,
                    &local_160);
    }
  }
  if (local_168 == 0) {
    (*(code *)puVar8)(0x180224000);
    (*extraout_x11_06)(lVar1,uVar20,&local_150);
  }
  else {
    FUN_1801aeba8(local_168,uVar20,&local_150);
  }
  (*(code *)puVar8)(0x180224000);
  (*extraout_x11_07)(lVar1,param_6,param_7);
  lVar19 = *(longlong *)(*(longlong *)(lVar9 + 0x1cf18) + 0x1508);
  iVar11 = *(int *)(lVar19 + 0x684) + -1;
  *(int *)(lVar19 + 0x684) = iVar11;
  if ((iVar11 == 0) && (*(int *)(lVar19 + 0x680) <= *(int *)(lVar19 + 0x678))) {
    FUN_180207560(lVar19 + 8,0);
  }
  return;
}

