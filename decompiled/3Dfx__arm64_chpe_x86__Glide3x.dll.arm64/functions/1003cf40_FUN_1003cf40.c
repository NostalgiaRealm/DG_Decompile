/*
 * FUN_1003cf40 at 1003cf40
 * undefined FUN_1003cf40(void)
 * Address ranges: 1003cf40-1003d40f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1003cf40(int param_1,ushort param_2,ushort param_3,byte param_4,char param_5,
                 undefined4 param_6,byte param_7)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int iVar16;
  byte bVar17;
  uint uVar18;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  undefined4 extraout_w12;
  undefined4 *extraout_w12_00;
  undefined4 *extraout_w13;
  undefined4 *extraout_w14;
  undefined4 *extraout_w15;
  uint uVar19;
  uint uVar20;
  float fVar22;
  undefined4 uVar23;
  float extraout_s17;
  uint uVar21;
  
  uVar4 = 0;
  if ((param_2 & 0xff0) != 0x300) {
    uVar4 = param_2;
  }
  uVar18 = 0;
  if ((uVar4 & 0xff0) == 0x300 || (uVar4 & 0xcf0) != 0) {
    uVar18 = (uint)param_4;
  }
  uVar9 = FUN_1003cc48(param_1,uVar4,param_3,0,0,0,param_5,param_6);
  bVar7 = (param_3 & 0xf0) == 0x70;
  uVar23 = 0xa4;
  if (param_5 != '\a') {
    uVar23 = 0xff;
  }
  uVar15 = 0xe4;
  if (param_5 != '\x0f') {
    uVar15 = uVar23;
  }
  cVar8 = FUN_1003cbc0(param_1,param_3,uVar15);
  FUN_1003c500(param_1,param_3,param_5);
  FUN_1003c690(param_1,0,(short)uVar9,cVar8,0,0);
  piVar1 = (int *)(param_1 + 0x154);
  uVar11 = ZEXT48(piVar1);
  piVar2 = (int *)(param_1 + 0x134);
  uVar10 = ZEXT48(piVar2);
  uVar5 = 0;
  if ((uVar9 & 0xff0) != 0x100) {
    uVar5 = uVar9 & 0xf00;
  }
  uVar3 = *piVar1 + *piVar2 + 1;
  uVar19 = 1;
  uVar20 = uVar9 & 0xffff;
  uVar21 = uVar9 & 0xffff;
  if ((uVar5 - 0x300 & 0xfffffdff) == 0) {
    bVar17 = 1;
LAB_1003d1d0:
    if (((uVar9 & 0x2000) == 0) || (bVar17 == 0)) {
      uVar12 = ZEXT48((undefined4 *)(param_1 + 0x174U));
      puVar14 = (undefined4 *)(param_1 + 0x178);
      if (uVar18 == 0) {
        uVar23 = FUN_100399d0(uVar20);
        *extraout_w15 = uVar23;
        bVar7 = cVar8 == -1;
        iVar16 = 5;
        if (bVar7) {
          iVar16 = 2;
        }
        *extraout_w14 = uVar23;
        *(int *)uVar12 = iVar16;
        uVar15 = 0x4000;
        if (bVar7) {
          uVar15 = 0x4001;
        }
        *extraout_w13 = uVar23;
        *extraout_w12_00 = uVar23;
        uVar23 = 0x4006;
        if (bVar7) {
          uVar23 = uVar15;
        }
        piVar13 = (int *)0x0;
        *puVar14 = uVar23;
        uVar18 = extraout_w10_01 + iVar16;
        uVar9 = ~uVar21 & 0x2000;
      }
      else {
        fVar22 = (float)(1 << (ulonglong)(uVar18 & 0x1f));
        bVar7 = cVar8 == -1;
        uVar23 = 5;
        if (bVar7) {
          uVar23 = 2;
        }
        *(undefined4 *)(param_1 + 0x174U) = uVar23;
        uVar23 = 0x4000;
        if (bVar7) {
          uVar23 = 0x4001;
        }
        uVar15 = 0x4006;
        if (bVar7) {
          uVar15 = uVar23;
        }
        *puVar14 = uVar15;
        *(float *)(param_1 + 0x188) = fVar22;
        *(float *)(param_1 + 0x184) = fVar22;
        *(float *)(param_1 + 0x180) = fVar22;
        *(float *)(param_1 + 0x17c) = fVar22;
        fVar22 = (float)FUN_100399d0(uVar20);
        piVar13 = (int *)(param_1 + 0x194);
        fVar22 = fVar22 * extraout_s17;
        *piVar13 = extraout_w11_00;
        *(undefined4 *)(param_1 + 0x198) = uVar15;
        *(float *)(param_1 + 0x1a8) = fVar22;
        *(float *)(param_1 + 0x1a4) = fVar22;
        *(float *)(param_1 + 0x1a0) = fVar22;
        *(float *)(param_1 + 0x19c) = fVar22;
        uVar18 = extraout_w10_00 + extraout_w11_00 + *(int *)uVar12;
        uVar9 = 0x2032;
      }
      uVar9 = (uVar18 & 0x7f) << 0x18 | uVar9;
      uVar10 = uVar10 & 0xffffffff;
      uVar11 = uVar11 & 0xffffffff;
      uVar12 = uVar12 & 0xffffffff;
LAB_1003d3c8:
      FUN_10073878(param_6,uVar9,uVar10,uVar11,uVar12,piVar13);
      uVar19 = ~(uVar21 >> 0xd) & 1;
      goto LAB_1003d3d8;
    }
    bVar7 = cVar8 == -1;
    uVar23 = 5;
    if (bVar7) {
      uVar23 = 2;
    }
    uVar15 = 0x4000;
    if (bVar7) {
      uVar15 = 0x4001;
    }
    uVar12 = ZEXT48((undefined4 *)(param_1 + 0x174U));
    uVar6 = 0x4006;
    if (bVar7) {
      uVar6 = uVar15;
    }
    *(undefined4 *)(param_1 + 0x174U) = uVar23;
    *(undefined4 *)(param_1 + 0x178) = uVar6;
    *(undefined4 *)(param_1 + 0x188) = 0x3b808081;
    *(undefined4 *)(param_1 + 0x184) = 0x3b808081;
    *(undefined4 *)(param_1 + 0x180) = 0x3b808081;
    *(undefined4 *)(param_1 + 0x17c) = 0x3b808081;
    fVar22 = (float)FUN_100399d0(uVar20);
    piVar13 = (int *)(param_1 + 0x194);
    *piVar13 = extraout_w11;
    fVar22 = fVar22 / 255.0;
    *(undefined4 *)(param_1 + 0x198) = extraout_w12;
    *(float *)(param_1 + 0x1a8) = fVar22;
    *(float *)(param_1 + 0x1a4) = fVar22;
    *(float *)(param_1 + 0x1a0) = fVar22;
    *(float *)(param_1 + 0x19c) = fVar22;
    uVar3 = extraout_w10 + extraout_w11 + *(int *)uVar12;
    uVar18 = 0x2032;
LAB_1003d28c:
    uVar18 = (uVar3 & 0x7f) << 0x18 | uVar18;
    uVar12 = uVar12 & 0xffffffff;
    uVar10 = uVar10 & 0xffffffff;
LAB_1003d29c:
    uVar11 = uVar11 & 0xffffffff;
  }
  else {
    bVar17 = param_7 | (bVar7 || uVar18 != 0);
    if (uVar5 != 0) {
      if (uVar5 != 0x100) goto LAB_1003d3d8;
      goto LAB_1003d1d0;
    }
    if (((uVar9 & 0x2000) != 0) && (param_7 != 0 || (bVar7 || uVar18 != 0))) {
      bVar7 = cVar8 == -1;
      iVar16 = 5;
      if (bVar7) {
        iVar16 = 2;
      }
      uVar23 = 0x4000;
      if (bVar7) {
        uVar23 = 0x4001;
      }
      uVar12 = ZEXT48((int *)(param_1 + 0x174U));
      uVar15 = 0x4006;
      if (bVar7) {
        uVar15 = uVar23;
      }
      *(int *)(param_1 + 0x174U) = iVar16;
      piVar13 = (int *)0x0;
      fVar22 = (float)(1 << (ulonglong)(uVar18 & 0x1f)) / 255.0;
      *(undefined4 *)(param_1 + 0x178) = uVar15;
      *(float *)(param_1 + 0x188) = fVar22;
      *(float *)(param_1 + 0x184) = fVar22;
      *(float *)(param_1 + 0x180) = fVar22;
      *(float *)(param_1 + 0x17c) = fVar22;
      uVar3 = uVar3 + iVar16;
      uVar18 = 0x2038;
      goto LAB_1003d28c;
    }
    piVar13 = (int *)0x0;
    uVar10 = ZEXT48(piVar2);
    if (uVar18 == 1) {
      uVar18 = (uVar3 + *piVar1 & 0x7f) << 0x18 | 0x2000;
      uVar12 = ZEXT48(piVar1);
      goto LAB_1003d29c;
    }
    uVar11 = ZEXT48(piVar1);
    if (uVar18 != 2) {
      uVar9 = (uVar3 & 0x7f) << 0x18 | 0x36;
      uVar12 = 0;
      goto LAB_1003d3c8;
    }
    bVar7 = cVar8 == -1;
    iVar16 = 5;
    if (bVar7) {
      iVar16 = 2;
    }
    uVar23 = 0x4000;
    if (bVar7) {
      uVar23 = 0x4001;
    }
    uVar15 = 0x4006;
    if (bVar7) {
      uVar15 = uVar23;
    }
    *(int *)(param_1 + 0x174U) = iVar16;
    *(undefined4 *)(param_1 + 0x178) = uVar15;
    *(undefined4 *)(param_1 + 0x188) = 0x40800000;
    *(undefined4 *)(param_1 + 0x184) = 0x40800000;
    *(undefined4 *)(param_1 + 0x180) = 0x40800000;
    *(undefined4 *)(param_1 + 0x17c) = 0x40800000;
    uVar18 = (uVar3 + iVar16 & 0x7f) << 0x18 | 0x2038;
    uVar12 = ZEXT48((int *)(param_1 + 0x174U));
  }
  FUN_10073878(param_6,uVar18,uVar10,uVar11,uVar12,piVar13);
LAB_1003d3d8:
  if (uVar21 != param_2 && uVar21 != param_3) {
    FUN_1003cb80(param_1,uVar21);
  }
  return uVar19;
}

