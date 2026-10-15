/*
 * FUN_180011f68 at 180011f68
 * undefined FUN_180011f68(void)
 * Address ranges: 180011f68-18001217b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180011f68(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar4 = *(uint *)(param_1 + 2);
  uVar12 = (ulonglong)*param_2;
  uVar11 = 0;
  if (uVar4 != 0) {
    uVar9 = 0;
    uVar7 = uVar4;
    do {
      uVar5 = uVar7 + uVar9 >> 1;
      uVar11 = (ulonglong)uVar5;
      uVar10 = *(ulonglong *)(param_1[1] + uVar11 * 0x80);
      if (uVar10 <= uVar12) {
        if (uVar12 <= uVar10) break;
        uVar9 = uVar5 + 1;
        uVar11 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar7;
      }
      uVar7 = uVar5;
    } while (uVar7 != uVar9);
  }
  uVar10 = uVar11 << 7;
  if (((uint)uVar11 == uVar4) ||
     (puVar1 = (ulonglong *)(param_1[1] + uVar11 * 0x80), *puVar1 != uVar12)) {
    uVar9 = *(uint *)((longlong)param_1 + 0x14);
    if (uVar9 == uVar4) {
      uVar4 = 0x10;
      if (uVar9 != 0) {
        uVar4 = uVar9 << 1;
      }
      lVar6 = thunk_FUN_180102f80((ulonglong)uVar4 << 7);
      if (lVar6 != 0) {
        uVar8 = 0;
        if ((int)param_1[2] != 0) {
          do {
            uVar9 = (int)uVar8 + 1;
            puVar2 = (undefined8 *)(param_1[1] + uVar8 * 0x80);
            puVar3 = (undefined8 *)(lVar6 + uVar8 * 0x80);
            uVar15 = *puVar2;
            uVar14 = puVar2[3];
            uVar13 = puVar2[2];
            puVar3[1] = puVar2[1];
            *puVar3 = uVar15;
            puVar3[3] = uVar14;
            puVar3[2] = uVar13;
            uVar15 = puVar2[4];
            uVar14 = puVar2[7];
            uVar13 = puVar2[6];
            puVar3[5] = puVar2[5];
            puVar3[4] = uVar15;
            puVar3[7] = uVar14;
            puVar3[6] = uVar13;
            uVar15 = puVar2[8];
            uVar14 = puVar2[0xb];
            uVar13 = puVar2[10];
            puVar3[9] = puVar2[9];
            puVar3[8] = uVar15;
            puVar3[0xb] = uVar14;
            puVar3[10] = uVar13;
            uVar15 = puVar2[0xc];
            uVar14 = puVar2[0xf];
            uVar13 = puVar2[0xe];
            puVar3[0xd] = puVar2[0xd];
            puVar3[0xc] = uVar15;
            puVar3[0xf] = uVar14;
            puVar3[0xe] = uVar13;
            uVar8 = (ulonglong)uVar9;
          } while (uVar9 < *(uint *)(param_1 + 2));
        }
        thunk_FUN_180102fc0(*param_1);
        *param_1 = lVar6;
        param_1[1] = lVar6;
        *(uint *)((longlong)param_1 + 0x14) = uVar4;
      }
    }
    uVar8 = (ulonglong)*(uint *)(param_1 + 2);
    if (*(uint *)((longlong)param_1 + 0x14) != *(uint *)(param_1 + 2)) {
      while ((uint)uVar11 < (uint)uVar8) {
        uVar10 = (ulonglong)((uint)uVar8 - 1);
        puVar2 = (undefined8 *)(param_1[1] + uVar8 * 0x80);
        puVar3 = (undefined8 *)(param_1[1] + uVar10 * 0x80);
        uVar15 = *puVar3;
        uVar14 = puVar3[3];
        uVar13 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar15;
        puVar2[3] = uVar14;
        puVar2[2] = uVar13;
        uVar15 = puVar3[4];
        uVar14 = puVar3[7];
        uVar13 = puVar3[6];
        puVar2[5] = puVar3[5];
        puVar2[4] = uVar15;
        puVar2[7] = uVar14;
        puVar2[6] = uVar13;
        uVar15 = puVar3[8];
        uVar14 = puVar3[0xb];
        uVar13 = puVar3[10];
        puVar2[9] = puVar3[9];
        puVar2[8] = uVar15;
        puVar2[0xb] = uVar14;
        puVar2[10] = uVar13;
        uVar15 = puVar3[0xc];
        uVar14 = puVar3[0xf];
        uVar13 = puVar3[0xe];
        puVar2[0xd] = puVar3[0xd];
        puVar2[0xc] = uVar15;
        puVar2[0xf] = uVar14;
        puVar2[0xe] = uVar13;
        uVar8 = uVar10;
      }
      uVar10 = uVar11 * 0x80;
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      *(uint *)(uVar10 + param_1[1] + 8) = *param_2;
      uVar15 = *param_3;
      uVar14 = param_3[3];
      uVar13 = param_3[2];
      lVar6 = uVar10 + param_1[1];
      *(undefined8 *)(lVar6 + 0x14) = param_3[1];
      *(undefined8 *)(lVar6 + 0xc) = uVar15;
      *(undefined8 *)(lVar6 + 0x24) = uVar14;
      *(undefined8 *)(lVar6 + 0x1c) = uVar13;
      uVar15 = param_3[4];
      uVar14 = param_3[7];
      uVar13 = param_3[6];
      *(undefined8 *)(lVar6 + 0x34) = param_3[5];
      *(undefined8 *)(lVar6 + 0x2c) = uVar15;
      *(undefined8 *)(lVar6 + 0x44) = uVar14;
      *(undefined8 *)(lVar6 + 0x3c) = uVar13;
      uVar15 = param_3[8];
      uVar14 = param_3[0xb];
      uVar13 = param_3[10];
      *(undefined8 *)(lVar6 + 0x54) = param_3[9];
      *(undefined8 *)(lVar6 + 0x4c) = uVar15;
      *(undefined8 *)(lVar6 + 100) = uVar14;
      *(undefined8 *)(lVar6 + 0x5c) = uVar13;
      uVar13 = param_3[0xc];
      *(undefined8 *)(lVar6 + 0x74) = param_3[0xd];
      *(undefined8 *)(lVar6 + 0x6c) = uVar13;
      *(ulonglong *)(param_1[1] + uVar10) = uVar12;
    }
  }
  else {
    uVar15 = *param_3;
    uVar14 = param_3[3];
    uVar13 = param_3[2];
    *(undefined8 *)((longlong)puVar1 + 0x14) = param_3[1];
    *(undefined8 *)((longlong)puVar1 + 0xc) = uVar15;
    *(undefined8 *)((longlong)puVar1 + 0x24) = uVar14;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = uVar13;
    uVar15 = param_3[4];
    uVar14 = param_3[7];
    uVar13 = param_3[6];
    *(undefined8 *)((longlong)puVar1 + 0x34) = param_3[5];
    *(undefined8 *)((longlong)puVar1 + 0x2c) = uVar15;
    *(undefined8 *)((longlong)puVar1 + 0x44) = uVar14;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = uVar13;
    uVar15 = param_3[8];
    uVar14 = param_3[0xb];
    uVar13 = param_3[10];
    *(undefined8 *)((longlong)puVar1 + 0x54) = param_3[9];
    *(undefined8 *)((longlong)puVar1 + 0x4c) = uVar15;
    *(undefined8 *)((longlong)puVar1 + 100) = uVar14;
    *(undefined8 *)((longlong)puVar1 + 0x5c) = uVar13;
    uVar13 = param_3[0xc];
    *(undefined8 *)((longlong)puVar1 + 0x74) = param_3[0xd];
    *(undefined8 *)((longlong)puVar1 + 0x6c) = uVar13;
  }
  return (uVar10 | 8) + param_1[1];
}

