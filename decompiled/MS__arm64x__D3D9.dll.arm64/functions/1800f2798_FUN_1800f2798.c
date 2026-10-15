/*
 * FUN_1800f2798 at 1800f2798
 * undefined FUN_1800f2798(void)
 * Address ranges: 1800f2798-1800f296b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800f2798(longlong *param_1,uint *param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  uVar4 = *(uint *)(param_1 + 2);
  uVar13 = (ulonglong)*param_2;
  uVar12 = 0;
  if (uVar4 != 0) {
    uVar8 = 0;
    uVar7 = uVar4;
    do {
      uVar5 = uVar7 + uVar8 >> 1;
      uVar12 = (ulonglong)uVar5;
      uVar11 = *(ulonglong *)(param_1[1] + uVar12 * 0x30);
      if (uVar11 <= uVar13) {
        if (uVar13 <= uVar11) break;
        uVar8 = uVar5 + 1;
        uVar12 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar7;
      }
      uVar7 = uVar5;
    } while (uVar7 != uVar8);
  }
  if (((uint)uVar12 == uVar4) ||
     (puVar1 = (ulonglong *)(param_1[1] + uVar12 * 0x30), *puVar1 != uVar13)) {
    uVar8 = *(uint *)((longlong)param_1 + 0x14);
    if (uVar8 == uVar4) {
      uVar4 = 0x10;
      if (uVar8 != 0) {
        uVar4 = uVar8 << 1;
      }
      lVar6 = thunk_FUN_180102f80((ulonglong)uVar4 * 0x30);
      if (lVar6 != 0) {
        uVar11 = 0;
        if ((int)param_1[2] != 0) {
          do {
            uVar8 = (int)uVar11 + 1;
            puVar2 = (undefined8 *)(param_1[1] + uVar11 * 0x30);
            puVar3 = (undefined8 *)(lVar6 + uVar11 * 0x30);
            uVar16 = *puVar2;
            uVar15 = puVar2[3];
            uVar14 = puVar2[2];
            puVar3[1] = puVar2[1];
            *puVar3 = uVar16;
            puVar3[3] = uVar15;
            puVar3[2] = uVar14;
            uVar14 = puVar2[4];
            puVar3[5] = puVar2[5];
            puVar3[4] = uVar14;
            uVar11 = (ulonglong)uVar8;
          } while (uVar8 < *(uint *)(param_1 + 2));
        }
        thunk_FUN_180102fc0(*param_1);
        *param_1 = lVar6;
        param_1[1] = lVar6;
        *(uint *)((longlong)param_1 + 0x14) = uVar4;
      }
    }
    uVar11 = (ulonglong)*(uint *)(param_1 + 2);
    if (*(uint *)((longlong)param_1 + 0x14) != *(uint *)(param_1 + 2)) {
      while ((uint)uVar12 < (uint)uVar11) {
        uVar10 = (ulonglong)((uint)uVar11 - 1);
        puVar2 = (undefined8 *)(param_1[1] + uVar11 * 0x30);
        puVar3 = (undefined8 *)(param_1[1] + uVar10 * 0x30);
        uVar16 = *puVar3;
        uVar15 = puVar3[3];
        uVar14 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar16;
        puVar2[3] = uVar15;
        puVar2[2] = uVar14;
        uVar14 = puVar3[4];
        puVar2[5] = puVar3[5];
        puVar2[4] = uVar14;
        uVar11 = uVar10;
      }
      uVar18 = param_3[1];
      uVar17 = *param_3;
      uVar10 = param_3[3];
      uVar11 = param_3[2];
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      lVar9 = uVar12 * 0x30;
      *(uint *)(lVar9 + param_1[1] + 8) = *param_2;
      lVar6 = lVar9 + param_1[1];
      *(ulonglong *)(lVar6 + 0x18) = uVar18;
      *(ulonglong *)(lVar6 + 0x10) = uVar17;
      *(ulonglong *)(lVar6 + 0x28) = uVar10;
      *(ulonglong *)(lVar6 + 0x20) = uVar11;
      *(ulonglong *)(param_1[1] + lVar9) = uVar13;
    }
  }
  else {
    uVar10 = *param_3;
    uVar11 = param_3[3];
    uVar13 = param_3[2];
    puVar1[3] = param_3[1];
    puVar1[2] = uVar10;
    puVar1[5] = uVar11;
    puVar1[4] = uVar13;
  }
  return (uVar12 * 0x30 | 8) + param_1[1];
}

