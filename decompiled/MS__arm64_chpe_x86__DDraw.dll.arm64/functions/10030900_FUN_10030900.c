/*
 * FUN_10030900 at 10030900
 * undefined FUN_10030900(void)
 * Address ranges: 10030900-10030c1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10030900(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  code *extraout_w11;
  uint uVar16;
  uint uVar17;
  longlong extraout_x15;
  undefined4 unaff_w29;
  undefined1 auVar18 [16];
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x20) = unaff_w29;
  auVar18 = FUN_10001280();
  uVar10 = (ZEXT48(&stack0x00000000) - 0x20) + extraout_x15 * -0x10;
  iVar8 = param_3 * 0x2c;
  uVar14 = 0;
  uVar4 = *(uint *)(&DAT_100bb78c + iVar8);
  uVar15 = (uint)(char)(&DAT_100bb796)[iVar8];
  iVar9 = (int)uVar10;
  if (param_4 == 0) {
    cVar6 = (&DAT_100bb797)[iVar8];
    bVar5 = (&DAT_100bb798)[iVar8];
    do {
      uVar2 = uVar4 & uVar14;
      if (param_3 == 8) {
        uVar13 = 0xff;
        uVar12 = 0xff;
        uVar16 = 0xff;
      }
      else {
        cVar7 = (&DAT_100bb790)[iVar8];
        uVar13 = uVar14 & *(uint *)(&DAT_100bb780 + iVar8);
        uVar16 = uVar13 << (ulonglong)(-(int)cVar7 & 0x1f);
        if (-1 < cVar7) {
          uVar16 = uVar13 >> (ulonglong)((int)cVar7 & 0x1f);
        }
        uVar16 = uVar16 | uVar13 >> (ulonglong)((int)(char)(&DAT_100bb791)[iVar8] & 0x1f);
        uVar17 = *(uint *)(&DAT_100bb788 + iVar8) & uVar14;
        uVar12 = (*(uint *)(&DAT_100bb784 + iVar8) & uVar14) >>
                 (ulonglong)((int)(char)(&DAT_100bb793)[iVar8] & 0x1f) |
                 (*(uint *)(&DAT_100bb784 + iVar8) & uVar14) >>
                 (ulonglong)((int)(char)(&DAT_100bb792)[iVar8] & 0x1f);
        cVar7 = (&DAT_100bb794)[iVar8];
        uVar13 = uVar17 << (ulonglong)(-(int)cVar7 & 0x1f);
        if (-1 < cVar7) {
          uVar13 = uVar17 >> (ulonglong)((int)cVar7 & 0x1f);
        }
        uVar13 = uVar13 | uVar17 >> (ulonglong)((int)(char)(&DAT_100bb795)[iVar8] & 0x1f);
      }
      uVar17 = 0x7f;
      if (param_3 == 10) {
        uVar13 = uVar17;
      }
      uVar3 = uVar2 << (ulonglong)(-uVar15 & 0x1f);
      if (-1 < (int)uVar15) {
        uVar3 = uVar2 >> (ulonglong)(uVar15 & 0x1f);
      }
      if (bVar5 == 0) {
        if ((&DAT_100bb799)[iVar8] == '\0') {
          uVar17 = 0xff;
        }
      }
      else {
        uVar17 = (uVar2 >> (ulonglong)((int)cVar6 & 0x1f) | uVar3) * (uint)bVar5;
      }
      *(float *)(iVar9 + uVar14 * 0x10) = (float)uVar16;
      *(float *)(iVar9 + 4 + uVar14 * 0x10) = (float)uVar12;
      *(float *)(iVar9 + 8 + uVar14 * 0x10) = (float)uVar13;
      iVar1 = uVar14 * 0x10;
      uVar14 = uVar14 + 1;
      *(float *)(iVar9 + 0xc + iVar1) = (float)uVar17;
    } while (uVar14 < 0x100);
  }
  else {
    cVar6 = (&DAT_100bb797)[iVar8];
    bVar5 = (&DAT_100bb798)[iVar8];
    do {
      uVar16 = uVar14 << (ulonglong)(param_4 & 0x1f);
      uVar2 = uVar16 & uVar4;
      if (param_3 == 8) {
        uVar13 = 0;
        uVar16 = 0;
        uVar12 = 0;
      }
      else {
        uVar12 = uVar16 & *(uint *)(&DAT_100bb780 + iVar8);
        uVar17 = *(uint *)(&DAT_100bb788 + iVar8) & uVar16;
        cVar7 = (&DAT_100bb790)[iVar8];
        uVar13 = uVar12 << (ulonglong)(-(int)cVar7 & 0x1f);
        if (-1 < cVar7) {
          uVar13 = uVar12 >> (ulonglong)((int)cVar7 & 0x1f);
        }
        uVar13 = uVar13 | uVar12 >> (ulonglong)((int)(char)(&DAT_100bb791)[iVar8] & 0x1f);
        uVar12 = (*(uint *)(&DAT_100bb784 + iVar8) & uVar16) >>
                 (ulonglong)((int)(char)(&DAT_100bb793)[iVar8] & 0x1f) |
                 (*(uint *)(&DAT_100bb784 + iVar8) & uVar16) >>
                 (ulonglong)((int)(char)(&DAT_100bb792)[iVar8] & 0x1f);
        cVar7 = (&DAT_100bb794)[iVar8];
        uVar16 = uVar17 << (ulonglong)(-(int)cVar7 & 0x1f);
        if (-1 < cVar7) {
          uVar16 = uVar17 >> (ulonglong)((int)cVar7 & 0x1f);
        }
        uVar16 = uVar16 | uVar17 >> (ulonglong)((int)(char)(&DAT_100bb795)[iVar8] & 0x1f);
      }
      *(float *)(iVar9 + uVar14 * 0x10) = (float)uVar13;
      *(float *)(iVar9 + 4 + uVar14 * 0x10) = (float)uVar12;
      *(float *)(iVar9 + 8 + uVar14 * 0x10) = (float)uVar16;
      uVar16 = uVar2 << (ulonglong)(-uVar15 & 0x1f);
      if (-1 < (int)uVar15) {
        uVar16 = uVar2 >> (ulonglong)(uVar15 & 0x1f);
      }
      iVar1 = uVar14 * 0x10;
      uVar14 = uVar14 + 1;
      *(float *)(iVar9 + 0xc + iVar1) =
           (float)((uVar16 | uVar2 >> (ulonglong)((int)cVar6 & 0x1f)) * (uint)bVar5);
    } while (uVar14 < 0x100);
  }
  auVar18 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                      (auVar18._0_8_ & 0xffffffff,auVar18._8_8_ & 0xffffffff);
  uVar11 = (*extraout_w11)(auVar18._0_8_ & 0xffffffff,auVar18._8_8_,uVar10 & 0xffffffff,1);
  return uVar11;
}

