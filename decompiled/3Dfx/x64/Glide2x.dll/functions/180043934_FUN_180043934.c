/*
 * FUN_180043934 at 180043934
 * undefined __fastcall FUN_180043934(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4, undefined8 * param_5)
 * Address ranges: 180043934-180043a5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180043934(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  iVar4 = *(int *)((longlong)param_1 + 0x14);
  uVar8 = (ulonglong)param_2;
  if (iVar4 == (int)param_1[2]) {
    uVar9 = (ulonglong)(uint)(iVar4 * 2);
    if (iVar4 == 0) {
      uVar9 = 0x10;
    }
    lVar7 = thunk_FUN_18005d6fc(uVar9 * 0x28);
    if (lVar7 != 0) {
      uVar11 = 0;
      if ((int)param_1[2] != 0) {
        do {
          lVar5 = param_1[1];
          uVar10 = (int)uVar11 + 1;
          puVar1 = (undefined8 *)(lVar5 + uVar11 * 0x28);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(lVar7 + uVar11 * 0x28);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)(lVar5 + 0x10 + uVar11 * 0x28);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(lVar7 + 0x10 + uVar11 * 0x28);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          *(undefined8 *)(lVar7 + 0x20 + uVar11 * 0x28) =
               *(undefined8 *)(lVar5 + 0x20 + uVar11 * 0x28);
          uVar11 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(param_1 + 2));
      }
      FUN_18005d720((LPVOID)*param_1);
      *param_1 = lVar7;
      param_1[1] = lVar7;
      *(int *)((longlong)param_1 + 0x14) = (int)uVar9;
    }
  }
  uVar10 = *(uint *)(param_1 + 2);
  uVar9 = (ulonglong)uVar10;
  if (*(uint *)((longlong)param_1 + 0x14) != uVar10) {
    while (param_2 < uVar10) {
      lVar7 = param_1[1];
      uVar10 = (int)uVar9 - 1;
      uVar11 = (ulonglong)uVar10;
      puVar1 = (undefined8 *)(lVar7 + uVar11 * 0x28);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar7 + uVar9 * 0x28);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar11 * 0x28);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar7 + 0x10 + uVar9 * 0x28);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined8 *)(lVar7 + 0x20 + uVar9 * 0x28) = *(undefined8 *)(lVar7 + 0x20 + uVar11 * 0x28);
      uVar9 = uVar11;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    *(undefined8 *)(param_1[1] + 8 + uVar8 * 0x28) = *param_4;
    lVar7 = param_1[1];
    uVar6 = param_5[1];
    uVar3 = param_5[2];
    puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar8 * 0x28);
    *puVar1 = *param_5;
    puVar1[1] = uVar6;
    *(undefined8 *)(lVar7 + 0x20 + uVar8 * 0x28) = uVar3;
    *(undefined8 *)(param_1[1] + uVar8 * 0x28) = param_3;
  }
  return;
}

