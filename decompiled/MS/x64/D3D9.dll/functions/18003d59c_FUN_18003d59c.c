/*
 * FUN_18003d59c at 18003d59c
 * undefined __fastcall FUN_18003d59c(longlong * param_1, uint param_2, undefined8 * param_3, undefined8 * param_4)
 * Address ranges: 18003d59c-18003d68e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003d59c(longlong *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  if (iVar3 == (int)param_1[2]) {
    uVar7 = (ulonglong)(uint)(iVar3 * 2);
    if (iVar3 == 0) {
      uVar7 = 0x10;
    }
    lVar6 = thunk_FUN_1800fbccc(uVar7 * 0x18);
    if (lVar6 != 0) {
      uVar9 = 0;
      if ((int)param_1[2] != 0) {
        do {
          lVar4 = param_1[1];
          uVar8 = (int)uVar9 + 1;
          puVar1 = (undefined8 *)(lVar4 + uVar9 * 0x18);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + uVar9 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          *(undefined8 *)(lVar6 + 0x10 + uVar9 * 0x18) =
               *(undefined8 *)(lVar4 + 0x10 + uVar9 * 0x18);
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)(param_1 + 2));
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *param_1 = lVar6;
      param_1[1] = lVar6;
      *(int *)((longlong)param_1 + 0x14) = (int)uVar7;
    }
  }
  uVar8 = *(uint *)(param_1 + 2);
  uVar7 = (ulonglong)uVar8;
  if (*(uint *)((longlong)param_1 + 0x14) != uVar8) {
    while (param_2 < uVar8) {
      lVar6 = param_1[1];
      uVar8 = (int)uVar7 - 1;
      uVar9 = (ulonglong)uVar8;
      puVar1 = (undefined8 *)(lVar6 + uVar9 * 0x18);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + uVar7 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      *(undefined8 *)(lVar6 + 0x10 + uVar7 * 0x18) = *(undefined8 *)(lVar6 + 0x10 + uVar9 * 0x18);
      uVar7 = uVar9;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    uVar5 = param_3[1];
    puVar1 = (undefined8 *)(param_1[1] + (ulonglong)param_2 * 0x18);
    *puVar1 = *param_3;
    puVar1[1] = uVar5;
    *(undefined8 *)(param_1[1] + 0x10 + (ulonglong)param_2 * 0x18) = *param_4;
  }
  return;
}

