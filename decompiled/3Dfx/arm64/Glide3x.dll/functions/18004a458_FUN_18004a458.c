/*
 * FUN_18004a458 at 18004a458
 * undefined8 __cdecl FUN_18004a458(longlong * param_1, ulonglong * param_2)
 * Address ranges: 18004a458-18004a62f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004a458(longlong *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  SIZE_T SVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar14 = *param_2;
  uVar13 = 0;
  if (uVar3 != 0) {
    uVar9 = 0;
    uVar8 = uVar3;
    do {
      uVar4 = uVar8 + uVar9 >> 1;
      uVar13 = (ulonglong)uVar4;
      uVar12 = *(ulonglong *)(*param_1 + uVar13 * 0x18);
      if (uVar12 <= uVar14) {
        if (uVar14 <= uVar12) break;
        uVar9 = uVar4 + 1;
        uVar13 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar8;
      }
      uVar8 = uVar4;
    } while (uVar8 != uVar9);
    if (((uint)uVar13 != uVar3) && (*(ulonglong *)(*param_1 + uVar13 * 0x18) == uVar14))
    goto LAB_18004a610;
  }
  if (uVar3 == *(uint *)(param_1 + 1)) {
    uVar12 = CONCAT44(0,*(uint *)(param_1 + 1) << 1);
    SVar10 = uVar12 * 0x18;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar12;
    if (SUB168(auVar5 * ZEXT816(0x18),8) != 0) {
      SVar10 = 0xffffffffffffffff;
    }
    lVar6 = thunk_FUN_1800636c0(SVar10);
    if (lVar6 != 0) {
      uVar12 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar3 = (int)uVar12 + 1;
          puVar1 = (undefined8 *)(*param_1 + uVar12 * 0x18);
          puVar2 = (undefined8 *)(lVar6 + uVar12 * 0x18);
          uVar15 = *puVar1;
          puVar2[1] = puVar1[1];
          *puVar2 = uVar15;
          puVar2[2] = puVar1[2];
          uVar12 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 1));
      }
      thunk_FUN_180063700((LPVOID)*param_1);
      *param_1 = lVar6;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  while ((uint)uVar13 < (uint)uVar12) {
    uVar11 = (ulonglong)((uint)uVar12 - 1);
    puVar1 = (undefined8 *)(*param_1 + uVar12 * 0x18);
    puVar2 = (undefined8 *)(*param_1 + uVar11 * 0x18);
    uVar15 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar15;
    puVar1[2] = puVar2[2];
    uVar12 = uVar11;
  }
  *(ulonglong *)(*param_1 + uVar13 * 0x18) = uVar14;
  *(ulonglong *)(*param_1 + uVar13 * 0x18 + 8) = *param_2;
  puVar7 = (undefined4 *)FUN_1800636c0(0x20);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = 0;
    *(undefined8 *)(puVar7 + 2) = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 6) = 0;
  }
  *(undefined4 **)(*param_1 + uVar13 * 0x18 + 0x10) = puVar7;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_18004a610:
  return *(undefined8 *)(uVar13 * 0x18 + *param_1 + 0x10);
}

