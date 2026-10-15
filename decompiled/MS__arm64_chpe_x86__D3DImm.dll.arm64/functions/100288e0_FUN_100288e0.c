/*
 * FUN_100288e0 at 100288e0
 * undefined FUN_100288e0(void)
 * Address ranges: 100288e0-10028c97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100288e0(int *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar10 = *puVar1;
  uVar14 = 0;
  uVar16 = 0x80;
  if (param_2[8] == 0) {
    uVar16 = 0;
  }
  uVar13 = 0x40;
  if (param_2[7] == 0) {
    uVar13 = 0;
  }
  uVar3 = 0x20;
  if (param_2[6] == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x10;
  if (param_2[2] == 0) {
    uVar4 = 0;
  }
  uVar16 = (((ulonglong)(*param_2 & 3 | (param_2[9] | param_2[10] << 8) << 6) & 0x3fffffff) << 2 |
            uVar16 | uVar13 | uVar3 | uVar4 | (ulonglong)param_2[1] & 3) ^ (ulonglong)param_2[5] |
           (ulonglong)(param_2[4] ^ param_2[3]) << 0x20;
  if (uVar10 != 0) {
    uVar11 = 0;
    uVar9 = uVar10;
    do {
      uVar14 = uVar9 + uVar11 >> 1;
      uVar13 = *(ulonglong *)(*param_1 + uVar14 * 0x38);
      uVar6 = uVar14;
      if (uVar13 <= uVar16) {
        if (uVar16 <= uVar13) break;
        uVar11 = uVar14 + 1;
        uVar14 = uVar11;
        uVar6 = uVar9;
      }
      uVar9 = uVar6;
    } while (uVar9 != uVar11);
  }
  if ((uVar14 == uVar10) || (*(ulonglong *)(uVar14 * 0x38 + *param_1) != uVar16)) {
    puVar2 = (uint *)(param_1 + 1);
    if (uVar10 == *puVar2) {
      uVar13 = (ulonglong)(*puVar2 << 1) * 0x38;
      uVar12 = (undefined4)uVar13;
      if (uVar13 >> 0x20 != 0) {
        uVar12 = 0xffffffff;
      }
      iVar7 = FUN_10081da0(uVar12);
      if (iVar7 != 0) {
        uVar10 = 0;
        if (*puVar2 != 0) {
          do {
            puVar8 = (undefined8 *)(iVar7 + uVar10 * 0x38);
            puVar5 = (undefined8 *)(*param_1 + uVar10 * 0x38);
            uVar10 = uVar10 + 1;
            uVar19 = *puVar5;
            uVar18 = puVar5[3];
            uVar17 = puVar5[2];
            puVar8[1] = puVar5[1];
            *puVar8 = uVar19;
            puVar8[3] = uVar18;
            puVar8[2] = uVar17;
            uVar17 = puVar5[4];
            puVar8[5] = puVar5[5];
            puVar8[4] = uVar17;
            puVar8[6] = puVar5[6];
          } while (uVar10 < *puVar2);
        }
        FUN_10081dc0(*param_1);
        *param_1 = iVar7;
        *puVar2 = *puVar2 << 1;
      }
    }
    uVar10 = *puVar1;
    if (uVar14 < uVar10) {
      if (3 < uVar10 - uVar14) {
        do {
          puVar8 = (undefined8 *)(*param_1 + uVar10 * 0x38);
          puVar8[1] = puVar8[-6];
          *puVar8 = puVar8[-7];
          puVar8[3] = puVar8[-4];
          puVar8[2] = puVar8[-5];
          puVar8[5] = puVar8[-2];
          puVar8[4] = puVar8[-3];
          puVar8[6] = puVar8[-1];
          puVar8 = (undefined8 *)(*param_1 + (uVar10 - 2) * 0x38);
          iVar7 = *param_1 + uVar10 * 0x38;
          uVar19 = *puVar8;
          uVar18 = puVar8[3];
          uVar17 = puVar8[2];
          *(undefined8 *)(iVar7 + -0x30) = puVar8[1];
          *(undefined8 *)(iVar7 + -0x38) = uVar19;
          *(undefined8 *)(iVar7 + -0x20) = uVar18;
          *(undefined8 *)(iVar7 + -0x28) = uVar17;
          uVar17 = puVar8[4];
          *(undefined8 *)(iVar7 + -0x10) = puVar8[5];
          *(undefined8 *)(iVar7 + -0x18) = uVar17;
          iVar15 = uVar10 - 3;
          *(undefined8 *)(iVar7 + -8) = puVar8[6];
          puVar8 = (undefined8 *)(*param_1 + iVar15 * 0x38);
          puVar5 = (undefined8 *)(*param_1 + (uVar10 - 2) * 0x38);
          uVar19 = *puVar8;
          uVar18 = puVar8[3];
          uVar17 = puVar8[2];
          puVar5[1] = puVar8[1];
          *puVar5 = uVar19;
          puVar5[3] = uVar18;
          puVar5[2] = uVar17;
          uVar17 = puVar8[4];
          puVar5[5] = puVar8[5];
          puVar5[4] = uVar17;
          puVar5[6] = puVar8[6];
          iVar7 = uVar10 - 4;
          uVar10 = uVar10 - 4;
          puVar8 = (undefined8 *)(*param_1 + iVar7 * 0x38);
          puVar5 = (undefined8 *)(*param_1 + iVar15 * 0x38);
          uVar19 = *puVar8;
          uVar18 = puVar8[3];
          uVar17 = puVar8[2];
          puVar5[1] = puVar8[1];
          *puVar5 = uVar19;
          puVar5[3] = uVar18;
          puVar5[2] = uVar17;
          uVar17 = puVar8[4];
          puVar5[5] = puVar8[5];
          puVar5[4] = uVar17;
          puVar5[6] = puVar8[6];
        } while (uVar14 + 3 < uVar10);
      }
      for (; uVar14 < uVar10; uVar10 = uVar10 - 1) {
        puVar8 = (undefined8 *)(*param_1 + uVar10 * 0x38);
        puVar8[1] = puVar8[-6];
        *puVar8 = puVar8[-7];
        puVar8[3] = puVar8[-4];
        puVar8[2] = puVar8[-5];
        puVar8[5] = puVar8[-2];
        puVar8[4] = puVar8[-3];
        puVar8[6] = puVar8[-1];
      }
    }
    iVar15 = uVar14 * 0x38;
    *(ulonglong *)(iVar15 + *param_1) = uVar16;
    uVar19 = *(undefined8 *)param_2;
    uVar18 = *(undefined8 *)(param_2 + 6);
    uVar17 = *(undefined8 *)(param_2 + 4);
    iVar7 = iVar15 + *param_1;
    *(undefined8 *)(iVar7 + 0x10) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(iVar7 + 8) = uVar19;
    *(undefined8 *)(iVar7 + 0x20) = uVar18;
    *(undefined8 *)(iVar7 + 0x18) = uVar17;
    *(undefined8 *)(iVar7 + 0x28) = *(undefined8 *)(param_2 + 8);
    *(uint *)(iVar7 + 0x30) = param_2[10];
    puVar8 = (undefined8 *)FUN_10081cb0(0x2c);
    if (puVar8 != (undefined8 *)0x0) {
      uVar19 = *(undefined8 *)param_2;
      uVar18 = *(undefined8 *)(param_2 + 6);
      uVar17 = *(undefined8 *)(param_2 + 4);
      puVar8[1] = *(undefined8 *)(param_2 + 2);
      *puVar8 = uVar19;
      puVar8[3] = uVar18;
      puVar8[2] = uVar17;
      puVar8[4] = *(undefined8 *)(param_2 + 8);
      *(uint *)(puVar8 + 5) = param_2[10];
    }
    *(undefined8 **)(iVar15 + *param_1 + 0x34) = puVar8;
    *puVar1 = *puVar1 + 1;
  }
  return *(undefined4 *)(uVar14 * 0x38 + *param_1 + 0x34);
}

