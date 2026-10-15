/*
 * FUN_180160128 at 180160128
 * undefined FUN_180160128(void)
 * Address ranges: 180160128-180160253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180160128(longlong *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
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
    lVar6 = FUN_1802229a8((ulonglong)uVar4 << 6);
    if (lVar6 != 0) {
      uVar7 = 0;
      if ((int)param_1[2] != 0) {
        do {
          uVar1 = (int)uVar7 + 1;
          puVar2 = (undefined8 *)(param_1[1] + uVar7 * 0x40);
          puVar3 = (undefined8 *)(lVar6 + uVar7 * 0x40);
          uVar8 = *puVar2;
          uVar11 = puVar2[3];
          uVar10 = puVar2[2];
          puVar3[1] = puVar2[1];
          *puVar3 = uVar8;
          puVar3[3] = uVar11;
          puVar3[2] = uVar10;
          uVar8 = puVar2[4];
          uVar11 = puVar2[7];
          uVar10 = puVar2[6];
          puVar3[5] = puVar2[5];
          puVar3[4] = uVar8;
          puVar3[7] = uVar11;
          puVar3[6] = uVar10;
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
      uVar9 = (ulonglong)((uint)uVar7 - 1);
      puVar2 = (undefined8 *)(param_1[1] + uVar7 * 0x40);
      puVar3 = (undefined8 *)(param_1[1] + uVar9 * 0x40);
      uVar8 = *puVar3;
      uVar11 = puVar3[3];
      uVar10 = puVar3[2];
      puVar2[1] = puVar3[1];
      *puVar2 = uVar8;
      puVar2[3] = uVar11;
      puVar2[2] = uVar10;
      uVar8 = puVar3[4];
      uVar11 = puVar3[7];
      uVar10 = puVar3[6];
      puVar2[5] = puVar3[5];
      puVar2[4] = uVar8;
      puVar2[7] = uVar11;
      puVar2[6] = uVar10;
      uVar7 = uVar9;
    }
    uVar11 = param_3[1];
    uVar10 = *param_3;
    uVar13 = param_3[3];
    uVar12 = param_3[2];
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    puVar2 = (undefined8 *)(param_1[1] + (ulonglong)param_2 * 0x40);
    uVar8 = param_3[6];
    puVar2[1] = uVar11;
    *puVar2 = uVar10;
    puVar2[3] = uVar13;
    puVar2[2] = uVar12;
    uVar10 = param_3[4];
    puVar2[5] = param_3[5];
    puVar2[4] = uVar10;
    puVar2[6] = uVar8;
    *(undefined8 *)(param_1[1] + (ulonglong)param_2 * 0x40 + 0x38) = *param_4;
  }
  return;
}

