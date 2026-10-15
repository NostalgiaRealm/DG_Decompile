/*
 * FUN_18020ec30 at 18020ec30
 * undefined FUN_18020ec30(void)
 * Address ranges: 18020ec30-18020ee07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18020ec30(longlong *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar13 = *param_2;
  uVar12 = 0;
  if (uVar3 != 0) {
    uVar8 = 0;
    uVar7 = uVar3;
    do {
      uVar4 = uVar7 + uVar8 >> 1;
      uVar12 = (ulonglong)uVar4;
      uVar11 = *(ulonglong *)(*param_1 + uVar12 * 0x18);
      if (uVar11 <= uVar13) {
        if (uVar13 <= uVar11) break;
        uVar8 = uVar4 + 1;
        uVar12 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar8);
    if (((uint)uVar12 != uVar3) && (*(ulonglong *)(*param_1 + uVar12 * 0x18) == uVar13))
    goto LAB_18020ede8;
  }
  if (uVar3 == *(uint *)(param_1 + 1)) {
    uVar11 = CONCAT44(0,*(uint *)(param_1 + 1) << 1);
    lVar9 = uVar11 * 0x18;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar11;
    if (SUB168(auVar5 * ZEXT816(0x18),8) != 0) {
      lVar9 = -1;
    }
    lVar9 = FUN_1802229a8(lVar9);
    if (lVar9 != 0) {
      uVar11 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar3 = (int)uVar11 + 1;
          puVar1 = (undefined8 *)(*param_1 + uVar11 * 0x18);
          puVar2 = (undefined8 *)(lVar9 + uVar11 * 0x18);
          uVar14 = *puVar1;
          puVar2[1] = puVar1[1];
          *puVar2 = uVar14;
          puVar2[2] = puVar1[2];
          uVar11 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 1));
      }
      FUN_1802229d8(*param_1);
      *param_1 = lVar9;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar11 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  while ((uint)uVar12 < (uint)uVar11) {
    uVar10 = (ulonglong)((uint)uVar11 - 1);
    puVar1 = (undefined8 *)(*param_1 + uVar11 * 0x18);
    puVar2 = (undefined8 *)(*param_1 + uVar10 * 0x18);
    uVar14 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar14;
    puVar1[2] = puVar2[2];
    uVar11 = uVar10;
  }
  *(ulonglong *)(*param_1 + uVar12 * 0x18) = uVar13;
  *(ulonglong *)(*param_1 + uVar12 * 0x18 + 8) = *param_2;
  puVar6 = (undefined4 *)FUN_1802229a8(0x20);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    *(undefined8 *)(puVar6 + 2) = 0;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0;
  }
  *(undefined4 **)(*param_1 + uVar12 * 0x18 + 0x10) = puVar6;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_18020ede8:
  return *(undefined8 *)(uVar12 * 0x18 + *param_1 + 0x10);
}

