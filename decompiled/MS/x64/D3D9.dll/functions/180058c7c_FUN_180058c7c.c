/*
 * FUN_180058c7c at 180058c7c
 * longlong __fastcall FUN_180058c7c(longlong * param_1, ulonglong * param_2, undefined8 * param_3)
 * Address ranges: 180058c7c-180058eab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180058c7c(longlong *param_1,ulonglong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  uVar4 = *param_2;
  uVar13 = *(uint *)(param_1 + 2);
  uVar12 = 0;
  if (uVar13 != 0) {
    uVar8 = 0;
    do {
      uVar11 = uVar13 + uVar8 >> 1;
      uVar12 = (ulonglong)uVar11;
      uVar14 = *(ulonglong *)(param_1[1] + uVar12 * 0x70);
      if (uVar14 <= uVar4) {
        if (uVar4 <= uVar14) break;
        uVar8 = uVar11 + 1;
        uVar12 = (ulonglong)uVar8;
        uVar11 = uVar13;
      }
      uVar13 = uVar11;
    } while (uVar13 != uVar8);
  }
  if ((uint)uVar12 != *(uint *)(param_1 + 2)) {
    lVar7 = param_1[1];
    lVar6 = uVar12 * 0x70;
    if (*(ulonglong *)(lVar6 + lVar7) == uVar4) {
      uVar5 = param_3[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar7);
      *puVar1 = *param_3;
      puVar1[1] = uVar5;
      uVar5 = param_3[3];
      puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar7);
      *puVar1 = param_3[2];
      puVar1[1] = uVar5;
      uVar5 = param_3[5];
      puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar7);
      *puVar1 = param_3[4];
      puVar1[1] = uVar5;
      uVar5 = param_3[7];
      puVar1 = (undefined8 *)(lVar6 + 0x40 + lVar7);
      *puVar1 = param_3[6];
      puVar1[1] = uVar5;
      uVar5 = param_3[9];
      puVar1 = (undefined8 *)(lVar6 + 0x50 + lVar7);
      *puVar1 = param_3[8];
      puVar1[1] = uVar5;
      uVar5 = param_3[0xb];
      puVar1 = (undefined8 *)(lVar6 + 0x60 + lVar7);
      *puVar1 = param_3[10];
      puVar1[1] = uVar5;
      goto LAB_180058e8f;
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  if (iVar3 == (int)param_1[2]) {
    uVar14 = (ulonglong)(uint)(iVar3 * 2);
    if (iVar3 == 0) {
      uVar14 = 0x10;
    }
    lVar7 = thunk_FUN_1800fbccc(uVar14 * 0x70);
    if (lVar7 != 0) {
      uVar13 = 0;
      if ((int)param_1[2] != 0) {
        do {
          lVar6 = param_1[1];
          uVar9 = (ulonglong)uVar13;
          uVar13 = uVar13 + 1;
          lVar10 = uVar9 * 0x70;
          uVar5 = ((undefined8 *)(lVar10 + lVar6))[1];
          *(undefined8 *)(lVar10 + lVar7) = *(undefined8 *)(lVar10 + lVar6);
          ((undefined8 *)(lVar10 + lVar7))[1] = uVar5;
          puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar6);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar7);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar6);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar10 + 0x20 + lVar7);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(lVar10 + 0x30 + lVar6);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar10 + 0x30 + lVar7);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(lVar10 + 0x40 + lVar6);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar10 + 0x40 + lVar7);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(lVar10 + 0x50 + lVar6);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar10 + 0x50 + lVar7);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(lVar10 + 0x60 + lVar6);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar10 + 0x60 + lVar7);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
        } while (uVar13 < *(uint *)(param_1 + 2));
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *param_1 = lVar7;
      param_1[1] = lVar7;
      *(int *)((longlong)param_1 + 0x14) = (int)uVar14;
    }
  }
  uVar13 = *(uint *)(param_1 + 2);
  if (*(uint *)((longlong)param_1 + 0x14) != uVar13) {
    while ((uint)uVar12 < uVar13) {
      uVar14 = (ulonglong)uVar13;
      lVar7 = param_1[1];
      uVar13 = uVar13 - 1;
      lVar10 = uVar14 * 0x70;
      lVar6 = (ulonglong)uVar13 * 0x70;
      uVar5 = ((undefined8 *)(lVar6 + lVar7))[1];
      *(undefined8 *)(lVar10 + lVar7) = *(undefined8 *)(lVar6 + lVar7);
      ((undefined8 *)(lVar10 + lVar7))[1] = uVar5;
      puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar7);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar7);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar10 + 0x20 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar7);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar10 + 0x30 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar1 = (undefined8 *)(lVar6 + 0x40 + lVar7);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar10 + 0x40 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar1 = (undefined8 *)(lVar6 + 0x50 + lVar7);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar10 + 0x50 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar1 = (undefined8 *)(lVar6 + 0x60 + lVar7);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar10 + 0x60 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    lVar6 = uVar12 * 0x70;
    *(ulonglong *)(lVar6 + 8 + param_1[1]) = *param_2;
    lVar7 = param_1[1];
    uVar5 = param_3[1];
    puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar7);
    *puVar1 = *param_3;
    puVar1[1] = uVar5;
    uVar5 = param_3[3];
    puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar7);
    *puVar1 = param_3[2];
    puVar1[1] = uVar5;
    uVar5 = param_3[5];
    puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar7);
    *puVar1 = param_3[4];
    puVar1[1] = uVar5;
    uVar5 = param_3[7];
    puVar1 = (undefined8 *)(lVar6 + 0x40 + lVar7);
    *puVar1 = param_3[6];
    puVar1[1] = uVar5;
    uVar5 = param_3[9];
    puVar1 = (undefined8 *)(lVar6 + 0x50 + lVar7);
    *puVar1 = param_3[8];
    puVar1[1] = uVar5;
    uVar5 = param_3[0xb];
    puVar1 = (undefined8 *)(lVar6 + 0x60 + lVar7);
    *puVar1 = param_3[10];
    puVar1[1] = uVar5;
    *(ulonglong *)(lVar6 + param_1[1]) = uVar4;
  }
LAB_180058e8f:
  return (uVar12 * 0x70 | 8) + param_1[1];
}

