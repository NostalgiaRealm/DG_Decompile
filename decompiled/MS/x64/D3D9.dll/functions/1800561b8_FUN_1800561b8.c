/*
 * FUN_1800561b8 at 1800561b8
 * undefined __fastcall FUN_1800561b8(longlong * param_1, uint param_2, undefined8 * param_3, undefined8 * param_4)
 * Address ranges: 1800561b8-1800562da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800561b8(longlong *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  if (iVar3 == (int)param_1[2]) {
    uVar10 = (ulonglong)(uint)(iVar3 * 2);
    if (iVar3 == 0) {
      uVar10 = 0x10;
    }
    lVar5 = thunk_FUN_1800fbccc(uVar10 << 6);
    if (lVar5 != 0) {
      uVar9 = 0;
      if ((int)param_1[2] != 0) {
        do {
          lVar6 = param_1[1];
          uVar7 = (ulonglong)uVar9;
          uVar9 = uVar9 + 1;
          lVar8 = uVar7 * 0x40;
          uVar4 = ((undefined8 *)(lVar6 + lVar8))[1];
          *(undefined8 *)(lVar5 + lVar8) = *(undefined8 *)(lVar6 + lVar8);
          ((undefined8 *)(lVar5 + lVar8))[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar8);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar8);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar8);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
        } while (uVar9 < *(uint *)(param_1 + 2));
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *param_1 = lVar5;
      param_1[1] = lVar5;
      *(int *)((longlong)param_1 + 0x14) = (int)uVar10;
    }
  }
  uVar9 = *(uint *)(param_1 + 2);
  if (*(uint *)((longlong)param_1 + 0x14) != uVar9) {
    while (param_2 < uVar9) {
      lVar5 = param_1[1];
      lVar8 = (ulonglong)uVar9 * 0x40;
      lVar6 = (ulonglong)(uVar9 - 1) * 0x40;
      uVar4 = ((undefined8 *)(lVar5 + lVar6))[1];
      *(undefined8 *)(lVar5 + lVar8) = *(undefined8 *)(lVar5 + lVar6);
      ((undefined8 *)(lVar5 + lVar8))[1] = uVar4;
      puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar6);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar6);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar6);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      uVar9 = uVar9 - 1;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    lVar5 = param_1[1];
    uVar4 = param_3[1];
    lVar6 = (ulonglong)param_2 * 0x40;
    *(undefined8 *)(lVar6 + lVar5) = *param_3;
    ((undefined8 *)(lVar6 + lVar5))[1] = uVar4;
    lVar5 = param_1[1];
    uVar4 = param_4[1];
    puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar5);
    *puVar1 = *param_4;
    puVar1[1] = uVar4;
    uVar4 = param_4[3];
    puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar5);
    *puVar1 = param_4[2];
    puVar1[1] = uVar4;
    uVar4 = param_4[5];
    puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar5);
    *puVar1 = param_4[4];
    puVar1[1] = uVar4;
  }
  return;
}

