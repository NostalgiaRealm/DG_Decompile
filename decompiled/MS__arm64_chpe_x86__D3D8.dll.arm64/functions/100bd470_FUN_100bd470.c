/*
 * FUN_100bd470 at 100bd470
 * undefined FUN_100bd470(void)
 * Address ranges: 100bd470-100bd76f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100bd470(int *param_1,uint *param_2,ulonglong *param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  
  puVar2 = (uint *)(param_1 + 2);
  uVar8 = *puVar2;
  uVar15 = (ulonglong)*param_2;
  uVar14 = 0;
  if (uVar8 != 0) {
    uVar12 = 0;
    uVar11 = uVar8;
    do {
      uVar14 = uVar11 + uVar12 >> 1;
      uVar13 = *(ulonglong *)(param_1[1] + uVar14 * 0x40);
      uVar9 = uVar14;
      if (uVar13 <= uVar15) {
        if (uVar15 <= uVar13) break;
        uVar12 = uVar14 + 1;
        uVar14 = uVar12;
        uVar9 = uVar11;
      }
      uVar11 = uVar9;
    } while (uVar11 != uVar12);
  }
  puVar3 = (uint *)(param_1 + 1);
  if ((uVar14 == uVar8) || (puVar5 = (ulonglong *)(*puVar3 + uVar14 * 0x40), *puVar5 != uVar15)) {
    puVar4 = (uint *)(param_1 + 3);
    uVar12 = *puVar4;
    if (uVar12 == uVar8) {
      uVar8 = 0x10;
      if (uVar12 != 0) {
        uVar8 = uVar12 << 1;
      }
      iVar10 = FUN_100fece0(uVar8 * 0x40 + 0x7f);
      if (iVar10 != 0) {
        uVar11 = iVar10 + 0x7fU & 0xffffff80;
        uVar12 = 0;
        if (*puVar2 == 0) {
          uVar9 = 0;
        }
        else {
          do {
            *(undefined4 *)(uVar11 + 0x10 + uVar12 * 0x40) = 0;
            *(undefined4 *)(uVar11 + 0x14 + uVar12 * 0x40) = 0;
            *(undefined4 *)(uVar11 + 0x18 + uVar12 * 0x40) = 0;
            *(undefined4 *)(uVar11 + 0x30 + uVar12 * 0x40) = 0;
            *(undefined4 *)(uVar11 + 0x34 + uVar12 * 0x40) = 0;
            *(undefined8 *)(uVar11 + 0x38 + uVar12 * 0x40) = 0;
            *(undefined2 *)(uVar11 + 0x1c + uVar12 * 0x40) = 0xffff;
            puVar6 = (undefined8 *)(*puVar3 + uVar12 * 0x40);
            puVar7 = (undefined8 *)(uVar11 + uVar12 * 0x40);
            uVar12 = uVar12 + 1;
            uVar19 = *puVar6;
            uVar17 = puVar6[3];
            uVar16 = puVar6[2];
            puVar7[1] = puVar6[1];
            *puVar7 = uVar19;
            puVar7[3] = uVar17;
            puVar7[2] = uVar16;
            uVar19 = puVar6[4];
            uVar17 = puVar6[7];
            uVar16 = puVar6[6];
            puVar7[5] = puVar6[5];
            puVar7[4] = uVar19;
            puVar7[7] = uVar17;
            puVar7[6] = uVar16;
            uVar9 = *puVar2;
          } while (uVar12 < uVar9);
        }
        if (uVar9 < uVar8) {
          do {
            *(undefined4 *)(uVar11 + 0x10 + uVar9 * 0x40) = 0;
            *(undefined4 *)(uVar11 + 0x14 + uVar9 * 0x40) = 0;
            *(undefined4 *)(uVar11 + 0x18 + uVar9 * 0x40) = 0;
            *(undefined4 *)(uVar11 + 0x30 + uVar9 * 0x40) = 0;
            *(undefined4 *)(uVar11 + 0x34 + uVar9 * 0x40) = 0;
            *(undefined8 *)(uVar11 + 0x38 + uVar9 * 0x40) = 0;
            iVar1 = uVar9 * 0x40;
            uVar9 = uVar9 + 1;
            *(undefined2 *)(uVar11 + 0x1c + iVar1) = 0xffff;
          } while (uVar9 < uVar8);
        }
        FUN_100fed00(*param_1);
        *puVar4 = uVar8;
        *param_1 = iVar10;
        *puVar3 = uVar11;
      }
    }
    uVar8 = *puVar2;
    if (*puVar4 != uVar8) {
      for (; uVar14 < uVar8; uVar8 = uVar8 - 1) {
        puVar6 = (undefined8 *)(*puVar3 + uVar8 * 0x40);
        puVar6[1] = puVar6[-7];
        *puVar6 = puVar6[-8];
        puVar6[3] = puVar6[-5];
        puVar6[2] = puVar6[-6];
        puVar6[5] = puVar6[-3];
        puVar6[4] = puVar6[-4];
        puVar6[7] = puVar6[-1];
        puVar6[6] = puVar6[-2];
      }
      *puVar2 = *puVar2 + 1;
      *(uint *)(*puVar3 + uVar14 * 0x40 + 8) = *param_2;
      uVar20 = *param_3;
      uVar18 = param_3[3];
      uVar13 = param_3[2];
      iVar10 = *puVar3 + uVar14 * 0x40;
      *(ulonglong *)(iVar10 + 0x18) = param_3[1];
      *(ulonglong *)(iVar10 + 0x10) = uVar20;
      *(ulonglong *)(iVar10 + 0x28) = uVar18;
      *(ulonglong *)(iVar10 + 0x20) = uVar13;
      uVar13 = param_3[4];
      *(ulonglong *)(iVar10 + 0x38) = param_3[5];
      *(ulonglong *)(iVar10 + 0x30) = uVar13;
      *(ulonglong *)(*puVar3 + uVar14 * 0x40) = uVar15;
    }
  }
  else {
    uVar18 = *param_3;
    uVar13 = param_3[3];
    uVar15 = param_3[2];
    puVar5[3] = param_3[1];
    puVar5[2] = uVar18;
    puVar5[5] = uVar13;
    puVar5[4] = uVar15;
    uVar15 = param_3[4];
    puVar5[7] = param_3[5];
    puVar5[6] = uVar15;
  }
  return *puVar3 + uVar14 * 0x40 + 8;
}

