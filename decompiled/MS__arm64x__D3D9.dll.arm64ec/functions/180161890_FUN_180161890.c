/*
 * FUN_180161890 at 180161890
 * undefined FUN_180161890(void)
 * Address ranges: 180161890-1801619f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180161890(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  uVar9 = (ulonglong)param_2;
  if (iVar5 == (int)param_1[2]) {
    uVar4 = 0x10;
    if (iVar5 != 0) {
      uVar4 = iVar5 << 1;
    }
    lVar6 = FUN_1802229a8((ulonglong)uVar4 * 0x38);
    if (lVar6 != 0) {
      uVar7 = 0;
      if ((int)param_1[2] != 0) {
        do {
          uVar1 = (int)uVar7 + 1;
          puVar2 = (undefined8 *)(param_1[1] + uVar7 * 0x38);
          puVar3 = (undefined8 *)(lVar6 + uVar7 * 0x38);
          uVar10 = *puVar2;
          uVar12 = puVar2[3];
          uVar11 = puVar2[2];
          puVar3[1] = puVar2[1];
          *puVar3 = uVar10;
          puVar3[3] = uVar12;
          puVar3[2] = uVar11;
          uVar10 = puVar2[4];
          puVar3[5] = puVar2[5];
          puVar3[4] = uVar10;
          puVar3[6] = puVar2[6];
          uVar7 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 2));
      }
      FUN_1802229d8(*param_1);
      *param_1 = lVar6;
      param_1[1] = lVar6;
      *(uint *)((longlong)param_1 + 0x14) = uVar4;
    }
  }
  uVar7 = (ulonglong)*(uint *)(param_1 + 2);
  if (*(uint *)((longlong)param_1 + 0x14) != *(uint *)(param_1 + 2)) {
    while (param_2 < (uint)uVar7) {
      uVar8 = (ulonglong)((uint)uVar7 - 1);
      puVar2 = (undefined8 *)(param_1[1] + uVar7 * 0x38);
      puVar3 = (undefined8 *)(param_1[1] + uVar8 * 0x38);
      uVar10 = *puVar3;
      uVar12 = puVar3[3];
      uVar11 = puVar3[2];
      puVar2[1] = puVar3[1];
      *puVar2 = uVar10;
      puVar2[3] = uVar12;
      puVar2[2] = uVar11;
      uVar10 = puVar3[4];
      puVar2[5] = puVar3[5];
      puVar2[4] = uVar10;
      puVar2[6] = puVar3[6];
      uVar7 = uVar8;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    *(undefined8 *)(param_1[1] + uVar9 * 0x38 + 8) = *param_4;
    uVar10 = *param_5;
    uVar12 = param_5[3];
    uVar11 = param_5[2];
    lVar6 = param_1[1] + uVar9 * 0x38;
    *(undefined8 *)(lVar6 + 0x18) = param_5[1];
    *(undefined8 *)(lVar6 + 0x10) = uVar10;
    *(undefined8 *)(lVar6 + 0x28) = uVar12;
    *(undefined8 *)(lVar6 + 0x20) = uVar11;
    *(undefined8 *)(lVar6 + 0x30) = param_5[4];
    *(undefined8 *)(param_1[1] + uVar9 * 0x38) = param_3;
  }
  return;
}

