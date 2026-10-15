/*
 * FUN_180023220 at 180023220
 * undefined __fastcall FUN_180023220(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 180023220-180023336
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023220(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar11 = (ulonglong)param_2;
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    auVar5 = ZEXT816(0x30) * ZEXT416((uint)((int)param_1[1] * 2));
    uVar9 = auVar5._0_8_;
    if (auVar5._8_8_ != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    lVar10 = thunk_FUN_180060a9c(uVar9);
    if (lVar10 != 0) {
      uVar13 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar4 = *param_1;
          uVar12 = (int)uVar13 + 1;
          puVar1 = (undefined8 *)(lVar4 + uVar13 * 0x30);
          uVar9 = puVar1[1];
          puVar2 = (undefined8 *)(lVar10 + uVar13 * 0x30);
          *puVar2 = *puVar1;
          puVar2[1] = uVar9;
          puVar1 = (undefined8 *)(lVar4 + 0x10 + uVar13 * 0x30);
          uVar9 = puVar1[1];
          puVar2 = (undefined8 *)(lVar10 + 0x10 + uVar13 * 0x30);
          *puVar2 = *puVar1;
          puVar2[1] = uVar9;
          puVar1 = (undefined8 *)(lVar4 + 0x20 + uVar13 * 0x30);
          uVar9 = puVar1[1];
          puVar2 = (undefined8 *)(lVar10 + 0x20 + uVar13 * 0x30);
          *puVar2 = *puVar1;
          puVar2[1] = uVar9;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(param_1 + 1));
      }
      FUN_180060ac0((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar10;
    }
  }
  uVar12 = *(uint *)((longlong)param_1 + 0xc);
  uVar13 = (ulonglong)uVar12;
  while (param_2 < uVar12) {
    lVar10 = *param_1;
    uVar12 = (int)uVar13 - 1;
    uVar14 = (ulonglong)uVar12;
    puVar1 = (undefined8 *)(lVar10 + uVar14 * 0x30);
    uVar9 = puVar1[1];
    puVar2 = (undefined8 *)(lVar10 + uVar13 * 0x30);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    puVar1 = (undefined8 *)(lVar10 + 0x10 + uVar14 * 0x30);
    uVar9 = puVar1[1];
    puVar2 = (undefined8 *)(lVar10 + 0x10 + uVar13 * 0x30);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    puVar1 = (undefined8 *)(lVar10 + 0x20 + uVar14 * 0x30);
    uVar9 = puVar1[1];
    puVar2 = (undefined8 *)(lVar10 + 0x20 + uVar13 * 0x30);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    uVar13 = uVar14;
  }
  uVar9 = *param_4;
  uVar6 = param_4[1];
  uVar7 = param_4[2];
  uVar8 = param_4[3];
  *(undefined8 *)(*param_1 + uVar11 * 0x30) = param_3;
  lVar10 = *param_1;
  puVar1 = (undefined8 *)(lVar10 + 8 + uVar11 * 0x30);
  *puVar1 = uVar9;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar10 + 0x18 + uVar11 * 0x30);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  iVar3 = *(int *)param_1[2];
  *(int *)param_1[2] = iVar3 + 1;
  *(int *)(*param_1 + 0x28 + uVar11 * 0x30) = iVar3;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

