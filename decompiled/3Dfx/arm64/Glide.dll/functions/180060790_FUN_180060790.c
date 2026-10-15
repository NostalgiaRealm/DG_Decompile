/*
 * FUN_180060790 at 180060790
 * undefined __cdecl FUN_180060790(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4, undefined8 * param_5)
 * Address ranges: 180060790-1800608d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180060790(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4,
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
  
  uVar7 = (ulonglong)param_2;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  if (iVar5 == (int)param_1[2]) {
    uVar4 = 0x10;
    if (iVar5 != 0) {
      uVar4 = iVar5 << 1;
    }
    lVar6 = thunk_FUN_1800609d8((ulonglong)uVar4 * 0x18);
    if (lVar6 != 0) {
      uVar8 = 0;
      if ((int)param_1[2] != 0) {
        do {
          uVar1 = (int)uVar8 + 1;
          puVar2 = (undefined8 *)(param_1[1] + uVar8 * 0x18);
          puVar3 = (undefined8 *)(lVar6 + uVar8 * 0x18);
          uVar10 = *puVar2;
          puVar3[1] = puVar2[1];
          *puVar3 = uVar10;
          puVar3[2] = puVar2[2];
          uVar8 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 2));
      }
      thunk_FUN_180060a18((LPVOID)*param_1);
      *param_1 = lVar6;
      param_1[1] = lVar6;
      *(uint *)((longlong)param_1 + 0x14) = uVar4;
    }
  }
  uVar8 = (ulonglong)*(uint *)(param_1 + 2);
  if (*(uint *)((longlong)param_1 + 0x14) != *(uint *)(param_1 + 2)) {
    while (param_2 < (uint)uVar8) {
      uVar9 = (ulonglong)((uint)uVar8 - 1);
      puVar2 = (undefined8 *)(param_1[1] + uVar8 * 0x18);
      puVar3 = (undefined8 *)(param_1[1] + uVar9 * 0x18);
      uVar10 = *puVar3;
      puVar2[1] = puVar3[1];
      *puVar2 = uVar10;
      puVar2[2] = puVar3[2];
      uVar8 = uVar9;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    *(undefined8 *)(param_1[1] + uVar7 * 0x18 + 8) = *param_4;
    *(undefined8 *)(param_1[1] + uVar7 * 0x18 + 0x10) = *param_5;
    *(undefined8 *)(param_1[1] + uVar7 * 0x18) = param_3;
  }
  return;
}

