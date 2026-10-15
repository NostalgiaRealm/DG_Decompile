/*
 * FUN_180011ac8 at 180011ac8
 * undefined FUN_180011ac8(void)
 * Address ranges: 180011ac8-180011d0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180011ac8(longlong *param_1,uint *param_2,ulonglong *param_3)

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
  
  uVar4 = *(uint *)(param_1 + 2);
  uVar12 = (ulonglong)*param_2;
  uVar11 = 0;
  if (uVar4 != 0) {
    uVar8 = 0;
    uVar7 = uVar4;
    do {
      uVar5 = uVar7 + uVar8 >> 1;
      uVar11 = (ulonglong)uVar5;
      uVar10 = *(ulonglong *)(param_1[1] + uVar11 * 0xa0);
      if (uVar10 <= uVar12) {
        if (uVar12 <= uVar10) break;
        uVar8 = uVar5 + 1;
        uVar11 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar7;
      }
      uVar7 = uVar5;
    } while (uVar7 != uVar8);
  }
  if (((uint)uVar11 == uVar4) ||
     (puVar1 = (ulonglong *)(param_1[1] + uVar11 * 0xa0), *puVar1 != uVar12)) {
    uVar8 = *(uint *)((longlong)param_1 + 0x14);
    if (uVar8 == uVar4) {
      uVar4 = 0x10;
      if (uVar8 != 0) {
        uVar4 = uVar8 << 1;
      }
      lVar6 = thunk_FUN_180102f80((ulonglong)uVar4 * 0xa0 + 0xf);
      if (lVar6 != 0) {
        uVar13 = lVar6 + 0xfU & 0xfffffffffffffff0;
        uVar10 = 0;
        if ((int)param_1[2] != 0) {
          do {
            uVar8 = (int)uVar10 + 1;
            puVar2 = (undefined8 *)(param_1[1] + uVar10 * 0xa0);
            puVar3 = (undefined8 *)(uVar13 + uVar10 * 0xa0);
            uVar16 = *puVar2;
            uVar15 = puVar2[3];
            uVar14 = puVar2[2];
            puVar3[1] = puVar2[1];
            *puVar3 = uVar16;
            puVar3[3] = uVar15;
            puVar3[2] = uVar14;
            uVar16 = puVar2[4];
            uVar15 = puVar2[7];
            uVar14 = puVar2[6];
            puVar3[5] = puVar2[5];
            puVar3[4] = uVar16;
            puVar3[7] = uVar15;
            puVar3[6] = uVar14;
            uVar16 = puVar2[8];
            uVar15 = puVar2[0xb];
            uVar14 = puVar2[10];
            puVar3[9] = puVar2[9];
            puVar3[8] = uVar16;
            puVar3[0xb] = uVar15;
            puVar3[10] = uVar14;
            uVar16 = puVar2[0xc];
            uVar15 = puVar2[0xf];
            uVar14 = puVar2[0xe];
            puVar3[0xd] = puVar2[0xd];
            puVar3[0xc] = uVar16;
            puVar3[0xf] = uVar15;
            puVar3[0xe] = uVar14;
            uVar16 = puVar2[0x10];
            uVar15 = puVar2[0x13];
            uVar14 = puVar2[0x12];
            puVar3[0x11] = puVar2[0x11];
            puVar3[0x10] = uVar16;
            puVar3[0x13] = uVar15;
            puVar3[0x12] = uVar14;
            uVar10 = (ulonglong)uVar8;
          } while (uVar8 < *(uint *)(param_1 + 2));
        }
        thunk_FUN_180102fc0(*param_1);
        *param_1 = lVar6;
        param_1[1] = uVar13;
        *(uint *)((longlong)param_1 + 0x14) = uVar4;
      }
    }
    uVar10 = (ulonglong)*(uint *)(param_1 + 2);
    if (*(uint *)((longlong)param_1 + 0x14) != *(uint *)(param_1 + 2)) {
      while ((uint)uVar11 < (uint)uVar10) {
        uVar13 = (ulonglong)((uint)uVar10 - 1);
        puVar2 = (undefined8 *)(param_1[1] + uVar10 * 0xa0);
        puVar3 = (undefined8 *)(param_1[1] + uVar13 * 0xa0);
        uVar16 = *puVar3;
        uVar15 = puVar3[3];
        uVar14 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar16;
        puVar2[3] = uVar15;
        puVar2[2] = uVar14;
        uVar16 = puVar3[4];
        uVar15 = puVar3[7];
        uVar14 = puVar3[6];
        puVar2[5] = puVar3[5];
        puVar2[4] = uVar16;
        puVar2[7] = uVar15;
        puVar2[6] = uVar14;
        uVar16 = puVar3[8];
        uVar15 = puVar3[0xb];
        uVar14 = puVar3[10];
        puVar2[9] = puVar3[9];
        puVar2[8] = uVar16;
        puVar2[0xb] = uVar15;
        puVar2[10] = uVar14;
        uVar16 = puVar3[0xc];
        uVar15 = puVar3[0xf];
        uVar14 = puVar3[0xe];
        puVar2[0xd] = puVar3[0xd];
        puVar2[0xc] = uVar16;
        puVar2[0xf] = uVar15;
        puVar2[0xe] = uVar14;
        uVar16 = puVar3[0x10];
        uVar15 = puVar3[0x13];
        uVar14 = puVar3[0x12];
        puVar2[0x11] = puVar3[0x11];
        puVar2[0x10] = uVar16;
        puVar2[0x13] = uVar15;
        puVar2[0x12] = uVar14;
        uVar10 = uVar13;
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      lVar9 = uVar11 * 0xa0;
      *(uint *)(lVar9 + param_1[1] + 0x10) = *param_2;
      uVar17 = *param_3;
      uVar13 = param_3[3];
      uVar10 = param_3[2];
      lVar6 = lVar9 + param_1[1];
      *(ulonglong *)(lVar6 + 0x28) = param_3[1];
      *(ulonglong *)(lVar6 + 0x20) = uVar17;
      *(ulonglong *)(lVar6 + 0x38) = uVar13;
      *(ulonglong *)(lVar6 + 0x30) = uVar10;
      uVar17 = param_3[4];
      uVar13 = param_3[7];
      uVar10 = param_3[6];
      *(ulonglong *)(lVar6 + 0x48) = param_3[5];
      *(ulonglong *)(lVar6 + 0x40) = uVar17;
      *(ulonglong *)(lVar6 + 0x58) = uVar13;
      *(ulonglong *)(lVar6 + 0x50) = uVar10;
      uVar17 = param_3[8];
      uVar13 = param_3[0xb];
      uVar10 = param_3[10];
      *(ulonglong *)(lVar6 + 0x68) = param_3[9];
      *(ulonglong *)(lVar6 + 0x60) = uVar17;
      *(ulonglong *)(lVar6 + 0x78) = uVar13;
      *(ulonglong *)(lVar6 + 0x70) = uVar10;
      uVar17 = param_3[0xc];
      uVar13 = param_3[0xf];
      uVar10 = param_3[0xe];
      *(ulonglong *)(lVar6 + 0x88) = param_3[0xd];
      *(ulonglong *)(lVar6 + 0x80) = uVar17;
      *(ulonglong *)(lVar6 + 0x98) = uVar13;
      *(ulonglong *)(lVar6 + 0x90) = uVar10;
      *(ulonglong *)(param_1[1] + lVar9) = uVar12;
    }
  }
  else {
    uVar13 = *param_3;
    uVar10 = param_3[3];
    uVar12 = param_3[2];
    puVar1[5] = param_3[1];
    puVar1[4] = uVar13;
    puVar1[7] = uVar10;
    puVar1[6] = uVar12;
    uVar13 = param_3[4];
    uVar10 = param_3[7];
    uVar12 = param_3[6];
    puVar1[9] = param_3[5];
    puVar1[8] = uVar13;
    puVar1[0xb] = uVar10;
    puVar1[10] = uVar12;
    uVar13 = param_3[8];
    uVar10 = param_3[0xb];
    uVar12 = param_3[10];
    puVar1[0xd] = param_3[9];
    puVar1[0xc] = uVar13;
    puVar1[0xf] = uVar10;
    puVar1[0xe] = uVar12;
    uVar13 = param_3[0xc];
    uVar10 = param_3[0xf];
    uVar12 = param_3[0xe];
    puVar1[0x11] = param_3[0xd];
    puVar1[0x10] = uVar13;
    puVar1[0x13] = uVar10;
    puVar1[0x12] = uVar12;
  }
  return (uVar11 * 0xa0 | 0x10) + param_1[1];
}

