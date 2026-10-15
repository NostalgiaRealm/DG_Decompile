/*
 * FUN_10079160 at 10079160
 * undefined FUN_10079160(void)
 * Address ranges: 10079160-10079397
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10079160(int *param_1,uint *param_2,ulonglong *param_3)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar7 = *puVar1;
  uVar14 = (ulonglong)*param_2;
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar11 = 0;
    uVar10 = uVar7;
    do {
      uVar13 = uVar10 + uVar11 >> 1;
      uVar12 = *(ulonglong *)(param_1[1] + uVar13 * 0x28);
      uVar8 = uVar13;
      if (uVar12 <= uVar14) {
        if (uVar14 <= uVar12) break;
        uVar11 = uVar13 + 1;
        uVar13 = uVar11;
        uVar8 = uVar10;
      }
      uVar10 = uVar8;
    } while (uVar10 != uVar11);
  }
  piVar2 = param_1 + 1;
  if ((uVar13 == uVar7) || (puVar4 = (ulonglong *)(*piVar2 + uVar13 * 0x28), *puVar4 != uVar14)) {
    puVar3 = (uint *)(param_1 + 3);
    uVar11 = *puVar3;
    if (uVar11 == uVar7) {
      uVar7 = 0x10;
      if (uVar11 != 0) {
        uVar7 = uVar11 << 1;
      }
      iVar9 = FUN_100914b0(uVar7 * 0x28);
      if (iVar9 != 0) {
        uVar11 = 0;
        if (*puVar1 != 0) {
          do {
            uVar10 = uVar11 + 1;
            puVar5 = (undefined8 *)(*piVar2 + uVar11 * 0x28);
            puVar6 = (undefined8 *)(iVar9 + uVar11 * 0x28);
            uVar19 = *puVar5;
            uVar17 = puVar5[3];
            uVar15 = puVar5[2];
            puVar6[1] = puVar5[1];
            *puVar6 = uVar19;
            puVar6[3] = uVar17;
            puVar6[2] = uVar15;
            puVar6[4] = puVar5[4];
            uVar11 = uVar10;
          } while (uVar10 < *puVar1);
        }
        FUN_100914d0(*param_1);
        *param_1 = iVar9;
        *piVar2 = iVar9;
        *puVar3 = uVar7;
      }
    }
    uVar7 = *puVar1;
    if (*puVar3 != uVar7) {
      for (; uVar13 < uVar7; uVar7 = uVar7 - 1) {
        puVar5 = (undefined8 *)(*piVar2 + uVar7 * 0x28);
        puVar5[1] = puVar5[-4];
        *puVar5 = puVar5[-5];
        puVar5[3] = puVar5[-2];
        puVar5[2] = puVar5[-3];
        puVar5[4] = puVar5[-1];
      }
      uVar18 = param_3[1];
      uVar16 = *param_3;
      *puVar1 = *puVar1 + 1;
      *(uint *)(*piVar2 + uVar13 * 0x28 + 8) = *param_2;
      iVar9 = *piVar2 + uVar13 * 0x28;
      uVar12 = param_3[2];
      *(ulonglong *)(iVar9 + 0x18) = uVar18;
      *(ulonglong *)(iVar9 + 0x10) = uVar16;
      *(ulonglong *)(iVar9 + 0x20) = uVar12;
      *(ulonglong *)(*piVar2 + uVar13 * 0x28) = uVar14;
    }
  }
  else {
    uVar12 = *param_3;
    uVar14 = param_3[2];
    puVar4[3] = param_3[1];
    puVar4[2] = uVar12;
    puVar4[4] = uVar14;
  }
  return *piVar2 + uVar13 * 0x28 + 8;
}

