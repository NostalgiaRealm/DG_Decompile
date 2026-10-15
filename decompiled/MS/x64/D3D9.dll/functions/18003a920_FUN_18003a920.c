/*
 * FUN_18003a920 at 18003a920
 * undefined8 __fastcall FUN_18003a920(longlong * param_1, longlong * param_2)
 * Address ranges: 18003a920-18003aaf4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18003a920(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar13 = *(uint *)((longlong)param_1 + 0xc);
  uVar6 = 0;
  uVar15 = -(ulonglong)(*(char *)((longlong)param_2 + 0xc) != '\0') & 0x8000000000000000 |
           (ulonglong)*(uint *)(param_2 + 1) << 0x20 | (ulonglong)*(uint *)*param_2;
  if (uVar13 != 0) {
    lVar8 = *param_1;
    uVar10 = 0;
    uVar12 = uVar13;
    do {
      uVar6 = uVar12 + uVar10 >> 1;
      uVar14 = *(ulonglong *)(lVar8 + (ulonglong)uVar6 * 0x20);
      uVar5 = uVar6;
      if (uVar14 <= uVar15) {
        if (uVar15 <= uVar14) break;
        uVar10 = uVar6 + 1;
        uVar5 = uVar12;
        uVar6 = uVar10;
      }
      uVar12 = uVar5;
    } while (uVar12 != uVar10);
    if ((uVar6 != uVar13) && (*(ulonglong *)((ulonglong)uVar6 * 0x20 + lVar8) == uVar15)) {
      return *(undefined8 *)((ulonglong)uVar6 * 0x20 + 0x18 + lVar8);
    }
  }
  if (uVar13 == *(uint *)(param_1 + 1)) {
    uVar13 = *(uint *)(param_1 + 1) * 2;
    uVar14 = CONCAT44(0,uVar13);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar14;
    uVar7 = SUB168(ZEXT816(0x20) * auVar4,0);
    if (SUB168(ZEXT816(0x20) * auVar4,8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar8 = thunk_FUN_1800fbccc(uVar7);
    if (lVar8 != 0) {
      lVar9 = lVar8;
      if (uVar13 != 0) {
        do {
          *(undefined8 *)(lVar9 + 8) = 0;
          *(undefined4 *)(lVar9 + 0x10) = 0;
          *(undefined1 *)(lVar9 + 0x14) = 0;
          uVar14 = uVar14 - 1;
          lVar9 = lVar9 + 0x20;
        } while (uVar14 != 0);
      }
      uVar14 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar9 = *param_1;
          uVar13 = (int)uVar14 + 1;
          lVar11 = uVar14 * 0x20;
          puVar1 = (undefined8 *)(lVar9 + lVar11);
          uVar7 = puVar1[1];
          *(undefined8 *)(lVar11 + lVar8) = *puVar1;
          ((undefined8 *)(lVar11 + lVar8))[1] = uVar7;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar11);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          uVar14 = (ulonglong)uVar13;
        } while (uVar13 < *(uint *)(param_1 + 1));
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar8;
    }
  }
  uVar13 = *(uint *)((longlong)param_1 + 0xc);
  while (uVar6 < uVar13) {
    lVar8 = *param_1;
    lVar9 = (ulonglong)(uVar13 - 1) * 0x20;
    puVar1 = (undefined8 *)(lVar8 + lVar9);
    uVar7 = puVar1[1];
    puVar2 = (undefined8 *)(lVar8 + (ulonglong)uVar13 * 0x20);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
    uVar7 = puVar1[1];
    puVar2 = (undefined8 *)(lVar8 + 0x10 + (ulonglong)uVar13 * 0x20);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    uVar13 = uVar13 - 1;
  }
  lVar9 = (ulonglong)uVar6 * 0x20;
  *(ulonglong *)(lVar9 + *param_1) = uVar15;
  lVar8 = param_2[1];
  plVar3 = (longlong *)(lVar9 + 8 + *param_1);
  *plVar3 = *param_2;
  plVar3[1] = lVar8;
  lVar8 = *param_1;
  uVar7 = FUN_18003cf04((longlong)param_1,param_2);
  *(undefined8 *)(lVar9 + 0x18 + lVar8) = uVar7;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return *(undefined8 *)(lVar9 + 0x18 + *param_1);
}

