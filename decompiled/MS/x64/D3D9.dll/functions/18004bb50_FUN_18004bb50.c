/*
 * FUN_18004bb50 at 18004bb50
 * longlong __fastcall FUN_18004bb50(longlong * param_1, ulonglong * param_2, undefined8 * param_3)
 * Address ranges: 18004bb50-18004bd08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18004bb50(longlong *param_1,ulonglong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar10 = *(uint *)(param_1 + 2);
  uVar7 = 0;
  uVar3 = *param_2;
  if (uVar10 != 0) {
    uVar9 = 0;
    uVar12 = uVar10;
    do {
      uVar7 = uVar12 + uVar9 >> 1;
      uVar14 = *(ulonglong *)(param_1[1] + (ulonglong)uVar7 * 0x18);
      uVar6 = uVar7;
      if (uVar14 <= uVar3) {
        if (uVar3 <= uVar14) break;
        uVar9 = uVar7 + 1;
        uVar6 = uVar12;
        uVar7 = uVar9;
      }
      uVar12 = uVar6;
    } while (uVar12 != uVar9);
  }
  uVar14 = (ulonglong)uVar7;
  if (uVar7 != uVar10) {
    if (*(ulonglong *)(uVar14 * 0x18 + param_1[1]) == uVar3) {
      *(undefined8 *)(uVar14 * 0x18 + 0x10 + param_1[1]) = *param_3;
      goto LAB_18004bcec;
    }
  }
  uVar9 = *(uint *)((longlong)param_1 + 0x14);
  if (uVar9 == uVar10) {
    uVar13 = (ulonglong)(uVar9 * 2);
    if (uVar9 == 0) {
      uVar13 = 0x10;
    }
    lVar8 = thunk_FUN_1800fbccc(uVar13 * 0x18);
    if (lVar8 != 0) {
      uVar11 = 0;
      if ((int)param_1[2] != 0) {
        do {
          lVar4 = param_1[1];
          uVar10 = (int)uVar11 + 1;
          puVar1 = (undefined8 *)(lVar4 + uVar11 * 0x18);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar8 + uVar11 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          *(undefined8 *)(lVar8 + 0x10 + uVar11 * 0x18) =
               *(undefined8 *)(lVar4 + 0x10 + uVar11 * 0x18);
          uVar11 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(param_1 + 2));
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *param_1 = lVar8;
      param_1[1] = lVar8;
      *(int *)((longlong)param_1 + 0x14) = (int)uVar13;
    }
  }
  uVar10 = *(uint *)(param_1 + 2);
  uVar13 = (ulonglong)uVar10;
  if (*(uint *)((longlong)param_1 + 0x14) != uVar10) {
    while (uVar7 < uVar10) {
      lVar8 = param_1[1];
      uVar10 = (int)uVar13 - 1;
      uVar11 = (ulonglong)uVar10;
      puVar1 = (undefined8 *)(lVar8 + uVar11 * 0x18);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar8 + uVar13 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      *(undefined8 *)(lVar8 + 0x10 + uVar13 * 0x18) = *(undefined8 *)(lVar8 + 0x10 + uVar11 * 0x18);
      uVar13 = uVar11;
    }
    lVar8 = uVar14 * 0x18;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    *(ulonglong *)(lVar8 + 8 + param_1[1]) = *param_2;
    *(undefined8 *)(lVar8 + 0x10 + param_1[1]) = *param_3;
    *(ulonglong *)(lVar8 + param_1[1]) = uVar3;
  }
LAB_18004bcec:
  return param_1[1] + 8 + uVar14 * 0x18;
}

