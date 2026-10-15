/*
 * FUN_18016f798 at 18016f798
 * undefined FUN_18016f798(void)
 * Address ranges: 18016f798-18016fd17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016f798(undefined8 param_1,uint *param_2,longlong param_3,char param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong extraout_x11;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  undefined8 extraout_x12_01;
  longlong extraout_x12_02;
  longlong extraout_x12_03;
  int extraout_w15;
  longlong lVar21;
  longlong extraout_x15;
  ulonglong extraout_x15_00;
  longlong extraout_x15_01;
  longlong extraout_x15_02;
  longlong extraout_x15_03;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint local_50;
  uint local_4c;
  uint local_48;
  
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
  uVar22 = 0;
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
    if ((param_2[uVar22] & 0x1f) < 2) break;
    FUN_18016f038(param_1,param_2,uVar22,param_3,0);
    FUN_18016f038(param_1,param_2,uVar22,param_3,1);
    uVar9 = (int)uVar22 + 1;
    uVar22 = (ulonglong)uVar9;
  } while (uVar9 < 8);
  uVar10 = 0x10;
  if (param_4 != '\0' && (int)uVar22 == 1) {
    uVar9 = 0x20;
    if ((*param_2 & 0x70000000) != 0x50000000) {
      uVar9 = 0x10;
    }
    uVar10 = (ulonglong)uVar9;
  }
  uVar15 = (uint)uVar10;
  uVar8 = 0;
  local_50 = 0;
  local_4c = 0;
  uVar12 = 0xffffffff;
  uVar20 = 0xffffffff;
  iVar14 = -1;
  uVar7 = 1;
  uVar16 = uVar22;
  uVar9 = 0;
  if ((int)uVar22 != 0) {
    do {
      iVar14 = (int)uVar16;
      uVar9 = iVar14 - 1;
      if ((*(ushort *)(puVar1 + (ulonglong)(iVar14 - 1) * 2) & 0xf0) == uVar15) {
        local_50 = 1 << (ulonglong)(uVar9 & 0x1f);
        uVar12 = (ulonglong)uVar9;
        uVar8 = local_50;
        if (iVar14 != 0) {
          lVar18 = param_3 + 0x108;
          lVar19 = param_3 + 0x10a;
          lVar2 = param_3 + 0x10e;
          lVar13 = param_3 + 0x104;
          local_48 = uVar9;
          do {
            auVar24._8_8_ = param_3;
            auVar24._0_8_ = uVar7;
            uVar9 = (uint)uVar16;
            if (((int)uVar7 << (ulonglong)(uVar9 - 1 & 0x1f) & uVar8) != 0) {
              uVar8 = uVar9 - 1;
              lVar21 = 0;
              do {
                auVar24 = FUN_18016f548(auVar24._0_8_,auVar24._8_8_,
                                        auVar24._8_8_ + (lVar21 + (ulonglong)uVar8 * 8) * 2 + 0x102,
                                        &local_50,&local_4c);
                uVar9 = (uint)uVar16;
                lVar21 = extraout_x15 + 1;
              } while (lVar21 != 3);
              lVar3 = (ulonglong)uVar8 * 0x10;
              lVar21 = auVar24._8_8_ + lVar3;
              if ((*(short *)(lVar21 + 0x108) == 0x90) || (*(short *)(lVar21 + 0x10a) == 0x90)) {
                local_50 = auVar24._0_4_ << (ulonglong)(uVar9 - 2 & 0x1f) | local_50;
              }
              uVar20 = extraout_x12;
              uVar8 = local_50;
              if (((*(short *)(lVar21 + 0x10c) != 0) || (*(short *)(lVar21 + 0x10e) != 0)) &&
                 (((auVar24._0_4_ << (ulonglong)(uVar9 & 0x1f) & local_50) == 0 ||
                  ((lVar4 = (uVar16 & 0xffffffff) * 0x10, *(short *)(lVar18 + lVar4) == 0 &&
                   (*(short *)(lVar19 + lVar4) == 0)))))) {
                *(undefined2 *)(lVar2 + lVar3) = 0;
                *(undefined2 *)(lVar21 + 0x10c) = 0;
                *(undefined2 *)(lVar13 + lVar3) = 0;
              }
            }
            param_3 = auVar24._8_8_;
            uVar7 = auVar24._0_8_;
            uVar16 = (ulonglong)(uVar9 - 1);
          } while (uVar9 - 1 != 0);
          uVar12 = (ulonglong)local_48;
        }
        break;
      }
      uVar16 = (ulonglong)uVar9;
    } while (uVar9 != 0);
    auVar5._8_8_ = param_3;
    auVar5._0_8_ = uVar7;
    auVar23._8_8_ = param_3;
    auVar23._0_8_ = uVar7;
    iVar14 = (int)uVar20;
    uVar15 = (uint)uVar10;
    while( true ) {
      uVar17 = (int)uVar22 - 1;
      uVar11 = (int)uVar7 << (ulonglong)(uVar17 & 0x1f);
      if ((*(ushort *)(param_3 + 0x180 + (ulonglong)uVar17 * 0x10) & 0xf0) == (uVar15 & 0xff))
      break;
      uVar9 = local_4c;
      if ((uVar11 & local_4c) != 0) goto LAB_18016fa10;
      uVar22 = (ulonglong)uVar17;
      if (uVar17 == 0) goto LAB_18016fa60;
    }
    uVar9 = uVar11 | local_4c;
    uVar20 = (ulonglong)((int)uVar22 - 1);
    local_4c = uVar9;
    auVar23 = auVar5;
LAB_18016fa10:
    do {
      uVar16 = (ulonglong)((int)uVar22 - 1);
      if ((auVar23._0_4_ << (ulonglong)((int)uVar22 - 1U & 0x1f) & uVar9) != 0) {
        lVar18 = 0;
        do {
          auVar23 = FUN_18016f548(auVar23._0_8_,auVar23._8_8_,
                                  auVar23._8_8_ + (lVar18 + (uVar16 & 0xffffffff) * 8) * 2 + 0x182,
                                  &local_50,&local_4c);
          lVar18 = lVar18 + 1;
          uVar20 = extraout_x12_00;
          uVar16 = extraout_x15_00;
          uVar9 = local_4c;
        } while (lVar18 != 3);
      }
      param_3 = auVar23._8_8_;
      uVar7 = auVar23._0_8_;
      iVar14 = (int)uVar20;
      uVar15 = (uint)uVar10;
      uVar22 = uVar16 & 0xffffffff;
      uVar8 = local_50;
    } while ((int)uVar16 != 0);
  }
LAB_18016fa60:
  uVar11 = (uint)uVar12;
  if (uVar15 == 0x20) {
    if (uVar11 != 0xffffffff) {
      *(undefined2 *)(param_3 + ((longlong)(int)uVar11 + 0x10) * 0x10) = 0x10;
    }
    if (iVar14 != -1) {
      *(undefined2 *)(param_3 + ((longlong)iVar14 + 0x18) * 0x10) = 0x110;
    }
  }
  uVar22 = 0xffffffff;
  uVar10 = 0;
  do {
    uVar17 = (uint)uVar10;
    uVar15 = (int)uVar7 << (ulonglong)(uVar17 & 0x1f);
    if ((uVar15 & uVar8) == 0) {
      *(undefined2 *)(puVar1 + uVar10 * 2) = 0;
    }
    bVar6 = (uVar15 & uVar9) == 0;
    uVar15 = uVar17;
    if (bVar6) {
      uVar15 = (uint)uVar22;
    }
    uVar22 = (ulonglong)uVar15;
    if (bVar6) {
      *(undefined2 *)(param_3 + 0x180 + uVar10 * 0x10) = 0;
    }
    uVar10 = (ulonglong)(uVar17 + 1);
  } while (uVar17 + 1 < 8);
  uVar7 = FUN_18016f5b0(uVar7,param_3 + 0x100,uVar8,uVar12 & 0xffffffff,
                        param_2[uVar12 & 0xffffffff] & 0x1f,0);
  uVar9 = (uint)uVar22;
  uVar22 = FUN_18016f5b0(uVar7,extraout_x12_01,extraout_x11 & 0xffffffff,uVar22 & 0xffffffff,
                         param_2[uVar22 & 0xffffffff] >> 5 & 0x1f,1);
  if (extraout_w15 != 0) {
    lVar18 = 0;
    do {
      lVar19 = lVar18 * 0x10;
      lVar18 = lVar18 + 1;
      *(undefined2 *)(param_3 + 0x100 + lVar19) = 0;
    } while (lVar18 != 8);
    uVar11 = 0xffffffff;
  }
  if ((uVar22 & 1) != 0) {
    lVar18 = 0;
    do {
      lVar19 = lVar18 * 0x10;
      lVar18 = lVar18 + 1;
      *(undefined2 *)(param_3 + 0x180 + lVar19) = 0;
    } while (lVar18 != 8);
    uVar9 = 0xffffffff;
  }
  if (uVar11 != 0xffffffff) {
    if ((((param_2[uVar11] & 0x1f) == 2) &&
        ((param_2[9] >> (ulonglong)((uVar11 & 7) << 2) & 0xf) == 0)) &&
       (lVar18 = ((longlong)(int)uVar11 + 0x10) * 0x10,
       *(short *)(param_3 + lVar18) == *(short *)(param_3 + (longlong)(int)uVar11 * 0x10 + 0x104)))
    {
      *(undefined2 *)(param_3 + lVar18) = 0;
    }
    if ((((param_2[uVar11] & 0x1f) == 3) &&
        ((param_2[10] >> (ulonglong)((uVar11 & 7) << 2) & 0xf) == 0)) &&
       (lVar18 = ((longlong)(int)uVar11 + 0x10) * 0x10,
       *(short *)(param_3 + lVar18) == *(short *)(param_3 + (longlong)(int)uVar11 * 0x10 + 0x106)))
    {
      *(undefined2 *)(param_3 + lVar18) = 0;
    }
  }
  if (uVar9 != 0xffffffff) {
    if ((((param_2[uVar9] & 0x3e0) - 0x20 & 0xffffffdf) == 0) &&
       (lVar18 = ((longlong)(int)uVar9 + 0x18) * 0x10,
       *(short *)(param_3 + lVar18) == *(short *)(param_3 + (longlong)(int)uVar9 * 0x10 + 0x184))) {
      *(undefined2 *)(param_3 + lVar18) = 0;
    }
    if (((param_2[uVar9] & 0x3e0) == 0x60) &&
       (lVar18 = ((longlong)(int)uVar9 + 0x18) * 0x10,
       *(short *)(param_3 + lVar18) == *(short *)(param_3 + (longlong)(int)uVar9 * 0x10 + 0x186))) {
      *(undefined2 *)(param_3 + lVar18) = 0;
    }
  }
  uVar22 = 0;
  lVar18 = 0;
  do {
    FUN_18016f668(lVar18,param_3,uVar22,*(undefined2 *)(puVar1 + lVar18 * 2));
    auVar24 = FUN_18016f668();
    lVar18 = extraout_x12_02;
    lVar19 = extraout_x15_01;
    if (*(short *)((longlong)puVar1 + extraout_x15_01) != 0) {
      lVar18 = 0;
      do {
        FUN_18016f668();
        lVar18 = lVar18 + 1;
      } while (lVar18 != 3);
      FUN_18016f668();
      auVar24 = FUN_18016f668();
      lVar18 = extraout_x12_03;
      lVar19 = extraout_x15_02;
    }
    iVar14 = (int)uVar22;
    if (*(short *)(lVar18 + lVar19) != 0) {
      do {
        auVar24 = FUN_18016f668();
        iVar14 = (int)uVar22;
      } while (extraout_x15_03 != 2);
    }
    param_3 = auVar24._8_8_;
    uVar22 = (ulonglong)(iVar14 + 1U);
    lVar18 = auVar24._0_8_ + 1;
  } while (iVar14 + 1U < 8);
  return;
}

