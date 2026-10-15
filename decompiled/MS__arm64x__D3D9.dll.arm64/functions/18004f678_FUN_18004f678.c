/*
 * FUN_18004f678 at 18004f678
 * undefined FUN_18004f678(void)
 * Address ranges: 18004f678-18004f957
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong *
FUN_18004f678(undefined8 *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  
  uVar6 = param_1[1];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  uVar3 = *(uint *)(param_1 + 4);
  uVar6 = uVar6 & param_3;
  uVar7 = 0;
  if (uVar3 != 0) {
    lVar11 = param_1[3];
    iVar10 = 0;
    uVar15 = (ulonglong)uVar3;
    do {
      uVar4 = (uint)((int)uVar15 + iVar10) >> 1;
      uVar7 = (ulonglong)uVar4;
      lVar5 = uVar7 * 0x40;
      uVar13 = *(ulonglong *)(lVar11 + 8 + lVar5);
      uVar16 = uVar7;
      if ((uVar13 <= param_4) && ((uVar13 != param_4 || (*(ulonglong *)(lVar11 + lVar5) <= uVar6))))
      {
        if ((param_4 <= uVar13) &&
           ((uVar13 != param_4 || (uVar6 <= *(ulonglong *)(lVar11 + lVar5))))) break;
        iVar10 = uVar4 + 1;
        uVar7 = (ulonglong)(uVar4 + 1);
        uVar16 = uVar15;
      }
      uVar15 = uVar16;
    } while ((int)uVar16 != iVar10);
  }
  if ((uint)uVar7 != uVar3) {
    lVar11 = param_1[3];
    uVar7 = uVar7 * 0x40;
    if (((*(ulonglong *)(uVar7 + lVar11) == uVar6) &&
        (*(ulonglong *)(uVar7 + lVar11 + 8) == param_4)) &&
       (puVar9 = (ulonglong *)((uVar7 | 0x10) + lVar11), puVar9 != (ulonglong *)0x0)) {
      uVar15 = *puVar9;
      uVar6 = puVar9[3];
      uVar7 = puVar9[2];
      param_2[1] = puVar9[1];
      *param_2 = uVar15;
      param_2[3] = uVar6;
      param_2[2] = uVar7;
      uVar7 = puVar9[4];
      param_2[5] = puVar9[5];
      param_2[4] = uVar7;
      return param_2;
    }
  }
  uVar7 = (**(code **)*param_1)(param_1,uVar6,param_4,param_2 + 1);
  *param_2 = uVar7;
  if (uVar7 == 0) {
    return param_2;
  }
  uVar22 = param_2[1];
  uVar20 = *param_2;
  uVar13 = param_2[3];
  uVar15 = param_2[2];
  uVar7 = 0;
  uVar3 = *(uint *)(param_1 + 4);
  uVar18 = param_2[5];
  uVar16 = param_2[4];
  if (uVar3 != 0) {
    lVar11 = param_1[3];
    iVar10 = 0;
    uVar8 = (ulonglong)uVar3;
    do {
      uVar4 = (uint)((int)uVar8 + iVar10) >> 1;
      uVar14 = (ulonglong)uVar4;
      lVar5 = uVar14 * 0x40;
      uVar12 = *(ulonglong *)(lVar11 + 8 + lVar5);
      uVar7 = uVar14;
      if ((uVar12 <= param_4) && ((uVar12 != param_4 || (*(ulonglong *)(lVar11 + lVar5) <= uVar6))))
      {
        if ((param_4 <= uVar12) &&
           ((uVar12 != param_4 || (uVar6 <= *(ulonglong *)(lVar11 + lVar5))))) break;
        iVar10 = uVar4 + 1;
        uVar14 = uVar8;
        uVar7 = (ulonglong)(uVar4 + 1);
      }
      uVar8 = uVar14;
    } while ((int)uVar14 != iVar10);
    if ((((uint)uVar7 != uVar3) &&
        (puVar9 = (ulonglong *)(param_1[3] + uVar7 * 0x40), *puVar9 == uVar6)) &&
       (puVar9[1] == param_4)) goto LAB_18004f92c;
  }
  uVar4 = *(uint *)((longlong)param_1 + 0x24);
  if (uVar4 == uVar3) {
    uVar3 = 0x10;
    if (uVar4 != 0) {
      uVar3 = uVar4 << 1;
    }
    lVar11 = thunk_FUN_180102f80((ulonglong)uVar3 << 6);
    if (lVar11 != 0) {
      uVar8 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        do {
          uVar4 = (int)uVar8 + 1;
          puVar1 = (undefined8 *)(param_1[3] + uVar8 * 0x40);
          puVar2 = (undefined8 *)(lVar11 + uVar8 * 0x40);
          uVar21 = *puVar1;
          uVar19 = puVar1[3];
          uVar17 = puVar1[2];
          puVar2[1] = puVar1[1];
          *puVar2 = uVar21;
          puVar2[3] = uVar19;
          puVar2[2] = uVar17;
          uVar21 = puVar1[4];
          uVar19 = puVar1[7];
          uVar17 = puVar1[6];
          puVar2[5] = puVar1[5];
          puVar2[4] = uVar21;
          puVar2[7] = uVar19;
          puVar2[6] = uVar17;
          uVar8 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(param_1 + 4));
      }
      thunk_FUN_180102fc0(param_1[2]);
      param_1[2] = lVar11;
      param_1[3] = lVar11;
      *(uint *)((longlong)param_1 + 0x24) = uVar3;
    }
  }
  uVar8 = (ulonglong)*(uint *)(param_1 + 4);
  if (*(uint *)((longlong)param_1 + 0x24) == *(uint *)(param_1 + 4)) {
    return param_2;
  }
  while ((uint)uVar7 < (uint)uVar8) {
    uVar14 = (ulonglong)((uint)uVar8 - 1);
    puVar1 = (undefined8 *)(param_1[3] + uVar8 * 0x40);
    puVar2 = (undefined8 *)(param_1[3] + uVar14 * 0x40);
    uVar21 = *puVar2;
    uVar19 = puVar2[3];
    uVar17 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
    puVar1[3] = uVar19;
    puVar1[2] = uVar17;
    uVar21 = puVar2[4];
    uVar19 = puVar2[7];
    uVar17 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar21;
    puVar1[7] = uVar19;
    puVar1[6] = uVar17;
    uVar8 = uVar14;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  puVar9 = (ulonglong *)(uVar7 * 0x40 + param_1[3]);
  puVar9[1] = param_4;
  *puVar9 = uVar6;
  puVar9 = (ulonglong *)(uVar7 * 0x40 + param_1[3]);
LAB_18004f92c:
  puVar9[3] = uVar22;
  puVar9[2] = uVar20;
  puVar9[5] = uVar13;
  puVar9[4] = uVar15;
  puVar9[7] = uVar18;
  puVar9[6] = uVar16;
  return param_2;
}

