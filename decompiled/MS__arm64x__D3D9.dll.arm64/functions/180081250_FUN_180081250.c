/*
 * FUN_180081250 at 180081250
 * undefined FUN_180081250(void)
 * Address ranges: 180081250-1800819c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_180081250(float param_1,float param_2,float param_3,float param_4,longlong param_5,
             ulonglong param_6,int param_7,longlong param_8,uint param_9)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  uint extraout_w1;
  longlong lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined4 local_184;
  longlong *local_180;
  undefined8 local_178;
  float local_170;
  float local_16c;
  int local_168;
  int local_164;
  uint local_160;
  uint local_15c;
  longlong local_158;
  longlong local_150;
  longlong *local_148;
  longlong *local_140;
  float local_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  uint local_b8;
  
  local_150 = param_5 + 0x1c000;
  local_158 = param_8;
  FUN_1800e5470(*(undefined8 *)(param_5 + 0x1cf10),param_6,param_5);
  local_184 = 1;
  plVar21 = (longlong *)0x0;
  if (local_158 != 0) {
    plVar21 = (longlong *)(local_158 + -0xe0);
  }
  plVar2 = (longlong *)(local_158 + -0xe0);
  if (*(int *)(local_158 + 8) == 0) {
    plVar2 = plVar21;
  }
  (**(code **)(*plVar2 + 0xb0))(plVar2,param_6 & 0xffffffff,param_7);
  fVar24 = (float)(**(code **)(*plVar2 + 0x58))(plVar2);
  fVar25 = (float)(**(code **)(*plVar2 + 0x60))(plVar2);
  iVar4 = *(int *)((longlong)plVar2 + 0x3c);
  uVar23 = (uint)param_6;
  uVar22 = (ulonglong)(uVar23 + iVar4 * param_7);
  cVar11 = (**(code **)(*plVar2 + 0xa8))(plVar2);
  if ((((cVar11 == '\0') || (*(int *)((longlong)plVar2 + 0x44) - 3U < 3)) || (plVar2[0x33] == 0)) ||
     (iVar12 = (*__imp_USER32_dll_IsRectEmpty)(plVar2[0x36] + uVar22 * 0x28 + 0x18), iVar12 != 0)) {
    local_140 = (longlong *)0x0;
    (**(code **)(*plVar2 + 8))(plVar2,param_6 & 0xffffffff,param_7,0);
    local_178 = plVar2 + 0x12;
    local_180 = plVar2 + 0x12;
    plVar21 = plVar2 + 0x10;
    local_148 = plVar2 + 0x12;
    plVar19 = plVar2 + 0xf;
  }
  else {
    local_178 = plVar2 + 0x36;
    local_180 = plVar2 + 0x36;
    fVar25 = 1.0;
    fVar24 = 1.0;
    plVar21 = plVar2 + 0x34;
    local_148 = plVar2 + 0x36;
    plVar19 = plVar2 + 0x33;
    local_140 = plVar2;
  }
  local_168 = (int)param_1;
  plVar21 = (longlong *)*plVar21;
  local_164 = (int)param_2;
  local_160 = (uint)param_3;
  if (param_3 - (float)(int)local_160 != 0.0) {
    local_160 = local_160 + 1;
  }
  local_15c = (uint)param_4;
  if (param_4 - (float)(int)local_15c != 0.0) {
    local_15c = local_15c + 1;
  }
  if (plVar21 == (longlong *)0x0) {
    plVar21 = (longlong *)*plVar19;
  }
  uVar15 = (**(code **)(*plVar21 + 0x50))(plVar21,auStack_c8);
  if ((local_b8 < 0x39) && ((0x100000a19800a00U >> ((ulonglong)local_b8 & 0x3f) & 1) != 0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if ((local_b8 < 0x37) && ((0x40020400010404U >> ((ulonglong)local_b8 & 0x3f) & 1) != 0)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  iVar12 = *(int *)(local_158 + 8);
  if (iVar12 == 0) {
LAB_1800814b4:
    bVar7 = false;
  }
  else {
    piVar3 = (int *)&DAT_00000044;
    if (local_158 != 0) {
      piVar3 = (int *)(local_158 + -0x9c);
    }
    bVar7 = true;
    if (2 < *piVar3 - 3U) goto LAB_1800814b4;
  }
  fVar26 = 0.0;
  if ((local_168 == 0) && (local_164 == 0)) {
    uVar13 = *(uint *)((longlong)plVar2 + 0x24) >> (ulonglong)(uVar23 & 0x1f);
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    if (local_160 != uVar13) goto LAB_1800816ec;
    uVar13 = *(uint *)(plVar2 + 5) >> (ulonglong)(uVar23 & 0x1f);
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    if (local_15c != uVar13) goto LAB_1800816ec;
    if (bVar7) {
      uVar13 = *(uint *)(&DAT_18024a950 + (longlong)*(int *)((longlong)plVar2 + 0x2c) * 0x2c);
      if (uVar13 != 0) {
        fVar26 = (float)((double)(uVar13 & param_9) / (double)uVar13);
      }
      cVar11 = (**(code **)(*plVar2 + 0x88))(plVar2);
      uVar13 = 0;
      if (cVar11 == '\0') {
        uVar15 = 1;
      }
      else {
        uVar5 = *(uint *)(&DAT_18024a954 + (longlong)*(int *)((longlong)plVar2 + 0x2c) * 0x2c);
        if (uVar5 != 0) {
          uVar13 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
          uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
          uVar13 = (uVar5 & param_9) >>
                   (ulonglong)((uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10) & 0x1f);
        }
        uVar15 = 3;
      }
      lVar16 = *(longlong *)(*local_178 + uVar22 * 0x28 + 8);
      if (lVar16 == 0) {
        local_184 = 0;
      }
      else {
        plVar21 = *(longlong **)(*(longlong *)(param_5 + 0x1cf18) + 8);
        (**(code **)(*plVar21 + 0x1a8))(fVar26,plVar21,lVar16,uVar15,uVar13);
      }
      goto LAB_180081864;
    }
    if (iVar12 == 0) {
      uVar17 = 0;
    }
    else {
      puVar1 = (undefined8 *)&DAT_00000010;
      if (local_158 != 0) {
        puVar1 = (undefined8 *)(local_158 + -0xd0);
      }
      uVar17 = *puVar1;
    }
    if ((bool)(bVar8 | bVar9)) {
      auVar27 = FUN_1800a0038(uVar15,*(undefined4 *)((longlong)plVar2 + 0x2c),uVar17,param_9);
      uVar15 = auVar27._0_8_;
      lVar16 = (auVar27._8_8_ & 0xffffffff) * 0x2c;
      uVar13 = auVar27._0_4_;
      local_178._0_4_ = (float)((uint)(byte)(&DAT_18024a978)[lVar16] & uVar13 >> 0x18) / 255.0;
      local_178._4_4_ = (float)((uint)(byte)(&DAT_18024a979)[lVar16] & uVar13 >> 0x10) / 255.0;
      local_170 = (float)((uint)(byte)(&DAT_18024a97a)[lVar16] & uVar13 >> 8) / 255.0;
      local_16c = (float)((byte)(&DAT_18024a97b)[lVar16] & uVar13) / 255.0;
LAB_1800816ac:
      plVar19 = (longlong *)CONCAT44(local_178._4_4_,(float)local_178);
      if (*(int *)(*(longlong *)(param_5 + 0x1cf18) + 0x20) != 0x1002) {
        plVar21 = *(longlong **)(*(longlong *)(param_5 + 0x1cf18) + 8);
        (**(code **)(*plVar21 + 400))
                  (plVar21,*(undefined8 *)(*local_180 + uVar22 * 0x28),&local_178);
        goto LAB_180081864;
      }
    }
    else {
      local_178._0_4_ = (float)param_9;
      local_16c = 0.0;
      local_178._4_4_ = 0.0;
      local_170 = 0.0;
      plVar19 = (longlong *)(ulonglong)(uint)(float)local_178;
      if (param_9 == (int)(float)local_178) goto LAB_1800816ac;
    }
LAB_180081624:
    lVar16 = 0x1cfe8;
    if (bVar8 || bVar9) {
      lVar16 = 0x1cfe0;
    }
  }
  else {
LAB_1800816ec:
    plVar19 = local_178;
    if (!bVar7) goto LAB_180081624;
    lVar16 = 0x1cff0;
  }
  if (iVar12 == 0) {
    uVar17 = 0;
  }
  else {
    puVar1 = (undefined8 *)&DAT_00000010;
    if (local_158 != 0) {
      puVar1 = (undefined8 *)(local_158 + -0xd0);
    }
    uVar17 = *puVar1;
  }
  uVar14 = *(undefined4 *)((longlong)plVar2 + 0x2c);
  *(uint *)(param_5 + 0x1ceb0) = param_9;
  local_178 = plVar19;
  uVar14 = FUN_1800a0038(uVar15,uVar14,uVar17,param_9);
  lVar10 = local_150;
  *(undefined4 *)(param_5 + 0x1ceb4) = uVar14;
  uVar13 = *(uint *)(&DAT_18024a950 + (longlong)(int)extraout_w1 * 0x2c);
  if (uVar13 == 0) {
    fVar26 = 0.0;
  }
  else {
    fVar26 = (float)((double)(uVar13 & param_9) / (double)uVar13);
  }
  lVar6 = (ulonglong)extraout_w1 * 0x2c;
  *(float *)(param_5 + 0x1ce8c) = fVar26;
  *(uint *)(param_5 + 0x1cee0) = (uint)(byte)(&DAT_18024a978)[lVar6];
  *(uint *)(param_5 + 0x1cee4) = (uint)(byte)(&DAT_18024a979)[lVar6];
  *(uint *)(param_5 + 0x1cee8) = (uint)(byte)(&DAT_18024a97a)[lVar6];
  *(uint *)(param_5 + 0x1ceec) = (uint)(byte)(&DAT_18024a97b)[lVar6];
  FUN_1800e1940(*(undefined8 *)(local_150 + 0xf10),*(undefined4 *)(param_5 + 0x28),&DAT_180232c60,0,
                0xffffffff,0);
  puVar18 = &DAT_180232d68;
  FUN_1800e22c0(*(undefined8 *)(lVar10 + 0xf10),*(undefined4 *)(param_5 + 0x28),&DAT_180232dd8);
  local_118 = CONCAT44(param_7,uVar23);
  local_138 = fVar24 * param_1;
  fStack_134 = fVar25 * param_2;
  local_128 = 0;
  uStack_120 = 0;
  local_108 = (longlong *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_110 = 0;
  local_130 = fVar24 * param_3;
  fStack_12c = fVar25 * param_4;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  puVar1 = (undefined8 *)(*local_148 + uVar22 * 0x28);
  if (bVar7) {
    uStack_d0 = puVar1[1];
    local_d8 = plVar21;
  }
  else {
    uStack_100 = *puVar1;
    puVar18 = &DAT_180232e00;
    local_108 = plVar21;
  }
  FUN_1800e1fe8(*(undefined8 *)(local_150 + 0xf10),*(undefined4 *)(param_5 + 0x28),puVar18,0);
  FUN_18007be58(param_5,&local_138,*(undefined8 *)(lVar16 + param_5));
LAB_180081864:
  plVar21 = local_140;
  if (local_140 == (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar22,&local_168);
  }
  else {
    uVar22 = (ulonglong)(uVar23 + iVar4 * param_7);
    uVar23 = uVar23 + iVar4 * param_7;
    uVar20 = (ulonglong)uVar23;
    lVar16 = local_140[0x36] + uVar22 * 0x28;
    (*__imp_USER32_dll_UnionRect)(lVar16 + 0x18,lVar16 + 0x18);
    lVar16 = plVar21[0x3e] + uVar22 * 0x28;
    (*__imp_USER32_dll_UnionRect)(lVar16 + 0x18,lVar16 + 0x18,&local_168);
    uVar13 = uVar23 >> 6;
    lVar16 = (ulonglong)uVar13 * 8 + 0x250;
    uVar22 = (ulonglong)(uVar23 >> 3) & 7;
    *(byte *)((longlong)plVar21 + uVar22 + lVar16) =
         *(byte *)((longlong)plVar21 + uVar22 + lVar16) & ((byte)(1 << (uVar20 & 7)) ^ 0xff);
    lVar16 = (ulonglong)uVar13 * 8 + 0x280;
    uVar22 = (ulonglong)(uVar23 >> 3) & 7;
    *(byte *)((longlong)plVar21 + uVar22 + lVar16) =
         *(byte *)((longlong)plVar21 + uVar22 + lVar16) & ((byte)(1 << (uVar20 & 7)) ^ 0xff);
    lVar16 = (ulonglong)uVar13 * 8 + 0x260;
    uVar22 = (ulonglong)(uVar23 >> 3) & 7;
    lVar10 = (ulonglong)uVar13 * 8 + 0x158;
    *(byte *)((longlong)plVar21 + uVar22 + lVar16) =
         *(byte *)((longlong)plVar21 + uVar22 + lVar16) & ((byte)(1 << (uVar20 & 7)) ^ 0xff);
    *(undefined1 *)((longlong)plVar21 + 0x16b) = 0;
    uVar22 = (ulonglong)(uVar23 >> 3) & 7;
    *(byte *)((longlong)plVar21 + uVar22 + lVar10) =
         *(byte *)((longlong)plVar21 + uVar22 + lVar10) & ((byte)(1 << (uVar20 & 7)) ^ 0xff);
  }
  (**(code **)(*plVar2 + 0xb8))(plVar2,param_6 & 0xffffffff,param_7);
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(local_150 + 0xf10) + 0x620);
  return local_184;
}

