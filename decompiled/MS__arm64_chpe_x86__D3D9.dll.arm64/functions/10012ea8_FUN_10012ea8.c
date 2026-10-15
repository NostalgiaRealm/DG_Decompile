/*
 * FUN_10012ea8 at 10012ea8
 * undefined FUN_10012ea8(void)
 * Address ranges: 10012ea8-10012feb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012ea8(void)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  
  DAT_10170ac4 = FUN_101322b0(0x4080);
  uVar3 = DAT_10170ac4 + 0xfU & 0xfffffff0;
  DAT_10170ac0 = uVar3;
  if (uVar3 != 0) {
    uVar12 = 0;
    do {
      uVar11 = uVar12 << 0x10;
      uVar4 = uVar11 & 0x30000;
      uVar2 = uVar11 & 0xc0000;
      uVar6 = 0xffffffff;
      if (uVar4 != 0) {
        uVar6 = 0;
      }
      uVar7 = 0xffffffff00000000;
      if (uVar2 != 0) {
        uVar7 = 0;
      }
      uVar5 = uVar11 & 0x300000;
      uVar11 = uVar11 & 0xc00000;
      uVar8 = 0xffffffff;
      if (uVar5 != 0) {
        uVar8 = 0;
      }
      uVar9 = 0xffffffff00000000;
      if (uVar11 != 0) {
        uVar9 = 0;
      }
      puVar1 = (ulonglong *)(uVar3 + uVar12 * 0x40);
      uVar10 = 0xffffffff;
      if (uVar4 != 0x10000) {
        uVar10 = 0;
      }
      puVar1[1] = uVar8 | uVar9;
      *puVar1 = uVar6 | uVar7;
      uVar6 = 0xffffffff00000000;
      if (uVar2 != 0x40000) {
        uVar6 = 0;
      }
      uVar7 = 0xffffffff;
      if (uVar5 != 0x100000) {
        uVar7 = 0;
      }
      uVar8 = 0xffffffff00000000;
      if (uVar11 != 0x400000) {
        uVar8 = 0;
      }
      puVar1 = (ulonglong *)(uVar3 + 0x10 + uVar12 * 0x40);
      uVar9 = 0xffffffff;
      if (uVar4 != 0x20000) {
        uVar9 = 0;
      }
      puVar1[1] = uVar7 | uVar8;
      *puVar1 = uVar10 | uVar6;
      uVar6 = 0xffffffff00000000;
      if (uVar2 != 0x80000) {
        uVar6 = 0;
      }
      uVar7 = 0xffffffff00000000;
      if (uVar11 != 0x800000) {
        uVar7 = 0;
      }
      uVar8 = 0xffffffff;
      if (uVar5 != 0x200000) {
        uVar8 = 0;
      }
      puVar1 = (ulonglong *)(uVar3 + 0x20 + uVar12 * 0x40);
      puVar1[1] = uVar7 | uVar8;
      *puVar1 = uVar9 | uVar6;
      uVar6 = 0xffffffff;
      if (uVar4 != 0x30000) {
        uVar6 = 0;
      }
      uVar7 = 0xffffffff00000000;
      if (uVar2 != 0xc0000) {
        uVar7 = 0;
      }
      uVar8 = 0xffffffff00000000;
      if (uVar11 != 0xc00000) {
        uVar8 = 0;
      }
      uVar9 = 0xffffffff;
      if (uVar5 != 0x300000) {
        uVar9 = 0;
      }
      puVar1 = (ulonglong *)(uVar3 + 0x30 + uVar12 * 0x40);
      uVar12 = uVar12 + 1;
      puVar1[1] = uVar8 | uVar9;
      *puVar1 = uVar6 | uVar7;
    } while (uVar12 < 0x100);
  }
  return;
}

