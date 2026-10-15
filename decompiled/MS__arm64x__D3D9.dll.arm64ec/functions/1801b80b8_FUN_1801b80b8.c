/*
 * FUN_1801b80b8 at 1801b80b8
 * undefined FUN_1801b80b8(void)
 * Address ranges: 1801b80b8-1801b8367
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b80b8(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

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
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong extraout_x15;
  uint uVar18;
  uint uVar19;
  undefined1 auVar20 [12];
  
  auVar20 = FUN_180104f10();
  lVar12 = extraout_x15 * -0x10;
  lVar17 = (longlong)param_3 * 0x2c;
  uVar6 = *(uint *)(&DAT_180248440 + lVar17);
  cVar8 = (&DAT_180248456)[lVar17];
  uVar3 = *(uint *)(&DAT_180248444 + lVar17);
  uVar4 = *(uint *)(&DAT_180248448 + lVar17);
  uVar15 = 0;
  uVar5 = *(uint *)(&DAT_18024844c + lVar17);
  uVar11 = -(int)cVar8;
  uVar16 = (uint)cVar8;
  if (param_4 == 0) {
    bVar7 = (&DAT_180248458)[lVar17];
    cVar9 = (&DAT_180248457)[lVar17];
    do {
      uVar1 = uVar5 & uVar15;
      if (param_3 == 8) {
        uVar18 = 0;
        uVar19 = 0;
        uVar13 = 0;
      }
      else {
        cVar10 = (&DAT_180248450)[lVar17];
        uVar18 = uVar6 & uVar15;
        uVar19 = uVar3 & uVar15;
        uVar14 = uVar4 & uVar15;
        uVar13 = uVar18 << (ulonglong)(-(int)cVar10 & 0x1f);
        if (-1 < cVar10) {
          uVar13 = uVar18 >> (ulonglong)((int)cVar10 & 0x1f);
        }
        uVar13 = uVar18 >> (ulonglong)((int)(char)(&DAT_180248451)[lVar17] & 0x1f) | uVar13;
        cVar10 = (&DAT_180248454)[lVar17];
        uVar19 = uVar19 >> (ulonglong)((int)(char)(&DAT_180248453)[lVar17] & 0x1f) |
                 uVar19 >> (ulonglong)((int)(char)(&DAT_180248452)[lVar17] & 0x1f);
        uVar18 = uVar14 << (ulonglong)(-(int)cVar10 & 0x1f);
        if (-1 < cVar10) {
          uVar18 = uVar14 >> (ulonglong)((int)cVar10 & 0x1f);
        }
        uVar18 = uVar14 >> (ulonglong)((int)(char)(&DAT_180248455)[lVar17] & 0x1f) | uVar18;
      }
      uVar14 = 0x7f;
      if (param_3 == 10) {
        uVar18 = uVar14;
      }
      uVar2 = uVar1 << (ulonglong)(uVar11 & 0x1f);
      if (-1 < (int)uVar16) {
        uVar2 = uVar1 >> (ulonglong)((int)cVar8 & 0x1f);
      }
      if (bVar7 == 0) {
        if ((&DAT_180248459)[lVar17] == '\0') {
          uVar14 = 0xff;
        }
      }
      else {
        uVar14 = (uVar1 >> (ulonglong)((int)cVar9 & 0x1f) | uVar2) * (uint)bVar7;
      }
      *(uint *)(&stack0xffffffffffffffb0 + (ulonglong)uVar15 * 4 + lVar12) =
           uVar13 | (uVar19 | (uVar18 | uVar14 << 8) << 8) << 8;
      uVar1 = uVar15 * 4;
      uVar15 = uVar15 + 1;
      *(float *)(&stack0x000003b0 + (ulonglong)uVar1 * 4 + lVar12) = (float)uVar13;
      *(float *)(&stack0x000003b0 + (ulonglong)(uVar1 + 1) * 4 + lVar12) = (float)uVar19;
      *(float *)(&stack0x000003b0 + (ulonglong)(uVar1 + 2) * 4 + lVar12) = (float)uVar18;
      *(float *)(&stack0x000003b0 + (ulonglong)(uVar1 + 3) * 4 + lVar12) = (float)uVar14;
    } while (uVar15 < 0x100);
  }
  else {
    cVar8 = (&DAT_180248457)[lVar17];
    bVar7 = (&DAT_180248458)[lVar17];
    do {
      uVar13 = uVar15 << (ulonglong)(param_4 & 0x1f);
      uVar1 = uVar5 & uVar13;
      if (param_3 == 8) {
        uVar18 = 0;
        uVar19 = 0;
        uVar14 = 0;
      }
      else {
        cVar9 = (&DAT_180248450)[lVar17];
        uVar19 = uVar6 & uVar13;
        uVar14 = uVar3 & uVar13;
        uVar13 = uVar4 & uVar13;
        uVar18 = uVar19 << (ulonglong)(-(int)cVar9 & 0x1f);
        if (-1 < cVar9) {
          uVar18 = uVar19 >> (ulonglong)((int)cVar9 & 0x1f);
        }
        uVar18 = uVar19 >> (ulonglong)((int)(char)(&DAT_180248451)[lVar17] & 0x1f) | uVar18;
        cVar9 = (&DAT_180248454)[lVar17];
        uVar14 = uVar14 >> (ulonglong)((int)(char)(&DAT_180248453)[lVar17] & 0x1f) |
                 uVar14 >> (ulonglong)((int)(char)(&DAT_180248452)[lVar17] & 0x1f);
        uVar19 = uVar13 << (ulonglong)(-(int)cVar9 & 0x1f);
        if (-1 < cVar9) {
          uVar19 = uVar13 >> (ulonglong)((int)cVar9 & 0x1f);
        }
        uVar19 = uVar13 >> (ulonglong)((int)(char)(&DAT_180248455)[lVar17] & 0x1f) | uVar19;
      }
      uVar13 = uVar1 << (ulonglong)(uVar11 & 0x1f);
      if (-1 < (int)uVar16) {
        uVar13 = uVar1 >> (ulonglong)(uVar16 & 0x1f);
      }
      uVar13 = (uVar1 >> (ulonglong)((int)cVar8 & 0x1f) | uVar13) * (uint)bVar7;
      *(uint *)(&stack0xffffffffffffffb0 + (ulonglong)uVar15 * 4 + lVar12) =
           uVar18 | (uVar14 | (uVar19 | uVar13 * 0x100) << 8) << 8;
      uVar1 = uVar15 * 4;
      *(float *)(&stack0x000003b0 + (ulonglong)uVar1 * 4 + lVar12) = (float)uVar18;
      uVar15 = uVar15 + 1;
      *(float *)(&stack0x000003b0 + (ulonglong)(uVar1 + 1) * 4 + lVar12) = (float)uVar14;
      *(float *)(&stack0x000003b0 + (ulonglong)(uVar1 + 2) * 4 + lVar12) = (float)uVar19;
      *(float *)(&stack0x000003b0 + (ulonglong)(uVar1 + 3) * 4 + lVar12) = (float)uVar13;
    } while (uVar15 < 0x100);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_180104c48(auVar20._0_8_ + (ulonglong)(uint)(auVar20._8_4_ << 8) * 4 + 0xb0,
                      &stack0xffffffffffffffb0 + lVar12,0x400);
}

