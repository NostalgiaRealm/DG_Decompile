/*
 * FUN_18003dc20 at 18003dc20
 * undefined __fastcall FUN_18003dc20(longlong * param_1, uint param_2, undefined8 * param_3, undefined8 * param_4)
 * Address ranges: 18003dc20-18003dd50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003dc20(longlong *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  
  iVar4 = *(int *)((longlong)param_1 + 0x14);
  if (iVar4 == (int)param_1[2]) {
    uVar14 = (ulonglong)(uint)(iVar4 * 2);
    if (iVar4 == 0) {
      uVar14 = 0x10;
    }
    lVar9 = thunk_FUN_1800fbccc(uVar14 << 6);
    if (lVar9 != 0) {
      uVar13 = 0;
      if ((int)param_1[2] != 0) {
        do {
          lVar10 = param_1[1];
          uVar11 = (ulonglong)uVar13;
          uVar13 = uVar13 + 1;
          lVar12 = uVar11 * 0x40;
          uVar3 = ((undefined8 *)(lVar10 + lVar12))[1];
          *(undefined8 *)(lVar9 + lVar12) = *(undefined8 *)(lVar10 + lVar12);
          ((undefined8 *)(lVar9 + lVar12))[1] = uVar3;
          puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar12);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar12);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar12);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(lVar9 + 0x20 + lVar12);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)(lVar10 + 0x30 + lVar12);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(lVar9 + 0x30 + lVar12);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
        } while (uVar13 < *(uint *)(param_1 + 2));
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *param_1 = lVar9;
      param_1[1] = lVar9;
      *(int *)((longlong)param_1 + 0x14) = (int)uVar14;
    }
  }
  uVar13 = *(uint *)(param_1 + 2);
  if (*(uint *)((longlong)param_1 + 0x14) != uVar13) {
    while (param_2 < uVar13) {
      lVar9 = param_1[1];
      lVar12 = (ulonglong)uVar13 * 0x40;
      lVar10 = (ulonglong)(uVar13 - 1) * 0x40;
      uVar3 = ((undefined8 *)(lVar9 + lVar10))[1];
      *(undefined8 *)(lVar9 + lVar12) = *(undefined8 *)(lVar9 + lVar10);
      ((undefined8 *)(lVar9 + lVar12))[1] = uVar3;
      puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar10);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar12);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar10);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar9 + 0x20 + lVar12);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar10);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar9 + 0x30 + lVar12);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      uVar13 = uVar13 - 1;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    lVar9 = param_1[1];
    uVar3 = param_3[1];
    lVar10 = (ulonglong)param_2 * 0x40;
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar10 + lVar9) = *param_3;
    ((undefined8 *)(lVar10 + lVar9))[1] = uVar3;
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar9);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    uVar3 = param_3[6];
    puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar9);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    *(undefined8 *)(lVar10 + 0x30 + lVar9) = uVar3;
    *(undefined8 *)(lVar10 + 0x38 + param_1[1]) = *param_4;
  }
  return;
}

