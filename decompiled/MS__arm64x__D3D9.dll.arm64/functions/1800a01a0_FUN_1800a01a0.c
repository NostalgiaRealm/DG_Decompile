/*
 * FUN_1800a01a0 at 1800a01a0
 * undefined FUN_1800a01a0(void)
 * Address ranges: 1800a01a0-1800a047f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a01a0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong extraout_x15;
  uint uVar20;
  undefined1 auVar21 [12];
  
  auVar21 = FUN_180001640();
  plVar13 = auVar21._0_8_;
  lVar12 = extraout_x15 * -0x10;
  lVar19 = (longlong)param_3 * 0x2c;
  uVar6 = *(uint *)(&DAT_18024a950 + lVar19);
  cVar8 = (&DAT_18024a966)[lVar19];
  uVar3 = *(uint *)(&DAT_18024a954 + lVar19);
  uVar4 = *(uint *)(&DAT_18024a958 + lVar19);
  uVar17 = 0;
  uVar5 = *(uint *)(&DAT_18024a95c + lVar19);
  uVar11 = -(int)cVar8;
  uVar18 = (uint)cVar8;
  if (param_4 == 0) {
    bVar7 = (&DAT_18024a968)[lVar19];
    cVar9 = (&DAT_18024a967)[lVar19];
    do {
      uVar1 = uVar5 & uVar17;
      if (param_3 == 8) {
        uVar20 = 0;
        uVar16 = 0;
        uVar14 = 0;
      }
      else {
        cVar10 = (&DAT_18024a960)[lVar19];
        uVar20 = uVar6 & uVar17;
        uVar16 = uVar3 & uVar17;
        uVar15 = uVar4 & uVar17;
        uVar14 = uVar20 << (ulonglong)(-(int)cVar10 & 0x1f);
        if (-1 < cVar10) {
          uVar14 = uVar20 >> (ulonglong)((int)cVar10 & 0x1f);
        }
        cVar10 = (&DAT_18024a964)[lVar19];
        uVar14 = uVar20 >> (ulonglong)((int)(char)(&DAT_18024a961)[lVar19] & 0x1f) | uVar14;
        uVar16 = uVar16 >> (ulonglong)((int)(char)(&DAT_18024a963)[lVar19] & 0x1f) |
                 uVar16 >> (ulonglong)((int)(char)(&DAT_18024a962)[lVar19] & 0x1f);
        uVar20 = uVar15 << (ulonglong)(-(int)cVar10 & 0x1f);
        if (-1 < cVar10) {
          uVar20 = uVar15 >> (ulonglong)((int)cVar10 & 0x1f);
        }
        uVar20 = uVar15 >> (ulonglong)((int)(char)(&DAT_18024a965)[lVar19] & 0x1f) | uVar20;
      }
      uVar15 = 0x7f;
      if (param_3 == 10) {
        uVar20 = uVar15;
      }
      uVar2 = uVar1 << (ulonglong)(uVar11 & 0x1f);
      if (-1 < (int)uVar18) {
        uVar2 = uVar1 >> (ulonglong)((int)cVar8 & 0x1f);
      }
      if (bVar7 == 0) {
        if ((&DAT_18024a969)[lVar19] == '\0') {
          uVar15 = 0xff;
        }
      }
      else {
        uVar15 = (uVar1 >> (ulonglong)((int)cVar9 & 0x1f) | uVar2) * (uint)bVar7;
      }
      *(uint *)(&stack0xffffffffffffffc0 + (ulonglong)uVar17 * 4 + lVar12) =
           uVar14 | (uVar16 | (uVar20 | uVar15 << 8) << 8) << 8;
      uVar1 = uVar17 * 4;
      uVar17 = uVar17 + 1;
      *(float *)(&stack0x000003c0 + (ulonglong)uVar1 * 4 + lVar12) = (float)uVar14;
      *(float *)(&stack0x000003c0 + (ulonglong)(uVar1 + 1) * 4 + lVar12) = (float)uVar16;
      *(float *)(&stack0x000003c0 + (ulonglong)(uVar1 + 2) * 4 + lVar12) = (float)uVar20;
      *(float *)(&stack0x000003c0 + (ulonglong)(uVar1 + 3) * 4 + lVar12) = (float)uVar15;
    } while (uVar17 < 0x100);
  }
  else {
    cVar8 = (&DAT_18024a967)[lVar19];
    bVar7 = (&DAT_18024a968)[lVar19];
    do {
      uVar14 = uVar17 << (ulonglong)(param_4 & 0x1f);
      uVar1 = uVar5 & uVar14;
      if (param_3 == 8) {
        uVar20 = 0;
        uVar16 = 0;
        uVar15 = 0;
      }
      else {
        cVar9 = (&DAT_18024a960)[lVar19];
        uVar16 = uVar6 & uVar14;
        uVar15 = uVar3 & uVar14;
        uVar14 = uVar4 & uVar14;
        uVar20 = uVar16 << (ulonglong)(-(int)cVar9 & 0x1f);
        if (-1 < cVar9) {
          uVar20 = uVar16 >> (ulonglong)((int)cVar9 & 0x1f);
        }
        cVar9 = (&DAT_18024a964)[lVar19];
        uVar20 = uVar16 >> (ulonglong)((int)(char)(&DAT_18024a961)[lVar19] & 0x1f) | uVar20;
        uVar15 = uVar15 >> (ulonglong)((int)(char)(&DAT_18024a963)[lVar19] & 0x1f) |
                 uVar15 >> (ulonglong)((int)(char)(&DAT_18024a962)[lVar19] & 0x1f);
        uVar16 = uVar14 << (ulonglong)(-(int)cVar9 & 0x1f);
        if (-1 < cVar9) {
          uVar16 = uVar14 >> (ulonglong)((int)cVar9 & 0x1f);
        }
        uVar16 = uVar14 >> (ulonglong)((int)(char)(&DAT_18024a965)[lVar19] & 0x1f) | uVar16;
      }
      uVar14 = uVar1 << (ulonglong)(uVar11 & 0x1f);
      if (-1 < (int)uVar18) {
        uVar14 = uVar1 >> (ulonglong)(uVar18 & 0x1f);
      }
      uVar14 = (uVar1 >> (ulonglong)((int)cVar8 & 0x1f) | uVar14) * (uint)bVar7;
      *(uint *)(&stack0xffffffffffffffc0 + (ulonglong)uVar17 * 4 + lVar12) =
           uVar20 | (uVar15 | (uVar16 | uVar14 * 0x100) << 8) << 8;
      uVar1 = uVar17 * 4;
      *(float *)(&stack0x000003c0 + (ulonglong)uVar1 * 4 + lVar12) = (float)uVar20;
      uVar17 = uVar17 + 1;
      *(float *)(&stack0x000003c0 + (ulonglong)(uVar1 + 1) * 4 + lVar12) = (float)uVar15;
      *(float *)(&stack0x000003c0 + (ulonglong)(uVar1 + 2) * 4 + lVar12) = (float)uVar16;
      *(float *)(&stack0x000003c0 + (ulonglong)(uVar1 + 3) * 4 + lVar12) = (float)uVar14;
    } while (uVar17 < 0x100);
  }
  thunk_FUN_180001218((longlong)plVar13 + (ulonglong)(uint)(auVar21._8_4_ << 8) * 4 + 0xb0,
                      &stack0xffffffffffffffc0 + lVar12,0x400);
  (**(code **)(*plVar13 + 0x158))(plVar13,auVar21._8_4_,&stack0x000003c0 + lVar12,1);
  return;
}

