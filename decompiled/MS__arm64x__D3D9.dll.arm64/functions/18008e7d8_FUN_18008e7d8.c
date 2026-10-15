/*
 * FUN_18008e7d8 at 18008e7d8
 * undefined FUN_18008e7d8(void)
 * Address ranges: 18008e7d8-18008ee43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008e7d8(float param_1,float param_2,float param_3,float param_4,longlong param_5,
                  ulonglong param_6,ulonglong param_7,longlong param_8,uint param_9)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  longlong *local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  longlong local_198;
  longlong *local_190;
  int local_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int local_170;
  int iStack_16c;
  float local_168;
  float fStack_164;
  float local_160;
  float fStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  int local_148;
  int iStack_144;
  uint local_140;
  undefined8 local_13c;
  undefined4 local_134;
  longlong *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [32];
  uint local_a0;
  
  plVar21 = (longlong *)0x0;
  if (param_8 != 0) {
    plVar21 = (longlong *)(param_8 + -0x100);
  }
  plVar1 = (longlong *)(param_8 + -0x100);
  if (*(int *)(param_8 + 8) == 0) {
    plVar1 = plVar21;
  }
  iVar7 = (int)param_6;
  iVar6 = (int)param_7;
  local_1a8 = param_8;
  local_198 = param_5;
  (**(code **)(*plVar1 + 0xb0))(plVar1,param_6,param_7,0);
  fVar23 = (float)(**(code **)(*plVar1 + 0x58))(plVar1);
  fVar24 = (float)(**(code **)(*plVar1 + 0x60))(plVar1);
  uVar15 = iVar7 + *(int *)((longlong)plVar1 + 0x3c) * iVar6;
  uVar22 = (ulonglong)uVar15;
  cVar11 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if ((((cVar11 == '\0') || (*(int *)((longlong)plVar1 + 0x44) - 3U < 3)) || (plVar1[0x37] == 0)) ||
     (iVar12 = (*__imp_USER32_dll_IsRectEmpty)((uVar22 << 5 | 0x10) + plVar1[0x39]), iVar12 != 0)) {
    local_190 = (longlong *)0x0;
    (**(code **)(*plVar1 + 8))(plVar1,param_6 & 0xffffffff,param_7 & 0xffffffff,0);
    local_1b8 = (longlong *)((longlong)plVar1 + 0x94);
    plVar21 = (longlong *)((longlong)plVar1 + 0x7c);
    local_1a0 = plVar1 + 0x12;
    plVar18 = (longlong *)((longlong)plVar1 + 0x74);
    local_1b0 = plVar1 + 0x15;
  }
  else {
    local_1b8 = plVar1 + 0x3b;
    fVar24 = 1.0;
    plVar21 = plVar1 + 0x38;
    local_1a0 = (longlong *)((longlong)plVar1 + 0x1d4);
    fVar23 = 1.0;
    plVar18 = plVar1 + 0x37;
    local_1b0 = (longlong *)((longlong)plVar1 + 0x1ec);
    local_190 = plVar1;
  }
  iStack_174 = (int)param_2;
  plVar21 = (longlong *)*plVar21;
  local_178 = (int)param_1;
  fVar26 = fVar23 * param_3;
  fVar25 = fVar24 * param_4;
  local_170 = (int)param_3;
  if (param_3 - (float)local_170 != 0.0) {
    local_170 = local_170 + 1;
  }
  iStack_16c = (int)param_4;
  if (param_4 - (float)iStack_16c != 0.0) {
    iStack_16c = iStack_16c + 1;
  }
  if (plVar21 == (longlong *)0x0) {
    plVar21 = (longlong *)*plVar18;
  }
  (**(code **)(*plVar21 + 0x50))(plVar21,auStack_c0);
  lVar20 = local_198;
  if ((local_a0 < 0x39) && ((0x100000a19800a00U >> ((ulonglong)local_a0 & 0x3f) & 1) != 0)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if ((local_a0 < 0x37) && ((0x40020400010404U >> ((ulonglong)local_a0 & 0x3f) & 1) != 0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (*(int *)(local_1a8 + 8) != 0) {
    piVar2 = (int *)&DAT_00000044;
    if (local_1a8 != 0) {
      piVar2 = (int *)(local_1a8 + -0xbc);
    }
    if (*piVar2 - 3U < 3) {
      bVar10 = true;
      goto LAB_18008ea24;
    }
  }
  bVar10 = false;
LAB_18008ea24:
  *(longlong *)(*(longlong *)(*(longlong *)(local_198 + 0x1cf18) + 0x1508) + 0xb88) = local_198;
  lVar17 = *(longlong *)(*(longlong *)(local_198 + 0x1cf18) + 0x1508);
  *(int *)(lVar17 + 0x684) = *(int *)(lVar17 + 0x684) + 1;
  FUN_1800e8910(*(undefined8 *)(*(longlong *)(local_198 + 0x1cf18) + 0x1508),
                *(undefined8 *)(local_198 + 0x1cf28));
  FUN_1800e9780(*(undefined8 *)(*(longlong *)(lVar20 + 0x1cf18) + 0x1508),
                *(undefined8 *)(lVar20 + 0x1cf28));
  uVar16 = 0x10;
  if (!bVar10) {
    uVar16 = 4;
  }
  FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(lVar20 + 0x1cf18) + 0x1508),plVar21,uVar22,0,uVar16);
  iStack_184 = (int)(fVar24 * param_2);
  local_188 = (int)(fVar23 * param_1);
  local_180 = (int)fVar26;
  if (fVar26 - (float)local_180 != 0.0) {
    local_180 = local_180 + 1;
  }
  iStack_17c = (int)fVar25;
  if (fVar25 - (float)iStack_17c != 0.0) {
    iStack_17c = iStack_17c + 1;
  }
  if (bVar10) {
    FUN_1800e7b48(*(undefined8 *)(*(longlong *)(lVar20 + 0x1cf18) + 0x1940),&local_1b0,
                  (int)*local_1b8,uVar22);
    uVar15 = *(uint *)(&DAT_18024a950 + (longlong)*(int *)((longlong)plVar1 + 0x2c) * 0x2c);
    if (uVar15 == 0) {
      fVar23 = 0.0;
    }
    else {
      fVar23 = (float)((double)(uVar15 & param_9) / (double)uVar15);
    }
    cVar11 = (**(code **)(*plVar1 + 0x88))(plVar1);
    uVar15 = 0;
    if (cVar11 == '\0') {
      uVar13 = 1;
    }
    else {
      FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(lVar20 + 0x1cf18) + 0x1508),plVar21,
                    iVar7 + (*(int *)((longlong)plVar1 + 0x34) + iVar6) *
                            *(int *)((longlong)plVar1 + 0x3c),0,0x10);
      uVar15 = 0;
      uVar5 = *(uint *)(&DAT_18024a954 + (longlong)*(int *)((longlong)plVar1 + 0x2c) * 0x2c);
      if (uVar5 != 0) {
        uVar15 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
        uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
        uVar15 = (uVar5 & param_9) >>
                 (ulonglong)((uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10) & 0x1f);
      }
      uVar13 = 3;
    }
    FUN_1800ea5e8(fVar23,*(undefined8 *)(*(longlong *)(lVar20 + 0x1cf18) + 0x1508),local_1b0,uVar13,
                  uVar15,1,&local_188);
  }
  else {
    uVar13 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(lVar20 + 0x1cf18) + 0x1938),&local_1b8,
                           (int)*local_1a0,uVar22);
    iVar12 = *(int *)(local_1a8 + 8);
    if (iVar12 == 0) {
      uVar14 = 0;
    }
    else {
      puVar4 = (undefined8 *)&DAT_00000010;
      if (local_1a8 != 0) {
        puVar4 = (undefined8 *)(local_1a8 + -0xf0);
      }
      uVar14 = *puVar4;
    }
    auVar27 = FUN_1800a05a8(uVar13,*(undefined4 *)((longlong)plVar1 + 0x2c),uVar14,param_9,
                            !bVar8 && !bVar9,auStack_d0);
    lVar17 = local_198;
    if ((auVar27._0_8_ & 1) == 0) {
      lVar3 = 0x1d0a0;
      if (bVar8 || bVar9) {
        lVar3 = 0x1d098;
      }
      if (iVar12 == 0) {
        uVar13 = 0;
      }
      else {
        puVar4 = (undefined8 *)&DAT_00000010;
        if (local_1a8 != 0) {
          puVar4 = (undefined8 *)(local_1a8 + -0xf0);
        }
        uVar13 = *puVar4;
      }
      FUN_1800a0660(local_198,auVar27._8_8_,uVar13,param_9);
      uVar13 = FUN_18008e550(*(longlong *)(lVar20 + 0x1cf18) + 0x1978,&DAT_180232fa0);
      lVar19 = *(longlong *)(lVar20 + 0x1cf18);
      *(undefined8 *)(lVar17 + 0x1cf60) = uVar13;
      uVar13 = FUN_180041d70(lVar19 + 0x19a8,&DAT_180232f68);
      *(undefined8 *)(lVar17 + 0x1cf70) = uVar13;
      local_158 = 0;
      uStack_150 = 0;
      local_13c = 0;
      *(undefined8 *)(lVar17 + 0x1cf80) = *(undefined8 *)(lVar17 + 0x1d120);
      local_134 = 0;
      local_d8 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_168 = fVar23 * param_1;
      fStack_164 = fVar24 * param_2;
      local_160 = fVar26;
      fStack_15c = fVar25;
      local_148 = iVar7;
      iStack_144 = iVar6;
      local_140 = uVar15;
      FUN_1800e7b48(*(undefined8 *)(*(longlong *)(lVar20 + 0x1cf18) + 0x1938),&local_1b8,
                    (int)*local_1a0,uVar22);
      FUN_1800e9fc8(*(undefined8 *)(*(longlong *)(lVar20 + 0x1cf18) + 0x1508),1,&local_1b8,0,0);
      uVar13 = FUN_180042050(*(longlong *)(lVar20 + 0x1cf18) + 0x1960,&DAT_180232f30);
      *(undefined8 *)(lVar17 + 0x1cf78) = uVar13;
      *(undefined4 *)(lVar17 + 0x1cfb4) = 0;
      *(undefined4 *)(lVar17 + 0x1cf90) = 1;
      *(int *)(lVar17 + 0x1cf94) = (int)*local_1b0;
      *(undefined4 *)(lVar17 + 0x1cf98) = 0;
      local_130 = plVar21;
      FUN_18008a130(lVar17,&local_168,*(undefined8 *)(lVar3 + lVar17));
    }
    else {
      FUN_1800ea578(*(undefined8 *)(*(longlong *)(lVar20 + 0x1cf18) + 0x1508),local_1b8,auStack_d0,1
                    ,&local_188);
    }
  }
  if (local_190 == (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,uVar22,&local_178);
  }
  else {
    FUN_1800978b8();
  }
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_6 & 0xffffffff,param_7 & 0xffffffff);
  lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x1cf18) + 0x1508);
  iVar6 = *(int *)(lVar20 + 0x684) + -1;
  *(int *)(lVar20 + 0x684) = iVar6;
  if ((iVar6 == 0) && (*(int *)(lVar20 + 0x680) <= *(int *)(lVar20 + 0x678))) {
    FUN_1800e8548(lVar20 + 8,0);
  }
  return;
}

