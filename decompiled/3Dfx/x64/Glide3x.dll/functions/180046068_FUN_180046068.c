/*
 * FUN_180046068 at 180046068
 * undefined __fastcall FUN_180046068(longlong * param_1, uint param_2, undefined8 param_3, undefined4 * param_4, undefined8 * param_5)
 * Address ranges: 180046068-180046193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180046068(longlong *param_1,uint param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  uVar9 = (ulonglong)param_2;
  if (iVar3 == (int)param_1[2]) {
    uVar10 = (ulonglong)(uint)(iVar3 * 2);
    if (iVar3 == 0) {
      uVar10 = 0x10;
    }
    lVar8 = thunk_FUN_180060a9c(uVar10 * 0x30);
    if (lVar8 != 0) {
      uVar12 = 0;
      if ((int)param_1[2] != 0) {
        do {
          lVar4 = param_1[1];
          uVar11 = (int)uVar12 + 1;
          puVar1 = (undefined8 *)(lVar4 + uVar12 * 0x30);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar8 + uVar12 * 0x30);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(lVar4 + 0x10 + uVar12 * 0x30);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar8 + 0x10 + uVar12 * 0x30);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(lVar4 + 0x20 + uVar12 * 0x30);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar8 + 0x20 + uVar12 * 0x30);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_1 + 2));
      }
      FUN_180060ac0((LPVOID)*param_1);
      *param_1 = lVar8;
      param_1[1] = lVar8;
      *(int *)((longlong)param_1 + 0x14) = (int)uVar10;
    }
  }
  uVar11 = *(uint *)(param_1 + 2);
  uVar10 = (ulonglong)uVar11;
  if (*(uint *)((longlong)param_1 + 0x14) != uVar11) {
    while (param_2 < uVar11) {
      lVar8 = param_1[1];
      uVar11 = (int)uVar10 - 1;
      uVar12 = (ulonglong)uVar11;
      puVar1 = (undefined8 *)(lVar8 + uVar12 * 0x30);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar8 + uVar10 * 0x30);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar1 = (undefined8 *)(lVar8 + 0x10 + uVar12 * 0x30);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar8 + 0x10 + uVar10 * 0x30);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar1 = (undefined8 *)(lVar8 + 0x20 + uVar12 * 0x30);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar8 + 0x20 + uVar10 * 0x30);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      uVar10 = uVar12;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    *(undefined4 *)(param_1[1] + 8 + uVar9 * 0x30) = *param_4;
    lVar8 = param_1[1];
    uVar5 = param_5[1];
    uVar6 = param_5[2];
    uVar7 = param_5[3];
    puVar1 = (undefined8 *)(lVar8 + 0x10 + uVar9 * 0x30);
    *puVar1 = *param_5;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)(lVar8 + 0x20 + uVar9 * 0x30);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    *(undefined8 *)(param_1[1] + uVar9 * 0x30) = param_3;
  }
  return;
}

