/*
 * FUN_1800517b8 at 1800517b8
 * undefined __fastcall FUN_1800517b8(longlong * param_1, uint param_2, undefined8 param_3, undefined4 * param_4, undefined8 * param_5)
 * Address ranges: 1800517b8-1800518c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800517b8(longlong *param_1,uint param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  uVar11 = (ulonglong)param_2;
  if (iVar3 == (int)param_1[2]) {
    uVar9 = (ulonglong)(uint)(iVar3 * 2);
    if (iVar3 == 0) {
      uVar9 = 0x10;
    }
    lVar6 = thunk_FUN_1800fbccc(uVar9 * 0x18 + 0x7f);
    if (lVar6 != 0) {
      uVar10 = lVar6 + 0x7fU & 0xffffffffffffff80;
      uVar8 = 0;
      if ((int)param_1[2] != 0) {
        do {
          lVar4 = param_1[1];
          uVar7 = (int)uVar8 + 1;
          puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x18);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(uVar10 + uVar8 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          *(undefined8 *)(uVar10 + 0x10 + uVar8 * 0x18) =
               *(undefined8 *)(lVar4 + 0x10 + uVar8 * 0x18);
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < *(uint *)(param_1 + 2));
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *param_1 = lVar6;
      param_1[1] = uVar10;
      *(int *)((longlong)param_1 + 0x14) = (int)uVar9;
    }
  }
  uVar7 = *(uint *)(param_1 + 2);
  uVar9 = (ulonglong)uVar7;
  if (*(uint *)((longlong)param_1 + 0x14) != uVar7) {
    while (param_2 < uVar7) {
      lVar6 = param_1[1];
      uVar7 = (int)uVar9 - 1;
      uVar8 = (ulonglong)uVar7;
      puVar1 = (undefined8 *)(lVar6 + uVar8 * 0x18);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + uVar9 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      *(undefined8 *)(lVar6 + 0x10 + uVar9 * 0x18) = *(undefined8 *)(lVar6 + 0x10 + uVar8 * 0x18);
      uVar9 = uVar8;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    *(undefined4 *)(param_1[1] + 8 + uVar11 * 0x18) = *param_4;
    *(undefined8 *)(param_1[1] + 0x10 + uVar11 * 0x18) = *param_5;
    *(undefined8 *)(param_1[1] + uVar11 * 0x18) = param_3;
  }
  return;
}

