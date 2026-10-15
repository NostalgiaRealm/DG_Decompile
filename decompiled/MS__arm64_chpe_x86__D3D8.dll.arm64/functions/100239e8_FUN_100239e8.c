/*
 * FUN_100239e8 at 100239e8
 * undefined FUN_100239e8(void)
 * Address ranges: 100239e8-10023c83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100239e8(int *param_1,uint *param_2,ulonglong *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar8 = *puVar1;
  uVar14 = (ulonglong)*param_2;
  uVar13 = 0;
  if (uVar8 != 0) {
    uVar11 = 0;
    uVar10 = uVar8;
    do {
      uVar13 = uVar10 + uVar11 >> 1;
      uVar12 = *(ulonglong *)(param_1[1] + uVar13 * 0xa0);
      uVar4 = uVar13;
      if (uVar12 <= uVar14) {
        if (uVar14 <= uVar12) break;
        uVar11 = uVar13 + 1;
        uVar13 = uVar11;
        uVar4 = uVar10;
      }
      uVar10 = uVar4;
    } while (uVar10 != uVar11);
  }
  puVar2 = (uint *)(param_1 + 1);
  if ((uVar13 == uVar8) || (puVar5 = (ulonglong *)(*puVar2 + uVar13 * 0xa0), *puVar5 != uVar14)) {
    puVar3 = (uint *)(param_1 + 3);
    uVar11 = *puVar3;
    if (uVar11 == uVar8) {
      uVar8 = 0x10;
      if (uVar11 != 0) {
        uVar8 = uVar11 << 1;
      }
      iVar9 = FUN_100fece0(uVar8 * 0xa0 + 0xf);
      if (iVar9 != 0) {
        uVar11 = iVar9 + 0xfU & 0xfffffff0;
        uVar10 = 0;
        if (*puVar1 != 0) {
          do {
            uVar4 = uVar10 + 1;
            puVar6 = (undefined8 *)(*puVar2 + uVar10 * 0xa0);
            puVar7 = (undefined8 *)(uVar11 + uVar10 * 0xa0);
            uVar18 = *puVar6;
            uVar16 = puVar6[3];
            uVar15 = puVar6[2];
            puVar7[1] = puVar6[1];
            *puVar7 = uVar18;
            puVar7[3] = uVar16;
            puVar7[2] = uVar15;
            uVar18 = puVar6[4];
            uVar16 = puVar6[7];
            uVar15 = puVar6[6];
            puVar7[5] = puVar6[5];
            puVar7[4] = uVar18;
            puVar7[7] = uVar16;
            puVar7[6] = uVar15;
            uVar18 = puVar6[8];
            uVar16 = puVar6[0xb];
            uVar15 = puVar6[10];
            puVar7[9] = puVar6[9];
            puVar7[8] = uVar18;
            puVar7[0xb] = uVar16;
            puVar7[10] = uVar15;
            uVar18 = puVar6[0xc];
            uVar16 = puVar6[0xf];
            uVar15 = puVar6[0xe];
            puVar7[0xd] = puVar6[0xd];
            puVar7[0xc] = uVar18;
            puVar7[0xf] = uVar16;
            puVar7[0xe] = uVar15;
            uVar18 = puVar6[0x10];
            uVar16 = puVar6[0x13];
            uVar15 = puVar6[0x12];
            puVar7[0x11] = puVar6[0x11];
            puVar7[0x10] = uVar18;
            puVar7[0x13] = uVar16;
            puVar7[0x12] = uVar15;
            uVar10 = uVar4;
          } while (uVar4 < *puVar1);
        }
        FUN_100fed00(*param_1);
        *param_1 = iVar9;
        *puVar2 = uVar11;
        *puVar3 = uVar8;
      }
    }
    uVar8 = *puVar1;
    if (*puVar3 != uVar8) {
      for (; uVar13 < uVar8; uVar8 = uVar8 - 1) {
        puVar6 = (undefined8 *)(*puVar2 + uVar8 * 0xa0);
        puVar6[1] = puVar6[-0x13];
        *puVar6 = puVar6[-0x14];
        puVar6[3] = puVar6[-0x11];
        puVar6[2] = puVar6[-0x12];
        puVar6[5] = puVar6[-0xf];
        puVar6[4] = puVar6[-0x10];
        puVar6[7] = puVar6[-0xd];
        puVar6[6] = puVar6[-0xe];
        puVar6[9] = puVar6[-0xb];
        puVar6[8] = puVar6[-0xc];
        puVar6[0xb] = puVar6[-9];
        puVar6[10] = puVar6[-10];
        puVar6[0xd] = puVar6[-7];
        puVar6[0xc] = puVar6[-8];
        puVar6[0xf] = puVar6[-5];
        puVar6[0xe] = puVar6[-6];
        puVar6[0x11] = puVar6[-3];
        puVar6[0x10] = puVar6[-4];
        puVar6[0x13] = puVar6[-1];
        puVar6[0x12] = puVar6[-2];
      }
      *puVar1 = *puVar1 + 1;
      *(uint *)(*puVar2 + uVar13 * 0xa0 + 0x10) = *param_2;
      uVar19 = *param_3;
      uVar17 = param_3[3];
      uVar12 = param_3[2];
      iVar9 = *puVar2 + uVar13 * 0xa0;
      *(ulonglong *)(iVar9 + 0x28) = param_3[1];
      *(ulonglong *)(iVar9 + 0x20) = uVar19;
      *(ulonglong *)(iVar9 + 0x38) = uVar17;
      *(ulonglong *)(iVar9 + 0x30) = uVar12;
      uVar19 = param_3[4];
      uVar17 = param_3[7];
      uVar12 = param_3[6];
      *(ulonglong *)(iVar9 + 0x48) = param_3[5];
      *(ulonglong *)(iVar9 + 0x40) = uVar19;
      *(ulonglong *)(iVar9 + 0x58) = uVar17;
      *(ulonglong *)(iVar9 + 0x50) = uVar12;
      uVar19 = param_3[8];
      uVar17 = param_3[0xb];
      uVar12 = param_3[10];
      *(ulonglong *)(iVar9 + 0x68) = param_3[9];
      *(ulonglong *)(iVar9 + 0x60) = uVar19;
      *(ulonglong *)(iVar9 + 0x78) = uVar17;
      *(ulonglong *)(iVar9 + 0x70) = uVar12;
      uVar19 = param_3[0xc];
      uVar17 = param_3[0xf];
      uVar12 = param_3[0xe];
      *(ulonglong *)(iVar9 + 0x88) = param_3[0xd];
      *(ulonglong *)(iVar9 + 0x80) = uVar19;
      *(ulonglong *)(iVar9 + 0x98) = uVar17;
      *(ulonglong *)(iVar9 + 0x90) = uVar12;
      *(ulonglong *)(*puVar2 + uVar13 * 0xa0) = uVar14;
    }
  }
  else {
    uVar17 = *param_3;
    uVar12 = param_3[3];
    uVar14 = param_3[2];
    puVar5[5] = param_3[1];
    puVar5[4] = uVar17;
    puVar5[7] = uVar12;
    puVar5[6] = uVar14;
    uVar17 = param_3[4];
    uVar12 = param_3[7];
    uVar14 = param_3[6];
    puVar5[9] = param_3[5];
    puVar5[8] = uVar17;
    puVar5[0xb] = uVar12;
    puVar5[10] = uVar14;
    uVar17 = param_3[8];
    uVar12 = param_3[0xb];
    uVar14 = param_3[10];
    puVar5[0xd] = param_3[9];
    puVar5[0xc] = uVar17;
    puVar5[0xf] = uVar12;
    puVar5[0xe] = uVar14;
    uVar17 = param_3[0xc];
    uVar12 = param_3[0xf];
    uVar14 = param_3[0xe];
    puVar5[0x11] = param_3[0xd];
    puVar5[0x10] = uVar17;
    puVar5[0x13] = uVar12;
    puVar5[0x12] = uVar14;
  }
  return *puVar2 + uVar13 * 0xa0 + 0x10;
}

