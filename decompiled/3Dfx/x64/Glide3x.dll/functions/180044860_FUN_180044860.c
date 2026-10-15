/*
 * FUN_180044860 at 180044860
 * undefined __fastcall FUN_180044860(longlong * param_1, uint param_2, undefined8 param_3, undefined4 * param_4, undefined8 * param_5)
 * Address ranges: 180044860-180044961
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180044860(longlong *param_1,uint param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  uVar7 = (ulonglong)param_2;
  if (iVar3 == (int)param_1[2]) {
    uVar8 = (ulonglong)(uint)(iVar3 * 2);
    if (iVar3 == 0) {
      uVar8 = 0x10;
    }
    lVar6 = thunk_FUN_180060a9c(uVar8 * 0x18);
    if (lVar6 != 0) {
      uVar10 = 0;
      if ((int)param_1[2] != 0) {
        do {
          lVar4 = param_1[1];
          uVar9 = (int)uVar10 + 1;
          puVar1 = (undefined8 *)(lVar4 + uVar10 * 0x18);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + uVar10 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          *(undefined8 *)(lVar6 + 0x10 + uVar10 * 0x18) =
               *(undefined8 *)(lVar4 + 0x10 + uVar10 * 0x18);
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(param_1 + 2));
      }
      FUN_180060ac0((LPVOID)*param_1);
      *param_1 = lVar6;
      param_1[1] = lVar6;
      *(int *)((longlong)param_1 + 0x14) = (int)uVar8;
    }
  }
  uVar9 = *(uint *)(param_1 + 2);
  uVar8 = (ulonglong)uVar9;
  if (*(uint *)((longlong)param_1 + 0x14) != uVar9) {
    while (param_2 < uVar9) {
      lVar6 = param_1[1];
      uVar9 = (int)uVar8 - 1;
      uVar10 = (ulonglong)uVar9;
      puVar1 = (undefined8 *)(lVar6 + uVar10 * 0x18);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + uVar8 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      *(undefined8 *)(lVar6 + 0x10 + uVar8 * 0x18) = *(undefined8 *)(lVar6 + 0x10 + uVar10 * 0x18);
      uVar8 = uVar10;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    *(undefined4 *)(param_1[1] + 8 + uVar7 * 0x18) = *param_4;
    *(undefined8 *)(param_1[1] + 0x10 + uVar7 * 0x18) = *param_5;
    *(undefined8 *)(param_1[1] + uVar7 * 0x18) = param_3;
  }
  return;
}

