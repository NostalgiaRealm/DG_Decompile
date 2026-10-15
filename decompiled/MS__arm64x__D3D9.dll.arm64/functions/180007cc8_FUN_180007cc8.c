/*
 * FUN_180007cc8 at 180007cc8
 * undefined FUN_180007cc8(void)
 * Address ranges: 180007cc8-180007e03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180007cc8(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  
  DAT_180258770 = thunk_FUN_180102f80(0x4080);
  uVar5 = DAT_180258770 + 0xfU & 0xfffffffffffffff0;
  DAT_180258778 = uVar5;
  if (uVar5 != 0) {
    uVar18 = 0;
    do {
      uVar15 = (int)uVar18 << 0x10;
      uVar4 = uVar15 & 0xc0000;
      uVar6 = 0xffffffff00000000;
      if (uVar4 != 0) {
        uVar6 = 0;
      }
      uVar2 = uVar15 & 0x30000;
      uVar3 = uVar15 & 0xc00000;
      uVar15 = uVar15 & 0x300000;
      uVar7 = 0xffffffff;
      if (uVar2 != 0) {
        uVar7 = 0;
      }
      uVar8 = 0xffffffff00000000;
      if (uVar3 != 0) {
        uVar8 = 0;
      }
      uVar9 = 0xffffffff;
      if (uVar15 != 0) {
        uVar9 = 0;
      }
      uVar10 = 0xffffffff00000000;
      if (uVar4 != 0x40000) {
        uVar10 = 0;
      }
      lVar16 = uVar18 * 0x40;
      uVar1 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar1;
      uVar11 = 0xffffffff;
      if (uVar2 != 0x10000) {
        uVar11 = 0;
      }
      uVar12 = 0xffffffff00000000;
      if (uVar3 != 0x400000) {
        uVar12 = 0;
      }
      uVar13 = 0xffffffff;
      if (uVar15 != 0x100000) {
        uVar13 = 0;
      }
      uVar14 = 0xffffffff00000000;
      if (uVar4 != 0x80000) {
        uVar14 = 0;
      }
      ((ulonglong *)(lVar16 + uVar5))[1] = uVar8 | uVar9;
      *(ulonglong *)(lVar16 + uVar5) = uVar6 | uVar7;
      uVar6 = 0xffffffff;
      if (uVar2 != 0x20000) {
        uVar6 = 0;
      }
      uVar7 = 0xffffffff00000000;
      if (uVar3 != 0x800000) {
        uVar7 = 0;
      }
      uVar8 = 0xffffffff;
      if (uVar15 != 0x200000) {
        uVar8 = 0;
      }
      puVar17 = (ulonglong *)(lVar16 + uVar5 + 0x10);
      puVar17[1] = uVar12 | uVar13;
      *puVar17 = uVar10 | uVar11;
      uVar9 = 0xffffffff00000000;
      if (uVar4 != 0xc0000) {
        uVar9 = 0;
      }
      uVar10 = 0xffffffff;
      if (uVar2 != 0x30000) {
        uVar10 = 0;
      }
      uVar11 = 0xffffffff00000000;
      if (uVar3 != 0xc00000) {
        uVar11 = 0;
      }
      uVar12 = 0xffffffff;
      if (uVar15 != 0x300000) {
        uVar12 = 0;
      }
      puVar17 = (ulonglong *)(lVar16 + uVar5 + 0x20);
      puVar17[1] = uVar7 | uVar8;
      *puVar17 = uVar14 | uVar6;
      puVar17 = (ulonglong *)(lVar16 + uVar5 + 0x30);
      puVar17[1] = uVar11 | uVar12;
      *puVar17 = uVar9 | uVar10;
    } while (uVar1 < 0x100);
  }
  return;
}

