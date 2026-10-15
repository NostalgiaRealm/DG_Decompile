/*
 * FUN_18001de68 at 18001de68
 * undefined __fastcall FUN_18001de68(longlong * param_1, uint param_2, undefined8 param_3, undefined4 * param_4, undefined8 * param_5)
 * Address ranges: 18001de68-18001e0a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001de68(longlong *param_1,uint param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  if (iVar3 == (int)param_1[2]) {
    uVar10 = (ulonglong)(uint)(iVar3 * 2);
    if (iVar3 == 0) {
      uVar10 = 0x10;
    }
    lVar5 = thunk_FUN_1800fbccc(uVar10 * 0xa0 + 0xf);
    if (lVar5 != 0) {
      uVar9 = 0;
      uVar11 = lVar5 + 0xfU & 0xfffffffffffffff0;
      if ((int)param_1[2] != 0) {
        do {
          lVar7 = param_1[1];
          lVar6 = uVar9 * 0xa0;
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          uVar4 = ((undefined8 *)(lVar6 + lVar7))[1];
          *(undefined8 *)(lVar6 + uVar11) = *(undefined8 *)(lVar6 + lVar7);
          ((undefined8 *)(lVar6 + uVar11))[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar7);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x10 + uVar11);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar7);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x20 + uVar11);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar7);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x30 + uVar11);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x40 + lVar7);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x40 + uVar11);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x50 + lVar7);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x50 + uVar11);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x60 + lVar7);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x60 + uVar11);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x70 + lVar7);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x70 + uVar11);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x80 + lVar7);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x80 + uVar11);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x90 + lVar7);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x90 + uVar11);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
        } while (uVar8 < *(uint *)(param_1 + 2));
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *param_1 = lVar5;
      param_1[1] = uVar11;
      *(int *)((longlong)param_1 + 0x14) = (int)uVar10;
    }
  }
  uVar8 = *(uint *)(param_1 + 2);
  uVar10 = (ulonglong)uVar8;
  if (*(uint *)((longlong)param_1 + 0x14) != uVar8) {
    while (param_2 < uVar8) {
      lVar5 = param_1[1];
      uVar8 = (int)uVar10 - 1;
      lVar6 = uVar10 * 0xa0;
      lVar7 = (ulonglong)uVar8 * 0xa0;
      uVar4 = ((undefined8 *)(lVar7 + lVar5))[1];
      *(undefined8 *)(lVar6 + lVar5) = *(undefined8 *)(lVar7 + lVar5);
      ((undefined8 *)(lVar6 + lVar5))[1] = uVar4;
      puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar5);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar5);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar5);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x30 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(lVar7 + 0x40 + lVar5);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x40 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(lVar7 + 0x50 + lVar5);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x50 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(lVar7 + 0x60 + lVar5);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x60 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(lVar7 + 0x70 + lVar5);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x70 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(lVar7 + 0x80 + lVar5);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x80 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)(lVar7 + 0x90 + lVar5);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x90 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      uVar10 = (ulonglong)uVar8;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    lVar7 = (ulonglong)param_2 * 0xa0;
    *(undefined4 *)(lVar7 + 0x10 + param_1[1]) = *param_4;
    lVar5 = param_1[1];
    uVar4 = param_5[1];
    puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar5);
    *puVar1 = *param_5;
    puVar1[1] = uVar4;
    uVar4 = param_5[3];
    puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar5);
    *puVar1 = param_5[2];
    puVar1[1] = uVar4;
    uVar4 = param_5[5];
    puVar1 = (undefined8 *)(lVar7 + 0x40 + lVar5);
    *puVar1 = param_5[4];
    puVar1[1] = uVar4;
    uVar4 = param_5[7];
    puVar1 = (undefined8 *)(lVar7 + 0x50 + lVar5);
    *puVar1 = param_5[6];
    puVar1[1] = uVar4;
    uVar4 = param_5[9];
    puVar1 = (undefined8 *)(lVar7 + 0x60 + lVar5);
    *puVar1 = param_5[8];
    puVar1[1] = uVar4;
    uVar4 = param_5[0xb];
    puVar1 = (undefined8 *)(lVar7 + 0x70 + lVar5);
    *puVar1 = param_5[10];
    puVar1[1] = uVar4;
    uVar4 = param_5[0xd];
    puVar1 = (undefined8 *)(lVar7 + 0x80 + lVar5);
    *puVar1 = param_5[0xc];
    puVar1[1] = uVar4;
    uVar4 = param_5[0xf];
    puVar1 = (undefined8 *)(lVar7 + 0x90 + lVar5);
    *puVar1 = param_5[0xe];
    puVar1[1] = uVar4;
    *(undefined8 *)(lVar7 + param_1[1]) = param_3;
  }
  return;
}

