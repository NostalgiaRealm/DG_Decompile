/*
 * FUN_18000b1a0 at 18000b1a0
 * undefined __fastcall FUN_18000b1a0(void)
 * Address ranges: 18000b1a0-18000b36a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000b1a0(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined4 uVar15;
  
  DAT_1801173e0 = thunk_FUN_1800fbccc(0x4080);
  uVar9 = DAT_1801173e0 + 0xfU & 0xfffffffffffffff0;
  DAT_1801173e8 = uVar9;
  if (uVar9 != 0) {
    uVar14 = 0;
    uVar15 = 0xffffffff;
    do {
      uVar10 = uVar14 << 0x10;
      uVar11 = uVar10 & 0x30000;
      uVar8 = uVar10 & 0xc0000;
      uVar12 = uVar10 & 0x300000;
      uVar10 = uVar10 & 0xc00000;
      lVar13 = (ulonglong)uVar14 * 0x40;
      uVar2 = 0;
      if (uVar11 == 0x10000) {
        uVar2 = uVar15;
      }
      uVar6 = 0;
      if (uVar8 == 0x40000) {
        uVar6 = 0xffffffff;
      }
      *(undefined8 *)(lVar13 + uVar9) = CONCAT44(~-(uint)(uVar8 != 0),~-(uint)(uVar11 != 0));
      ((undefined8 *)(lVar13 + uVar9))[1] = CONCAT44(~-(uint)(uVar10 != 0),~-(uint)(uVar12 != 0));
      uVar3 = 0;
      if (uVar12 == 0x100000) {
        uVar3 = uVar15;
      }
      uVar5 = 0;
      if (uVar10 == 0x400000) {
        uVar5 = 0xffffffff;
      }
      uVar4 = 0;
      if (uVar11 == 0x20000) {
        uVar4 = uVar15;
      }
      uVar7 = 0;
      puVar1 = (undefined8 *)(lVar13 + 0x10 + uVar9);
      *puVar1 = CONCAT44(uVar6,uVar2);
      puVar1[1] = CONCAT44(uVar5,uVar3);
      if (uVar8 == 0x80000) {
        uVar7 = 0xffffffff;
      }
      uVar2 = 0;
      if (uVar12 == 0x200000) {
        uVar2 = uVar15;
      }
      uVar6 = 0;
      if (uVar10 == 0x800000) {
        uVar6 = 0xffffffff;
      }
      puVar1 = (undefined8 *)(lVar13 + 0x20 + uVar9);
      *puVar1 = CONCAT44(uVar7,uVar4);
      puVar1[1] = CONCAT44(uVar6,uVar2);
      uVar2 = 0;
      if (uVar11 == 0x30000) {
        uVar2 = uVar15;
      }
      uVar6 = 0;
      if (uVar8 == 0xc0000) {
        uVar6 = 0xffffffff;
      }
      uVar3 = 0;
      if (uVar12 == 0x300000) {
        uVar3 = uVar15;
      }
      uVar5 = 0;
      if (uVar10 == 0xc00000) {
        uVar5 = 0xffffffff;
      }
      uVar14 = uVar14 + 1;
      puVar1 = (undefined8 *)(lVar13 + 0x30 + uVar9);
      *puVar1 = CONCAT44(uVar6,uVar2);
      puVar1[1] = CONCAT44(uVar5,uVar3);
    } while (uVar14 < 0x100);
  }
  return;
}

