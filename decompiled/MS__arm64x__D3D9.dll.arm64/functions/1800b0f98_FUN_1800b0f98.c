/*
 * FUN_1800b0f98 at 1800b0f98
 * undefined FUN_1800b0f98(void)
 * Address ranges: 1800b0f98-1800b1363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b0f98(longlong param_1,uint param_2,longlong param_3)

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
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  
  uVar12 = (ulonglong)param_2;
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0x3c);
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar8 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar8 = true;
    iVar10 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar10 == 0) {
      FUN_180003398();
    }
  }
  uVar5 = *(uint *)(param_1 + -0x5908);
  uVar14 = 0;
  if (uVar5 != 0) {
    uVar16 = 0;
    uVar11 = uVar5;
    do {
      uVar7 = uVar11 + uVar16 >> 1;
      uVar14 = (ulonglong)uVar7;
      uVar18 = *(ulonglong *)(*(longlong *)(param_1 + -0x5910) + uVar14 * 0x18);
      if (uVar18 <= uVar12) {
        if (uVar12 <= uVar18) break;
        uVar16 = uVar7 + 1;
        uVar14 = (ulonglong)(uVar7 + 1);
        uVar7 = uVar11;
      }
      uVar11 = uVar7;
    } while (uVar11 != uVar16);
  }
  if ((((uint)uVar14 == uVar5) ||
      (puVar15 = (ulonglong *)(*(longlong *)(param_1 + -0x5910) + uVar14 * 0x18), *puVar15 != uVar12
      )) || (puVar15 = puVar15 + 2, puVar15 == (ulonglong *)0x0)) {
    uVar14 = FUN_180102f80(0x408);
    uVar5 = *(uint *)(param_1 + -0x5908);
    uVar18 = 0;
    if (uVar5 != 0) {
      uVar16 = 0;
      uVar11 = uVar5;
      do {
        uVar7 = uVar11 + uVar16 >> 1;
        uVar18 = (ulonglong)uVar7;
        uVar17 = *(ulonglong *)(*(longlong *)(param_1 + -0x5910) + uVar18 * 0x18);
        if (uVar17 <= uVar12) {
          if (uVar12 <= uVar17) break;
          uVar16 = uVar7 + 1;
          uVar18 = (ulonglong)(uVar7 + 1);
          uVar7 = uVar11;
        }
        uVar11 = uVar7;
      } while (uVar11 != uVar16);
    }
    if (((uint)uVar18 == uVar5) ||
       (puVar15 = (ulonglong *)(*(longlong *)(param_1 + -0x5910) + uVar18 * 0x18),
       *puVar15 != uVar12)) {
      uVar16 = *(uint *)(param_1 + -0x5904);
      if (uVar16 == uVar5) {
        uVar5 = 0x10;
        if (uVar16 != 0) {
          uVar5 = uVar16 << 1;
        }
        lVar13 = thunk_FUN_180102f80((ulonglong)uVar5 * 0x18 + 3);
        if (lVar13 != 0) {
          uVar20 = lVar13 + 3U & 0xfffffffffffffffc;
          uVar17 = 0;
          if (*(int *)(param_1 + -0x5908) != 0) {
            do {
              uVar16 = (int)uVar17 + 1;
              puVar1 = (undefined8 *)(*(longlong *)(param_1 + -0x5910) + uVar17 * 0x18);
              puVar2 = (undefined8 *)(uVar20 + uVar17 * 0x18);
              uVar21 = *puVar1;
              puVar2[1] = puVar1[1];
              *puVar2 = uVar21;
              puVar2[2] = puVar1[2];
              uVar17 = (ulonglong)uVar16;
            } while (uVar16 < *(uint *)(param_1 + -0x5908));
          }
          thunk_FUN_180102fc0(*(undefined8 *)(param_1 + -0x5918));
          *(ulonglong *)(param_1 + -0x5910) = uVar20;
          *(longlong *)(param_1 + -0x5918) = lVar13;
          *(uint *)(param_1 + -0x5904) = uVar5;
        }
      }
      uVar17 = (ulonglong)*(uint *)(param_1 + -0x5908);
      if (*(uint *)(param_1 + -0x5904) != *(uint *)(param_1 + -0x5908)) {
        while ((uint)uVar18 < (uint)uVar17) {
          uVar20 = (ulonglong)((uint)uVar17 - 1);
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + -0x5910) + uVar17 * 0x18);
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + -0x5910) + uVar20 * 0x18);
          uVar21 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar21;
          puVar1[2] = puVar2[2];
          uVar17 = uVar20;
        }
        *(int *)(param_1 + -0x5908) = *(int *)(param_1 + -0x5908) + 1;
        *(uint *)(*(longlong *)(param_1 + -0x5910) + uVar18 * 0x18 + 8) = param_2;
        *(ulonglong *)(*(longlong *)(param_1 + -0x5910) + uVar18 * 0x18 + 0x10) = uVar14;
        *(ulonglong *)(*(longlong *)(param_1 + -0x5910) + uVar18 * 0x18) = uVar12;
      }
    }
    else {
      puVar15[2] = uVar14;
    }
    lVar13 = *(longlong *)(param_1 + -0x5910) + uVar18 * 0x18;
    func_0x000180222c50(*(undefined8 *)(lVar13 + 0x10),0,0x408);
    puVar15 = (ulonglong *)(lVar13 + 0x10);
  }
  uVar4 = uVar4 & 0x80;
  uVar12 = 0;
  if (uVar4 == 0) {
    do {
      uVar19 = 0x8007000e;
      if (*(char *)(param_3 + 3 + uVar12 * 4) != -1) goto LAB_1800b1320;
      uVar5 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar5;
    } while (uVar5 < 0x100);
  }
  if ((uVar4 != 0) || (uVar19 = 0x8007000e, (int)uVar12 == 0x100)) {
    uVar12 = *puVar15;
    bVar9 = false;
    lVar13 = 0;
    do {
      puVar3 = (undefined1 *)(param_3 + lVar13 * 4);
      iVar10 = CONCAT31(CONCAT21(CONCAT11(puVar3[3],*puVar3),puVar3[1]),puVar3[2]);
      iVar6 = *(int *)(uVar12 + lVar13 * 4);
      *(int *)(uVar12 + lVar13 * 4) = iVar10;
      lVar13 = lVar13 + 1;
      bVar9 = (bool)(iVar10 != iVar6 | bVar9);
    } while (lVar13 != 0x100);
    if (bVar9) {
      *(longlong *)(uVar12 + 0x400) = *(longlong *)(uVar12 + 0x400) + 1;
      *(undefined4 *)(param_1 + -0x40) = 0xffff;
      *(undefined4 *)(param_1 + -0x34) = 0x1f;
    }
    uVar19 = 0;
  }
LAB_1800b1320:
  if (bVar8) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar19;
}

