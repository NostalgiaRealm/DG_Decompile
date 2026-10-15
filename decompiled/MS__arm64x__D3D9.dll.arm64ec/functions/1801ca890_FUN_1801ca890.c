/*
 * FUN_1801ca890 at 1801ca890
 * undefined FUN_1801ca890(void)
 * Address ranges: 1801ca890-1801cac6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801ca890(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0x3c);
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar8 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar8 = true;
    iVar10 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar10 == 0) {
      FUN_1801085c8();
    }
  }
  uVar19 = (ulonglong)param_2;
  uVar5 = *(uint *)(param_1 + -0x5908);
  uVar13 = 0;
  if (uVar5 != 0) {
    uVar15 = 0;
    uVar11 = uVar5;
    do {
      uVar7 = uVar11 + uVar15 >> 1;
      uVar13 = (ulonglong)uVar7;
      uVar17 = *(ulonglong *)(*(longlong *)(param_1 + -0x5910) + uVar13 * 0x18);
      if (uVar17 <= uVar19) {
        if (uVar19 <= uVar17) break;
        uVar15 = uVar7 + 1;
        uVar13 = (ulonglong)(uVar7 + 1);
        uVar7 = uVar11;
      }
      uVar11 = uVar7;
    } while (uVar11 != uVar15);
  }
  if ((((uint)uVar13 == uVar5) ||
      (puVar14 = (ulonglong *)(*(longlong *)(param_1 + -0x5910) + uVar13 * 0x18), *puVar14 != uVar19
      )) || (puVar14 = puVar14 + 2, puVar14 == (ulonglong *)0x0)) {
    uVar13 = FUN_1802229a8(0x408);
    uVar5 = *(uint *)(param_1 + -0x5908);
    uVar17 = 0;
    if (uVar5 != 0) {
      uVar15 = 0;
      uVar11 = uVar5;
      do {
        uVar7 = uVar11 + uVar15 >> 1;
        uVar17 = (ulonglong)uVar7;
        uVar16 = *(ulonglong *)(*(longlong *)(param_1 + -0x5910) + uVar17 * 0x18);
        if (uVar16 <= uVar19) {
          if (uVar19 <= uVar16) break;
          uVar15 = uVar7 + 1;
          uVar17 = (ulonglong)(uVar7 + 1);
          uVar7 = uVar11;
        }
        uVar11 = uVar7;
      } while (uVar11 != uVar15);
    }
    if (((uint)uVar17 == uVar5) ||
       (puVar14 = (ulonglong *)(*(longlong *)(param_1 + -0x5910) + uVar17 * 0x18),
       *puVar14 != uVar19)) {
      uVar15 = *(uint *)(param_1 + -0x5904);
      if (uVar15 == uVar5) {
        uVar5 = 0x10;
        if (uVar15 != 0) {
          uVar5 = uVar15 << 1;
        }
        lVar12 = FUN_1802229a8((ulonglong)uVar5 * 0x18 + 3);
        if (lVar12 != 0) {
          uVar20 = lVar12 + 3U & 0xfffffffffffffffc;
          uVar16 = 0;
          if (*(int *)(param_1 + -0x5908) != 0) {
            do {
              uVar15 = (int)uVar16 + 1;
              puVar1 = (undefined8 *)(*(longlong *)(param_1 + -0x5910) + uVar16 * 0x18);
              puVar2 = (undefined8 *)(uVar20 + uVar16 * 0x18);
              uVar21 = *puVar1;
              puVar2[1] = puVar1[1];
              *puVar2 = uVar21;
              puVar2[2] = puVar1[2];
              uVar16 = (ulonglong)uVar15;
            } while (uVar15 < *(uint *)(param_1 + -0x5908));
          }
          FUN_1802229d8(*(undefined8 *)(param_1 + -0x5918));
          *(ulonglong *)(param_1 + -0x5910) = uVar20;
          *(longlong *)(param_1 + -0x5918) = lVar12;
          *(uint *)(param_1 + -0x5904) = uVar5;
        }
      }
      uVar16 = (ulonglong)*(uint *)(param_1 + -0x5908);
      if (*(uint *)(param_1 + -0x5904) != *(uint *)(param_1 + -0x5908)) {
        while ((uint)uVar17 < (uint)uVar16) {
          uVar20 = (ulonglong)((uint)uVar16 - 1);
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + -0x5910) + uVar16 * 0x18);
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + -0x5910) + uVar20 * 0x18);
          uVar21 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar21;
          puVar1[2] = puVar2[2];
          uVar16 = uVar20;
        }
        *(int *)(param_1 + -0x5908) = *(int *)(param_1 + -0x5908) + 1;
        *(uint *)(*(longlong *)(param_1 + -0x5910) + uVar17 * 0x18 + 8) = param_2;
        *(ulonglong *)(*(longlong *)(param_1 + -0x5910) + uVar17 * 0x18 + 0x10) = uVar13;
        *(ulonglong *)(*(longlong *)(param_1 + -0x5910) + uVar17 * 0x18) = uVar19;
      }
    }
    else {
      puVar14[2] = uVar13;
    }
    lVar12 = *(longlong *)(param_1 + -0x5910) + uVar17 * 0x18;
    FUN_180222c50(*(undefined8 *)(lVar12 + 0x10),0,0x408);
    puVar14 = (ulonglong *)(lVar12 + 0x10);
  }
  uVar4 = uVar4 & 0x80;
  uVar13 = 0;
  if (uVar4 == 0) {
    do {
      uVar18 = 0x8007000e;
      if (*(char *)(param_3 + 3 + uVar13 * 4) != -1) goto LAB_1801cac30;
      uVar5 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar5;
    } while (uVar5 < 0x100);
  }
  if ((uVar4 != 0) || (uVar18 = 0x8007000e, (int)uVar13 == 0x100)) {
    uVar13 = *puVar14;
    bVar9 = false;
    lVar12 = 0;
    do {
      puVar3 = (undefined1 *)(param_3 + lVar12 * 4);
      iVar10 = CONCAT31(CONCAT21(CONCAT11(puVar3[3],*puVar3),puVar3[1]),puVar3[2]);
      iVar6 = *(int *)(uVar13 + lVar12 * 4);
      *(int *)(uVar13 + lVar12 * 4) = iVar10;
      lVar12 = lVar12 + 1;
      bVar9 = (bool)(iVar10 != iVar6 | bVar9);
    } while (lVar12 != 0x100);
    if (bVar9) {
      *(longlong *)(uVar13 + 0x400) = *(longlong *)(uVar13 + 0x400) + 1;
      *(undefined4 *)(param_1 + -0x40) = 0xffff;
      *(undefined4 *)(param_1 + -0x34) = 0x1f;
    }
    uVar18 = 0;
  }
LAB_1801cac30:
  if (bVar8) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar18;
}

