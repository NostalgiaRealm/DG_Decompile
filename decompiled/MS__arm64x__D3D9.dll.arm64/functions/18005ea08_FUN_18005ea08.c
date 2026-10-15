/*
 * FUN_18005ea08 at 18005ea08
 * undefined FUN_18005ea08(void)
 * Address ranges: 18005ea08-18005ef6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005ea08(undefined8 param_1,uint *param_2,longlong param_3,char param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong extraout_x11;
  longlong lVar15;
  int iVar16;
  uint extraout_w12;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  ulonglong extraout_x12_01;
  longlong extraout_x12_02;
  longlong extraout_x12_03;
  longlong extraout_x12_04;
  int extraout_w13;
  ulonglong uVar18;
  ulonglong extraout_x13;
  ulonglong extraout_x13_00;
  longlong extraout_x13_01;
  longlong extraout_x14;
  longlong lVar19;
  longlong extraout_x14_00;
  longlong extraout_x15;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint local_40;
  uint local_3c [3];
  ulonglong uVar17;
  
  *(undefined8 *)(param_3 + 0x540) = 0x800030;
  puVar1 = (undefined8 *)(param_3 + 0x100);
  *(undefined4 *)(param_3 + 0x548) = 0x1800130;
  *(undefined8 *)(param_3 + 0x108) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_3 + 0x118) = 0;
  *(undefined8 *)(param_3 + 0x110) = 0;
  *(undefined8 *)(param_3 + 0x128) = 0;
  *(undefined8 *)(param_3 + 0x120) = 0;
  *(undefined8 *)(param_3 + 0x138) = 0;
  *(undefined8 *)(param_3 + 0x130) = 0;
  *(undefined8 *)(param_3 + 0x148) = 0;
  *(undefined8 *)(param_3 + 0x140) = 0;
  *(undefined8 *)(param_3 + 0x158) = 0;
  *(undefined8 *)(param_3 + 0x150) = 0;
  uVar21 = 0;
  *(undefined8 *)(param_3 + 0x168) = 0;
  *(undefined8 *)(param_3 + 0x160) = 0;
  *(undefined8 *)(param_3 + 0x178) = 0;
  *(undefined8 *)(param_3 + 0x170) = 0;
  *(undefined8 *)(param_3 + 0x188) = 0;
  *(undefined8 *)(param_3 + 0x180) = 0;
  *(undefined8 *)(param_3 + 0x198) = 0;
  *(undefined8 *)(param_3 + 400) = 0;
  *(undefined8 *)(param_3 + 0x1a8) = 0;
  *(undefined8 *)(param_3 + 0x1a0) = 0;
  *(undefined8 *)(param_3 + 0x1b8) = 0;
  *(undefined8 *)(param_3 + 0x1b0) = 0;
  *(undefined8 *)(param_3 + 0x1c8) = 0;
  *(undefined8 *)(param_3 + 0x1c0) = 0;
  *(undefined8 *)(param_3 + 0x1d8) = 0;
  *(undefined8 *)(param_3 + 0x1d0) = 0;
  *(undefined8 *)(param_3 + 0x1e8) = 0;
  *(undefined8 *)(param_3 + 0x1e0) = 0;
  *(undefined8 *)(param_3 + 0x1f8) = 0;
  *(undefined8 *)(param_3 + 0x1f0) = 0;
  *(undefined8 *)(param_3 + 0x208) = 0;
  *(undefined8 *)(param_3 + 0x200) = 0;
  *(undefined4 *)(param_3 + 0x210) = 0;
  do {
    *(undefined2 *)(param_3 + 0x54c) = *(undefined2 *)(param_3 + 0x540);
    *(undefined2 *)(param_3 + 0x54e) = *(undefined2 *)(param_3 + 0x542);
    if ((param_2[uVar21] & 0x1f) < 2) break;
    FUN_18005e500(param_1,param_2,uVar21,param_3,0);
    FUN_18005e500(param_1,param_2,uVar21,param_3,1);
    uVar11 = (int)uVar21 + 1;
    uVar21 = (ulonglong)uVar11;
  } while (uVar11 < 8);
  uVar13 = 0x10;
  if (param_4 != '\0' && (int)uVar21 == 1) {
    uVar11 = 0x20;
    if ((*param_2 & 0x70000000) != 0x50000000) {
      uVar11 = 0x10;
    }
    uVar13 = (ulonglong)uVar11;
  }
  uVar12 = (uint)uVar13;
  uVar7 = 0;
  local_40 = 0;
  local_3c[0] = 0;
  uVar10 = 0xffffffff;
  uVar17 = 0xffffffff;
  iVar16 = -1;
  uVar8 = 1;
  iVar6 = 1;
  uVar20 = uVar21;
  uVar11 = 0;
  if ((int)uVar21 != 0) {
    do {
      iVar6 = (int)uVar20;
      uVar11 = iVar6 - 1;
      uVar18 = (ulonglong)uVar11;
      if ((*(ushort *)(puVar1 + (ulonglong)(iVar6 - 1) * 2) & 0xf0) == uVar12) {
        local_40 = 1 << (ulonglong)(uVar11 & 0x1f);
        uVar10 = (ulonglong)uVar11;
        uVar7 = local_40;
        if (iVar6 != 0) {
          lVar19 = param_3 + 0x10a;
          lVar14 = param_3 + 0x104;
          do {
            auVar23._8_8_ = param_3;
            auVar23._0_8_ = uVar20;
            if (((int)uVar8 << (ulonglong)((int)uVar20 - 1U & 0x1f) & uVar7) != 0) {
              uVar20 = (ulonglong)((int)uVar20 - 1);
              lVar15 = 0;
              do {
                auVar23 = func_0x00018016f548(auVar23._0_8_,auVar23._8_8_,
                                              auVar23._8_8_ + (lVar15 + uVar20 * 8) * 2 + 0x102,
                                              &local_40,local_3c);
                lVar15 = lVar15 + 1;
              } while (lVar15 != 3);
              lVar3 = uVar20 * 0x10;
              lVar15 = auVar23._8_8_ + lVar3;
              if ((*(short *)(lVar15 + 0x108) == 0x90) || (*(short *)(lVar15 + 0x10a) == 0x90)) {
                local_40 = (int)uVar8 << (ulonglong)(auVar23._0_4_ - 2 & 0x1f) | local_40;
              }
              uVar17 = extraout_x12;
              uVar18 = extraout_x13;
              uVar7 = local_40;
              if (((*(short *)(lVar15 + 0x10c) != 0) || (*(short *)(lVar15 + 0x10e) != 0)) &&
                 ((((int)uVar8 << (ulonglong)(auVar23._0_4_ & 0x1f) & local_40) == 0 ||
                  ((lVar4 = (auVar23._0_8_ & 0xffffffff) * 0x10,
                   *(short *)(extraout_x15 + lVar4) == 0 && (*(short *)(lVar19 + lVar4) == 0)))))) {
                *(undefined2 *)(extraout_x14 + lVar3) = 0;
                *(undefined2 *)(lVar15 + 0x10c) = 0;
                *(undefined2 *)(lVar14 + lVar3) = 0;
              }
            }
            param_3 = auVar23._8_8_;
            uVar11 = auVar23._0_4_ - 1;
            uVar20 = (ulonglong)uVar11;
          } while (uVar11 != 0);
          uVar10 = uVar18 & 0xffffffff;
          uVar20 = 0;
        }
        break;
      }
      uVar20 = uVar18;
    } while (uVar11 != 0);
    auVar5._8_8_ = param_3;
    auVar5._0_8_ = uVar20;
    auVar22._8_8_ = param_3;
    auVar22._0_8_ = uVar20;
    iVar6 = (int)uVar8;
    iVar16 = (int)uVar17;
    uVar12 = (uint)uVar13;
    while( true ) {
      uVar2 = (int)uVar21 - 1;
      uVar9 = iVar6 << (ulonglong)(uVar2 & 0x1f);
      if ((*(ushort *)(param_3 + 0x180 + (ulonglong)uVar2 * 0x10) & 0xf0) == (uVar12 & 0xff)) break;
      uVar11 = local_3c[0];
      if ((uVar9 & local_3c[0]) != 0) goto LAB_18005ec6c;
      uVar21 = (ulonglong)uVar2;
      if (uVar2 == 0) goto LAB_18005ecbc;
    }
    uVar11 = uVar9 | local_3c[0];
    uVar17 = (ulonglong)((int)uVar21 - 1);
    local_3c[0] = uVar11;
    auVar22 = auVar5;
LAB_18005ec6c:
    do {
      uVar18 = (ulonglong)((int)uVar21 - 1);
      if (((int)uVar8 << (ulonglong)((int)uVar21 - 1U & 0x1f) & uVar11) != 0) {
        lVar19 = 0;
        do {
          auVar22 = func_0x00018016f548(auVar22._0_8_,auVar22._8_8_,
                                        auVar22._8_8_ + (lVar19 + (uVar18 & 0xffffffff) * 8) * 2 +
                                        0x182,&local_40,local_3c);
          lVar19 = extraout_x14_00 + 1;
          uVar17 = extraout_x12_00;
          uVar18 = extraout_x13_00;
          uVar11 = local_3c[0];
        } while (lVar19 != 3);
      }
      param_3 = auVar22._8_8_;
      uVar20 = auVar22._0_8_;
      iVar6 = (int)uVar8;
      iVar16 = (int)uVar17;
      uVar12 = (uint)uVar13;
      uVar21 = uVar18 & 0xffffffff;
      uVar7 = local_40;
    } while ((int)uVar18 != 0);
  }
LAB_18005ecbc:
  uVar9 = (uint)uVar10;
  if (uVar12 == 0x20) {
    if (uVar9 != 0xffffffff) {
      *(undefined2 *)(param_3 + ((longlong)(int)uVar9 + 0x10) * 0x10) = 0x10;
    }
    if (iVar16 != -1) {
      *(undefined2 *)(param_3 + ((longlong)iVar16 + 0x18) * 0x10) = 0x110;
    }
  }
  uVar21 = 0;
  lVar19 = param_3 + 0x180;
  do {
    uVar12 = iVar6 << (ulonglong)((uint)uVar21 & 0x1f);
    if ((uVar12 & uVar7) == 0) {
      *(undefined2 *)(puVar1 + uVar21 * 2) = 0;
    }
    if ((uVar12 & uVar11) == 0) {
      *(undefined2 *)(lVar19 + uVar21 * 0x10) = 0;
    }
    uVar12 = (uint)uVar21 + 1;
    uVar21 = (ulonglong)uVar12;
  } while (uVar12 < 8);
  uVar8 = func_0x00018016f5b0(uVar20,param_3 + 0x100,uVar7,uVar10 & 0xffffffff,
                              param_2[uVar10 & 0xffffffff] & 0x1f,0);
  uVar21 = func_0x00018016f5b0(uVar8,lVar19,extraout_x11 & 0xffffffff,extraout_x12_01 & 0xffffffff,
                               param_2[extraout_x12_01 & 0xffffffff] >> 5 & 0x1f,1);
  if (extraout_w13 != 0) {
    lVar14 = 0;
    do {
      lVar15 = lVar14 * 0x10;
      lVar14 = lVar14 + 1;
      *(undefined2 *)(param_3 + 0x100 + lVar15) = 0;
    } while (lVar14 != 8);
    uVar9 = 0xffffffff;
  }
  uVar11 = extraout_w12;
  if ((uVar21 & 1) != 0) {
    lVar14 = 0;
    do {
      lVar15 = lVar14 * 0x10;
      lVar14 = lVar14 + 1;
      *(undefined2 *)(param_3 + 0x180 + lVar15) = 0;
    } while (lVar14 != 8);
    uVar11 = 0xffffffff;
  }
  if (uVar9 != 0xffffffff) {
    if ((((param_2[uVar9] & 0x1f) == 2) &&
        ((param_2[9] >> (ulonglong)((uVar9 & 7) << 2) & 0xf) == 0)) &&
       (lVar14 = ((longlong)(int)uVar9 + 0x10) * 0x10,
       *(short *)(param_3 + lVar14) == *(short *)(param_3 + (longlong)(int)uVar9 * 0x10 + 0x104))) {
      *(undefined2 *)(param_3 + lVar14) = 0;
    }
    if ((((param_2[uVar9] & 0x1f) == 3) &&
        ((param_2[10] >> (ulonglong)((uVar9 & 7) << 2) & 0xf) == 0)) &&
       (lVar14 = ((longlong)(int)uVar9 + 0x10) * 0x10,
       *(short *)(param_3 + lVar14) == *(short *)(param_3 + (longlong)(int)uVar9 * 0x10 + 0x106))) {
      *(undefined2 *)(param_3 + lVar14) = 0;
    }
  }
  if (uVar11 != 0xffffffff) {
    if ((((param_2[uVar11] & 0x3e0) - 0x20 & 0xffffffdf) == 0) &&
       (lVar14 = ((longlong)(int)uVar11 + 0x18) * 0x10,
       *(short *)(param_3 + lVar14) == *(short *)(param_3 + (longlong)(int)uVar11 * 0x10 + 0x184)))
    {
      *(undefined2 *)(param_3 + lVar14) = 0;
    }
    if (((param_2[uVar11] & 0x3e0) == 0x60) &&
       (lVar14 = ((longlong)(int)uVar11 + 0x18) * 0x10,
       *(short *)(param_3 + lVar14) == *(short *)(param_3 + (longlong)(int)uVar11 * 0x10 + 0x186)))
    {
      *(undefined2 *)(param_3 + lVar14) = 0;
    }
  }
  uVar21 = 0;
  lVar14 = 0;
  do {
    func_0x00018016f668(lVar14,param_3,uVar21,*(undefined2 *)(puVar1 + lVar14 * 2));
    auVar23 = func_0x00018016f668();
    lVar14 = extraout_x12_02;
    if (*(short *)((longlong)puVar1 + extraout_x12_02) != 0) {
      do {
        func_0x00018016f668();
      } while (extraout_x13_01 != 2);
      func_0x00018016f668();
      auVar23 = func_0x00018016f668();
      lVar14 = extraout_x12_03;
    }
    iVar6 = (int)uVar21;
    if (*(short *)(lVar19 + lVar14) != 0) {
      do {
        auVar23 = func_0x00018016f668();
        iVar6 = (int)uVar21;
      } while (extraout_x12_04 != 2);
    }
    param_3 = auVar23._8_8_;
    uVar21 = (ulonglong)(iVar6 + 1U);
    lVar14 = auVar23._0_8_ + 1;
  } while (iVar6 + 1U < 8);
  return;
}

