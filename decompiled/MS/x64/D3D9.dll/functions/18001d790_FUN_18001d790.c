/*
 * FUN_18001d790 at 18001d790
 * longlong __fastcall FUN_18001d790(longlong * param_1, uint * param_2, undefined8 * param_3)
 * Address ranges: 18001d790-18001d9f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18001d790(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar13 = (ulonglong)*param_2;
  uVar12 = *(uint *)(param_1 + 2);
  uVar11 = 0;
  if (uVar12 != 0) {
    uVar7 = 0;
    do {
      uVar10 = uVar12 + uVar7 >> 1;
      uVar11 = (ulonglong)uVar10;
      uVar14 = *(ulonglong *)(param_1[1] + uVar11 * 0x78);
      if (uVar14 <= uVar13) {
        if (uVar13 <= uVar14) break;
        uVar7 = uVar10 + 1;
        uVar11 = (ulonglong)uVar7;
        uVar10 = uVar12;
      }
      uVar12 = uVar10;
    } while (uVar12 != uVar7);
  }
  if ((uint)uVar11 != *(uint *)(param_1 + 2)) {
    lVar6 = param_1[1];
    lVar5 = uVar11 * 0x78;
    if (*(ulonglong *)(lVar5 + lVar6) == uVar13) {
      uVar4 = param_3[1];
      puVar1 = (undefined8 *)(lVar5 + 0xc + lVar6);
      *puVar1 = *param_3;
      puVar1[1] = uVar4;
      uVar4 = param_3[3];
      puVar1 = (undefined8 *)(lVar5 + 0x1c + lVar6);
      *puVar1 = param_3[2];
      puVar1[1] = uVar4;
      uVar4 = param_3[5];
      puVar1 = (undefined8 *)(lVar5 + 0x2c + lVar6);
      *puVar1 = param_3[4];
      puVar1[1] = uVar4;
      uVar4 = param_3[7];
      puVar1 = (undefined8 *)(lVar5 + 0x3c + lVar6);
      *puVar1 = param_3[6];
      puVar1[1] = uVar4;
      uVar4 = param_3[9];
      puVar1 = (undefined8 *)(lVar5 + 0x4c + lVar6);
      *puVar1 = param_3[8];
      puVar1[1] = uVar4;
      uVar4 = param_3[0xb];
      puVar1 = (undefined8 *)(lVar5 + 0x5c + lVar6);
      *puVar1 = param_3[10];
      puVar1[1] = uVar4;
      uVar4 = *(undefined8 *)((longlong)param_3 + 100);
      puVar1 = (undefined8 *)(lVar5 + 0x68 + lVar6);
      *puVar1 = *(undefined8 *)((longlong)param_3 + 0x5c);
      puVar1[1] = uVar4;
      goto LAB_18001d9d2;
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  if (iVar3 == (int)param_1[2]) {
    uVar14 = (ulonglong)(uint)(iVar3 * 2);
    if (iVar3 == 0) {
      uVar14 = 0x10;
    }
    lVar6 = thunk_FUN_1800fbccc(uVar14 * 0x78);
    if (lVar6 != 0) {
      uVar12 = 0;
      if ((int)param_1[2] != 0) {
        do {
          lVar5 = param_1[1];
          uVar8 = (ulonglong)uVar12;
          uVar12 = uVar12 + 1;
          lVar9 = uVar8 * 0x78;
          uVar4 = ((undefined8 *)(lVar9 + lVar5))[1];
          *(undefined8 *)(lVar9 + lVar6) = *(undefined8 *)(lVar9 + lVar5);
          ((undefined8 *)(lVar9 + lVar6))[1] = uVar4;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar5);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar6);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar5);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar9 + 0x20 + lVar6);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar5);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar9 + 0x30 + lVar6);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar9 + 0x40 + lVar5);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar9 + 0x40 + lVar6);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar9 + 0x50 + lVar5);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar9 + 0x50 + lVar6);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar9 + 0x60 + lVar5);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar9 + 0x60 + lVar6);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          *(undefined8 *)(lVar9 + 0x70 + lVar6) = *(undefined8 *)(lVar9 + 0x70 + lVar5);
        } while (uVar12 < *(uint *)(param_1 + 2));
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *param_1 = lVar6;
      param_1[1] = lVar6;
      *(int *)((longlong)param_1 + 0x14) = (int)uVar14;
    }
  }
  uVar12 = *(uint *)(param_1 + 2);
  if (*(uint *)((longlong)param_1 + 0x14) != uVar12) {
    while ((uint)uVar11 < uVar12) {
      uVar14 = (ulonglong)uVar12;
      lVar6 = param_1[1];
      uVar12 = uVar12 - 1;
      lVar9 = uVar14 * 0x78;
      lVar5 = (ulonglong)uVar12 * 0x78;
      uVar4 = ((undefined8 *)(lVar5 + lVar6))[1];
      *(undefined8 *)(lVar9 + lVar6) = *(undefined8 *)(lVar5 + lVar6);
      ((undefined8 *)(lVar9 + lVar6))[1] = uVar4;
      puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar6);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar6);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar9 + 0x20 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar6);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar9 + 0x30 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(lVar5 + 0x40 + lVar6);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar9 + 0x40 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(lVar5 + 0x50 + lVar6);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar9 + 0x50 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(lVar5 + 0x60 + lVar6);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar9 + 0x60 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      *(undefined8 *)(lVar9 + 0x70 + lVar6) = *(undefined8 *)(lVar5 + 0x70 + lVar6);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    lVar5 = uVar11 * 0x78;
    *(uint *)(lVar5 + 8 + param_1[1]) = *param_2;
    lVar6 = param_1[1];
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)(lVar5 + 0xc + lVar6);
    *puVar1 = *param_3;
    puVar1[1] = uVar4;
    uVar4 = param_3[3];
    puVar1 = (undefined8 *)(lVar5 + 0x1c + lVar6);
    *puVar1 = param_3[2];
    puVar1[1] = uVar4;
    uVar4 = param_3[5];
    puVar1 = (undefined8 *)(lVar5 + 0x2c + lVar6);
    *puVar1 = param_3[4];
    puVar1[1] = uVar4;
    uVar4 = param_3[7];
    puVar1 = (undefined8 *)(lVar5 + 0x3c + lVar6);
    *puVar1 = param_3[6];
    puVar1[1] = uVar4;
    uVar4 = param_3[9];
    puVar1 = (undefined8 *)(lVar5 + 0x4c + lVar6);
    *puVar1 = param_3[8];
    puVar1[1] = uVar4;
    uVar4 = param_3[0xb];
    puVar1 = (undefined8 *)(lVar5 + 0x5c + lVar6);
    *puVar1 = param_3[10];
    puVar1[1] = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_3 + 100);
    puVar1 = (undefined8 *)(lVar5 + 0x68 + lVar6);
    *puVar1 = *(undefined8 *)((longlong)param_3 + 0x5c);
    puVar1[1] = uVar4;
    *(ulonglong *)(lVar5 + param_1[1]) = uVar13;
  }
LAB_18001d9d2:
  return param_1[1] + 8 + uVar11 * 0x78;
}

