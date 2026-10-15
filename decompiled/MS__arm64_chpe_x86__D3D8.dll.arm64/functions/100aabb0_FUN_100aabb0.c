/*
 * FUN_100aabb0 at 100aabb0
 * undefined FUN_100aabb0(void)
 * Address ranges: 100aabb0-100aaf13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100aabb0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

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
  int iVar12;
  int extraout_w1;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  code *extraout_w11;
  uint uVar17;
  uint uVar18;
  longlong extraout_x15;
  undefined4 unaff_w29;
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x20) = unaff_w29;
  iVar12 = FUN_100013c0();
  uVar10 = (ZEXT48(&stack0x00000000) - 0x20) + extraout_x15 * -0x10;
  iVar8 = param_3 * 0x2c;
  uVar15 = 0;
  uVar4 = *(uint *)(&DAT_10136ecc + iVar8);
  uVar16 = (uint)(char)(&DAT_10136ed6)[iVar8];
  iVar9 = (int)uVar10;
  if (param_4 == 0) {
    cVar6 = (&DAT_10136ed7)[iVar8];
    bVar5 = (&DAT_10136ed8)[iVar8];
    do {
      uVar2 = uVar4 & uVar15;
      if (param_3 == 8) {
        uVar17 = 0xff;
        uVar13 = 0xff;
        uVar14 = 0xff;
      }
      else {
        cVar7 = (&DAT_10136ed0)[iVar8];
        uVar17 = *(uint *)(&DAT_10136ec0 + iVar8) & uVar15;
        uVar14 = uVar17 << (ulonglong)(-(int)cVar7 & 0x1f);
        if (-1 < cVar7) {
          uVar14 = uVar17 >> (ulonglong)((int)cVar7 & 0x1f);
        }
        uVar14 = uVar14 | uVar17 >> (ulonglong)((int)(char)(&DAT_10136ed1)[iVar8] & 0x1f);
        uVar18 = *(uint *)(&DAT_10136ec8 + iVar8) & uVar15;
        uVar13 = (*(uint *)(&DAT_10136ec4 + iVar8) & uVar15) >>
                 (ulonglong)((int)(char)(&DAT_10136ed3)[iVar8] & 0x1f) |
                 (*(uint *)(&DAT_10136ec4 + iVar8) & uVar15) >>
                 (ulonglong)((int)(char)(&DAT_10136ed2)[iVar8] & 0x1f);
        cVar7 = (&DAT_10136ed4)[iVar8];
        uVar17 = uVar18 << (ulonglong)(-(int)cVar7 & 0x1f);
        if (-1 < cVar7) {
          uVar17 = uVar18 >> (ulonglong)((int)cVar7 & 0x1f);
        }
        uVar17 = uVar17 | uVar18 >> (ulonglong)((int)(char)(&DAT_10136ed5)[iVar8] & 0x1f);
      }
      uVar18 = 0x7f;
      if (param_3 == 10) {
        uVar17 = uVar18;
      }
      uVar3 = uVar2 << (ulonglong)(-uVar16 & 0x1f);
      if (-1 < (int)uVar16) {
        uVar3 = uVar2 >> (ulonglong)(uVar16 & 0x1f);
      }
      if (bVar5 == 0) {
        if ((&DAT_10136ed9)[iVar8] == '\0') {
          uVar18 = 0xff;
        }
      }
      else {
        uVar18 = (uVar2 >> (ulonglong)((int)cVar6 & 0x1f) | uVar3) * (uint)bVar5;
      }
      *(uint *)(iVar9 + uVar15 * 4) = uVar14 | (uVar13 | (uVar17 | uVar18 << 8) << 8) << 8;
      *(float *)(iVar9 + 0x400 + uVar15 * 0x10) = (float)uVar14;
      *(float *)(iVar9 + 0x404 + uVar15 * 0x10) = (float)uVar13;
      *(float *)(iVar9 + 0x408 + uVar15 * 0x10) = (float)uVar17;
      iVar1 = uVar15 * 0x10;
      uVar15 = uVar15 + 1;
      *(float *)(iVar9 + 0x40c + iVar1) = (float)uVar18;
    } while (uVar15 < 0x100);
  }
  else {
    cVar6 = (&DAT_10136ed7)[iVar8];
    bVar5 = (&DAT_10136ed8)[iVar8];
    do {
      uVar14 = uVar15 << (ulonglong)(param_4 & 0x1f);
      uVar2 = uVar14 & uVar4;
      if (param_3 == 8) {
        uVar17 = 0;
        uVar14 = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = uVar14 & *(uint *)(&DAT_10136ec0 + iVar8);
        uVar18 = *(uint *)(&DAT_10136ec8 + iVar8) & uVar14;
        cVar7 = (&DAT_10136ed0)[iVar8];
        uVar17 = uVar13 << (ulonglong)(-(int)cVar7 & 0x1f);
        if (-1 < cVar7) {
          uVar17 = uVar13 >> (ulonglong)((int)cVar7 & 0x1f);
        }
        uVar17 = uVar17 | uVar13 >> (ulonglong)((int)(char)(&DAT_10136ed1)[iVar8] & 0x1f);
        uVar13 = (*(uint *)(&DAT_10136ec4 + iVar8) & uVar14) >>
                 (ulonglong)((int)(char)(&DAT_10136ed3)[iVar8] & 0x1f) |
                 (*(uint *)(&DAT_10136ec4 + iVar8) & uVar14) >>
                 (ulonglong)((int)(char)(&DAT_10136ed2)[iVar8] & 0x1f);
        cVar7 = (&DAT_10136ed4)[iVar8];
        uVar14 = uVar18 << (ulonglong)(-(int)cVar7 & 0x1f);
        if (-1 < cVar7) {
          uVar14 = uVar18 >> (ulonglong)((int)cVar7 & 0x1f);
        }
        uVar14 = uVar14 | uVar18 >> (ulonglong)((int)(char)(&DAT_10136ed5)[iVar8] & 0x1f);
      }
      uVar18 = uVar2 << (ulonglong)(-uVar16 & 0x1f);
      if (-1 < (int)uVar16) {
        uVar18 = uVar2 >> (ulonglong)(uVar16 & 0x1f);
      }
      uVar2 = (uVar18 | uVar2 >> (ulonglong)((int)cVar6 & 0x1f)) * (uint)bVar5;
      *(float *)(iVar9 + 0x400 + uVar15 * 0x10) = (float)uVar17;
      *(uint *)(iVar9 + uVar15 * 4) = uVar17 | (uVar13 | (uVar14 | uVar2 * 0x100) << 8) << 8;
      *(float *)(iVar9 + 0x404 + uVar15 * 0x10) = (float)uVar13;
      *(float *)(iVar9 + 0x408 + uVar15 * 0x10) = (float)uVar14;
      iVar1 = uVar15 * 0x10;
      uVar15 = uVar15 + 1;
      *(float *)(iVar9 + 0x40c + iVar1) = (float)uVar2;
    } while (uVar15 < 0x100);
  }
  FUN_100ff660(iVar12 + extraout_w1 * 0x400 + 0x98,uVar10 & 0xffffffff,0x400);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar11 = (*extraout_w11)(iVar12,extraout_w1,iVar9 + 0x400,1);
  return uVar11;
}

