/*
 * FUN_180058a00 at 180058a00
 * undefined __cdecl FUN_180058a00(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4, undefined8 * param_5)
 * Address ranges: 180058a00-180058b3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058a00(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  if (iVar5 == (int)param_1[2]) {
    uVar4 = 0x10;
    if (iVar5 != 0) {
      uVar4 = iVar5 << 1;
    }
    lVar7 = thunk_FUN_1800636c0((ulonglong)uVar4 << 6);
    if (lVar7 != 0) {
      uVar8 = 0;
      if ((int)param_1[2] != 0) {
        do {
          uVar1 = (int)uVar8 + 1;
          puVar2 = (undefined8 *)(param_1[1] + uVar8 * 0x40);
          puVar3 = (undefined8 *)(lVar7 + uVar8 * 0x40);
          uVar12 = *puVar2;
          uVar11 = puVar2[3];
          uVar10 = puVar2[2];
          puVar3[1] = puVar2[1];
          *puVar3 = uVar12;
          puVar3[3] = uVar11;
          puVar3[2] = uVar10;
          uVar12 = puVar2[4];
          uVar11 = puVar2[7];
          uVar10 = puVar2[6];
          puVar3[5] = puVar2[5];
          puVar3[4] = uVar12;
          puVar3[7] = uVar11;
          puVar3[6] = uVar10;
          uVar8 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 2));
      }
      thunk_FUN_180063700((LPVOID)*param_1);
      *param_1 = lVar7;
      param_1[1] = lVar7;
      *(uint *)((longlong)param_1 + 0x14) = uVar4;
    }
  }
  uVar8 = (ulonglong)*(uint *)(param_1 + 2);
  if (*(uint *)((longlong)param_1 + 0x14) != *(uint *)(param_1 + 2)) {
    while (param_2 < (uint)uVar8) {
      uVar9 = (ulonglong)((uint)uVar8 - 1);
      puVar2 = (undefined8 *)(param_1[1] + uVar8 * 0x40);
      puVar3 = (undefined8 *)(param_1[1] + uVar9 * 0x40);
      uVar12 = *puVar3;
      uVar11 = puVar3[3];
      uVar10 = puVar3[2];
      puVar2[1] = puVar3[1];
      *puVar2 = uVar12;
      puVar2[3] = uVar11;
      puVar2[2] = uVar10;
      uVar12 = puVar3[4];
      uVar11 = puVar3[7];
      uVar10 = puVar3[6];
      puVar2[5] = puVar3[5];
      puVar2[4] = uVar12;
      puVar2[7] = uVar11;
      puVar2[6] = uVar10;
      uVar8 = uVar9;
    }
    lVar6 = (ulonglong)param_2 * 0x40;
    uVar13 = param_5[1];
    uVar12 = *param_5;
    uVar11 = param_5[3];
    uVar10 = param_5[2];
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    *(undefined8 *)(lVar6 + param_1[1] + 8) = *param_4;
    lVar7 = lVar6 + param_1[1];
    *(undefined8 *)(lVar7 + 0x18) = uVar13;
    *(undefined8 *)(lVar7 + 0x10) = uVar12;
    *(undefined8 *)(lVar7 + 0x28) = uVar11;
    *(undefined8 *)(lVar7 + 0x20) = uVar10;
    uVar10 = param_5[4];
    *(undefined8 *)(lVar7 + 0x38) = param_5[5];
    *(undefined8 *)(lVar7 + 0x30) = uVar10;
    *(undefined8 *)(param_1[1] + lVar6) = param_3;
  }
  return;
}

