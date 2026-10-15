/*
 * FUN_180057b88 at 180057b88
 * undefined __fastcall FUN_180057b88(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4, undefined8 * param_5)
 * Address ranges: 180057b88-180057cc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057b88(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  if (iVar3 == (int)param_1[2]) {
    uVar9 = (ulonglong)(uint)(iVar3 * 2);
    if (iVar3 == 0) {
      uVar9 = 0x10;
    }
    lVar5 = thunk_FUN_1800fbccc(uVar9 * 0x38);
    if (lVar5 != 0) {
      uVar10 = 0;
      if ((int)param_1[2] != 0) {
        do {
          lVar7 = param_1[1];
          uVar6 = (ulonglong)uVar10;
          uVar10 = uVar10 + 1;
          lVar8 = uVar6 * 0x38;
          uVar4 = ((undefined8 *)(lVar8 + lVar7))[1];
          *(undefined8 *)(lVar8 + lVar5) = *(undefined8 *)(lVar8 + lVar7);
          ((undefined8 *)(lVar8 + lVar5))[1] = uVar4;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar7);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar5);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar7);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar8 + 0x20 + lVar5);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          *(undefined8 *)(lVar8 + 0x30 + lVar5) = *(undefined8 *)(lVar8 + 0x30 + lVar7);
        } while (uVar10 < *(uint *)(param_1 + 2));
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *param_1 = lVar5;
      param_1[1] = lVar5;
      *(int *)((longlong)param_1 + 0x14) = (int)uVar9;
    }
  }
  uVar10 = *(uint *)(param_1 + 2);
  if (*(uint *)((longlong)param_1 + 0x14) != uVar10) {
    while (param_2 < uVar10) {
      uVar9 = (ulonglong)uVar10;
      lVar5 = param_1[1];
      uVar10 = uVar10 - 1;
      lVar8 = uVar9 * 0x38;
      lVar7 = (ulonglong)uVar10 * 0x38;
      uVar4 = ((undefined8 *)(lVar7 + lVar5))[1];
      *(undefined8 *)(lVar8 + lVar5) = *(undefined8 *)(lVar7 + lVar5);
      ((undefined8 *)(lVar8 + lVar5))[1] = uVar4;
      puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar5);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar5);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar8 + 0x20 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      *(undefined8 *)(lVar8 + 0x30 + lVar5) = *(undefined8 *)(lVar7 + 0x30 + lVar5);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    lVar7 = (ulonglong)param_2 * 0x38;
    *(undefined8 *)(lVar7 + 8 + param_1[1]) = *param_4;
    lVar5 = param_1[1];
    uVar4 = param_5[1];
    puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar5);
    *puVar1 = *param_5;
    puVar1[1] = uVar4;
    uVar4 = param_5[3];
    puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar5);
    *puVar1 = param_5[2];
    puVar1[1] = uVar4;
    *(undefined8 *)(lVar7 + 0x30 + lVar5) = param_5[4];
    *(undefined8 *)(lVar7 + param_1[1]) = param_3;
  }
  return;
}

