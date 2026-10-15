/*
 * FUN_18015f340 at 18015f340
 * undefined FUN_18015f340(void)
 * Address ranges: 18015f340-18015f633
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong * FUN_18015f340(longlong param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  int iVar11;
  longlong lVar12;
  code *extraout_x11;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  
  uVar7 = *(ulonglong *)(param_1 + 8);
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar7 = uVar7 & param_3;
  uVar8 = 0;
  if (uVar3 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x18);
    iVar11 = 0;
    uVar15 = (ulonglong)uVar3;
    do {
      uVar4 = (uint)((int)uVar15 + iVar11) >> 1;
      uVar8 = (ulonglong)uVar4;
      lVar5 = uVar8 * 0x40;
      uVar6 = *(ulonglong *)(lVar12 + 8 + lVar5);
      uVar17 = uVar8;
      if ((uVar6 <= param_4) && ((uVar6 != param_4 || (*(ulonglong *)(lVar12 + lVar5) <= uVar7)))) {
        if ((param_4 <= uVar6) && ((uVar6 != param_4 || (uVar7 <= *(ulonglong *)(lVar12 + lVar5)))))
        break;
        iVar11 = uVar4 + 1;
        uVar8 = (ulonglong)(uVar4 + 1);
        uVar17 = uVar15;
      }
      uVar15 = uVar17;
    } while ((int)uVar17 != iVar11);
  }
  if ((uint)uVar8 != uVar3) {
    lVar12 = *(longlong *)(param_1 + 0x18);
    uVar8 = uVar8 * 0x40;
    if (((*(ulonglong *)(uVar8 + lVar12) == uVar7) &&
        (*(ulonglong *)(uVar8 + lVar12 + 8) == param_4)) &&
       (puVar10 = (ulonglong *)((uVar8 | 0x10) + lVar12), puVar10 != (ulonglong *)0x0)) {
      uVar8 = *puVar10;
      uVar15 = puVar10[3];
      uVar7 = puVar10[2];
      param_2[1] = puVar10[1];
      *param_2 = uVar8;
      param_2[3] = uVar15;
      param_2[2] = uVar7;
      uVar8 = puVar10[4];
      param_2[5] = puVar10[5];
      param_2[4] = uVar8;
      return param_2;
    }
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar8 = (*extraout_x11)(param_1,uVar7,param_4,param_2 + 1);
  *param_2 = uVar8;
  if (uVar8 == 0) {
    return param_2;
  }
  uVar17 = param_2[1];
  uVar15 = *param_2;
  uVar20 = param_2[3];
  uVar6 = param_2[2];
  uVar8 = 0;
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar21 = param_2[5];
  uVar18 = param_2[4];
  if (uVar3 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x18);
    iVar11 = 0;
    uVar9 = (ulonglong)uVar3;
    do {
      uVar4 = (uint)((int)uVar9 + iVar11) >> 1;
      uVar14 = (ulonglong)uVar4;
      lVar5 = uVar14 * 0x40;
      uVar13 = *(ulonglong *)(lVar12 + 8 + lVar5);
      uVar8 = uVar14;
      if ((uVar13 <= param_4) && ((uVar13 != param_4 || (*(ulonglong *)(lVar12 + lVar5) <= uVar7))))
      {
        if ((param_4 <= uVar13) &&
           ((uVar13 != param_4 || (uVar7 <= *(ulonglong *)(lVar12 + lVar5))))) break;
        iVar11 = uVar4 + 1;
        uVar14 = uVar9;
        uVar8 = (ulonglong)(uVar4 + 1);
      }
      uVar9 = uVar14;
    } while ((int)uVar14 != iVar11);
    if ((((uint)uVar8 != uVar3) &&
        (puVar10 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar8 * 0x40), *puVar10 == uVar7))
       && (puVar10[1] == param_4)) goto LAB_18015f608;
  }
  uVar4 = *(uint *)(param_1 + 0x24);
  if (uVar4 == uVar3) {
    uVar3 = 0x10;
    if (uVar4 != 0) {
      uVar3 = uVar4 << 1;
    }
    lVar12 = FUN_1802229a8((ulonglong)uVar3 << 6);
    if (lVar12 != 0) {
      uVar9 = 0;
      if (*(int *)(param_1 + 0x20) != 0) {
        do {
          uVar4 = (int)uVar9 + 1;
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar9 * 0x40);
          puVar2 = (undefined8 *)(lVar12 + uVar9 * 0x40);
          uVar16 = *puVar1;
          uVar22 = puVar1[3];
          uVar19 = puVar1[2];
          puVar2[1] = puVar1[1];
          *puVar2 = uVar16;
          puVar2[3] = uVar22;
          puVar2[2] = uVar19;
          uVar16 = puVar1[4];
          uVar22 = puVar1[7];
          uVar19 = puVar1[6];
          puVar2[5] = puVar1[5];
          puVar2[4] = uVar16;
          puVar2[7] = uVar22;
          puVar2[6] = uVar19;
          uVar9 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(param_1 + 0x20));
      }
      FUN_1802229d8(*(undefined8 *)(param_1 + 0x10));
      *(longlong *)(param_1 + 0x10) = lVar12;
      *(longlong *)(param_1 + 0x18) = lVar12;
      *(uint *)(param_1 + 0x24) = uVar3;
    }
  }
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x24) == *(uint *)(param_1 + 0x20)) {
    return param_2;
  }
  while ((uint)uVar8 < (uint)uVar9) {
    uVar14 = (ulonglong)((uint)uVar9 - 1);
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar9 * 0x40);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar14 * 0x40);
    uVar16 = *puVar2;
    uVar22 = puVar2[3];
    uVar19 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar16;
    puVar1[3] = uVar22;
    puVar1[2] = uVar19;
    uVar16 = puVar2[4];
    uVar22 = puVar2[7];
    uVar19 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar16;
    puVar1[7] = uVar22;
    puVar1[6] = uVar19;
    uVar9 = uVar14;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  puVar10 = (ulonglong *)(uVar8 * 0x40 + *(longlong *)(param_1 + 0x18));
  puVar10[1] = param_4;
  *puVar10 = uVar7;
  puVar10 = (ulonglong *)(uVar8 * 0x40 + *(longlong *)(param_1 + 0x18));
LAB_18015f608:
  puVar10[3] = uVar17;
  puVar10[2] = uVar15;
  puVar10[5] = uVar20;
  puVar10[4] = uVar6;
  puVar10[7] = uVar21;
  puVar10[6] = uVar18;
  return param_2;
}

